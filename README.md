# ConditionalCompiler
Use the same implementation for different situations.

Always have been worried about banned functions in your project? Create a new project and use the same code for different situations.

Using ConditionalCompiler, you can create projects (executables or libraries) with different implementations of the same functions based on the configuration of the project.

For instance, let's assume that you created a library using the `time` function. You can have a project who is using the part of your libary using the `time` function. But you can also have another project who is using the same part of your library, but without the `time` function (because it is banned in the project). You'll then need to remove the `time` function from your library and create a new project using the same part of your library, but without the `time` function.

With ConditionalCompiler, you could have two implementations of the same function in your library, one using the `time` function and the other one without the `time` function. Then, you could create two projects, one using the implementation with the `time` function and the other one using the implementation without the `time` function.