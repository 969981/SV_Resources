/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003abbb0; name: FUN_003abbb0
 */


long FUN_003abbb0(int *param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar9 = FUN_0043c2a0();
  if ((*(byte *)(*(long *)(param_1 + 0x154) + 0x1e) & 3) == 0) {
    if (((uint)param_1[0x1a5] >> 0x16 & 1) != 0) {
      if ((((((uint)param_1[0x1a5] >> 0x15 & 1) != 0) && (iVar6 = FUN_0047e430(param_2), 0 < iVar6))
          && (lVar12 = FUN_0047e450(param_2,0), *(int *)(lVar12 + 0x24) == 0x80000)) &&
         (iVar6 = FUN_0047e430(param_3), 0 < iVar6)) {
        iVar7 = 0;
LAB_003abf2c:
        lVar12 = FUN_0047e450(param_3,iVar7);
        if (*(int *)(lVar12 + 0x24) != 0x80000) goto code_r0x003abf44;
        lVar11 = FUN_0047dcf0(0,iVar6);
        lVar13 = lVar11;
        if (lVar11 != 0) {
          FUN_0047e2f0(lVar11,lVar12);
          iVar7 = iVar7 + 1;
          if (iVar7 < iVar6) {
            do {
              lVar12 = FUN_0047e450(param_3,iVar7);
              if (*(int *)(lVar12 + 0x24) == 0x80000) {
                FUN_0047e2f0(lVar11,lVar12);
              }
              iVar7 = iVar7 + 1;
            } while (iVar6 != iVar7);
          }
          iVar7 = 0;
          do {
            lVar12 = FUN_0047e450(param_3,iVar7);
            if (*(int *)(lVar12 + 0x24) != 0x80000) {
              FUN_0047e2f0(lVar11,lVar12);
            }
            iVar7 = iVar7 + 1;
          } while (iVar6 != iVar7);
          goto LAB_003abbf8;
        }
        goto LAB_003abbf4;
      }
      goto LAB_003abbf0;
    }
    lVar11 = param_2;
    lVar13 = 0;
    param_2 = param_3;
  }
  else {
LAB_003abbf0:
    lVar13 = 0;
LAB_003abbf4:
    lVar11 = param_3;
  }
LAB_003abbf8:
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
      (iVar6 = **(int **)(param_1 + 2), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
    if ((((((*(long *)(param_1 + 0x192) != 0) &&
           ((lVar12 = *(long *)(param_1 + 0x154), *(long *)(lVar12 + 0x20) == 0 ||
            (*(long *)(lVar12 + 0x28) == 0)))) &&
          ((*(long *)(lVar12 + 0x48) == 0 || (*(long *)(lVar12 + 0x50) == 0)))) &&
         (((*(long *)(lVar12 + 0x70) == 0 || (*(long *)(lVar12 + 0x78) == 0)) &&
          (((*(long *)(lVar12 + 0x98) == 0 || (*(long *)(lVar12 + 0xa0) == 0)) &&
           ((*(long *)(lVar12 + 0xc0) == 0 || (*(long *)(lVar12 + 200) == 0)))))))) &&
        ((*(long *)(lVar12 + 0xe8) == 0 || (*(long *)(lVar12 + 0xf0) == 0)))) &&
       ((((*(long *)(lVar12 + 0x110) == 0 || (*(long *)(lVar12 + 0x118) == 0)) &&
         ((*(long *)(lVar12 + 0x138) == 0 || (*(long *)(lVar12 + 0x140) == 0)))) &&
        ((*(long *)(lVar12 + 0x160) == 0 || (*(long *)(lVar12 + 0x168) == 0)))))) {
      bVar3 = false;
      goto LAB_003abcd8;
    }
  }
  else {
    FUN_003d98d0(param_1);
    FUN_003b4cf0(param_1);
  }
  bVar3 = true;
LAB_003abcd8:
  iVar6 = FUN_0047e430(lVar11);
  if (iVar6 < 1) {
    lVar12 = 0;
  }
  else {
    lVar15 = 0;
    uVar14 = 0;
    uVar16 = 0;
    iVar6 = 0;
    do {
      lVar12 = FUN_0047e450(lVar11,iVar6);
      iVar7 = *param_1;
      if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) {
        if ((*(int *)(lVar12 + 0x2c) <= iVar7) && (iVar7 <= *(int *)(lVar12 + 0x30))) {
          iVar7 = **(int **)(param_1 + 2);
          if ((iVar7 < 0x304) || (iVar7 == 0x10000)) goto LAB_003abda0;
          goto LAB_003abe04;
        }
      }
      else {
        iVar8 = 0xff00;
        if (iVar7 != 0x100) {
          iVar8 = iVar7;
        }
        iVar7 = 0xff00;
        if (*(int *)(lVar12 + 0x34) != 0x100) {
          iVar7 = *(int *)(lVar12 + 0x34);
        }
        if (iVar8 <= iVar7) {
          iVar7 = 0xff00;
          if (*(int *)(lVar12 + 0x38) != 0x100) {
            iVar7 = *(int *)(lVar12 + 0x38);
          }
          if (iVar7 <= iVar8) {
LAB_003abda0:
            uVar2 = *(uint *)(lVar12 + 0x1c);
            uVar16 = (ulong)uVar2;
            uVar14 = (ulong)*(uint *)(lVar12 + 0x20);
            if (((uVar2 & 0x1c8) == 0) || (*(long *)(param_1 + 0x192) != 0)) {
              bVar4 = ((*(ulong *)(param_1 + 0x24e) & 0x20 |
                       (ulong)*(uint *)(*(long *)(param_1 + 0x2a) + 0x334)) & uVar16) != 0;
              bVar5 = (((ulong)*(uint *)(*(long *)(param_1 + 0x2a) + 0x338) |
                       (*(ulong *)(param_1 + 0x24e) & 0x20) << 1) & uVar14) != 0;
              if ((uVar2 >> 2 & 1) == 0) {
                if (bVar4 && bVar5) goto LAB_003abe04;
              }
              else if ((bVar4 && bVar5) &&
                      (iVar7 = FUN_003d5e00(param_1,*(undefined4 *)(lVar12 + 0x18)), iVar7 != 0)) {
LAB_003abe04:
                iVar7 = FUN_0047e200(param_2,lVar12);
                if (-1 < iVar7) {
                  iVar8 = FUN_003af490(param_1,0x10002,*(undefined4 *)(lVar12 + 0x44),0,lVar12);
                  if (iVar8 != 0) {
                    if (((((uint)uVar16 >> 2 & 1) == 0) || (((uint)uVar14 >> 3 & 1) == 0)) ||
                       (*(char *)(*(long *)(param_1 + 0x2a) + 0x404) == '\0')) {
                      lVar12 = FUN_0047e450(param_2,iVar7);
                      if (bVar3) break;
                      lVar10 = FUN_003b00f0(*(undefined4 *)(lVar12 + 0x40));
                      lVar1 = lVar12;
                      if (lVar15 != 0) {
                        lVar1 = lVar15;
                      }
                      lVar15 = lVar1;
                      if (lVar10 == lVar9) break;
                    }
                    else if (lVar15 == 0) {
                      lVar15 = FUN_0047e450(param_2,iVar7);
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = FUN_0047e430(lVar11);
      lVar12 = lVar15;
    } while (iVar6 < iVar7);
  }
  FUN_0047db00(lVar13);
  return lVar12;
code_r0x003abf44:
  iVar7 = iVar7 + 1;
  if (iVar6 == iVar7) goto LAB_003abbf0;
  goto LAB_003abf2c;
}


