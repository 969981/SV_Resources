/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031cf578; name: FUN_031cf578
 */


void FUN_031cf578(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  plVar2 = *(long **)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x38);
  iVar5 = (int)plVar2[3];
  uVar1 = *(uint *)(plVar2 + 1);
  uVar4 = (ulong)uVar1;
  iVar9 = iVar5 + -1;
  if (0 < (int)uVar1) {
    if (*(long *)(*plVar2 + (uVar4 - 1) * 0x18 + 8) == lVar8) {
      plVar6 = (long *)(*plVar2 + (uVar4 - 1) * 0x18);
      lVar8 = *plVar6;
      iVar9 = (int)plVar6[2];
      *(uint *)(plVar2 + 1) = uVar1 - 1;
      plVar2 = *(long **)(param_1 + 0x30);
      if (1 < uVar1) {
        lVar7 = uVar4 * 0x18;
        do {
          lVar10 = *plVar2 + lVar7;
          if (*(long *)(lVar10 + -0x28) != lVar8) break;
          uVar4 = uVar4 - 1;
          lVar7 = lVar7 + -0x18;
          lVar8 = *(long *)(lVar10 + -0x30);
          iVar9 = *(int *)(lVar10 + -0x20);
          *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
          plVar2 = *(long **)(param_1 + 0x30);
        } while (1 < (long)uVar4);
      }
      iVar5 = (int)plVar2[3];
      if (iVar9 < iVar5 + -1) {
        lVar7 = *(long *)(param_1 + 0x50);
        lVar10 = (long)(iVar5 + -1);
        do {
          if (lVar7 != 0) {
            (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                      (*(long **)(param_1 + 0x18),lVar7,*(undefined8 *)(param_1 + 0x28));
            *(int *)(*(long *)(param_1 + 0x30) + 0x20) =
                 *(int *)(*(long *)(param_1 + 0x30) + 0x20) + -1;
            plVar2 = *(long **)(param_1 + 0x30);
          }
          lVar7 = *(long *)(plVar2[2] + lVar10 * 8);
          lVar10 = lVar10 + -1;
          *(long *)(param_1 + 0x50) = lVar7;
        } while (iVar9 < lVar10);
        iVar5 = (int)plVar2[3];
      }
    }
  }
  if (iVar5 <= iVar9 || iVar9 + 1 < iVar5) {
    *(int *)(plVar2 + 3) = iVar9 + 1;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  *(long *)(param_1 + 0x38) = lVar8;
  if ((int)plVar2[3] == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x28) + *(long *)(plVar2[2] + (long)((int)plVar2[3] + -1) * 8);
  }
  *(long *)(param_1 + 0x40) = lVar8;
  if ((int)plVar2[1] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*plVar2 + (long)((int)plVar2[1] + -1) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  return;
}


