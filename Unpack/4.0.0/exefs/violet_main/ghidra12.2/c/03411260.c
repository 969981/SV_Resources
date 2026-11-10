/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03411260; name: _INIT_2111
 */


void _INIT_2111(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_047e6d90;
  puVar1 = PTR_DAT_047e6cd0;
  if ((*PTR_DAT_047e6d90 & 1) == 0) {
    *(undefined4 *)PTR_DAT_047e6cd0 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


