/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030d120c; name: FUN_030d120c
 */


void FUN_030d120c(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x20))) {
    lVar4 = 0;
    do {
      if (((param_2 & 1) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + lVar4 * 8), lVar5 != 0)) {
        iVar2 = *(int *)(lVar5 + 0x28);
        if (iVar2 != 0) {
          uVar10 = (long)iVar2 * 0x38 - 0x38;
          lVar8 = *(long *)(lVar5 + 0x20);
          uVar1 = (int)(uVar10 / 0x38) + 1;
          lVar12 = lVar8;
          if ((uVar1 & 7) != 0) {
            lVar11 = -((ulong)uVar1 & 7);
            do {
              *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
              lVar12 = lVar12 + 0x38;
              bVar3 = lVar11 != -1;
              lVar11 = lVar11 + 1;
            } while (bVar3);
          }
          if (0x187 < uVar10) {
            do {
              *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
              *(int *)(lVar12 + 0x68) = *(int *)(lVar12 + 0x68) + 1;
              *(int *)(lVar12 + 0xa0) = *(int *)(lVar12 + 0xa0) + 1;
              *(int *)(lVar12 + 0xd8) = *(int *)(lVar12 + 0xd8) + 1;
              *(int *)(lVar12 + 0x110) = *(int *)(lVar12 + 0x110) + 1;
              *(int *)(lVar12 + 0x148) = *(int *)(lVar12 + 0x148) + 1;
              *(int *)(lVar12 + 0x180) = *(int *)(lVar12 + 0x180) + 1;
              *(int *)(lVar12 + 0x1b8) = *(int *)(lVar12 + 0x1b8) + 1;
              lVar12 = lVar12 + 0x1c0;
            } while (lVar8 + (long)iVar2 * 0x38 != lVar12);
          }
        }
        iVar2 = *(int *)(lVar5 + 0x38);
        if (iVar2 != 0) {
          uVar10 = (long)iVar2 * 0x38 - 0x38;
          lVar8 = *(long *)(lVar5 + 0x30);
          uVar1 = (int)(uVar10 / 0x38) + 1;
          lVar12 = lVar8;
          if ((uVar1 & 7) != 0) {
            lVar11 = -((ulong)uVar1 & 7);
            do {
              *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
              lVar12 = lVar12 + 0x38;
              bVar3 = lVar11 != -1;
              lVar11 = lVar11 + 1;
            } while (bVar3);
          }
          if (0x187 < uVar10) {
            do {
              *(int *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 1;
              *(int *)(lVar12 + 0x68) = *(int *)(lVar12 + 0x68) + 1;
              *(int *)(lVar12 + 0xa0) = *(int *)(lVar12 + 0xa0) + 1;
              *(int *)(lVar12 + 0xd8) = *(int *)(lVar12 + 0xd8) + 1;
              *(int *)(lVar12 + 0x110) = *(int *)(lVar12 + 0x110) + 1;
              *(int *)(lVar12 + 0x148) = *(int *)(lVar12 + 0x148) + 1;
              *(int *)(lVar12 + 0x180) = *(int *)(lVar12 + 0x180) + 1;
              *(int *)(lVar12 + 0x1b8) = *(int *)(lVar12 + 0x1b8) + 1;
              lVar12 = lVar12 + 0x1c0;
            } while (lVar8 + (long)iVar2 * 0x38 != lVar12);
          }
        }
        iVar2 = *(int *)(lVar5 + 0x48);
        if (iVar2 != 0) {
          plVar9 = *(long **)(lVar5 + 0x40);
          uVar10 = (long)iVar2 * 8 - 8;
          uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) == 0) {
            plVar7 = plVar9;
          }
          else {
            lVar12 = -((ulong)uVar1 & 3);
            plVar6 = plVar9;
            do {
              plVar7 = plVar6 + 1;
              bVar3 = lVar12 != -1;
              lVar12 = lVar12 + 1;
              *(int *)(*plVar6 + 0x1c) = *(int *)(*plVar6 + 0x1c) + 1;
              plVar6 = plVar7;
            } while (bVar3);
          }
          if (0x17 < uVar10) {
            do {
              *(int *)(*plVar7 + 0x1c) = *(int *)(*plVar7 + 0x1c) + 1;
              *(int *)(plVar7[1] + 0x1c) = *(int *)(plVar7[1] + 0x1c) + 1;
              *(int *)(plVar7[2] + 0x1c) = *(int *)(plVar7[2] + 0x1c) + 1;
              plVar6 = plVar7 + 3;
              plVar7 = plVar7 + 4;
              *(int *)(*plVar6 + 0x1c) = *(int *)(*plVar6 + 0x1c) + 1;
            } while (plVar7 != plVar9 + iVar2);
          }
        }
        iVar2 = *(int *)(lVar5 + 0x58);
        if (iVar2 != 0) {
          plVar9 = *(long **)(lVar5 + 0x50);
          uVar10 = (long)iVar2 * 8 - 8;
          uVar1 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) == 0) {
            plVar7 = plVar9;
          }
          else {
            lVar5 = -((ulong)uVar1 & 3);
            plVar6 = plVar9;
            do {
              plVar7 = plVar6 + 1;
              bVar3 = lVar5 != -1;
              lVar5 = lVar5 + 1;
              *(int *)(*plVar6 + 0x1c) = *(int *)(*plVar6 + 0x1c) + 1;
              plVar6 = plVar7;
            } while (bVar3);
          }
          if (0x17 < uVar10) {
            do {
              *(int *)(*plVar7 + 0x1c) = *(int *)(*plVar7 + 0x1c) + 1;
              *(int *)(plVar7[1] + 0x1c) = *(int *)(plVar7[1] + 0x1c) + 1;
              *(int *)(plVar7[2] + 0x1c) = *(int *)(plVar7[2] + 0x1c) + 1;
              plVar6 = plVar7 + 3;
              plVar7 = plVar7 + 4;
              *(int *)(*plVar6 + 0x1c) = *(int *)(*plVar6 + 0x1c) + 1;
            } while (plVar7 != plVar9 + iVar2);
          }
        }
      }
      param_2 = param_2 >> 1;
    } while ((param_2 != 0) && (lVar4 = lVar4 + 1, lVar4 < *(int *)(param_1 + 0x20)));
  }
  return;
}


