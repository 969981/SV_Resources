/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


