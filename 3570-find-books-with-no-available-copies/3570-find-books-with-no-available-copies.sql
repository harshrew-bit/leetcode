select l.book_id,
    l.title,
    l.author,
    l.genre,
    l.publication_year,
    count(b.record_id) as current_borrowers
    from Library_books l
    join Borrowing_records b
    on l.book_id=b.book_id
    where b.return_date is NULL
    group by 
    l.book_id,
    l.title,
    l.author,
    l.genre,
    l.publication_year,
    l.total_copies
    HAVING COUNT(b.record_id) = l.total_copies
ORDER BY 
    current_borrowers DESC,
    l.title ASC;

