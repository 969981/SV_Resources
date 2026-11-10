/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00835630; name: _INIT_92
 */


void _INIT_92(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1b10;
  if ((*PTR_DAT_047d1b10 & 1) == 0) {
    FUN_031fa07c(PTR_DAT_047d1b18,PTR_DAT_047d1b20);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


