/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c0414; name: FUN_034c0414
 */


long * FUN_034c0414(undefined4 param_1,ushort param_2)

{
  undefined *puVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined *puVar9;
  MutexType *pMVar10;
  float fVar11;
  
  puVar9 = PTR_DAT_047e2fd0;
  plVar6 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x148);
  if (plVar6 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar6[6] = 0;
  plVar6[8] = 0;
  *(undefined4 *)(plVar6 + 9) = param_1;
  puVar1 = PTR_DAT_047e7128 + 0x10;
  *(undefined4 *)(plVar6 + 3) = param_1;
  *(undefined4 *)((long)plVar6 + 0x1c) = 1;
  *(undefined1 *)(plVar6 + 5) = 1;
  plVar6[10] = 0;
  plVar6[0xb] = (long)puVar1;
  plVar6[0xc] = 0;
  *(undefined4 *)(plVar6 + 0xd) = param_1;
  memset(plVar6 + 0xe,0,0x50);
  puVar2 = (ushort *)((long)plVar6 + 0x145);
  plVar6[1] = (long)&PTR_FUN_047c48b8;
  *plVar6 = (long)&PTR_FUN_047c4638;
  *(undefined4 *)(plVar6 + 0x28) = 0;
  plVar6[0x19] = (long)plVar6;
  plVar6[0x1a] = 0;
  *(byte *)(plVar6 + 0x1e) = *(byte *)(plVar6 + 0x1e) & 199;
  *(byte *)((long)plVar6 + 0xf1) = *(byte *)((long)plVar6 + 0xf1) & 0x80;
  plVar6[4] = (long)&PTR_FUN_047c48f8;
  plVar6[0x1c] = 0;
  plVar6[0x1d] = 0;
  plVar6[7] = (long)&PTR_FUN_047c4990;
  plVar6[0x20] = 0;
  plVar6[0x21] = 0;
  plVar6[0x22] = 0;
  plVar6[0x23] = 0;
  plVar6[0x24] = 0;
  plVar6[0x25] = 0;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  *(undefined2 *)((long)plVar6 + 0x13c) = 1;
  *puVar2 = *puVar2 & 0xfe00 | param_2 & 7 | 0x90;
  *(byte *)((long)plVar6 + 0x144) = *(byte *)((long)plVar6 + 0x144) & 0xc0;
  *(uint *)((long)plVar6 + 0xda) = *(uint *)((long)plVar6 + 0xda) & 0xe0090000 | 0x4000;
  pMVar10 = *(MutexType **)PTR_DAT_047e6f28;
  nn::os::LockMutex(pMVar10);
  uVar8 = *(uint *)(pMVar10 + 0x28);
  if ((uVar8 == 0) ||
     (fVar11 = (float)NEON_ucvtf(*(undefined4 *)(pMVar10 + 0x30)), 0.9 < fVar11 / (float)uVar8)) {
    FUN_03458ccc(pMVar10 + 0x20);
    uVar8 = *(uint *)(pMVar10 + 0x28);
    if (uVar8 != 0) goto LAB_034c057c;
  }
  else {
LAB_034c057c:
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = *(uint *)(plVar6 + 3) / uVar8;
    }
    uVar8 = *(uint *)(plVar6 + 3) - uVar4 * uVar8;
    plVar6[2] = *(long *)(*(long *)(pMVar10 + 0x20) + (ulong)uVar8 * 8);
    *(long **)(*(long *)(pMVar10 + 0x20) + (ulong)uVar8 * 8) = plVar6 + 1;
    *(int *)(pMVar10 + 0x30) = *(int *)(pMVar10 + 0x30) + 1;
  }
  nn::os::UnlockMutex(pMVar10);
  uVar3 = *puVar2;
  plVar7 = (long *)(**(code **)(puVar9 + 0x10))(2,0x18);
  if ((uVar3 & 7) == 1) {
    if (plVar7 == (long *)0x0) goto LAB_034c05fc;
    puVar9 = PTR_DAT_047e7298;
  }
  else {
    if (plVar7 == (long *)0x0) goto LAB_034c05fc;
    puVar9 = PTR_DAT_047e72a0;
  }
  *plVar7 = (long)(puVar9 + 0x10);
  plVar7[1] = 0;
  plVar7[2] = 0;
LAB_034c05fc:
  plVar6[0x22] = (long)plVar7;
  if ((plVar7 == (long *)0x0) || (iVar5 = (**(code **)(*plVar7 + 0x10))(), iVar5 != 1)) {
    (**(code **)(*plVar6 + 0x30))(plVar6);
    plVar6 = (long *)0x0;
  }
  return plVar6;
}


