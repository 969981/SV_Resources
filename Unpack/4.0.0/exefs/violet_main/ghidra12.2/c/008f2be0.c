/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f2be0; name: _INIT_125
 */


void _INIT_125(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047d37e8;
  puVar2 = PTR_DAT_047d37e0;
  puVar1 = PTR_LAB_047d37b8;
  if ((*PTR_DAT_047d37e0 & 1) == 0) {
    *(char **)PTR_DAT_047d37e8 =
         "static const char *boost::detail::core_typeid_<(lambda at C:/projects\\ppp\\include\\boost\\signals2\\connection.hpp:149:13)>::name() [T = (lambda at C:/projects\\ppp\\include\\boost\\signals2\\connection.hpp:149:13)]"
    ;
    *(undefined **)(puVar3 + 8) = puVar1;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


