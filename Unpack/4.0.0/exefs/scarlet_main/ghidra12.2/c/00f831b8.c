/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f831b8; name: FUN_00f831b8
 */


void FUN_00f831b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *plStack_78;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  long *local_38;
  
  local_90 = *param_4;
  uStack_88 = param_4[1];
  local_80 = param_4[2];
  plVar3 = (long *)param_4[3];
  plStack_78 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  local_a8 = *param_5;
  uStack_a0 = param_5[1];
  local_98 = param_5[2];
  FUN_00f861d0(&local_38,&local_90,&local_a8);
  plVar5 = local_38;
  plVar4 = (long *)PTR_DAT_047d8b70;
  plVar2 = (long *)PTR_PTR_047d4508;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 6;
  }
  local_70 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 7;
  }
  lStack_68 = *plVar1;
  if (local_38 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = local_38[8];
  }
  local_58 = (long *)0x0;
  if (local_38 == (long *)0x0) {
    local_58 = local_38;
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    local_58 = plVar5;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  FUN_00f86124(&local_38,param_2,param_3,&local_70);
  plVar1 = local_38;
  if (local_38 != (long *)0x0) {
    plVar2 = local_38 + 7;
    plVar4 = local_38 + 6;
  }
  lVar6 = *plVar2;
  if (local_38 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = local_38[8];
  }
  *param_1 = *plVar4;
  param_1[1] = lVar6;
  param_1[2] = lVar7;
  param_1[3] = 0;
  if (local_38 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*local_38 + 0x18))(local_38);
    param_1[3] = (long)plVar1;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return;
}


