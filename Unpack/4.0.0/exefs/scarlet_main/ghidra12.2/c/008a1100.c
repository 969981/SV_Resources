/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a1100; name: FUN_008a1100
 */


uint FUN_008a1100(long param_1,long *param_2,uint *param_3,long param_4)

{
  long lVar1;
  byte *pbVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  
  uVar10 = *(uint *)(param_1 + 0x14);
  uVar6 = uVar10 & 3;
  switch(uVar6) {
  case 0:
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf;
    goto LAB_008a137c;
  case 1:
    lVar11 = *(long *)(param_1 + 0x18);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0x10;
    uVar12 = *(uint *)(param_1 + 0x10);
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = 0;
    break;
  case 2:
    uVar12 = *(uint *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x18);
    lVar1 = ((ulong)(uVar12 >> 8) & 0xc) + ((ulong)(uVar12 >> 2) & 3) * 0x14 +
            ((ulong)(uVar12 >> 0xc) & 1) * 0xc +
            (((ulong)(uVar12 << 4) & 0x30) + ((ulong)uVar12 & 0x30) | (ulong)(uVar12 >> 6) & 8);
    if ((uVar10 & 0x1c0) != 0) {
      pbVar2 = (byte *)(lVar11 + lVar1);
      uVar8 = uVar10 >> 6 & 7;
      uVar7 = uVar8;
      if (uVar8 < 2) {
        uVar7 = 1;
      }
      if ((*pbVar2 - 0xb < 3) ||
         ((1 < uVar8 &&
          ((pbVar2[4] - 0xb < 3 ||
           ((uVar7 != 2 &&
            ((pbVar2[8] - 0xb < 3 ||
             ((uVar7 != 3 &&
              ((pbVar2[0xc] - 0xb < 3 ||
               ((uVar7 != 4 &&
                ((pbVar2[0x10] - 0xb < 3 ||
                 ((uVar7 != 5 &&
                  ((pbVar2[0x14] - 0xb < 3 || ((uVar7 != 6 && (pbVar2[0x18] - 0xb < 3)))))))))))))))
             ))))))))) {
        uVar7 = 0;
        uVar9 = 0;
        uVar8 = 0;
        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0xd0;
        break;
      }
    }
    uVar7 = 0;
    uVar9 = 0;
    uVar8 = 0;
    *(byte *)(param_1 + 0x48) =
         (*(byte *)(param_1 + 0x48) & 0xf | *(char *)(lVar11 + lVar1) << 4) + 0x20;
    break;
  case 3:
    uVar12 = *(uint *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + 0x18);
    pbVar2 = (byte *)(lVar11 + ((ulong)(uVar12 >> 8) & 0xc) + ((ulong)(uVar12 >> 2) & 3) * 0x14 +
                               ((ulong)(uVar12 >> 0xc) & 1) * 0xc +
                               (((ulong)(uVar12 << 4) & 0x30) + ((ulong)uVar12 & 0x30) |
                               (ulong)(uVar12 >> 6) & 8));
    uVar9 = (uint)*pbVar2;
    uVar8 = (uint)pbVar2[4];
    uVar7 = 1;
  }
  lVar11 = lVar11 + (ulong)((uVar12 & 3) * 0x10 + (uVar12 >> 2 & 3) * 0x14);
  uVar12 = uVar6;
  if ((uVar10 & 3) < 2) {
    uVar12 = 1;
  }
  if (*(byte *)(lVar11 + 1) - 5 < 2) {
LAB_008a1330:
    uVar7 = 1;
    uVar10 = 2;
    if (*(char *)(lVar11 + 1) == '\a') goto LAB_008a1374;
LAB_008a1360:
    if ((1 < uVar6) &&
       ((*(char *)(lVar11 + 0x11) == '\a' || ((uVar12 != 2 && (*(char *)(lVar11 + 0x21) == '\a')))))
       ) goto LAB_008a1374;
  }
  else {
    if (uVar6 < 2) {
LAB_008a1350:
      uVar10 = 0;
      cVar4 = *(char *)(lVar11 + 1);
    }
    else {
      if (*(byte *)(lVar11 + 0x11) - 5 < 2) goto LAB_008a1330;
      if (uVar12 == 2) goto LAB_008a1350;
      uVar13 = (uint)(*(byte *)(lVar11 + 0x21) - 5 < 2);
      uVar10 = uVar13 << 1;
      uVar7 = uVar13 | uVar7;
      cVar4 = *(char *)(lVar11 + 1);
    }
    if (cVar4 != '\a') goto LAB_008a1360;
LAB_008a1374:
    uVar10 = uVar10 | 8;
    uVar7 = 1;
  }
LAB_008a137c:
  lVar11 = *(long *)(param_4 + 200);
  if (*(long *)(param_4 + 0xc0) == 0 && lVar11 == 0) {
LAB_008a143c:
    uVar13 = 0;
  }
  else {
    lVar1 = *(long *)(param_4 + 0xc0);
    if (lVar11 != 0) {
      lVar1 = lVar11;
    }
    if (*(char *)(lVar1 + 0x16) != '\x03') goto LAB_008a143c;
    uVar12 = *(uint *)(lVar1 + 0x10);
    uVar14 = (ulong)*(ushort *)(lVar1 + 0xc + (ulong)uVar12 + 2);
    if (uVar14 == 0) goto LAB_008a143c;
    uVar13 = 0;
    piVar15 = (int *)(lVar1 + (ulong)uVar12 + 0x10);
    do {
      piVar3 = (int *)(lVar1 + 0xc + (ulong)(*piVar15 + uVar12));
      if (*piVar3 == 6) {
        bVar5 = *(byte *)(piVar3 + 1);
        if ((bVar5 & 1) == 0) {
          uVar13 = uVar13 | 1;
        }
        else {
          uVar13 = uVar13 | (uint)*(byte *)((long)piVar3 + 5) << 6 | 3;
        }
        if ((bVar5 >> 3 & 1) != 0) {
          uVar13 = uVar13 | (uint)*(byte *)((long)piVar3 + 9) << 8 | 4;
        }
        if ((bVar5 >> 2 & 1) != 0) {
          uVar13 = uVar13 | (uint)*(byte *)(piVar3 + 2) << 10 | 8;
        }
        uVar13 = (bVar5 & 2) << 3 | (bVar5 >> 4 & 1) << 5 | uVar13;
      }
      piVar15 = piVar15 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  if (uVar13 != 0) {
    uVar10 = uVar10 | 4;
  }
  if (uVar10 == 0 && uVar13 == 0) {
    lVar11 = 2;
    *param_3 = uVar9;
    param_3[1] = uVar8;
  }
  else {
    if (uVar6 == 3) {
      *param_3 = uVar9;
      param_3[1] = uVar8;
      param_3[2] = uVar10;
      *param_2 = 3;
    }
    else {
      *param_3 = (uint)(*(byte *)(param_1 + 0x48) >> 4);
      param_3[1] = 0;
      param_3[2] = uVar10 | 1;
      *param_2 = 3;
    }
    if (uVar13 == 0) goto LAB_008a14b4;
    param_3[3] = uVar13;
    lVar11 = *param_2 + 1;
  }
  *param_2 = lVar11;
LAB_008a14b4:
  return (uint)(uVar13 == 0) & (uVar7 ^ 1);
}


