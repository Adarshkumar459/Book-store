import React, { createContext, useState, useContext } from 'react'

export const AuthContext = createContext()

export default function AuthProvider({ children }) {
    const initialAuthUser = localStorage.getItem('User')
    const [authUser, setAuthuser] = useState(
        initialAuthUser ? JSON.parse(initialAuthUser) : undefined
    )

    return (
        <AuthContext.Provider value={[authUser, setAuthuser]}>
            {children}
        </AuthContext.Provider>
    )
}

export const useAuth = () => useContext(AuthContext)
