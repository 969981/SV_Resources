/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f2da0; name: _INIT_132
 */


void _INIT_132(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047d3858;
  puVar2 = PTR_DAT_047d3850;
  puVar1 = PTR_LAB_047d37b8;
  if ((*PTR_DAT_047d3850 & 1) == 0) {
    *(char **)PTR_DAT_047d3858 =
         "static const char *boost::detail::core_typeid_<(lambda at C:/projects\\ppp\\include\\boost\\signals2\\detail\\signal_template.hpp:497:15)>::name() [T = (lambda at C:/projects\\ppp\\include\\boost\\signals2\\detail\\signal_template.hpp:497:15)]"
    ;
    *(undefined **)(puVar3 + 8) = puVar1;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


