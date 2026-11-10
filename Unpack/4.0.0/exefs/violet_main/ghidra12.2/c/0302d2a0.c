/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0302d2a0; name: _INIT_515
 */


void _INIT_515(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_047e4a80;
  puVar1 = PTR_DAT_047e4a78;
  if ((*PTR_DAT_047e4a78 & 1) == 0) {
    *(undefined4 *)(PTR_DAT_047e4a80 + 8) = 1;
    puVar3 = PTR_DAT_047e4a88;
    *(undefined8 *)puVar1 = 1;
    *(undefined **)puVar2 = puVar3 + 0x10;
  }
  return;
}


