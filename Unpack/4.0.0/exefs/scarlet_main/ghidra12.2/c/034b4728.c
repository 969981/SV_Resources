/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b4728; name: FUN_034b4728
 */


void FUN_034b4728(undefined8 *param_1,uint param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  puVar3 = (uint *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = puVar3;
  if (uVar2 == 0) {
LAB_034b47a0:
    if (puVar4 != puVar3 + (ulong)uVar2 * 0xc) goto LAB_034b4830;
  }
  else {
    lVar6 = (ulong)uVar2 * 0x30;
    do {
      if ((*puVar4 == param_2) && (*(ulong *)(puVar4 + 2) == param_3)) goto LAB_034b47a0;
      lVar6 = lVar6 + -0x30;
      puVar4 = puVar4 + 0xc;
    } while (lVar6 != 0);
  }
  uVar7 = *(uint *)((long)param_1 + 0xc);
  if (uVar7 <= uVar2) {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    puVar3 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar3,(ulong)uVar7 * 0x30);
    if (puVar3 == (uint *)0x0) goto LAB_034b4830;
    *param_1 = puVar3;
    *(uint *)((long)param_1 + 0xc) = uVar7;
  }
  if (uVar2 < uVar7) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (puVar3 != (uint *)0x0) {
      puVar5 = (ulong *)(puVar3 + (ulong)uVar2 * 0xc);
      *puVar5 = (ulong)param_2;
      puVar5[1] = param_3;
      puVar5[3] = 0x3f800000ffffffff;
      puVar5[4] = 0x1ffffffff;
    }
  }
LAB_034b4830:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


