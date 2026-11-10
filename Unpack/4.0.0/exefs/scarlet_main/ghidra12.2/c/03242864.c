/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03242864; name: FUN_03242864
 */


void FUN_03242864(undefined8 *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong *local_50;
  ulong *local_48;
  
  puVar14 = (ulong *)param_1[1];
  if (puVar14 == (ulong *)0x0) {
LAB_032429c8:
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = (int *)*param_1;
    if (puVar14 != (ulong *)PTR_DAT_047e6050) {
      puVar6 = puVar14;
      while( true ) {
        uVar9 = (uint)*puVar6;
        if ((uVar9 >> 0xd & 1) != 0) break;
        if (((*puVar6 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
        goto LAB_032428e4;
      }
      if (puVar6 != (ulong *)0x0) {
        uVar7 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
        local_48 = puVar6 + (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2;
        goto LAB_032428ec;
      }
LAB_032428e4:
      local_48 = (ulong *)0x0;
LAB_032428ec:
      local_50 = (ulong *)PTR_DAT_047e6050;
      while( true ) {
        uVar9 = (uint)*local_50;
        if ((uVar9 >> 0xd & 1) != 0) break;
        if (((*local_50 & 1) != 0) || (local_50 = (ulong *)local_50[1], local_50 == (ulong *)0x0))
        goto LAB_03242998;
      }
      if (local_50 != (ulong *)0x0) {
        uVar7 = CONCAT44(uVar9,uVar9) & 0x1fff00001fff;
        local_50 = local_50 +
                   (ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2;
        if (local_48 == (ulong *)0x0) goto LAB_0324299c;
        uVar7 = FUN_031dd354(&local_48,&local_50);
        if ((uVar7 & 1) != 0) goto LAB_03242948;
        goto LAB_032429c8;
      }
LAB_03242998:
      local_50 = (ulong *)0x0;
LAB_0324299c:
      puVar6 = (ulong *)PTR_DAT_047e6050;
      do {
        if ((*puVar6 & 1) != 0) break;
        puVar6 = (ulong *)puVar6[1];
      } while (puVar6 != (ulong *)0x0);
      puVar10 = puVar14;
      do {
        if (puVar10 == puVar6) goto LAB_03242948;
        puVar10 = (ulong *)puVar10[1];
      } while (puVar10 != (ulong *)0x0);
      goto LAB_032429c8;
    }
LAB_03242948:
    uVar7 = 0;
    do {
      uVar9 = (uint)*puVar14;
      if ((uVar9 >> 0x15 & 1) == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = CONCAT44(uVar9,uVar9) & 0x1fffff001fffff;
        uVar11 = puVar14[(ulong)(byte)(POPCOUNT((char)uVar11) + POPCOUNT((char)(uVar11 >> 8)) +
                                      POPCOUNT((char)(uVar11 >> 0x10))) + 2];
      }
      uVar7 = uVar11 | uVar7;
    } while (((*puVar14 & 1) == 0) && (puVar14 = (ulong *)puVar14[1], puVar14 != (ulong *)0x0));
    if ((uVar7 & 8) != 0) {
      piVar12 = (int *)0x0;
    }
  }
  if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) == 0) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,1);
  }
  if ((int)param_2[1] != 1) {
    *(undefined4 *)(param_2 + 1) = 1;
  }
  *(undefined1 *)*param_2 = 0;
  iVar3 = *piVar12;
  if (iVar3 < -0x7ffbfda9) {
    if (iVar3 < -0x7ffbfdf2) {
      if (iVar3 == -0x7ffbfec4) {
        lVar8 = 0xc;
      }
      else if (iVar3 == -0x7ffbfe00) {
        lVar8 = 1;
      }
      else {
        if (iVar3 != -0x7ffbfdfe) goto LAB_03242c84;
        lVar8 = 2;
      }
    }
    else if (iVar3 < -0x7ffbfdda) {
      if (iVar3 == -0x7ffbfdf2) {
        lVar8 = 3;
      }
      else {
        if (iVar3 != -0x7ffbfded) goto LAB_03242c84;
        lVar8 = 4;
      }
    }
    else if (iVar3 == -0x7ffbfdda) {
      lVar8 = 5;
    }
    else {
      if (iVar3 != -0x7ffbfdce) goto LAB_03242c84;
      lVar8 = 6;
    }
  }
  else if (iVar3 < -0x7ffbbfff) {
    if (iVar3 < -0x7ffbfd49) {
      if (iVar3 == -0x7ffbfda9) {
        lVar8 = 7;
      }
      else {
        if (iVar3 != -0x7ffbfd88) goto LAB_03242c84;
        lVar8 = 8;
      }
    }
    else if (iVar3 == -0x7ffbfd49) {
      lVar8 = 9;
    }
    else {
      if (iVar3 != -0x7ffbfb70) goto LAB_03242c84;
      lVar8 = 10;
    }
  }
  else if (iVar3 < -0x7ffb0001) {
    if (iVar3 == -0x7ffbbfff) {
      lVar8 = 0xe;
    }
    else {
      if (iVar3 != -0x7ffb7ffb) goto LAB_03242c84;
      lVar8 = 0xd;
    }
  }
  else if (iVar3 == -0x7ffb0001) {
    lVar8 = 0xb;
  }
  else {
    if (iVar3 != 0) {
LAB_03242c84:
      local_48 = (ulong *)CONCAT44(local_48._4_4_,iVar3);
      pcVar13 = "HK_SUCCESS_{:X8}";
      if (iVar3 < 0) {
        pcVar13 = "HK_E_{:X8}";
      }
      FUN_031c8b2c(param_2,pcVar13,PTR_DAT_047e5908,&local_48);
      return;
    }
    lVar8 = 0;
  }
  pcVar13 = (&PTR_s_HK_SUCCESS_046abaf0)[lVar8 * 3];
  sVar4 = strlen(pcVar13);
  iVar2 = (int)param_2[1];
  iVar3 = (int)((long)iVar2 + -1) + (int)sVar4;
  uVar9 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar5 = uVar9 - 1;
  iVar1 = iVar3;
  if (iVar5 <= iVar3) {
    iVar1 = iVar5;
  }
  if ((int)param_2[0x12] != 0) {
    iVar1 = iVar3;
  }
  iVar3 = iVar1 + 1;
  iVar5 = iVar2;
  if ((int)uVar9 <= iVar1) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar3);
    iVar5 = (int)param_2[1];
  }
  if ((iVar5 <= iVar1) || (iVar3 < iVar5)) {
    *(int *)(param_2 + 1) = iVar3;
  }
  *(undefined1 *)(*param_2 + (long)iVar1) = 0;
  memmove((void *)(*param_2 + (long)iVar2 + -1),pcVar13,(long)((int)param_2[1] - iVar2));
  return;
}


