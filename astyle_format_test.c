// 测试文件：test_format.c
// 包含所有astyle指令对应的错误格式示例

// --style=allman (大括号换行)
void bad_style_example()   // 错误：大括号应该换行
{
    // ...
}

// --indent=spaces=4 (4空格缩进)
void bad_indent_example()
{
    int x = 1;  // 错误：应该使用4空格缩进
}

// --indent-classes (结构体内容缩进)
struct BadIndentStruct
{
    int member1;  // 错误：结构体成员应该缩进
    char member2;
};

// --indent-switches (switch缩进)
void switch_example (int val)
{
    switch (val)   // 错误：switch语句应该缩进
    {
        case 1:
            break;
        default:
            break;
    }
}

// --indent-cases (case缩进)
void case_example (int val)
{
    switch (val)
    {
        case 1:  // 错误：case应该缩进
            break;
        default:  // 错误：default应该缩进
            break;
    }
}

// --indent-preproc-define (预处理定义缩进)
#define BAD_DEFINE 123  // 错误：多行定义应该缩进
#define MULTILINE_DEFINE \
    1 + \
    2

// --indent-col1-comments (行首注释缩进)
//注释不在第一列  // 错误：注释应该保持原缩进
// 这个注释应该保持缩进

// --indent-after-parens (括号后缩进)
void long_function_name (
    int param1,  // 错误：参数应该缩进
    int param2);

// --pad-oper (操作符填充)
int x = 1 + 2 * 3; // 错误：操作符周围应该加空格

// --pad-include (include填充)
#include <stdio.h>  // 错误：include后面应该加空格
#include <stdlib.h>

// --pad-header (控制语句填充)
void pad_header_example()
{
    if (true)  // 错误：if后面应该加空格
    {
    }
    while (1)  // 错误：while后面应该加空格
    {
    }
}

// --pad-comma (逗号填充)
void comma_example (int a, int b, int c) {} // 错误：逗号后面应该加空格

// --pad-first-paren-out (首括号外填充)
void first_paren_example (int x) {} // 错误：函数名后不应该有空格

// --pad-return-type (返回类型填充)
int return_type_example()
{
    return 0;   // 错误：返回类型后应该加空格
}

// --pad-param-type (参数类型填充)
void param_type_example (const int* x) {} // 错误：参数类型后应该加空格

// --unpad-paren (去除括号内多余空格)
void unpad_example (int x, int y) {}  // 错误：括号内不应该有额外空格

// --align-pointer=type (指针对齐类型)
int* a;   // 错误：*应该靠近类型
char* b;
int* c;

// --max-code-length=120 (最大代码长度)
void very_long_function_name_with_many_characters_that_exceeds_the_maximum_line_length_of_120_characters (
    int parameter1, int parameter2)
{
    // 这个函数名超过120字符
}

// --max-instatement-indent=40 (最大语句内缩进)
void instatement_indent_example()
{
    int x = very_long_function_name (
            parameter1,
            parameter2,
            parameter3);  // 错误：缩进可能超过40
}

// --squeeze-lines=1 (压缩空行)
void function_with_empty_lines()
{

    
    int x = 1;

    int y = 2;  // 错误：有多余空行

}

// --squeeze-ws (压缩空白)
void function_with_extra_whitespace()
{
    int x = 1;  // 错误：有多余空白
}

// --convert-tabs (转换制表符)
void function_with_tabs()
{
    int x = 1;  // 错误：使用了制表符
}

// --break-closing-brackets (结束括号换行)
void test_closing_brackets()
{
    if (1)
    {
        printf ("test");
    }  // 错误：结束括号应该换行
}

// --break-one-line-headers (单行语句换行)
void one_line_if()
{
    if (1)
        return;    // 错误：if语句应该换行
}

// --add-brackets (添加括号)
void no_brackets()
{
    if (1)
        return;  // 错误：应该添加括号
    for (int i = 0; i < 10; i++)
        printf ("%d\n", i); // 错误：应该添加括号
}

// --attach-closing-while (do-while的while附加)
void test_do_while()
{
    do
    {
        printf ("test");
    } while (0); // 错误：while应该与}在同一行
}

// 结构体测试
struct TestStruct
{
    // 错误：括号应该不换行
    int member1;
    char member2;
};

// 函数声明
void function_declaration
(int param);  // 错误：括号位置不正确

// 复杂表达式测试
void complex_expression()
{
    int a = 1, b = 2, c = 3;
    int result = a + b * c - a / b; // 错误：操作符周围缺少空格

    if (a == b && b != c) // 错误：操作符周围缺少空格
    {
        printf ("test");
    }
}

// 指针数组测试
void pointer_array_test()
{
    int* array[10];  // 错误：指针对齐问题
    int* ptr_array[10];

    char* text = "hello";  // 错误：指针对齐问题
    char* text2 = "world";
}

// 多参数函数测试
void multi_param_function (int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    // 错误：逗号后面缺少空格，参数过多可能超行宽
}

// 嵌套结构测试
void nested_structures()
{
    if (1)
    {
        while (0)
        {
            for (int i = 0; i < 10; i++)
            {
                printf ("%d", i); // 错误：多个格式问题
            }
        }
    }
}

// 原始代码结束