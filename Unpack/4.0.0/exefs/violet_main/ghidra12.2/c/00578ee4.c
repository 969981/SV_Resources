/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00578ee4; name: FUN_00578ee4
 */


/* WARNING: Removing unreachable block (ram,0x005790cc) */
/* WARNING: Removing unreachable block (ram,0x00579230) */

byte * FUN_00578ee4(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 uVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  
  puVar5 = PTR_DAT_047cba80;
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
      bVar4 = *param_2;
      uVar13 = (uint)bVar4;
      if (-1 < (char)bVar4) break;
      uVar13 = (uVar13 + (uint)*pbVar11 * 0x80) - 0x80;
      if ((char)*pbVar11 < '\0') {
        auVar15 = FUN_0052e560(param_2,uVar13);
        pbVar11 = auVar15._0_8_;
        uVar13 = auVar15._8_4_;
        if (pbVar11 != (byte *)0x0) {
          uVar9 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00578f44;
        }
        goto LAB_005792bc;
      }
      pbVar11 = param_2 + 2;
      uVar9 = uVar13 >> 3;
      if (uVar9 != 3) goto LAB_00578f48;
LAB_00579010:
      if ((uVar13 & 0xff) == 0x1a) {
        if (*(int *)(param_1 + 0x24) == 3) {
          uVar12 = *(undefined8 *)(param_1 + 0x18);
          bVar4 = *pbVar11;
          if (-1 < (char)bVar4) goto LAB_00579128;
LAB_00579038:
          auVar16 = FUN_0052e5f0(pbVar11);
          if (auVar16._0_8_ == 0) goto LAB_005792bc;
        }
        else {
          FUN_00578bac(param_1);
          puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x24) = 3;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar8 = (ulong *)*puVar8;
          }
          uVar12 = FUN_00586150(puVar8);
          *(undefined8 *)(param_1 + 0x18) = uVar12;
          bVar4 = *pbVar11;
          if ((char)bVar4 < '\0') goto LAB_00579038;
LAB_00579128:
          auVar16[8] = bVar4;
          auVar16._0_8_ = pbVar11 + 1;
          auVar16._9_3_ = 0;
        }
        uVar13 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        lVar7 = param_3[0xb];
        iVar10 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
        if (((int)lVar7 < 1) ||
           (param_2 = (byte *)FUN_00582aa0(uVar12,auVar16._0_8_,param_3), param_2 == (byte *)0x0))
        goto LAB_005792bc;
LAB_005791ec:
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) goto LAB_005792bc;
        uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar10 - uVar13);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      }
      else {
LAB_00579088:
        if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar13 - 1;
          return pbVar11;
        }
        if ((*puVar1 & 1) == 0) {
          lVar7 = FUN_0021d48c(puVar1);
        }
        else {
          lVar7 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar13,lVar7,pbVar11,param_3);
        if (param_2 == (byte *)0x0) goto LAB_005792bc;
      }
    }
    uVar9 = (uint)(bVar4 >> 3);
joined_r0x00578f44:
    if (uVar9 == 3) goto LAB_00579010;
LAB_00578f48:
    if (uVar9 == 2) {
      if ((uVar13 & 0xff) != 0x12) goto LAB_00579088;
      if (*(int *)(param_1 + 0x24) == 2) {
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        bVar4 = *pbVar11;
        if (-1 < (char)bVar4) goto LAB_005791a4;
LAB_00579074:
        auVar17 = FUN_0052e5f0(pbVar11);
        if (auVar17._0_8_ == 0) goto LAB_005792bc;
      }
      else {
        FUN_00578bac(param_1);
        puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x24) = 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        uVar12 = FUN_00586078(puVar8);
        *(undefined8 *)(param_1 + 0x18) = uVar12;
        bVar4 = *pbVar11;
        if ((char)bVar4 < '\0') goto LAB_00579074;
LAB_005791a4:
        auVar17[8] = bVar4;
        auVar17._0_8_ = pbVar11 + 1;
        auVar17._9_3_ = 0;
      }
      uVar13 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      lVar7 = param_3[0xb];
      iVar10 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar13;
      *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
      if ((0 < (int)lVar7) &&
         (param_2 = (byte *)FUN_00582434(uVar12,auVar17._0_8_,param_3), param_2 != (byte *)0x0))
      goto LAB_005791ec;
      goto LAB_005792bc;
    }
    if ((uVar9 != 1) || ((uVar13 & 0xff) != 10)) goto LAB_00579088;
    puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) == 0) {
      pbVar14 = (byte *)*puVar2;
    }
    else {
      puVar8 = (ulong *)*puVar8;
      pbVar14 = (byte *)*puVar2;
    }
    if (pbVar14 == puVar5) {
      FUN_001fcdc8(puVar2,puVar8,puVar5);
      pbVar14 = (byte *)*puVar2;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar14,pbVar11,param_3);
    uVar3 = *(ulong *)(pbVar14 + 8);
    pbVar11 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar11 = pbVar14 + 1;
      uVar3 = (ulong)(*pbVar14 >> 1);
    }
    bVar6 = FUN_0052e6b0(pbVar11,uVar3,0);
    bVar4 = bVar6 & param_2 != (byte *)0x0;
    if ((bVar6 & 1) == 0) {
      iVar10 = 2;
      if (bVar4 == 0) {
        iVar10 = 4;
      }
    }
    else {
      iVar10 = 2;
      if (bVar4 == 0) {
        iVar10 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar10 == 2);
  if (iVar10 == 4) {
LAB_005792bc:
    param_2 = (byte *)0x0;
  }
  return param_2;
}


