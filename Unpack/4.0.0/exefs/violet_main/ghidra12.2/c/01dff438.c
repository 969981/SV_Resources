/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dff438; name: FUN_01dff438
 */


void FUN_01dff438(undefined1 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x40) != '\0') {
    auVar1 = FUN_01e1f594(*(undefined8 *)(param_2 + 0x78));
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  }
  return;
}


