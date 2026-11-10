/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03499a80; name: FUN_03499a80
 */


undefined8 FUN_03499a80(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  iVar5 = (**(code **)(*param_1 + 0x88))();
  puVar4 = PTR_DAT_047e6f28;
  uVar6 = 0x20000;
  if (iVar5 != 0 && iVar5 != 10) {
    uVar6 = 0;
  }
  *(uint *)((long)param_1 + 0xda) = uVar6 | *(uint *)((long)param_1 + 0xda) & 0xfffdffff;
  pMVar1 = *(MutexType **)puVar4 + 0x38;
  if ((iVar5 == 10) == (iVar5 == 0)) {
    pMVar1 = *(MutexType **)puVar4;
  }
  nn::os::LockMutex(pMVar1);
  uVar6 = *(uint *)(pMVar1 + 0x28);
  plVar2 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar2 = param_1 + 1;
  }
  if ((uVar6 == 0) ||
     (fVar7 = (float)NEON_ucvtf(*(undefined4 *)(pMVar1 + 0x30)), 0.9 < fVar7 / (float)uVar6)) {
    FUN_03458ccc(pMVar1 + 0x20);
    uVar6 = *(uint *)(pMVar1 + 0x28);
    if (uVar6 == 0) goto LAB_03499b64;
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = *(uint *)(plVar2 + 2) / uVar6;
  }
  uVar6 = *(uint *)(plVar2 + 2) - uVar3 * uVar6;
  plVar2[1] = *(long *)(*(long *)(pMVar1 + 0x20) + (ulong)uVar6 * 8);
  *(long **)(*(long *)(pMVar1 + 0x20) + (ulong)uVar6 * 8) = plVar2;
  *(int *)(pMVar1 + 0x30) = *(int *)(pMVar1 + 0x30) + 1;
LAB_03499b64:
  nn::os::UnlockMutex(pMVar1);
  return 1;
}


