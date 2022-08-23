使用命令 foamGet patchAverage 将此字典文件导入system;
修改此文件中的 name 名称且添加需要的场（一个或多个，中间以空格隔开）;
在controlDict文件中添加后处理函数：

functions
{
  #includeFunc  patchAverage
}

运行求解器即可，此后处理方法属于运行时作后处理。