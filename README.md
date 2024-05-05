## I_will_never_loose_deadline
 
```sh                                                                                                  
❯ cd SofiaBachulashvili/workspace              
                                                                             
❯ git clone git@github.com:SofiaBachulashvili/I_will_never_loose_deadline.git projects/I_will_never_loose_deadline   
Клонирование в «projects/I_will_never_loose_deadline»...
warning: Похоже, что вы клонировали пустой репозиторий.
```

## Да знаю я, что в пустой 🙄
```sh
❯ cd projects/I_will_never_loose_deadline                             

❯ cat > deadline.cpp <<EOF   
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        std::cout << "I will never lose deadline!" << std::endl;
    }

    return 0;
}
EOF
                            
❯ git branch -M main
                            
❯ git add deadline.cpp           
                            
❯ git commit -m "added deadline.cpp"   
[main (корневой коммит) cf81b1c] added deadline.cpp
 1 file changed, 13 insertions(+)
 create mode 100644 deadline.cpp
                             
❯ git push origin main
Перечисление объектов: 3, готово.
Подсчет объектов: 100% (3/3), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (2/2), готово.
Запись объектов: 100% (3/3), 386 байтов | 386.00 КиБ/с, готово.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To github.com:SofiaBachulashvili/I_will_never_loose_deadline.git
 * [new branch]      main -> main
```

## Ура! файл добавился

## И тут я поняла, что файл должен быть main.cpp, а не deadline.cpp

## грустно удаляем файл deadline.cpp 😥😫😭
```sh                         
❯ git rm deadline.cpp
rm 'deadline.cpp'
                        
❯ git commit -m "delete deadline.cpp"
[main 1fc6754] delete deadline.cpp
 1 file changed, 13 deletions(-)
 delete mode 100644 deadline.cpp
                           
❯ git push origin main               
Перечисление объектов: 3, готово.
Подсчет объектов: 100% (3/3), готово.
Запись объектов: 100% (2/2), 222 байта | 222.00 КиБ/с, готово.
Total 2 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To github.com:SofiaBachulashvili/I_will_never_loose_deadline.git
   cf81b1c..1fc6754  main -> main
```

## И позитивно начанаем создавать новый - main.cpp 😁🥰
```sh                            
❯ cat > main.cpp <<EOF   
#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        std::cout << "I will never lose deadline!" << std::endl;
    }

    return 0;
}
EOF
```
## Можно было переименовать, наверное... 🤔💭
## mv deadline.cpp main.cpp 🤯🫠
## ЭХ
## Ну ладно, забудем об этом 

## неудачный коммит, забыла написать git add main.cpp 🙄
```sh                     
❯ git commit -m "added main.cpp"     
Текущая ветка: main
Эта ветка соответствует «origin/main».

Неотслеживаемые файлы:
  (используйте «git add <файл>...», чтобы добавить в то, что будет включено в коммит)
	main.cpp

индекс пуст, но есть неотслеживаемые файлы
(используйте «git add», чтобы проиндексировать их)
```

## не отчаиваемся, пишем git add main.cpp 
```sh                          
❯ git add main.cpp                                                                       
                          
❯ git commit -m "added main.cpp"
[main c679b38] added main.cpp
 1 file changed, 13 insertions(+)
 create mode 100644 main.cpp
                          
❯ git push origin main          
Перечисление объектов: 4, готово.
Подсчет объектов: 100% (4/4), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (2/2), готово.
Запись объектов: 100% (3/3), 413 байтов | 413.00 КиБ/с, готово.
Total 3 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To github.com:SofiaBachulashvili/I_will_never_loose_deadline.git
   1fc6754..c679b38  main -> main
```

## Ой в слове lose должно быть две "о"🙄😒
## Заходим в github, редактируем файл
```sh                      
❯ git pull origin main                 
remote: Enumerating objects: 5, done.
remote: Counting objects: 100% (5/5), done.
remote: Compressing objects: 100% (2/2), done.
remote: Total 3 (delta 1), reused 0 (delta 0), pack-reused 0
Распаковка объектов: 100% (3/3), 927 байтов | 231.00 КиБ/с, готово.
Из github.com:SofiaBachulashvili/I_will_never_loose_deadline
 * branch            main       -> FETCH_HEAD
   c679b38..7a975db  main       -> origin/main
Обновление c679b38..7a975db
Fast-forward
 main.cpp | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)
```

## Создаём файл CMakeLists.txt и добавляем правила сборки
```sh                            
❯ cat > CMakeLists.txt <<EOF
cmake_minimum_required(VERSION 3.10)
project(MyProgram)

set(CMAKE_CXX_STANDARD 11)

add_executable(MyProgram main.cpp)
EOF
```
## Создаём и переходим в папку build для сборки проекта
```sh                      
❯ mkdir build
cd build
```

## Соберем проект с помощью CMake ВМЕСТЕ
## Ну как вместе
## Посмотрим, как это делает ноут
```sh                    
❯ cmake ..
make
-- The C compiler identification is GNU 14.0.1
-- The CXX compiler identification is GNU 14.0.1
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done (1.3s)
-- Generating done (0.0s)
-- Build files have been written to: /home/sofia/SofiaBachulashvili/workspace/projects/I_will_never_loose_deadline/build
[ 50%] Building CXX object CMakeFiles/MyProgram.dir/main.cpp.o
[100%] Linking CXX executable MyProgram
[100%] Built target MyProgram
```

## Попробуем запустить при number = 2 (2 раза)
```sh              
❯ ./MyProgram
Enter a number: 2
I will never loose deadline!
I will never loose deadline!
```
## Сработало!!!
## Это Вам не "Hello world!"

## Попробуем запустить при number = 5 (5 раз)
```sh                  
❯ ./MyProgram
Enter a number: 5
I will never loose deadline!
I will never loose deadline!
I will never loose deadline!
I will never loose deadline!
I will never loose deadline!
```

## Чекаем все ли синхронизировалось с github
```sh
❯ git push origin main
Everything up-to-date
```
## Все можно отдохнуть

![That's my drawing](I_Will_Never_Loose_Deadline.png)
