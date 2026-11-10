/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d7b4e8; name: FUN_01d7b4e8
 */


void FUN_01d7b4e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *local_18;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_017c3fdc(&local_18,param_3);
  FUN_01d7c37c(param_2,uVar1,uVar2,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  return;
}


