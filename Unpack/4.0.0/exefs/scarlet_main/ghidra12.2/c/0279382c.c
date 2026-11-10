/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0279382c; name: FUN_0279382c
 */


void FUN_0279382c(undefined8 param_1)

{
  long lVar1;
  long local_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0xc0f0e79e6ac2797c;
  pcStack_38 = "UpdateSessionSetting";
  local_30 = 0x14;
  uStack_28 = 0;
  FUN_027e63b8(&local_60);
  FUN_027e6504(param_1,&local_40,&local_60);
  lVar1 = local_60;
  local_60 = 0;
  if (lVar1 != 0) {
    FUN_027e65b4(auStack_58);
  }
  return;
}


