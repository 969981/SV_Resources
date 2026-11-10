/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c6294; name: FUN_034c6294
 */


void FUN_034c6294(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    iVar2 = (int)param_1[1];
    uVar3 = iVar2 - 1U & param_3 & 0x3fffffff;
    puVar6 = (uint *)(lVar4 + (ulong)uVar3 * 8);
    iVar5 = 1 - uVar3;
    lVar8 = (long)iVar2 - (ulong)uVar3;
    do {
      if (lVar8 == 0) {
        return;
      }
      uVar3 = *puVar6;
      if (-1 < (int)uVar3) {
        return;
      }
      iVar5 = iVar5 + -1;
      puVar6 = puVar6 + 2;
      lVar8 = lVar8 + -1;
    } while (((uVar3 >> 0x1e & 1) != 0) || ((uVar3 & 0x3fffffff) != (param_3 & 0x3fffffff)));
    if (iVar5 != 1) {
      do {
        lVar8 = (long)-iVar5;
        if (*(long *)(param_1[4] + (ulong)*(uint *)(lVar4 + (long)-iVar5 * 8 + 4) * 8) == *param_2)
        {
          *(uint *)(lVar4 + lVar8 * 8) = *(uint *)(lVar4 + lVar8 * 8) | 0x40000000;
          iVar2 = *(int *)((long)param_1 + 0xc) + -1;
          *(int *)((long)param_1 + 0xc) = iVar2;
          uVar3 = (int)param_1[5] - 1;
          if (uVar3 == 0) goto LAB_034c64d4;
          lVar4 = *param_1;
          if (*(uint *)(param_1 + 3) == 0xffffffff) goto LAB_034c6448;
          if (lVar4 == 0) goto LAB_034c64d4;
          uVar9 = (ulong)*(uint *)(param_1 + 3) & 0x3fffffff;
          iVar5 = (int)param_1[1];
          uVar11 = iVar5 - 1 & uVar9;
          puVar6 = (uint *)(lVar4 + uVar11 * 8);
          iVar10 = 1 - (int)uVar11;
          lVar12 = (long)iVar5 - uVar11;
          goto LAB_034c63b8;
        }
        puVar6 = (uint *)(lVar4 + (lVar8 + 1) * 8);
        lVar8 = (long)iVar2 - (lVar8 + 1);
        do {
          if (lVar8 == 0) {
            return;
          }
          uVar3 = *puVar6;
          if (-1 < (int)uVar3) {
            return;
          }
          iVar5 = iVar5 + -1;
          puVar6 = puVar6 + 2;
          lVar8 = lVar8 + -1;
        } while ((uVar3 & 0x40000000) != 0 || ((uVar3 ^ param_3) & 0x3fffffff) != 0);
      } while (iVar5 != 1);
    }
  }
  return;
LAB_034c6448:
  if (lVar4 == 0) goto LAB_034c64d4;
  goto LAB_034c644c;
  while( true ) {
    uVar1 = *puVar6;
    if (-1 < (int)uVar1) goto LAB_034c644c;
    iVar10 = iVar10 + -1;
    puVar6 = puVar6 + 2;
    lVar12 = lVar12 + -1;
    if (((uVar1 >> 0x1e & 1) == 0) && ((uVar1 & 0x3fffffff) == (uint)uVar9)) break;
LAB_034c63b8:
    if (lVar12 == 0) goto LAB_034c6448;
  }
  while (iVar10 != 1) {
    lVar12 = (long)-iVar10;
    if (*(uint *)(lVar4 + (long)-iVar10 * 8 + 4) == uVar3) {
      *(undefined4 *)(param_1 + 3) = 0xffffffff;
      goto LAB_034c64b0;
    }
    puVar6 = (uint *)(lVar4 + (lVar12 + 1) * 8);
    lVar12 = (long)iVar5 - (lVar12 + 1);
    do {
      if ((lVar12 == 0) || (uVar1 = *puVar6, -1 < (int)uVar1)) goto LAB_034c644c;
      iVar10 = iVar10 + -1;
      puVar6 = puVar6 + 2;
      lVar12 = lVar12 + -1;
    } while ((uVar1 & 0x40000000) != 0 || ((uVar1 ^ param_3) & 0x3fffffff) != 0);
  }
LAB_034c644c:
  if ((iVar2 != 0) && (0 < (int)*(uint *)(param_1 + 1))) {
    lVar7 = 0;
    lVar12 = 0;
    puVar6 = (uint *)(lVar4 + 4);
    do {
      if ((puVar6[-1] >> 0x1e == 2) && (*puVar6 == uVar3)) {
        if ((int)lVar7 != 1) {
          lVar12 = lVar12 >> 0x20;
LAB_034c64b0:
          uVar1 = *(uint *)(lVar4 + lVar8 * 8 + 4);
          *(uint *)(lVar4 + lVar12 * 8 + 4) = uVar1;
          *(undefined8 *)(param_1[4] + (ulong)uVar1 * 8) =
               *(undefined8 *)(param_1[4] + (ulong)uVar3 * 8);
          uVar3 = (int)param_1[5] - 1;
        }
        break;
      }
      lVar7 = lVar7 + -1;
      lVar12 = lVar12 + 0x100000000;
      puVar6 = puVar6 + 2;
    } while (-lVar7 != (ulong)*(uint *)(param_1 + 1));
  }
LAB_034c64d4:
  *(uint *)(param_1 + 5) = uVar3;
  return;
}


