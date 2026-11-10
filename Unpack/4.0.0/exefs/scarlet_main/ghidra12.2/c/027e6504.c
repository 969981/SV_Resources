/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e6504; name: FUN_027e6504
 */


void FUN_027e6504(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
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
  local_68 = *param_3;
  lStack_60 = param_3[1];
  local_58 = param_3[2];
  lStack_50 = param_3[3];
  *param_3 = 0;
  FUN_027e9134(param_1,&local_40,&local_44,&local_68);
  lVar1 = local_68;
  local_68 = 0;
  if (lVar1 != 0) {
    FUN_027e65b4(&lStack_60);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


