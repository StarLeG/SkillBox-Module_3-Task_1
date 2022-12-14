# Задача 1. Информация о фильме с кинопортала

## Что нужно сделать
Запишите подробную информацию о киноленте в виде JSON-файла. Выберите понравившуюся вам картину на любимом портале,
проанализируйте информацию о ней и составьте JSON-словарь.

В информации должны присутствовать: страна и дата создания киноленты, студия, которая вела съёмки,
автор сценария, режиссёр и продюсер киноленты. Обязательно добавьте информацию обо всех главных действующих лицах и
тех актёрах, которые их сыграли.

# Задача 2. Анализ данных о фильмах

## Что нужно сделать
Используя модель данных из задачи №1, создайте JSON-документ, но теперь уже для пяти различных кинолент.
Ключи в этой JSON-базе данных должны быть названиями фильмов, а значениями служить уже словари с информацией о картинах.

Загрузите базу данных в C++-программу для последующего анализа. Предусмотрите следующий функционал:
поиск актёра по имени (или фамилии) и вывод в консоль названий кинолент,
в которых снимался актёр, и роль, которую он исполнял.