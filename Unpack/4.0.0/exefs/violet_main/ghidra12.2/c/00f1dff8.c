/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f1dff8; name: FUN_00f1dff8
 */


uint FUN_00f1dff8(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  plVar4 = (long *)param_3[3];
  local_70 = param_1;
  local_68 = param_2;
  local_48 = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xe0));
  iVar2 = *(int *)(param_1 + 0x5c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe0));
  if ((iVar2 < 1) || (*(int *)(param_1 + 0x120) < iVar2)) {
    if ((*(long *)(param_1 + 0x68) == 0) ||
       (uVar3 = FUN_00f1dff8(*(long *)(param_1 + 0x68),*(int *)(param_1 + 0x50) + param_2,&local_60)
       , (uVar3 & 1) != 0)) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x100));
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    goto LAB_00f1e0bc;
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_98 = *(undefined8 *)PTR_DAT_047d3e30;
  uStack_90 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
  local_88 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  local_80 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))();
  }
  local_78 = 0x271000000000;
  FUN_00f1e1dc(param_1,&local_98,0);
  if ((int)local_78 == 0) {
LAB_00f1e154:
    uVar1 = FUN_00f1def8(&local_70,&local_98);
  }
  else {
    if ((local_78._4_4_ < param_2) ||
       ((local_78._4_4_ == param_2 && (*(char *)(param_1 + 0x60) != '\0')))) goto LAB_00f1e154;
    uVar1 = 0;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  plVar4 = local_48;
LAB_00f1e0bc:
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return uVar1 & 1;
}


