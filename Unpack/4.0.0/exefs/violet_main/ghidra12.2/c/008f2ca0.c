/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008f2ca0; name: _INIT_128
 */


void _INIT_128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_047d3818;
  puVar2 = PTR_DAT_047d3810;
  puVar1 = PTR_LAB_047d37b8;
  if ((*PTR_DAT_047d3810 & 1) == 0) {
    *(char **)PTR_DAT_047d3818 =
         "static const char *boost::detail::core_typeid_<(lambda at C:/projects\\ppp\\include\\boost\\signals2\\detail\\signal_template.hpp:497:15)>::name() [T = (lambda at C:/projects\\ppp\\include\\boost\\signals2\\detail\\signal_template.hpp:497:15)]"
    ;
    *(undefined **)(puVar3 + 8) = puVar1;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


