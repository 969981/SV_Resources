/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071d718; name: FUN_0071d718
 */


byte * FUN_0071d718(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar7;
  ulong uVar6;
  ulong *puVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  
  puVar5 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar2 = (undefined8 *)(param_1 + 0x10);
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
    auVar14[8] = bVar4;
    auVar14._0_8_ = param_2 + 1;
    auVar14._9_3_ = 0;
    if ((char)bVar4 < '\0') {
      bVar3 = param_2[1];
      if ((char)bVar3 < '\0') {
        auVar14 = FUN_0052e560(param_2);
        if (auVar14._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar14._8_4_ = (uint)bVar4 + (uint)bVar3 * 0x80 + -0x80;
        auVar14._0_8_ = param_2 + 2;
      }
    }
    uVar7 = auVar14._8_4_;
    pbVar10 = auVar14._0_8_;
    if (uVar7 == 10) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
      puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) != 0) {
        puVar8 = (ulong *)*puVar8;
        pbVar12 = (byte *)*puVar2;
        if (pbVar12 == puVar5) goto LAB_0071d818;
LAB_0071d86c:
        bVar4 = *pbVar10;
        goto joined_r0x0071d95c;
      }
      pbVar12 = (byte *)*puVar2;
      if (pbVar12 != puVar5) goto LAB_0071d86c;
LAB_0071d818:
      FUN_001fcdc8(puVar2,puVar8,puVar5);
      pbVar12 = (byte *)*puVar2;
      bVar4 = *pbVar10;
      if (-1 < (char)bVar4) goto LAB_0071d878;
LAB_0071d834:
      auVar15 = FUN_0052e5f0(pbVar10);
      if (auVar15._0_8_ == 0) {
        param_2 = (byte *)0x0;
LAB_0071d8ac:
        bVar4 = *pbVar12;
        if ((bVar4 & 1) == 0) goto LAB_0071d8d4;
LAB_0071d754:
        uVar6 = FUN_005347a4(*(undefined8 *)(pbVar12 + 0x10),*(undefined8 *)(pbVar12 + 8),0,
                             "(stripped)");
      }
      else {
LAB_0071d87c:
        lVar9 = auVar15._0_8_;
        lVar11 = (long)auVar15._8_4_;
        if ((param_3[1] - lVar9) + 0x10 < lVar11) {
          param_2 = (byte *)FUN_0052ddec(param_3,lVar9,auVar15._8_4_,pbVar12);
          goto LAB_0071d8ac;
        }
        FUN_0026c6b8(pbVar12,lVar9,lVar11);
        param_2 = (byte *)(lVar9 + lVar11);
        bVar4 = *pbVar12;
        if ((bVar4 & 1) != 0) goto LAB_0071d754;
LAB_0071d8d4:
        uVar6 = FUN_005347a4(pbVar12 + 1,bVar4 >> 1,0,"(stripped)");
      }
      if ((uVar6 & 1) == 0) {
        return (byte *)0x0;
      }
    }
    else {
      if (uVar7 == 0x12) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
        puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        if ((*(ulong *)(param_1 + 8) & 1) == 0) {
          pbVar12 = (byte *)*puVar1;
        }
        else {
          puVar8 = (ulong *)*puVar8;
          pbVar12 = (byte *)*puVar1;
        }
        if (pbVar12 != puVar5) goto LAB_0071d86c;
        FUN_001fcdc8(puVar1,puVar8,puVar5);
        pbVar12 = (byte *)*puVar1;
        bVar4 = *pbVar10;
joined_r0x0071d95c:
        if ((char)bVar4 < '\0') goto LAB_0071d834;
LAB_0071d878:
        auVar15[8] = bVar4;
        auVar15._0_8_ = pbVar10 + 1;
        auVar15._9_3_ = 0;
        goto LAB_0071d87c;
      }
      if ((uVar7 == 0) || ((uVar7 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar7 - 1;
        return pbVar10;
      }
      param_2 = (byte *)FUN_0052f000(uVar7,0,pbVar10,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


