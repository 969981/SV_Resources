/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02358e04; name: FUN_02358e04
 */


void FUN_02358e04(undefined8 param_1,long *param_2,code *param_3,ulong param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long *plVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  undefined1 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar1 = (long *)(*param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar1);
  }
  local_50 = *param_5;
  uStack_48 = param_5[1];
  local_40 = param_5[2];
  local_38 = (long *)param_5[3];
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))();
  }
  local_88 = *param_6;
  uStack_80 = param_6[1];
  local_78 = param_6[2];
  local_70 = (long *)param_6[3];
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))();
  }
  local_68 = param_6[4];
  local_60 = *(undefined1 *)(param_6 + 5);
  local_58 = (long *)param_6[6];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  (*param_3)(param_1,plVar1,&local_50,&local_88);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


