/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9edc8; name: FUN_01e9edc8
 */


void FUN_01e9edc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)FUN_01cf7e20();
  FUN_01e9f270(&local_50,param_2,param_3);
  FUN_01e9f308(param_1 + 0x38,&local_50);
  if ((local_50 & 1) != 0) {
    (**(code **)(*local_38 + 0x18))
              (local_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  return;
}


