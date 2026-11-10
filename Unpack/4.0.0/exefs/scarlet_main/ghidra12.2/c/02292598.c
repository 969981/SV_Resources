/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02292598; name: FUN_02292598
 */


void FUN_02292598(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_140 [288];
  
  puVar1 = &LAB_0229a004;
  if (DAT_04843bc0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0229a29c(auStack_140,param_2,puVar1,0);
  FUN_0229a350(param_1,auStack_140);
  FUN_0229a4a4(auStack_140);
  return;
}


