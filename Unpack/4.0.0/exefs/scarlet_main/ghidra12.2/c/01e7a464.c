/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7a464; name: FUN_01e7a464
 */


void FUN_01e7a464(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long *local_100;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  long *local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  undefined8 local_28;
  
  local_28 = param_4;
  if (((*PTR_DAT_047da868 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047da868), iVar4 != 0))
  {
    FUN_00100190(&LAB_00ae377c,PTR_DAT_047da870,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da868);
  }
  lVar5 = *(long *)PTR_DAT_047da870;
  *(long *)PTR_DAT_047da878 = lVar5;
  FUN_01e7cd5c(auStack_48,*(undefined8 *)(lVar5 + 0x28),&local_28);
  FUN_01050714(&local_70,param_2);
  plVar3 = local_70;
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 6;
  }
  local_68 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (local_70 != (long *)0x0) {
    plVar1 = local_70 + 7;
  }
  lStack_60 = *plVar1;
  if (local_70 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = local_70[8];
  }
  local_50 = (long *)0x0;
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x18))(local_70);
  }
  local_50 = plVar3;
  local_118 = *param_2;
  uStack_110 = param_2[1];
  local_108 = param_2[2];
  local_100 = (long *)param_2[3];
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x18))();
  }
  FUN_01e7ce2c(auStack_f8,auStack_48);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = (code *)0x0;
  FUN_01e7ceec(&local_f0,&local_118);
  FUN_015d1ba8(param_1,&local_68,param_3,&local_f0);
  pcVar2 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar2)(auStack_d0);
  }
  FUN_01e7cf7c(auStack_f8);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  FUN_01e7cf7c(auStack_48);
  return;
}


