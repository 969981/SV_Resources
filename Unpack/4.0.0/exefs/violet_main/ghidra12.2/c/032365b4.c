/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032365b4; name: FUN_032365b4
 */


void FUN_032365b4(long *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[2] = -1;
  param_1[3] = 0;
  param_1[4] = -0x8000000000000000;
  param_1[5] = -1;
  lVar11 = *param_2;
  if (lVar11 != 0) {
    iVar12 = 0;
    do {
      lVar14 = lVar11 + (long)iVar12 * 0x60;
      lVar15 = (long)iVar12;
      iVar10 = -1;
      if (*(short *)(lVar14 + 4) != -2) {
        iVar10 = (int)param_1[2];
        if (iVar10 == -1) {
          iVar10 = (int)param_1[1];
          uVar13 = (ulong)iVar10;
          uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          if ((int)uVar3 <= iVar10) {
            FUN_0323dfb4(param_1,uVar13 + 1);
            uVar3 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
          }
          uVar4 = (ulong)uVar3;
          uVar9 = (uint)(uVar13 + 1);
          if ((int)uVar3 <= iVar10 || (int)uVar9 < (int)uVar3) {
            uVar9 = uVar3;
          }
          *(uint *)(param_1 + 1) = uVar9;
          if (iVar10 < (int)uVar3) {
            uVar5 = ~uVar13;
            uVar6 = (ulong)(uVar3 - iVar10) & 3;
            if ((uVar3 - iVar10 & 3) != 0) {
              lVar7 = uVar13 * 0x18 + 0x10;
              iVar8 = iVar10;
              do {
                iVar8 = iVar8 + 1;
                uVar13 = uVar13 + 1;
                uVar6 = uVar6 - 1;
                *(int *)(*param_1 + lVar7) = iVar8;
                lVar7 = lVar7 + 0x18;
              } while (uVar6 != 0);
            }
            if (2 < uVar5 + uVar4) {
              lVar7 = uVar13 * 0x18;
              do {
                iVar8 = (int)uVar13;
                *(int *)(*param_1 + lVar7 + 0x10) = iVar8 + 1;
                *(int *)(*param_1 + lVar7 + 0x28) = iVar8 + 2;
                uVar13 = uVar13 + 4;
                *(int *)(*param_1 + lVar7 + 0x40) = iVar8 + 3;
                lVar2 = *param_1 + lVar7;
                lVar7 = lVar7 + 0x60;
                *(int *)(lVar2 + 0x58) = (int)uVar13;
              } while (uVar4 != uVar13);
            }
          }
          *(undefined4 *)(*param_1 + uVar4 * 0x18 + -8) = 0xffffffff;
          *(int *)(param_1 + 2) = iVar10;
        }
        lVar7 = *param_1 + (long)iVar10 * 0x18;
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar7 + 0x10);
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)((long)param_1 + 0x14);
        *(int *)((long)param_1 + 0x14) = iVar10;
        *(undefined8 *)(*param_1 + (long)iVar10 * 0x18 + 8) = 0xffffffffffffffff;
        *(long *)(*param_1 + (long)iVar10 * 0x18) = lVar14;
      }
      iVar12 = iVar12 + 1;
      *(int *)(lVar11 + lVar15 * 0x60 + 0x14) = iVar10;
      if (iVar12 == 0x2a) {
        lVar11 = *(long *)(lVar11 + 0xfc0);
        iVar12 = 0;
      }
    } while ((lVar11 != 0) && (iVar12 < 0x2a));
    iVar12 = *(int *)((long)param_1 + 0x14);
    if (iVar12 != -1) {
      lVar11 = *param_1;
      do {
        lVar11 = *(long *)(lVar11 + (long)iVar12 * 0x18);
        uVar13 = (ulong)*(uint *)(lVar11 + 0x28);
        if (0 < (int)*(uint *)(lVar11 + 0x28)) {
          do {
            FUN_0323de40(param_1,iVar12,
                         *(undefined4 *)
                          (*(long *)(*(long *)(lVar11 + 0x20) + (uVar13 - 1) * 8) + 0x14));
            bVar1 = 1 < (long)uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar1);
        }
        uVar13 = (ulong)*(uint *)(lVar11 + 0x48);
        if (0 < (int)*(uint *)(lVar11 + 0x48)) {
          do {
            lVar14 = *(long *)(*(long *)(lVar11 + 0x40) + (uVar13 - 1) * 8);
            if (lVar14 != 0) {
              FUN_0323de40(param_1,iVar12,*(undefined4 *)(lVar14 + 0x14));
            }
            bVar1 = 1 < (long)uVar13;
            uVar13 = uVar13 - 1;
          } while (bVar1);
        }
        lVar11 = *param_1;
        iVar12 = *(int *)(lVar11 + (long)iVar12 * 0x18 + 0x10);
      } while (iVar12 != -1);
    }
  }
  return;
}


