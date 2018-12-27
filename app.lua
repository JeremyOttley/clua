function my_app()
  local num_a = 1980
  local num_b = 8
  local str_a = 'Jer'
  local str_b = 'emy'

  local res = c_crap_add(num_a, num_b)
  print(res) -- 1987

  res = c_crap_isstreq(str_a .. str_b, 'Jeremy')
  print(res) -- true!
end

my_app()
