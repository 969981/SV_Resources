/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030321d0; name: _INIT_585
 */


void _INIT_585(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047e4c30;
  puVar1 = PTR_DAT_047e4c28;
  if ((*PTR_DAT_047e4c28 & 1) == 0) {
    *(undefined4 *)(PTR_DAT_047e4c30 + 8) = 1;
    *(undefined ***)puVar2 = &PTR_LAB_0463d4e8;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


