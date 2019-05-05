/*
ANSI C在实现过程中存在两种环境，1）编译环境2）执行环境
编译过程：
（先对源代码进行解析，判断语句的意思，在没有出错的
情况下，根据编译器的优化选项（优化器）编译代码）
main.c 源文件
1）预处理器 main.i 处理后的文件（文本格式）
2）编译器 main.s 汇编代码（文本格式）
3）汇编器 main.o 目标代码（二进制格式）
4）链接器 a.out 可执行程序（二进制格式）
执行过程：
*/
