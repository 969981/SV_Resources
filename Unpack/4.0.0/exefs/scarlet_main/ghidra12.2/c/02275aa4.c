/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02275aa4; name: FUN_02275aa4
 */


void FUN_02275aa4(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  uStack_48 = param_3[1];
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = *param_2 + 0x20;
  }
  local_50 = *param_3;
  local_40 = param_3[2];
  local_38 = (long *)param_3[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_70 = *param_4;
  uStack_68 = param_4[1];
  local_60 = param_4[2];
  local_58 = (long *)param_4[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  FUN_022759dc(param_1,lVar1,&local_50,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


