/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6dbf8; name: FUN_01f6dbf8
 */


void FUN_01f6dbf8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[10];
  *param_1 = &DAT_04559b60;
  param_1[4] = &PTR_LAB_04559ba0;
  param_1[5] = &PTR_LAB_04559bc0;
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_01cf3674(param_1 + 0xb);
  }
  if (*(char *)(param_1 + 7) != '\0') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}


