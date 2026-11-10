/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034580ec; name: FUN_034580ec
 */


int FUN_034580ec(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_047e6f28;
  lVar6 = *(long *)PTR_DAT_047e6f28;
  nn::os::LockMutex((MutexType *)(lVar6 + 0xe0));
  iVar3 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar3;
  if (iVar3 == 0) {
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 != 0) {
      lVar10 = *(long *)puVar5;
      nn::os::LockMutex((MutexType *)(lVar10 + 0xe0));
      uVar2 = *(uint *)(lVar10 + 0x108);
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar1 / uVar2;
        }
        plVar9 = (long *)(*(long *)(lVar10 + 0x100) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
        lVar7 = *plVar9;
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x10) != uVar1) {
            do {
              lVar8 = lVar7;
              lVar7 = *(long *)(lVar8 + 8);
              if (lVar7 == 0) goto LAB_034581a0;
            } while (*(uint *)(lVar7 + 0x10) != uVar1);
            plVar9 = (long *)(lVar8 + 8);
          }
          *plVar9 = *(long *)(lVar7 + 8);
          *(int *)(lVar10 + 0x110) = *(int *)(lVar10 + 0x110) + -1;
        }
      }
LAB_034581a0:
      nn::os::UnlockMutex((MutexType *)(lVar10 + 0xe0));
      *(undefined4 *)(param_1 + 2) = 0;
    }
    (**(code **)*param_1)(param_1);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(1,param_1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xe0));
  return iVar3;
}


