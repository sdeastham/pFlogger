         if (fmt(1:1) == LIST_DIRECTED_FORMAT) then
            write(buffer%buffer,*,iostat=iostat) arg
         else
            write(buffer%buffer,fmt,iostat=iostat) arg
         end if
