/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02465838; name: FUN_02465838
 */


void FUN_02465838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 local_28;
  undefined1 auStack_8 [8];
  
  pcVar1 = thunk_FUN_02466814;
  if (DAT_048497e8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_28 = param_3;
  FUN_02466874(auStack_8,param_2,pcVar1,0,&local_28);
  FUN_0245ff40(param_1,auStack_8);
  FUN_0245beb4(auStack_8);
  return;
}


