/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a90fc; name: FUN_030a90fc
 */


long FUN_030a90fc(long param_1,uint *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  ulong uVar12;
  
  iVar10 = *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4);
  iVar6 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar10 == -1) {
    iVar10 = *(int *)(param_1 + 0x58);
    *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4) = iVar10;
    iVar5 = *(int *)(param_1 + 0x58);
    lVar7 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar5) {
      FUN_030a9570(param_1 + 0x50,lVar7 + 1);
      iVar5 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = (int)(lVar7 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar5 * 8) = 0xffffffff;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x50) + (long)iVar10 * 8);
  piVar11 = piVar1 + 1;
  if (*piVar11 == 0) {
    iVar10 = *(int *)(param_1 + 0x68);
    lVar7 = (long)iVar10 + 1;
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) <= iVar10) {
      FUN_030a9958(param_1 + 0x60,lVar7);
    }
    *(int *)(param_1 + 0x68) = (int)lVar7;
    lVar7 = *(long *)(param_1 + 0x60) + (long)iVar10 * 8;
    *piVar11 = *piVar11 + 1;
    *piVar1 = iVar3 + iVar6;
  }
  else {
    iVar3 = (*piVar1 + *piVar11) - *(int *)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x68);
    plVar2 = (long *)(param_1 + 0x60);
    if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) <= iVar6) {
      FUN_030a9958(plVar2,(long)iVar6 + 1);
    }
    lVar7 = *plVar2;
    if (0 < iVar6 - iVar3) {
      lVar7 = lVar7 + (long)iVar3 * 8;
      FUN_031d0240(lVar7 + 8,lVar7,(ulong)(uint)(iVar6 - iVar3) << 3);
      lVar7 = *plVar2;
    }
    *(int *)(param_1 + 0x68) = (int)((long)iVar6 + 1);
    lVar7 = lVar7 + (long)iVar3 * 8;
    *piVar11 = *piVar11 + 1;
    iVar6 = *(int *)(param_1 + 0x20);
    if (0 < iVar6) {
      uVar12 = 0;
      do {
        if (uVar12 != *param_2) {
          if ((*(int *)(param_1 + 0x48) == 0) ||
             (iVar10 = *(int *)(*(long *)(param_1 + 0x40) + uVar12 * 4), iVar10 == -1)) {
            iVar10 = -1;
          }
          else {
            iVar10 = (int)*(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar10 * 8);
          }
          if (iVar3 <= iVar10 - *(int *)(param_1 + 0x30)) {
            uVar4 = *(uint *)(*(long *)(param_1 + 0x40) + uVar12 * 4);
            if (uVar4 == 0xffffffff) {
              uVar4 = *(uint *)(param_1 + 0x58);
              *(uint *)(*(long *)(param_1 + 0x40) + uVar12 * 4) = uVar4;
              iVar6 = *(int *)(param_1 + 0x58);
              lVar8 = (long)iVar6;
              if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar6) {
                FUN_030a9570(param_1 + 0x50,lVar8 + 1);
                iVar6 = *(int *)(param_1 + 0x58);
              }
              *(int *)(param_1 + 0x58) = (int)(lVar8 + 1);
              *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar6 * 8) = 0xffffffff;
            }
            uVar9 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
            *(int *)(*(long *)(param_1 + 0x50) + uVar9) =
                 *(int *)(*(long *)(param_1 + 0x50) + uVar9) + 1;
            iVar6 = *(int *)(param_1 + 0x20);
          }
        }
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)iVar6);
    }
  }
  return lVar7;
}


