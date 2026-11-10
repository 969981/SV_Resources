/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a933c; name: FUN_030a933c
 */


void FUN_030a933c(long param_1,uint *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  iVar13 = *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4);
  if (iVar13 == -1) {
    iVar13 = *(int *)(param_1 + 0x58);
    *(int *)(*(long *)(param_1 + 0x40) + (long)(int)*param_2 * 4) = iVar13;
    iVar5 = *(int *)(param_1 + 0x58);
    lVar7 = (long)iVar5;
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar5) {
      FUN_030a9570(param_1 + 0x50,lVar7 + 1);
      iVar5 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = (int)(lVar7 + 1);
    *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar5 * 8) = 0xffffffff;
  }
  lVar7 = *(long *)(param_1 + 0x50);
  piVar10 = (int *)(lVar7 + (long)iVar13 * 8 + 4);
  if (*piVar10 + -1 == 0) {
    *piVar10 = 0;
    *(undefined4 *)(lVar7 + (long)iVar13 * 8) = 0xffffffff;
  }
  else {
    *piVar10 = *piVar10 + -1;
  }
  iVar13 = *(int *)(param_1 + 0x30);
  iVar5 = *param_3;
  iVar6 = *(int *)(param_1 + 0x68) + -1;
  uVar3 = iVar6 - (iVar5 - iVar13);
  *(int *)(param_1 + 0x68) = iVar6;
  if (uVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x60);
    uVar12 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) - 1;
    uVar14 = (uVar12 >> 2) + 1;
    if (uVar12 < 0xc) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      puVar8 = (undefined4 *)(lVar7 + ((long)iVar5 - (long)iVar13) * 8 + 0xc);
      do {
        uVar1 = puVar8[-1];
        uVar2 = *puVar8;
        uVar12 = uVar12 + 4;
        puVar8[-1] = puVar8[1];
        *puVar8 = puVar8[2];
        puVar8[-3] = uVar1;
        puVar8[-2] = uVar2;
        puVar8 = puVar8 + 4;
      } while ((uVar14 & 0x7ffffffffffffffc) != uVar12);
    }
    if (((uint)uVar14 >> 1 & 1) != 0) {
      lVar11 = (uVar14 >> 1 & 1) * -2;
      puVar8 = (undefined4 *)(lVar7 + ((long)iVar5 - (long)iVar13) * 8 + uVar12 * 4 + 8);
      do {
        puVar8[-2] = *puVar8;
        puVar8 = puVar8 + 1;
        bVar4 = lVar11 != -1;
        lVar11 = lVar11 + 1;
      } while (bVar4);
    }
  }
  iVar6 = *(int *)(param_1 + 0x20);
  if (0 < iVar6) {
    uVar14 = 0;
    do {
      if (uVar14 != *param_2) {
        if ((*(int *)(param_1 + 0x48) == 0) ||
           (iVar9 = *(int *)(*(long *)(param_1 + 0x40) + uVar14 * 4), iVar9 == -1)) {
          iVar9 = -1;
        }
        else {
          iVar9 = (int)*(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar9 * 8);
        }
        if (iVar5 - iVar13 < iVar9 - *(int *)(param_1 + 0x30)) {
          uVar3 = *(uint *)(*(long *)(param_1 + 0x40) + uVar14 * 4);
          if (uVar3 == 0xffffffff) {
            uVar3 = *(uint *)(param_1 + 0x58);
            *(uint *)(*(long *)(param_1 + 0x40) + uVar14 * 4) = uVar3;
            iVar6 = *(int *)(param_1 + 0x58);
            lVar7 = (long)iVar6;
            if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) <= iVar6) {
              FUN_030a9570(param_1 + 0x50,lVar7 + 1);
              iVar6 = *(int *)(param_1 + 0x58);
            }
            *(int *)(param_1 + 0x58) = (int)(lVar7 + 1);
            *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)iVar6 * 8) = 0xffffffff;
          }
          uVar12 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
          *(int *)(*(long *)(param_1 + 0x50) + uVar12) =
               *(int *)(*(long *)(param_1 + 0x50) + uVar12) + -1;
          iVar6 = *(int *)(param_1 + 0x20);
        }
      }
      uVar14 = uVar14 + 1;
    } while ((long)uVar14 < (long)iVar6);
  }
  return;
}


