/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049ea7c; name: FUN_0049ea7c
 */


byte * FUN_0049ea7c(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined *puVar9;
  byte bVar10;
  undefined *puVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 auVar17 [16];
  
  puVar9 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar2 = (ulong *)(param_1 + 8);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar17 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar17._0_8_;
        if ((auVar17._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar16 = param_2 + 1;
      bVar6 = *param_2;
      auVar7[8] = bVar6;
      auVar7._0_8_ = pbVar16;
      auVar7._9_7_ = 0;
      auVar17[8] = bVar6;
      auVar17._0_8_ = pbVar16;
      auVar17._9_7_ = 0;
      if (-1 < (char)bVar6) break;
      uVar15 = ((uint)bVar6 + (uint)*pbVar16 * 0x80) - 0x80;
      if ((char)*pbVar16 < '\0') {
        auVar17 = FUN_0052e560(param_2);
        if (auVar17._0_8_ != 0) {
          uVar15 = (uint)(auVar17._8_8_ >> 3) & 0x1fffffff;
          auVar7 = auVar17;
          goto joined_r0x0049ec74;
        }
        goto LAB_0049ecf4;
      }
      auVar7._8_4_ = uVar15;
      auVar7._0_8_ = param_2 + 2;
      auVar7._12_4_ = 0;
      auVar17._8_4_ = uVar15;
      auVar17._0_8_ = param_2 + 2;
      auVar17._12_4_ = 0;
      uVar15 = uVar15 >> 3;
      if (uVar15 != 2) goto LAB_0049eb18;
LAB_0049ebd8:
      auVar17 = auVar7;
      if ((auVar17._8_4_ & 0xff) == 0x12) {
        puVar14 = (undefined8 *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          puVar11 = (undefined *)*puVar1;
          if (puVar11 == puVar9) goto LAB_0049ebfc;
        }
        else {
          puVar14 = (undefined8 *)*puVar14;
          puVar11 = (undefined *)*puVar1;
          if (puVar11 == puVar9) {
LAB_0049ebfc:
            FUN_001fcdc8(puVar1,puVar14,puVar9);
            param_2 = (byte *)FUN_0052e7f0(*puVar1,auVar17._0_8_,param_3);
            goto joined_r0x0049ec54;
          }
        }
        param_2 = (byte *)FUN_0052e7f0(puVar11,auVar17._0_8_,param_3);
      }
      else {
LAB_0049ec20:
        uVar15 = auVar17._8_4_;
        if ((uVar15 == 0) || ((uVar15 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar15 - 1;
          return auVar17._0_8_;
        }
        if ((*puVar2 & 1) == 0) {
          lVar12 = FUN_00264e54(puVar2);
        }
        else {
          lVar12 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_00515960(auVar17._8_8_ & 0xffffffff,lVar12,auVar17._0_8_,param_3);
      }
joined_r0x0049ec54:
      if (param_2 == (byte *)0x0) goto LAB_0049ecf4;
    }
    uVar15 = (uint)(bVar6 >> 3);
joined_r0x0049ec74:
    if (uVar15 == 2) goto LAB_0049ebd8;
LAB_0049eb18:
    if ((uVar15 != 1) || ((auVar17._8_4_ & 0xff) != 10)) goto LAB_0049ec20;
    puVar13 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
    if ((*puVar2 & 1) == 0) {
      pbVar16 = (byte *)*puVar3;
    }
    else {
      puVar13 = (ulong *)*puVar13;
      pbVar16 = (byte *)*puVar3;
    }
    if (pbVar16 == puVar9) {
      FUN_001fcdc8(puVar3,puVar13,puVar9);
      pbVar16 = (byte *)*puVar3;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar16,auVar17._0_8_,param_3);
    uVar4 = *(ulong *)(pbVar16 + 8);
    pbVar5 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar5 = pbVar16 + 1;
      uVar4 = (ulong)(*pbVar16 >> 1);
    }
    bVar10 = FUN_0052e6b0(pbVar5,uVar4,"google.protobuf.Any.type_url");
    bVar6 = bVar10 & param_2 != (byte *)0x0;
    if ((bVar10 & 1) == 0) {
      iVar8 = 2;
      if (bVar6 == 0) {
        iVar8 = 4;
      }
    }
    else {
      iVar8 = 2;
      if (bVar6 == 0) {
        iVar8 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar8 == 2);
  if (iVar8 == 4) {
LAB_0049ecf4:
    param_2 = (byte *)0x0;
  }
  return param_2;
}


