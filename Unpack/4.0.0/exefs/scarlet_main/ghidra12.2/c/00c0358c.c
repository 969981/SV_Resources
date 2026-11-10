/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c0358c; name: FUN_00c0358c
 */


int FUN_00c0358c(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  
  iVar5 = 0;
  plVar14 = (long *)*param_1;
  lVar12 = 0;
  lVar13 = 0;
  if (plVar14 == (long *)0x0) goto LAB_00c035e8;
  do {
    uVar8 = (ulong)(plVar14[1] - *plVar14) >> 4;
    while( true ) {
      if ((int)uVar8 <= lVar13) {
        return iVar5;
      }
      lVar10 = *plVar14;
      lVar1 = lVar10 + lVar12;
      switch(*(undefined4 *)(lVar1 + 4)) {
      case 0:
        uVar11 = *(uint *)(lVar10 + lVar12) << 3;
        if (uVar11 < 0x80) {
          iVar15 = 1;
        }
        else if (uVar11 < 0x4000) {
          iVar15 = 2;
        }
        else if (uVar11 < 0x200000) {
          iVar15 = 3;
        }
        else {
          iVar15 = 4;
          if ((*(uint *)(lVar10 + lVar12) & 0x1fffffff) >> 0x19 != 0) {
            iVar15 = 5;
          }
        }
        uVar8 = *(ulong *)(lVar1 + 8);
        if (uVar8 >> 0x23 == 0) {
          if (uVar8 < 0x80) {
            iVar7 = 1;
          }
          else if (uVar8 < 0x4000) {
            iVar7 = 2;
          }
          else if (uVar8 < 0x200000) {
            iVar7 = 3;
          }
          else {
            iVar7 = 4;
            if (uVar8 >> 0x1c != 0) {
              iVar7 = 5;
            }
          }
        }
        else if (uVar8 >> 0x2a == 0) {
          iVar7 = 6;
        }
        else if (uVar8 >> 0x31 == 0) {
          iVar7 = 7;
        }
        else if (uVar8 >> 0x38 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = 9;
          if ((long)uVar8 < 0) {
            iVar7 = 10;
          }
        }
        iVar5 = iVar15 + iVar5 + iVar7;
        break;
      case 1:
        uVar11 = *(uint *)(lVar10 + lVar12) << 3 | 5;
        if (uVar11 < 0x80) {
          iVar15 = 1;
        }
        else if (uVar11 < 0x4000) {
          iVar15 = 2;
        }
        else if (uVar11 < 0x200000) {
          iVar15 = 3;
        }
        else {
          iVar15 = 4;
          if ((*(uint *)(lVar10 + lVar12) & 0x1fffffff) >> 0x19 != 0) {
            iVar15 = 5;
          }
        }
        iVar5 = iVar5 + iVar15 + 4;
        break;
      case 2:
        uVar11 = *(uint *)(lVar10 + lVar12) << 3 | 1;
        iVar15 = 1;
        if (0x7f < uVar11) {
          if (uVar11 < 0x4000) {
            iVar15 = 2;
          }
          else if (uVar11 < 0x200000) {
            iVar15 = 3;
          }
          else {
            iVar15 = 4;
            if ((*(uint *)(lVar10 + lVar12) & 0x1fffffff) >> 0x19 != 0) {
              iVar15 = 5;
            }
          }
        }
        iVar5 = iVar5 + iVar15 + 8;
        break;
      case 3:
        uVar11 = *(uint *)(lVar10 + lVar12) << 3 | 2;
        pbVar9 = *(byte **)(lVar1 + 8);
        iVar15 = 4;
        if ((*(uint *)(lVar10 + lVar12) & 0x1fffffff) >> 0x19 != 0) {
          iVar15 = 5;
        }
        iVar7 = 3;
        if (0x1fffff < uVar11) {
          iVar7 = iVar15;
        }
        iVar15 = 2;
        if (0x3fff < uVar11) {
          iVar15 = iVar7;
        }
        iVar7 = 1;
        if (0x7f < uVar11) {
          iVar7 = iVar15;
        }
        bVar4 = *pbVar9;
        if ((bVar4 & 1) == 0) {
          uVar11 = (uint)(bVar4 >> 1);
        }
        else {
          uVar11 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        if (uVar11 < 0x80) {
          iVar15 = 1;
        }
        else {
          iVar15 = 4;
          if (uVar11 >> 0x1c != 0) {
            iVar15 = 5;
          }
          iVar6 = 3;
          if (0x1fffff < uVar11) {
            iVar6 = iVar15;
          }
          iVar15 = 2;
          if (0x3fff < uVar11) {
            iVar15 = iVar6;
          }
        }
        if ((bVar4 & 1) == 0) {
          uVar11 = (uint)(bVar4 >> 1);
        }
        else {
          uVar11 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        iVar5 = iVar7 + iVar5 + iVar15 + uVar11;
        break;
      case 4:
        uVar3 = *(uint *)(lVar10 + lVar12);
        uVar11 = uVar3 << 3 | 3;
        iVar15 = 4;
        if ((uVar3 & 0x1fffffff) >> 0x19 != 0) {
          iVar15 = 5;
        }
        iVar7 = 3;
        if (0x1fffff < uVar11) {
          iVar7 = iVar15;
        }
        iVar15 = 2;
        if (0x3fff < uVar11) {
          iVar15 = iVar7;
        }
        iVar7 = 1;
        if (0x7f < uVar11) {
          iVar7 = iVar15;
        }
        iVar6 = FUN_00c0358c(*(undefined8 *)(lVar1 + 8));
        uVar11 = uVar3 << 3 | 4;
        iVar15 = 4;
        if ((uVar3 & 0x1fffffff) >> 0x19 != 0) {
          iVar15 = 5;
        }
        iVar2 = 3;
        if (0x1fffff < uVar11) {
          iVar2 = iVar15;
        }
        iVar15 = 2;
        if (0x3fff < uVar11) {
          iVar15 = iVar2;
        }
        iVar2 = 1;
        if (0x7f < uVar11) {
          iVar2 = iVar15;
        }
        iVar5 = iVar7 + iVar5 + iVar6 + iVar2;
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
      if (plVar14 != (long *)0x0) break;
LAB_00c035e8:
      uVar8 = 0;
    }
  } while( true );
}


