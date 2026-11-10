/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a37a8; name: FUN_031a37a8
 */


void FUN_031a37a8(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  
  iVar6 = *(int *)(param_1 + 0x1e0);
  if (0 < iVar6) {
    lVar5 = *(long *)(param_1 + 0x1a0);
    iVar4 = 0;
    iVar9 = *(int *)(param_1 + 0x118);
    do {
      if (0 < iVar9) {
        lVar7 = 0;
        do {
          lVar1 = param_1 + lVar7 * 8;
          pbVar8 = (byte *)(lVar1 + 0x19);
          if (*pbVar8 != 0) {
            uVar10 = 0;
            puVar11 = (undefined1 *)(*(int *)(param_1 + lVar7 * 4 + 0x11c) + lVar5);
            do {
              switch(*(undefined1 *)(lVar1 + 0x18)) {
              case 3:
              case 4:
              case 9:
                puVar13 = puVar11 + 1;
                lVar14 = 2;
                puVar12 = puVar11;
                break;
              case 5:
              case 6:
              case 7:
              case 8:
              case 10:
                uVar2 = *puVar11;
                *puVar11 = puVar11[3];
                puVar13 = puVar11 + 2;
                puVar11[3] = uVar2;
                lVar14 = 4;
                puVar12 = puVar11 + 1;
                break;
              case 0xb:
                uVar2 = *puVar11;
                *puVar11 = puVar11[3];
                puVar11[3] = uVar2;
                uVar2 = puVar11[1];
                puVar11[1] = puVar11[2];
                puVar11[2] = uVar2;
                uVar2 = puVar11[4];
                puVar11[4] = puVar11[7];
                puVar11[7] = uVar2;
                uVar2 = puVar11[5];
                puVar11[5] = puVar11[6];
                puVar11[6] = uVar2;
                uVar2 = puVar11[8];
                puVar11[8] = puVar11[0xb];
                puVar11[0xb] = uVar2;
                uVar2 = puVar11[9];
                puVar11[9] = puVar11[10];
                uVar3 = puVar11[0xc];
                puVar11[10] = uVar2;
                puVar11[0xc] = puVar11[0xf];
                puVar13 = puVar11 + 0xe;
                puVar11[0xf] = uVar3;
                lVar14 = 0x10;
                puVar12 = puVar11 + 0xd;
                break;
              default:
                goto switchD_031a3814_default;
              }
              uVar2 = *puVar12;
              puVar11 = puVar11 + lVar14;
              *puVar12 = *puVar13;
              *puVar13 = uVar2;
switchD_031a3814_default:
              uVar10 = uVar10 + 1;
            } while (uVar10 < *pbVar8);
            iVar9 = *(int *)(param_1 + 0x118);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar9);
        iVar6 = *(int *)(param_1 + 0x1e0);
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + *(int *)(param_1 + 0x1b0);
    } while (iVar4 < iVar6);
  }
  return;
}


