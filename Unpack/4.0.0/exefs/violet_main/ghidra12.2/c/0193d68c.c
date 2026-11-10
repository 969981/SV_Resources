/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193d68c; name: FUN_0193d68c
 */


undefined8 FUN_0193d68c(long param_1,int param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_a0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (*(int *)(param_1 + 0x74) != 2) {
    return 0;
  }
  *(int *)(param_1 + 0xe4) = param_2;
  local_a0[0] = 0;
  FUN_00cb4dc0(0x411cf5c3,local_a0,1);
  if (param_2 != 2) {
    if (param_2 == 1) {
      FUN_00cb4dc0(0x411cf5c3,local_a0,1);
      uVar7 = 1;
    }
    else {
      FUN_00cb4dc0(0x411cf5c3,local_a0,0);
      uVar7 = 0;
    }
    goto LAB_0193d700;
  }
  FUN_00cb4dc0(0x411cf5c3,local_a0,1);
  if (*(int *)(param_1 + 0x100) == 1) {
    if (*(float *)(param_1 + 0x120) <= 0.3) goto LAB_0193d808;
  }
  else if (*(int *)(param_1 + 0x100) == 4) {
LAB_0193d808:
    local_90 = 0x41a0000041200000;
    uStack_88 = 0x3dcccccd3dcccccd;
    uVar7 = 2;
    goto LAB_0193d700;
  }
  uVar7 = 2;
  local_90 = 0x4248000042480000;
  uStack_88 = 0;
LAB_0193d700:
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar6 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar6;
  pMVar1 = (MutexType *)(*(long *)(lVar6 + 0x70) + 0x120);
  nn::os::LockMutex(pMVar1);
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x1e0))
            (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),uVar7,0,0);
  plVar2 = *(long **)(param_1 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = FUN_0133a350(plVar2[0x116],local_a0);
  (**(code **)(*plVar2 + 0x1f0))(plVar2,uVar3,uVar4);
  nn::os::UnlockMutex(pMVar1);
  return 1;
}


