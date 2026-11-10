/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00165170; name: FUN_00165170
 */


undefined8
FUN_00165170(int param_1,byte *param_2,byte *param_3,byte *param_4,long param_5,long param_6,
            long param_7,long param_8,undefined8 *param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  uint uVar15;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  
  if (1 < param_1) {
    return 0xffffffffffffffff;
  }
  *param_9 = param_4;
  param_9[1] = param_7;
  if ((long)param_3 - (long)param_2 < 0xd) {
    return 0xffffffffffffffff;
  }
  if (param_6 == 0) {
    pbVar10 = param_2 + 8;
    *(undefined8 *)param_4 = *(undefined8 *)param_2;
    pbVar11 = pbVar10;
    if (pbVar10 < param_3) goto LAB_001651e4;
LAB_00165234:
    uVar15 = 0;
    bVar14 = 0;
LAB_0016523c:
    bVar3 = param_4 <= param_3 && param_2 <= param_4 + param_5;
    lVar5 = param_5;
    if (param_8 - param_7 <= param_5) {
      lVar5 = param_8 - param_7;
    }
    local_68 = param_7;
    lVar5 = FUN_001655a0(&local_68,pbVar11,param_3,&local_70,lVar5,bVar3,param_7,param_8);
    if (lVar5 < 0) {
      return 0xffffffffffffffff;
    }
    param_7 = param_7 + local_70;
    param_9[8] = local_68;
    param_9[9] = local_70;
    local_70 = 0;
    lVar6 = param_5;
    if (param_8 - param_7 <= param_5) {
      lVar6 = param_8 - param_7;
    }
    local_68 = param_7;
    lVar6 = FUN_001655a0(&local_68,pbVar11 + lVar5,param_3,&local_70,lVar6,bVar3,param_7,param_8);
    pbVar11 = pbVar11 + lVar5 + lVar6;
    if (lVar6 < 0) {
      return 0xffffffffffffffff;
    }
    local_88 = 0;
    param_7 = param_7 + local_70;
    local_80 = 0;
    if ((long)param_3 - (long)pbVar11 < 3) {
      return 0xffffffffffffffff;
    }
    bVar2 = *pbVar11;
    lStack_78 = param_7;
    if ((char)bVar2 < '\0') {
      lVar5 = local_70;
      if (param_8 - param_7 <= local_70) {
        lVar5 = param_8 - param_7;
      }
      lVar5 = FUN_001655a0(&lStack_78,pbVar11 + 1,param_3,&local_88,lVar5,0,param_7,param_8);
      if (lVar5 < 0) {
        return 0xffffffffffffffff;
      }
      iVar4 = bVar2 - 0x7f;
      pbVar11 = pbVar11 + 1 + lVar5;
      param_7 = param_7 + local_88;
      if (iVar4 != 1) {
        lVar5 = local_88;
        if (param_8 - param_7 <= local_88) {
          lVar5 = param_8 - param_7;
        }
        local_90 = 0;
        local_80 = param_7;
        lVar5 = FUN_001655a0(&local_80,pbVar11,param_3,&local_90,lVar5,0,param_7,param_8);
        if (lVar5 < 0) {
          return 0xffffffffffffffff;
        }
        if (local_88 != local_90) {
          FUN_0015c3d0();
          pcVar9 = *(code **)PTR_PTR_047cb868;
          if (pcVar9 == (code *)0x0) goto LAB_00165548;
          pcVar8 = "OODLE ERROR : corruption : offsets_count == offsets_count_2\n";
          uVar7 = 0x9cb;
          goto LAB_00165540;
        }
        param_7 = param_7 + local_88;
        pbVar11 = pbVar11 + lVar5;
      }
    }
    else {
      lVar5 = local_70;
      if (param_8 - param_7 <= local_70) {
        lVar5 = param_8 - param_7;
      }
      lVar5 = FUN_001655a0(&lStack_78,pbVar11,param_3,&local_88,lVar5,0,param_7,param_8);
      if (lVar5 < 0) {
        return 0xffffffffffffffff;
      }
      iVar4 = 0;
      pbVar11 = pbVar11 + lVar5;
      param_7 = param_7 + local_88;
    }
    lVar5 = param_5 + 3;
    if (-1 < param_5) {
      lVar5 = param_5;
    }
    local_98 = 0;
    lVar6 = lVar5 >> 2;
    if (param_8 - param_7 <= lVar5 >> 2) {
      lVar6 = param_8 - param_7;
    }
    local_90 = param_7;
    lVar5 = FUN_001655a0(&local_90,pbVar11,param_3,&local_98,lVar6,0,param_7,param_8);
    if (lVar5 < 0) {
      return 0xffffffffffffffff;
    }
    uVar12 = param_7 + local_98 + 0xfU & 0xfffffffffffffff0;
    uVar13 = uVar12 + local_88 * 4 + 0xf & 0xfffffffffffffff0;
    if (local_98 * 4 + 0x40 <= (long)(param_8 - uVar13)) {
      puVar1 = (undefined8 *)(uVar13 + local_98 * 4);
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar4 = FUN_001c0a50(pbVar11 + lVar5,param_3,lStack_78,local_80,local_88,iVar4,local_90,
                           local_98,uVar12,uVar13,param_6 + param_5,bVar14,uVar15);
      if (iVar4 < 0) {
        return 0xffffffffffffffff;
      }
      param_9[2] = uVar12;
      param_9[3] = local_88;
      param_9[4] = uVar13;
      param_9[5] = local_98;
      param_9[6] = local_68;
      param_9[7] = local_70;
      return 1;
    }
    FUN_0015c3d0();
    pcVar9 = *(code **)PTR_PTR_047cb868;
    if (pcVar9 == (code *)0x0) goto LAB_00165548;
    pcVar8 = "OODLE ERROR : newlz scratch overflow\n";
    uVar7 = 0xa0a;
  }
  else {
    pbVar10 = param_2;
    pbVar11 = param_2;
    if (param_3 <= param_2) goto LAB_00165234;
LAB_001651e4:
    bVar14 = *pbVar10;
    pbVar11 = pbVar10;
    if (-1 < (char)bVar14) goto LAB_00165234;
    if ((bVar14 & 0xc0) == 0x80) {
      uVar15 = bVar14 & 0x3f;
      pbVar11 = pbVar10 + 1;
      if (0x1f < uVar15) {
        if (pbVar11 == param_3) {
          FUN_0015c3d0();
          pcVar9 = *(code **)PTR_PTR_047cb868;
          if (pcVar9 == (code *)0x0) goto LAB_00165548;
          pcVar8 = "OODLE ERROR : corruption : truncated excess byte count\n";
          uVar7 = 0x94c;
          goto LAB_00165540;
        }
        pbVar11 = pbVar10 + 2;
        uVar15 = uVar15 + (uint)pbVar10[1] * 0x20;
      }
      goto LAB_0016523c;
    }
    FUN_0015c3d0();
    pcVar9 = *(code **)PTR_PTR_047cb868;
    if (pcVar9 == (code *)0x0) goto LAB_00165548;
    pcVar8 = "OODLE ERROR : corruption : excess reserved flag bit nonzero\n";
    uVar7 = 0x943;
  }
LAB_00165540:
  (*pcVar9)(0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",uVar7,pcVar8);
LAB_00165548:
  FUN_0015c3f0();
  return 0xffffffffffffffff;
}


