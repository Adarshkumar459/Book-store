import express from "express";
import dotenv from "dotenv";
import mongoose from "mongoose";
import cors from "cors";
import userRoute from "./routes/user.route.js"

import bookRoute from "./routes/book.route.js"
const app = express();

app.use(cors());
app.use(express.json());

dotenv.config();
const PORT = process.env.PORT || 4000;
const URI = "mongodb://localhost:27017/bookstore";

// Connect to MongoDB
try{
    mongoose.connect(URI,{
      useNewUrlParser: true,
      useUnifiedTopology: true,
    });
    console.log("Connected to MongoDB");
  }catch(error){
    console.log("Error: ", error);
  };

//   define routes
app.use("/book",bookRoute);
app.use("/user",userRoute)


// Port listener
app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
