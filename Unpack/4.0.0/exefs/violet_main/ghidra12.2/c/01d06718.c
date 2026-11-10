/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d06718; name: FUN_01d06718
 */


void FUN_01d06718(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  
  puVar1 = PTR_LAB_047d71b8;
  if (DAT_0482ccb0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01d0716c(auStack_220,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_120,auStack_220,0x100);
  FUN_01d071c4(param_1 + 8,auStack_120);
  return;
}


