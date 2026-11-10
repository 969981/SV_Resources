/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024aafd8; name: FUN_024aafd8
 */


void FUN_024aafd8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *local_18;
  
  *param_1 = &PTR_FUN_045bbfc8;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x30,0x10);
  FUN_024ab6cc(uVar1,param_2);
  local_18 = param_2;
  if (param_2 == (long *)0x0) {
    local_18 = (long *)FUN_024a7940();
  }
  param_1[1] = uVar1;
  FUN_024ab800(param_1 + 2,uVar1,param_2,&local_18);
  return;
}


