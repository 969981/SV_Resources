/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00691fbc; name: FUN_00691fbc
 */


byte * FUN_00691fbc(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  
  puVar6 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar15 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar15._0_8_;
        if ((auVar15._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar11 = param_2 + 1;
      bVar5 = *param_2;
      uVar13 = (uint)bVar5;
      if (-1 < (char)bVar5) break;
      uVar13 = (uVar13 + (uint)*pbVar11 * 0x80) - 0x80;
      if ((char)*pbVar11 < '\0') {
        auVar15 = FUN_0052e560(param_2,uVar13);
        pbVar11 = auVar15._0_8_;
        uVar13 = auVar15._8_4_;
        if (pbVar11 != (byte *)0x0) {
          uVar10 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x0069222c;
        }
        goto LAB_006922b4;
      }
      pbVar11 = param_2 + 2;
      uVar10 = uVar13 >> 3;
      if (uVar10 != 2) goto LAB_00692028;
LAB_006920e8:
      if ((uVar13 & 0xff) == 0x12) {
        if (*(int *)(param_1 + 0x24) == 2) {
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          bVar5 = *pbVar11;
          if (-1 < (char)bVar5) goto LAB_00692188;
LAB_00692110:
          auVar16 = FUN_0052e5f0(pbVar11);
          if (auVar16._0_8_ == 0) goto LAB_006922b4;
        }
        else {
          puVar9 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x24) = 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          uVar12 = FUN_0068cf38(puVar9);
          *(undefined8 *)(param_1 + 0x18) = uVar12;
          bVar5 = *pbVar11;
          if ((char)bVar5 < '\0') goto LAB_00692110;
LAB_00692188:
          auVar16[8] = bVar5;
          auVar16._0_8_ = pbVar11 + 1;
          auVar16._9_3_ = 0;
        }
        uVar13 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        lVar8 = param_3[0xb];
        iVar4 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *(int *)(param_3 + 0xb) = (int)lVar8 + -1;
        if ((((int)lVar8 < 1) ||
            (param_2 = (byte *)FUN_0068aae4(uVar12,auVar16._0_8_,param_3), param_2 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
        goto LAB_006922b4;
        uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar4 - uVar13);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      }
      else {
LAB_00692124:
        if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar13 - 1;
          return pbVar11;
        }
        if ((*puVar1 & 1) == 0) {
          lVar8 = FUN_0021d48c(puVar1);
        }
        else {
          lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar13,lVar8,pbVar11,param_3);
        if (param_2 == (byte *)0x0) goto LAB_006922b4;
      }
    }
    uVar10 = (uint)(bVar5 >> 3);
joined_r0x0069222c:
    if (uVar10 == 2) goto LAB_006920e8;
LAB_00692028:
    if ((uVar10 != 1) || ((uVar13 & 0xff) != 10)) goto LAB_00692124;
    puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) == 0) {
      pbVar14 = (byte *)*puVar2;
    }
    else {
      puVar9 = (ulong *)*puVar9;
      pbVar14 = (byte *)*puVar2;
    }
    if (pbVar14 == puVar6) {
      FUN_001fcdc8(puVar2,puVar9,puVar6);
      pbVar14 = (byte *)*puVar2;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar14,pbVar11,param_3);
    uVar3 = *(ulong *)(pbVar14 + 8);
    pbVar11 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar11 = pbVar14 + 1;
      uVar3 = (ulong)(*pbVar14 >> 1);
    }
    bVar7 = FUN_0052e6b0(pbVar11,uVar3,0);
    bVar5 = bVar7 & param_2 != (byte *)0x0;
    if ((bVar7 & 1) == 0) {
      iVar4 = 2;
      if (bVar5 == 0) {
        iVar4 = 4;
      }
    }
    else {
      iVar4 = 2;
      if (bVar5 == 0) {
        iVar4 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar4 == 2);
  if (iVar4 == 4) {
LAB_006922b4:
    param_2 = (byte *)0x0;
  }
  return param_2;
}


