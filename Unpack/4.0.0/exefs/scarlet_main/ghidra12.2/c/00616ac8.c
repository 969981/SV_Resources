/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00616ac8; name: FUN_00616ac8
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00616ac8(long param_1,byte *param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  ulong *puVar6;
  uint uVar8;
  ulong uVar7;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  
  puVar5 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar13 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar13._0_8_;
      if ((auVar13._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    bVar4 = *param_2;
    auVar13[8] = bVar4;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_7_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        auVar13 = FUN_0052e560(param_2);
        if (auVar13._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar13._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar13._0_8_ = param_2 + 2;
        auVar13._12_4_ = 0;
      }
    }
    pbVar9 = auVar13._0_8_;
    uVar8 = auVar13._8_4_;
    if (uVar8 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        pbVar12 = (byte *)*puVar1;
        if (pbVar12 == puVar5) goto LAB_00616c4c;
LAB_00616bc4:
        bVar4 = *pbVar9;
        if ((char)bVar4 < '\0') goto LAB_00616c68;
LAB_00616bd0:
        auVar14[8] = bVar4;
        auVar14._0_8_ = pbVar9 + 1;
        auVar14._9_3_ = 0;
LAB_00616c78:
        lVar10 = auVar14._0_8_;
        lVar11 = (long)auVar14._8_4_;
        if (lVar11 <= (param_3[1] - lVar10) + 0x10) {
          FUN_0026c6b8(pbVar12,lVar10,lVar11);
          param_2 = (byte *)(lVar10 + lVar11);
          bVar4 = *pbVar12;
          goto joined_r0x00616cdc;
        }
        param_2 = (byte *)FUN_0052ddec(param_3,lVar10,auVar14._8_4_,pbVar12);
        bVar4 = *pbVar12;
        if ((bVar4 & 1) != 0) goto LAB_00616b00;
LAB_00616ce0:
        uVar7 = FUN_005347a4(pbVar12 + 1,bVar4 >> 1,0,"(stripped)");
      }
      else {
        puVar6 = (ulong *)*puVar6;
        pbVar12 = (byte *)*puVar1;
        if (pbVar12 != puVar5) goto LAB_00616bc4;
LAB_00616c4c:
        FUN_001fcdc8(puVar1,puVar6,puVar5);
        pbVar12 = (byte *)*puVar1;
        bVar4 = *pbVar9;
        if (-1 < (char)bVar4) goto LAB_00616bd0;
LAB_00616c68:
        auVar14 = FUN_0052e5f0(pbVar9);
        if (auVar14._0_8_ != 0) goto LAB_00616c78;
        param_2 = (byte *)0x0;
        bVar4 = *pbVar12;
joined_r0x00616cdc:
        if ((bVar4 & 1) == 0) goto LAB_00616ce0;
LAB_00616b00:
        uVar7 = FUN_005347a4(*(undefined8 *)(pbVar12 + 0x10),*(undefined8 *)(pbVar12 + 8),0,
                             "(stripped)");
      }
      if ((uVar7 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar8 == 0x12) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 == 0) goto LAB_00616d0c;
LAB_00616bf8:
        bVar4 = *pbVar9;
        if ((char)bVar4 < '\0') goto LAB_00616d24;
LAB_00616c04:
        auVar15[8] = bVar4;
        auVar15._0_8_ = pbVar9 + 1;
        auVar15._9_3_ = 0;
      }
      else {
        puVar6 = (ulong *)*puVar6;
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 != 0) goto LAB_00616bf8;
LAB_00616d0c:
        lVar10 = FUN_004eb86c(puVar6);
        *(long *)(param_1 + 0x18) = lVar10;
        bVar4 = *pbVar9;
        if (-1 < (char)bVar4) goto LAB_00616c04;
LAB_00616d24:
        auVar15 = FUN_0052e5f0(pbVar9);
        if (auVar15._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      uVar8 = auVar15._8_4_ + (auVar15._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      lVar11 = param_3[0xb];
      iVar2 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *(int *)(param_3 + 0xb) = (int)lVar11 + -1;
      if ((int)lVar11 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_004eb174(lVar10,auVar15._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      if ((int)param_3[10] != 0) {
        return (byte *)0x0;
      }
      uVar8 = *(int *)((long)param_3 + 0x1c) + (iVar2 - uVar8);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
    }
    else {
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        return pbVar9;
      }
      param_2 = (byte *)FUN_0052f000(auVar13._8_8_ & 0xffffffff,0,pbVar9,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


