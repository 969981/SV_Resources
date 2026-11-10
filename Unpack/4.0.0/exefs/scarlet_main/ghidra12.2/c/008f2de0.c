/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f2de0; name: _INIT_133
 */


void _INIT_133(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047d3868;
  puVar2 = PTR_DAT_047d3860;
  puVar1 = PTR_LAB_047d37b8;
  if ((*PTR_DAT_047d3860 & 1) == 0) {
    *(char **)PTR_DAT_047d3868 =
         "static const char *boost::detail::core_typeid_<(lambda at C:/projects\\ppp\\include\\boost\\signals2\\connection.hpp:149:13)>::name() [T = (lambda at C:/projects\\ppp\\include\\boost\\signals2\\connection.hpp:149:13)]"
    ;
    *(undefined **)(puVar3 + 8) = puVar1;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


