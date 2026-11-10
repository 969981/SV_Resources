/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ae854; name: FUN_024ae854
 */


void FUN_024ae854(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long local_38;
  
  FUN_024ae948();
  uVar1 = (**(code **)(**(long **)(param_2 + 0x28) + 0x10))(*(long **)(param_2 + 0x28),0x50,0x10);
  FUN_024aea2c(uVar1,param_4,param_2 + 0x18,*(undefined8 *)(param_2 + 0x28));
  local_38 = *(long *)(param_2 + 0x28);
  if (local_38 == 0) {
    local_38 = FUN_024a7940();
  }
  *param_1 = uVar1;
  FUN_024aeb30(param_1 + 1,uVar1,param_2,&local_38);
  return;
}


