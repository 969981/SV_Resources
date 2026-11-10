/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0085c5f0; name: _INIT_96
 */


void _INIT_96(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047d1bc0;
  puVar1 = PTR_DAT_047d1bb8;
  if ((*PTR_DAT_047d1bc0 & 1) == 0) {
    *(undefined8 *)PTR_DAT_047d1bb8 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


