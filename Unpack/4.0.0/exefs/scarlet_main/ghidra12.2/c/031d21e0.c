/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d21e0; name: FUN_031d21e0
 */


void FUN_031d21e0(undefined1 param_1,ulong param_2)

{
  uint uVar1;
  MutexType *pMVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_48 [8];
  
  lVar3 = tpidr_el0;
  local_48[0] = param_1;
  if ((param_2 & 1) != 0) {
    pMVar2 = *(MutexType **)(PTR_DAT_047e4880 + 0x18);
    lVar8 = **(long **)(PTR_DAT_047e4880 + 0x20);
    nn::os::LockMutex(pMVar2);
    for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x528)) {
      uVar7 = *(undefined8 *)(lVar8 + 0x3d8);
      lVar6 = *(long *)(lVar3 + 0x1000b8);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar3 + 0x1000b8) = lVar6;
      }
      uVar1 = *(int *)(lVar6 + 0x3c8) + 1;
      *(uint *)(lVar6 + 0x3c8) = uVar1;
      if (uVar1 < 0x10) {
        lVar5 = *(long *)(lVar6 + 0x3d0);
        plVar4 = (long *)(lVar6 + 0x10 + (ulong)uVar1 * 0x38);
        *plVar4 = lVar5;
        plVar4[1] = 0;
        plVar4[6] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[1] = *(long *)(lVar5 + 8);
        plVar4[2] = *(long *)(lVar5 + 0x10);
        plVar4[3] = *(long *)(lVar5 + 0x18);
        plVar4[4] = *(long *)(lVar5 + 0x20);
        plVar4[5] = *(long *)(lVar5 + 0x28);
        plVar4[6] = *(long *)(lVar5 + 0x30);
        lVar5 = lVar6 + 0x10 + (long)*(int *)(lVar6 + 0x3c8) * 0x38;
        *(long *)(lVar6 + 0x3d0) = lVar5;
      }
      else {
        lVar5 = *(long *)(lVar6 + 0x3d0);
      }
      *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(*(long *)(lVar8 + 0x3d0) + 8);
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(*(long *)(lVar8 + 0x3d0) + 0x10);
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(*(long *)(lVar8 + 0x3d0) + 0x18);
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(*(long *)(lVar8 + 0x3d0) + 0x20);
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(*(long *)(lVar8 + 0x3d0) + 0x28);
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(*(long *)(lVar8 + 0x3d0) + 0x30);
      FUN_031d3014(local_48,uVar7);
      uVar1 = *(int *)(lVar6 + 0x3c8) - 1;
      if ((0 < *(int *)(lVar6 + 0x3c8)) && (*(uint *)(lVar6 + 0x3c8) = uVar1, uVar1 < 0x10)) {
        *(ulong *)(lVar6 + 0x3d0) = lVar6 + (ulong)uVar1 * 0x38 + 0x10;
      }
    }
    nn::os::UnlockMutex(pMVar2);
  }
  lVar8 = *(long *)(lVar3 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar8;
  }
  FUN_031d3014(local_48,*(undefined8 *)(lVar8 + 0x3d8));
  return;
}


