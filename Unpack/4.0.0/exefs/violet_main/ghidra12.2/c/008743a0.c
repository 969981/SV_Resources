/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008743a0; name: _INIT_109
 */


void _INIT_109(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1d30;
  if ((*PTR_DAT_047d1d30 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1d38,PTR_DAT_047d1d40);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


