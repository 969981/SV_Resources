/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008fd7f0; name: _INIT_144
 */


void _INIT_144(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047d4208;
  puVar2 = PTR_DAT_047d4200;
  puVar1 = PTR_LAB_047d37b8;
  if ((*PTR_DAT_047d4200 & 1) == 0) {
    *(char **)PTR_DAT_047d4208 =
         "static const char *boost::detail::core_typeid_<boost::io::basic_oaltstringstream<char, std::__1::char_traits<char>, std::__1::allocator<char>>::No_Op>::name() [T = boost::io::basic_oaltstringstream<char, std::__1::char_traits<char>, std::__1::allocator<char>>::No_Op]"
    ;
    *(undefined **)(puVar3 + 8) = puVar1;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


