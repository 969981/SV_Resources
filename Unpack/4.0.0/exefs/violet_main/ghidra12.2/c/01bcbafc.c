/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bcbafc; name: FUN_01bcbafc
 */


void FUN_01bcbafc(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_01bcce30;
  if (DAT_0480efa8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01bcd1b8(auStack_30,param_2,puVar1,0);
  FUN_01bcd230(param_1,auStack_30);
  FUN_01bcbe94(auStack_30);
  return;
}


