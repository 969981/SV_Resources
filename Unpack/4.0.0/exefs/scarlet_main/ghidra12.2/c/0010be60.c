/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010be60; name: FUN_0010be60
 */


void FUN_0010be60(long param_1,uint *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte local_d4 [132];
  byte local_50 [64];
  
  uVar16 = param_2[4];
  uVar17 = (ulong)uVar16;
  puVar10 = *(uint **)(param_2 + 2);
  uVar15 = (ulong)*param_2;
  puVar11 = puVar10;
  if (uVar16 < 3) {
    puVar11 = puVar10 + 1;
    Hint_Prefetch(puVar10 + 0x100,0,0,0);
    uVar16 = uVar16 + 0x20;
    uVar15 = (ulong)*puVar10 << (uVar17 & 0x3f) | uVar15;
  }
  local_50[0] = 0x10;
  local_50[1] = 0x60;
  local_50[2] = 0xb0;
  local_50[3] = 2;
  uVar6 = (uint)uVar15 & 7;
  iVar12 = 0;
  uVar13 = 0;
  uVar15 = uVar15 >> 3;
  uVar16 = uVar16 - 3;
  iVar14 = uVar6 + 1;
  pbVar20 = local_50;
  pbVar18 = local_50 + 4;
  iVar19 = 1 << (ulong)uVar6;
  while( true ) {
    if (0 < (int)uVar13) {
      uVar17 = (ulong)uVar13;
      pbVar8 = local_d4;
      uVar7 = uVar15;
      puVar10 = puVar11;
      do {
        puVar11 = puVar10;
        if (uVar16 == 0) {
          puVar11 = puVar10 + 1;
          uVar7 = (ulong)*puVar10;
          uVar16 = 0x20;
        }
        uVar15 = uVar7 >> 1 & 0x7fffffff;
        uVar6 = (uint)uVar15;
        uVar16 = uVar16 - 1;
        if ((uVar7 & 1) != 0) {
          cVar3 = *(char *)(param_1 + (ulong)*pbVar8);
          iVar4 = -iVar19;
          if (-1 < cVar3) {
            iVar4 = iVar19;
          }
          *(char *)(param_1 + (ulong)*pbVar8) = cVar3 + (char)iVar4;
          if (iVar12 == param_3) goto LAB_0010c21c;
          iVar12 = iVar12 + 1;
        }
        pbVar8 = pbVar8 + 1;
        uVar17 = uVar17 - 1;
        uVar7 = uVar15;
        puVar10 = puVar11;
      } while (uVar17 != 0);
    }
    if (pbVar20 < pbVar18) break;
LAB_0010c1fc:
    uVar6 = (uint)uVar15;
    iVar19 = iVar19 >> 1;
    iVar14 = iVar14 + -1;
    if (iVar14 == 0) {
LAB_0010c21c:
      *(uint **)(param_2 + 2) = puVar11;
      *param_2 = uVar6;
      param_2[4] = uVar16;
      return;
    }
  }
  iVar4 = -iVar19;
  bVar2 = *pbVar20;
  pbVar8 = pbVar20;
  do {
    if (bVar2 == 0) {
LAB_0010bf60:
      pbVar8 = pbVar8 + 1;
    }
    else {
      uVar17 = uVar15;
      if (uVar16 == 0) {
        uVar17 = (ulong)*puVar11;
        uVar16 = 0x20;
        puVar11 = puVar11 + 1;
      }
      uVar15 = uVar17 >> 1 & 0x7fffffff;
      uVar16 = uVar16 - 1;
      if ((uVar17 & 1) == 0) goto LAB_0010bf60;
      switch(bVar2 & 3) {
      case 0:
        *pbVar8 = (bVar2 & 0xfc) + 0x11;
        break;
      case 1:
        bVar5 = bVar2 & 0xfc;
        *pbVar8 = bVar5 | 2;
        pbVar18[1] = bVar5 + 0x22;
        *pbVar18 = bVar5 + 0x12;
        pbVar18[2] = bVar2 + 0x30 & 0xfc | 2;
        pbVar18 = pbVar18 + 3;
        if (pbVar8 < pbVar18) goto LAB_0010bf6c;
        goto LAB_0010c1fc;
      case 2:
        *pbVar8 = 0;
        pbVar8 = pbVar8 + 1;
        break;
      case 3:
        local_d4[(int)uVar13] = bVar2 >> 2;
        if (uVar16 == 0) {
          uVar15 = (ulong)*puVar11;
          uVar16 = 0x20;
          puVar11 = puVar11 + 1;
        }
        uVar17 = uVar15 & 1;
        uVar15 = uVar15 >> 1;
        uVar6 = (uint)uVar15;
        uVar16 = uVar16 - 1;
        iVar1 = iVar19;
        if (uVar17 != 0) {
          iVar1 = iVar4;
        }
        *(char *)(param_1 + (ulong)(bVar2 >> 2)) = (char)iVar1;
        if (iVar12 != param_3) {
          uVar13 = uVar13 + 1;
          iVar12 = iVar12 + 1;
          *pbVar8 = 0;
          goto LAB_0010bf60;
        }
        goto LAB_0010c21c;
      }
      puVar10 = puVar11;
      if (uVar16 == 0) {
        puVar10 = puVar11 + 1;
        uVar15 = (ulong)*puVar11;
        uVar16 = 0x20;
      }
      uVar7 = (ulong)(bVar2 >> 2);
      uVar17 = uVar15 >> 1;
      uVar16 = uVar16 - 1;
      puVar11 = puVar10;
      if ((uVar15 & 1) == 0) {
        local_d4[(int)uVar13] = bVar2 >> 2;
        if (uVar16 == 0) {
          puVar11 = puVar10 + 1;
          uVar17 = (ulong)*puVar10;
          uVar16 = 0x20;
        }
        uVar15 = uVar17 & 1;
        uVar17 = uVar17 >> 1;
        uVar6 = (uint)uVar17;
        uVar16 = uVar16 - 1;
        iVar1 = iVar19;
        if (uVar15 != 0) {
          iVar1 = iVar4;
        }
        *(char *)(param_1 + uVar7) = (char)iVar1;
        if (iVar12 == param_3) goto LAB_0010c21c;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 1;
      }
      else {
        pbVar20 = pbVar20 + -1;
        *pbVar20 = bVar2 | 3;
      }
      puVar10 = puVar11;
      if (uVar16 == 0) {
        puVar10 = puVar11 + 1;
        uVar17 = (ulong)*puVar11;
        uVar16 = 0x20;
      }
      lVar9 = uVar7 + 1;
      uVar15 = uVar17 >> 1;
      uVar16 = uVar16 - 1;
      puVar11 = puVar10;
      if ((uVar17 & 1) == 0) {
        local_d4[(int)uVar13] = (byte)lVar9;
        if (uVar16 == 0) {
          puVar11 = puVar10 + 1;
          uVar15 = (ulong)*puVar10;
          uVar16 = 0x20;
        }
        uVar17 = uVar15 & 1;
        uVar15 = uVar15 >> 1;
        uVar6 = (uint)uVar15;
        uVar16 = uVar16 - 1;
        iVar1 = iVar19;
        if (uVar17 != 0) {
          iVar1 = iVar4;
        }
        *(char *)(param_1 + lVar9) = (char)iVar1;
        if (iVar12 == param_3) goto LAB_0010c21c;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 1;
      }
      else {
        pbVar20 = pbVar20 + -1;
        *pbVar20 = (byte)((int)lVar9 << 2) | 3;
      }
      puVar10 = puVar11;
      if (uVar16 == 0) {
        puVar10 = puVar11 + 1;
        uVar15 = (ulong)*puVar11;
        uVar16 = 0x20;
      }
      lVar9 = uVar7 + 2;
      uVar17 = uVar15 >> 1;
      uVar16 = uVar16 - 1;
      puVar11 = puVar10;
      if ((uVar15 & 1) == 0) {
        local_d4[(int)uVar13] = (byte)lVar9;
        if (uVar16 == 0) {
          puVar11 = puVar10 + 1;
          uVar17 = (ulong)*puVar10;
          uVar16 = 0x20;
        }
        uVar15 = uVar17 & 1;
        uVar17 = uVar17 >> 1;
        uVar6 = (uint)uVar17;
        uVar16 = uVar16 - 1;
        iVar1 = iVar19;
        if (uVar15 != 0) {
          iVar1 = iVar4;
        }
        *(char *)(param_1 + lVar9) = (char)iVar1;
        if (iVar12 == param_3) goto LAB_0010c21c;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 1;
      }
      else {
        pbVar20 = pbVar20 + -1;
        *pbVar20 = (byte)((int)lVar9 << 2) | 3;
      }
      puVar10 = puVar11;
      if (uVar16 == 0) {
        puVar10 = puVar11 + 1;
        uVar17 = (ulong)*puVar11;
        uVar16 = 0x20;
      }
      lVar9 = uVar7 + 3;
      uVar15 = uVar17 >> 1;
      uVar16 = uVar16 - 1;
      puVar11 = puVar10;
      if ((uVar17 & 1) == 0) {
        local_d4[(int)uVar13] = (byte)lVar9;
        if (uVar16 == 0) {
          puVar11 = puVar10 + 1;
          uVar15 = (ulong)*puVar10;
          uVar16 = 0x20;
        }
        uVar17 = uVar15 & 1;
        uVar15 = uVar15 >> 1;
        uVar6 = (uint)uVar15;
        uVar16 = uVar16 - 1;
        iVar1 = iVar19;
        if (uVar17 != 0) {
          iVar1 = iVar4;
        }
        *(char *)(param_1 + lVar9) = (char)iVar1;
        if (iVar12 == param_3) goto LAB_0010c21c;
        uVar13 = uVar13 + 1;
        iVar12 = iVar12 + 1;
      }
      else {
        pbVar20 = pbVar20 + -1;
        *pbVar20 = (byte)((int)lVar9 << 2) | 3;
      }
    }
    if (pbVar18 <= pbVar8) goto LAB_0010c1fc;
LAB_0010bf6c:
    bVar2 = *pbVar8;
  } while( true );
}


