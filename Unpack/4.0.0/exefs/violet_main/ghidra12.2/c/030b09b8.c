/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030b09b8; name: FUN_030b09b8
 */


void FUN_030b09b8(int param_1,long param_2,int param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  lVar7 = *(long *)(param_2 + 8);
  plVar1 = (long *)(lVar7 + (long)param_3 * 0x10);
  puVar12 = (uint *)(plVar1 + 1);
  uVar4 = *puVar12;
  if (uVar4 == 0) {
    if ((*(uint *)(lVar7 + (long)param_3 * 0x10 + 0xc) & 0x7fffffff) == 0) {
      FUN_030b5014(plVar1,1);
      lVar7 = (long)(int)*puVar12;
    }
    else {
      lVar7 = 0;
    }
    piVar6 = (int *)(*plVar1 + lVar7 * 8);
    *puVar12 = 1;
    *piVar6 = param_4;
  }
  else {
    piVar6 = (int *)*plVar1;
    if (*piVar6 == param_4) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar4 - 1;
      iVar11 = *(int *)((long)piVar6 +
                       (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3));
      if (iVar11 != param_4) {
        uVar14 = uVar4;
        if (param_4 <= iVar11) {
          if (param_4 < *piVar6) {
            uVar14 = 0;
          }
          else if ((int)uVar4 < 3) {
            uVar14 = uVar8;
          }
          else {
            uVar10 = 0;
            uVar13 = uVar8;
            do {
              iVar11 = uVar10 + uVar13;
              iVar2 = iVar11;
              if (iVar11 < 0) {
                iVar2 = iVar11 + 1;
              }
              uVar8 = iVar2 >> 1;
              iVar2 = *(int *)((long)piVar6 +
                              (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3));
              if (iVar2 == param_4) {
                if (1 < iVar11 + 3U) goto LAB_030b0a38;
                uVar14 = 0xffffffff;
                break;
              }
              uVar14 = uVar8;
              if (iVar2 < param_4) {
                uVar14 = uVar13;
                uVar10 = uVar8;
              }
              uVar13 = uVar14;
            } while (1 < (int)(uVar14 - uVar10));
          }
        }
        uVar8 = uVar4 - uVar14;
        if ((int)(*(uint *)(lVar7 + (long)param_3 * 0x10 + 0xc) & 0x7fffffff) <= (int)uVar4) {
          FUN_030b5014(plVar1,(long)(int)uVar4 + 1);
          piVar6 = (int *)*plVar1;
        }
        if (0 < (int)uVar8) {
          piVar9 = piVar6 + (long)(int)uVar14 * 2 + (ulong)(uVar8 - 1) * 2;
          uVar10 = uVar8 & 3;
          if (2 < uVar4 + ~uVar14) {
            iVar11 = -(uVar8 & 0xfffffffc);
            do {
              uVar3 = *(undefined8 *)piVar9;
              iVar11 = iVar11 + 4;
              *(undefined8 *)piVar9 = *(undefined8 *)(piVar9 + -2);
              *(undefined8 *)(piVar9 + 2) = uVar3;
              uVar3 = *(undefined8 *)(piVar9 + -4);
              *(undefined8 *)(piVar9 + -4) = *(undefined8 *)(piVar9 + -6);
              *(undefined8 *)(piVar9 + -2) = uVar3;
              piVar9 = piVar9 + -8;
            } while (iVar11 != 0);
          }
          piVar5 = piVar9 + 2;
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined8 *)piVar5 = *(undefined8 *)piVar9;
            piVar5 = piVar5 + -2;
            piVar9 = piVar9 + -2;
          }
        }
        piVar6[(long)(int)uVar14 * 2] = param_4;
        piVar6[(long)(int)uVar14 * 2 + 1] = param_1;
        *puVar12 = (uint)((long)(int)uVar4 + 1);
        return;
      }
    }
LAB_030b0a38:
    piVar6 = piVar6 + (long)(int)uVar8 * 2;
  }
  piVar6[1] = param_1;
  return;
}


