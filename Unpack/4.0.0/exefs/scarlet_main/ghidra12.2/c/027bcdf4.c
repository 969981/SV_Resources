/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bcdf4; name: FUN_027bcdf4
 */


void FUN_027bcdf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_8 = param_3;
  FUN_027bd320(&local_30,&local_8,param_2);
  uVar2 = uStack_28;
  uVar1 = local_30;
  local_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_027bd3bc(&local_30);
  return;
}


