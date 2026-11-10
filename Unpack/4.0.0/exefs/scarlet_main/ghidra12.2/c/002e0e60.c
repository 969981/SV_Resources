/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e0e60; name: FUN_002e0e60
 */


undefined8 FUN_002e0e60(long *param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined **ppuVar10;
  size_t __n;
  ulong uVar11;
  short *psVar12;
  short *psVar13;
  char *pcVar14;
  long lVar15;
  uint local_6c;
  int local_68;
  int local_64;
  
  if ((param_2 >> 10 & 1) == 0) {
    return 2;
  }
  uVar11 = param_1[1];
  uVar5 = uVar11 - 2;
  if (uVar11 < 2) {
    return 2;
  }
  pcVar14 = (char *)*param_1;
  if (*pcVar14 != '\\') {
    return 2;
  }
  bVar1 = pcVar14[1];
  uVar9 = (uint)bVar1;
  local_6c = (uint)bVar1;
  if ((local_6c & 0xffffffdf) != 0x50) {
    return 2;
  }
  iVar4 = 1;
  if (bVar1 == 0x50) {
    iVar4 = -1;
  }
  psVar13 = (short *)(pcVar14 + 2);
  *param_1 = (long)psVar13;
  param_1[1] = uVar5;
  uVar7 = (undefined4)uVar5;
  if (3 < uVar5) {
    uVar7 = 4;
  }
  iVar3 = FUN_002eaaa0(psVar13,uVar7);
  if (iVar3 == 0) {
LAB_002e0f4c:
    *param_4 = 0xc;
    *(undefined8 *)(param_4 + 2) = 0;
    *(undefined8 *)(param_4 + 4) = 0;
  }
  else {
    iVar3 = FUN_002ea8f0(&local_6c,*param_1);
    if (0x10ffff < (int)local_6c) {
      uVar9 = 0xfffd;
      local_6c = 0xfffd;
      goto LAB_002e0f4c;
    }
    if ((iVar3 == 1) && (uVar9 = 0xfffd, local_6c == 0xfffd)) goto LAB_002e0f4c;
    *param_1 = *param_1 + (long)iVar3;
    param_1[1] = param_1[1] - (long)iVar3;
    uVar9 = local_6c;
    if (iVar3 == 0) {
      return 1;
    }
  }
  if (uVar9 == 0x7b) {
    uVar5 = FUN_002e9e04(param_1,0x7d,0);
    if (uVar5 == 0xffffffffffffffff) {
      pcVar8 = pcVar14;
      uVar5 = uVar11;
      do {
        if (uVar5 == 0) {
          *param_4 = 4;
          *(char **)(param_4 + 2) = pcVar14;
          *(ulong *)(param_4 + 4) = uVar11;
          return 1;
        }
        uVar7 = (undefined4)uVar5;
        if (3 < uVar5) {
          uVar7 = 4;
        }
        iVar4 = FUN_002eaaa0(pcVar8,uVar7);
        if (((iVar4 == 0) || (iVar4 = FUN_002ea8f0(&local_64,pcVar8), 0x10ffff < local_64)) ||
           ((iVar4 == 1 && (local_64 == 0xfffd)))) goto LAB_002e1238;
        pcVar8 = pcVar8 + iVar4;
        uVar5 = uVar5 - (long)iVar4;
      } while (-1 < iVar4);
    }
    else {
      psVar13 = (short *)*param_1;
      *param_1 = (long)((long)psVar13 + uVar5 + 1);
      param_1[1] = param_1[1] - (uVar5 + 1);
      uVar11 = uVar5;
      psVar12 = psVar13;
      do {
        if (uVar11 == 0) {
          lVar15 = *param_1;
          ppuVar10 = (undefined **)PTR_PTR_047cc908;
          goto joined_r0x002e1004;
        }
        uVar7 = (undefined4)uVar11;
        if (3 < uVar11) {
          uVar7 = 4;
        }
        iVar3 = FUN_002eaaa0(psVar12,uVar7);
        if (((iVar3 == 0) || (iVar3 = FUN_002ea8f0(&local_68,psVar12), 0x10ffff < local_68)) ||
           ((iVar3 == 1 && (local_68 == 0xfffd)))) {
LAB_002e1238:
          *param_4 = 0xc;
          *(undefined8 *)(param_4 + 2) = 0;
          *(undefined8 *)(param_4 + 4) = 0;
          return 1;
        }
        psVar12 = (short *)((long)psVar12 + (long)iVar3);
        uVar11 = uVar11 - (long)iVar3;
      } while (-1 < iVar3);
    }
    return 1;
  }
  lVar15 = *param_1;
  uVar5 = lVar15 - (long)psVar13;
  ppuVar10 = (undefined **)PTR_PTR_047cc908;
joined_r0x002e1004:
  PTR_PTR_047cc908 = (undefined *)ppuVar10;
  if (uVar5 == 0) {
    uVar5 = (ulong)*(uint *)PTR_DAT_047cc900;
    iVar3 = iVar4;
    if ((int)*(uint *)PTR_DAT_047cc900 < 1) goto LAB_002e11fc;
LAB_002e11d8:
    do {
      if ((*ppuVar10 == (char *)0x0) || (**ppuVar10 == '\0')) goto LAB_002e1160;
      uVar5 = uVar5 - 1;
      ppuVar10 = ppuVar10 + 6;
    } while (uVar5 != 0);
  }
  else {
    bVar2 = (char)*psVar13 == '^';
    __n = uVar5 - bVar2;
    psVar12 = (short *)((long)psVar13 + 1);
    if (!bVar2) {
      psVar12 = psVar13;
    }
    iVar3 = -iVar4;
    if (!bVar2) {
      iVar3 = iVar4;
    }
    if (__n == 3) {
      if ((psVar12 == (short *)&DAT_03bfabad) || (*psVar12 == 0x6e41 && (char)psVar12[1] == 'y')) {
        ppuVar10 = &PTR_DAT_04490ef8;
LAB_002e1198:
        FUN_002e1250(param_3,ppuVar10,iVar3,param_2);
        return 0;
      }
      uVar5 = (ulong)*(uint *)PTR_DAT_047cc900;
      if ((int)*(uint *)PTR_DAT_047cc900 < 1) goto LAB_002e11fc;
      __n = 3;
    }
    else {
      uVar5 = (ulong)*(uint *)PTR_DAT_047cc900;
      if ((int)*(uint *)PTR_DAT_047cc900 < 1) goto LAB_002e11fc;
      if (__n == 0) goto LAB_002e11d8;
    }
    do {
      psVar13 = (short *)*ppuVar10;
      if (psVar13 == (short *)0x0) {
        if (__n == 0) goto LAB_002e1144;
      }
      else {
        sVar6 = strlen((char *)psVar13);
        if (sVar6 == __n) {
LAB_002e1144:
          if ((psVar13 == psVar12) || (iVar4 = memcmp(psVar13,psVar12,__n), iVar4 == 0))
          goto LAB_002e1160;
        }
      }
      uVar5 = uVar5 - 1;
      ppuVar10 = ppuVar10 + 6;
    } while (uVar5 != 0);
  }
LAB_002e11fc:
  *param_4 = 4;
  *(char **)(param_4 + 2) = pcVar14;
  *(long *)(param_4 + 4) = lVar15 - (long)pcVar14;
  return 1;
LAB_002e1160:
  goto LAB_002e1198;
}


