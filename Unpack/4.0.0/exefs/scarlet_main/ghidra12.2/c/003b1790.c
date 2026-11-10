/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b1790; name: FUN_003b1790
 */


/* WARNING: Removing unreachable block (ram,0x003b1ab8) */

undefined4
FUN_003b1790(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  byte *__s1;
  char *__s2;
  int *piVar13;
  size_t __n;
  undefined8 *puVar14;
  byte *__s1_00;
  undefined4 local_9c;
  int local_94;
  undefined8 local_80;
  undefined8 local_70;
  uint local_68;
  
  local_9c = 1;
LAB_003b17e0:
  uVar9 = (ulong)*param_1;
LAB_003b1818:
  bVar3 = false;
  uVar12 = 1;
  __s1 = param_1;
  switch(uVar9) {
  case 0:
    goto switchD_003b1844_caseD_0;
  case 0x20:
  case 0x2c:
  case 0x3a:
  case 0x3b:
    goto switchD_003b1844_caseD_20;
  case 0x21:
    bVar3 = false;
    __s1 = param_1 + 1;
    uVar12 = 2;
    break;
  case 0x2b:
    bVar3 = false;
    __s1 = param_1 + 1;
    uVar12 = 4;
    break;
  case 0x2d:
    bVar3 = false;
    __s1 = param_1 + 1;
    uVar12 = 3;
    break;
  case 0x40:
    __s1 = param_1 + 1;
    bVar3 = true;
    uVar12 = 5;
  }
  local_94 = 0;
  local_70 = 0;
  local_80 = 0;
  local_68 = 0;
  __s1_00 = __s1;
LAB_003b1898:
  __n = 0;
  while( true ) {
    bVar2 = __s1_00[__n];
    if ((0x19 < (byte)((bVar2 & 0xdf) + 0xbf) && 9 < (byte)(bVar2 - 0x30)) &&
       ((0x3d < bVar2 || ((1L << ((ulong)bVar2 & 0x3f) & 0x2000600000000000U) == 0)))) break;
    __n = __n + 1;
  }
  iVar5 = (int)__n;
  if (iVar5 == 0) {
    FUN_004806c0(0x14,0xe6,0x118,"external/openssl/ssl/ssl_ciph.c",0x404);
    param_1 = __s1_00 + __n + 1;
    if (bVar3) goto LAB_003b1b48;
    local_9c = 0;
LAB_003b1bb0:
    for (; uVar9 = (ulong)*param_1,
        0x3b < *param_1 || (1L << (uVar9 & 0x3f) & 0xc00100100000001U) == 0; param_1 = param_1 + 1)
    {
    }
  }
  else {
    if (!bVar3) {
      param_1 = __s1_00 + __n;
      piVar13 = (int *)*param_4;
      if (piVar13 == (int *)0x0) {
        if (bVar2 == 0x2b) {
          param_1 = param_1 + 1;
        }
        goto LAB_003b1bb0;
      }
      puVar14 = param_4;
      while( true ) {
        puVar14 = puVar14 + 1;
        __s2 = *(char **)(piVar13 + 2);
        iVar5 = strncmp((char *)__s1_00,__s2,__n);
        if ((iVar5 == 0) && (__s2[__n] == '\0')) break;
        piVar13 = (int *)*puVar14;
        if (piVar13 == (int *)0x0) goto LAB_003b1aa8;
      }
      uVar8 = piVar13[7];
      if (uVar8 != 0) {
        if (local_80._4_4_ == 0) {
          local_80 = CONCAT44(uVar8,(uint)local_80);
          uVar8 = piVar13[8];
          if (uVar8 != 0) goto LAB_003b1954;
          goto LAB_003b1964;
        }
        uVar8 = uVar8 & local_80._4_4_;
        local_80 = CONCAT44(uVar8,(uint)local_80);
        if (uVar8 != 0) goto LAB_003b1948;
LAB_003b1aa8:
        if (bVar2 == 0x2b) {
          param_1 = param_1 + 1;
        }
        goto LAB_003b1bb0;
      }
LAB_003b1948:
      uVar8 = piVar13[8];
      if (uVar8 == 0) {
LAB_003b1964:
        uVar8 = piVar13[9];
        uVar10 = local_70._4_4_;
        uVar11 = local_70._4_4_;
        if (uVar8 == 0) goto LAB_003b197c;
LAB_003b1970:
        if (uVar10 != 0) {
          uVar11 = uVar8 & uVar10;
          if ((uVar8 & uVar10) == 0) goto LAB_003b1aa8;
          goto LAB_003b197c;
        }
        uVar10 = piVar13[10];
        local_70 = CONCAT44(uVar8,(uint)local_70);
        if (uVar10 != 0) goto LAB_003b1988;
LAB_003b199c:
        uVar8 = piVar13[0xf];
      }
      else {
LAB_003b1954:
        if ((uint)local_70 != 0) {
          uVar8 = uVar8 & (uint)local_70;
          local_70 = CONCAT44(local_70._4_4_,uVar8);
          if (uVar8 == 0) goto LAB_003b1aa8;
          goto LAB_003b1964;
        }
        local_70 = CONCAT44(local_70._4_4_,uVar8);
        uVar8 = piVar13[9];
        uVar10 = local_70._4_4_;
        uVar11 = local_70._4_4_;
        if (uVar8 != 0) goto LAB_003b1970;
LAB_003b197c:
        uVar10 = piVar13[10];
        local_70 = CONCAT44(uVar11,(uint)local_70);
        if (uVar10 == 0) goto LAB_003b199c;
LAB_003b1988:
        if ((uint)local_80 != 0) {
          uVar10 = uVar10 & (uint)local_80;
          local_80 = CONCAT44(local_80._4_4_,uVar10);
          if (uVar10 == 0) goto LAB_003b1aa8;
          goto LAB_003b199c;
        }
        local_80 = CONCAT44(local_80._4_4_,uVar10);
        uVar8 = piVar13[0xf];
      }
      uVar10 = local_68;
      if ((((uVar8 & 0x1f) != 0) && (uVar10 = uVar8 & 0x1f, (local_68 & 0x1f) != 0)) &&
         (uVar10 = (uVar8 | 0xffffffe0) & local_68, (uVar10 & 0x1f) == 0)) goto LAB_003b1aa8;
      local_68 = uVar10;
      if ((uVar8 >> 5 & 1) != 0) {
        if (local_68 >> 5 == 0) {
          local_68 = local_68 | uVar8 & 0x20;
        }
        else {
          local_68 = local_68 & (uVar8 | 0xffffffdf);
          if (local_68 >> 5 == 0) goto LAB_003b1aa8;
        }
      }
      if (*piVar13 == 0) {
        iVar5 = piVar13[0xb];
        if (iVar5 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          if (local_94 == 0) {
            local_94 = iVar5;
          }
          else {
            bVar4 = local_94 != iVar5;
            local_94 = iVar5;
            if (bVar4) goto LAB_003b1aa8;
          }
        }
      }
      else {
        iVar6 = piVar13[6];
      }
      __s1_00 = param_1 + 1;
      if (bVar2 != 0x2b) goto LAB_003b17e8;
      goto LAB_003b1898;
    }
    param_1 = __s1_00 + __n;
    if (iVar5 == 10) {
      iVar5 = strncmp((char *)__s1,"SECLEVEL=",9);
      if (iVar5 != 0) goto LAB_003b1b48;
      if (__s1[9] - 0x30 < 6) {
        *(uint *)(param_5 + 0x1f0) = __s1[9] - 0x30;
        goto LAB_003b1b6c;
      }
      uVar7 = 0x4a3;
LAB_003b1b4c:
      FUN_004806c0(0x14,0xe6,0x118,"external/openssl/ssl/ssl_ciph.c",uVar7);
    }
    else {
      if ((iVar5 != 8) || (iVar5 = strncmp((char *)__s1,"STRENGTH",8), iVar5 != 0)) {
LAB_003b1b48:
        uVar7 = 0x4a9;
        goto LAB_003b1b4c;
      }
      iVar5 = FUN_003b15f0(param_2,param_3);
      if (iVar5 != 0) goto LAB_003b1b6c;
    }
    local_9c = 0;
LAB_003b1b6c:
    for (; uVar9 = (ulong)*param_1,
        0x3b < *param_1 || (1L << (uVar9 & 0x3f) & 0xc00100100000001U) == 0; param_1 = param_1 + 1)
    {
    }
  }
  goto LAB_003b1814;
switchD_003b1844_caseD_20:
  param_1 = param_1 + 1;
  goto LAB_003b17e0;
LAB_003b17e8:
  uVar9 = local_80 & 0xffffffff;
  local_80._4_4_ = (uint)(local_80 >> 0x20);
  uVar1 = local_70 & 0xffffffff;
  local_70._4_4_ = (uint)(local_70 >> 0x20);
  FUN_003b1300(iVar6,local_80._4_4_,uVar1,local_70._4_4_,uVar9,local_94,local_68,uVar12,0xffffffff,
               param_2,param_3);
  uVar9 = (ulong)*param_1;
LAB_003b1814:
  if ((int)uVar9 == 0) {
switchD_003b1844_caseD_0:
    return local_9c;
  }
  goto LAB_003b1818;
}


