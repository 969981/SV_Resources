/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008743f0; name: _INIT_110
 */


void _INIT_110(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1d48;
  if ((*PTR_DAT_047d1d48 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1d50,PTR_DAT_047d1d58);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


