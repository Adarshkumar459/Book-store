import React from 'react'
import { Link } from 'react-router-dom'
import Login from './Login'
import { useForm } from "react-hook-form"

function Signup() {
    const {
        register,
        handleSubmit,
        formState: { errors },
      } = useForm()
      const onSubmit= (data) => console.log(data)

  return (
   < >
        <div className='flex h-screen items-center justify-center'>
            <div  className=" w-[600px] ">
                <div className=" modal-box dark:bg-white dark:text-black">
                    <form onSubmit={handleSubmit(onSubmit)} method="dialog">
                            {/* if there is a button in form, it will close the modal */}
                            <Link to="/" className="btn btn-sm btn-circle btn-ghost absolute right-2 top-2">✕</Link>
                    
                        <h3 className="font-bold text-lg">SignUp</h3>
                        {/* Name Field */}
                        <div className='mt-4 space-y-2'>
                            <span>Name</span>
                            <br />
                            <input type="text" placeholder='Enter your full-name' className='w-80 px-3 py-1 border rounded-md outline-none dark:bg-white dark:text-black'
                            {...register("Name", { required: true })}  />
                        </div>
                        {errors.Name && <span  className=' text-sm text-red-500'>Name is required </span>}

                        {/* Email Field */}
                        <div className='mt-4 space-y-2'>
                            <span>Email</span>
                            <br />
                            <input type="email" placeholder='Enter your Email' className='w-80 px-3 py-1 border rounded-md outline-none dark:bg-white dark:text-black'
                               {...register("email", { required: true })} />
                        </div>
                        {errors.email && <span  className=' text-sm text-red-500'>email is required </span>}

                        {/* Password field */}
                        <div className='mt-4 space-y-2'>
                            <span>Password</span>
                            <br /> 
                            <input type="text" placeholder='Enter your Password' className='w-80 px-3 py-1 border rounded-md outline-none dark:bg-white dark:text-black'
                               {...register("Password", { required: true })} />
                        </div>
                        {errors.Password && <span  className=' text-sm text-red-500'>Password is required </span>}

                        {/* button saection  */}
                        <div className='flex justify-around mt-4'>
                            <button className='bg-pink-500 text-white rounded-md px-3 py-1 hover:bg-pink-700 duration-200'>Signup</button>
                            <p className=' text-md'>Have Account ? <button 
                            className=' underline text-blue-600 cursor-pointer'
                            onClick={()=> document.getElementById("my_modal_3").showModal()}>Login</button><Login/></p>
                        </div>

                    </form>
                </div>
            </div>

        </div>
   </>
  )
}

export default Signup