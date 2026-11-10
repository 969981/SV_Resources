/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027d0464; name: FUN_027d0464
 */


void FUN_027d0464(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = *param_2;
  uStack_38 = param_2[1];
  local_30 = param_2[2];
  local_28 = (long *)param_2[3];
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  local_44 = 1;
  local_58 = 0;
  uStack_50 = 0;
  FUN_027bfb28(&local_58,param_3);
  FUN_027d04fc(param_1,&local_40,&local_44,&local_58);
  FUN_027bfe38(&local_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


