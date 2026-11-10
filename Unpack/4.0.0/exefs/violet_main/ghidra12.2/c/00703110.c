/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00703110; name: FUN_00703110
 */


/* WARNING: Removing unreachable block (ram,0x007032c8) */
/* WARNING: Removing unreachable block (ram,0x0070342c) */

byte * FUN_00703110(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong *puVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  
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
      pbVar12 = param_2 + 1;
      bVar4 = *param_2;
      uVar13 = (uint)bVar4;
      if (-1 < (char)bVar4) break;
      uVar13 = (uVar13 + (uint)*pbVar12 * 0x80) - 0x80;
      if ((char)*pbVar12 < '\0') {
        auVar15 = FUN_0052e560(param_2,uVar13);
        pbVar12 = auVar15._0_8_;
        uVar13 = auVar15._8_4_;
        if (pbVar12 != (byte *)0x0) {
          uVar10 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00703168;
        }
        goto LAB_007034b8;
      }
      pbVar12 = param_2 + 2;
      uVar10 = uVar13 >> 3;
      if (uVar10 != 3) goto LAB_0070316c;
LAB_00703234:
      if ((uVar13 & 0xff) == 0x1a) {
        lVar8 = *(long *)(param_1 + 0x20);
        if (lVar8 == 0) {
          puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar9 = (ulong *)*puVar9;
          }
          lVar8 = FUN_0071cda4(puVar9);
          *(long *)(param_1 + 0x20) = lVar8;
          bVar4 = *pbVar12;
          if (-1 < (char)bVar4) goto LAB_00703254;
LAB_00703318:
          auVar16 = FUN_0052e5f0(pbVar12);
          if (auVar16._0_8_ == 0) goto LAB_007034b8;
        }
        else {
          bVar4 = *pbVar12;
          if ((char)bVar4 < '\0') goto LAB_00703318;
LAB_00703254:
          auVar16[8] = bVar4;
          auVar16._0_8_ = pbVar12 + 1;
          auVar16._9_3_ = 0;
        }
        uVar13 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        lVar5 = param_3[0xb];
        iVar11 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
        if (((int)lVar5 < 1) ||
           (param_2 = (byte *)FUN_00713984(lVar8,auVar16._0_8_,param_3), param_2 == (byte *)0x0))
        goto LAB_007034b8;
LAB_007033e8:
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) goto LAB_007034b8;
        uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar11 - uVar13);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      }
      else {
LAB_00703284:
        if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar13 - 1;
          return pbVar12;
        }
        if ((*puVar1 & 1) == 0) {
          lVar8 = FUN_0021d48c(puVar1);
        }
        else {
          lVar8 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar13,lVar8,pbVar12,param_3);
        if (param_2 == (byte *)0x0) goto LAB_007034b8;
      }
    }
    uVar10 = (uint)(bVar4 >> 3);
joined_r0x00703168:
    if (uVar10 == 3) goto LAB_00703234;
LAB_0070316c:
    if (uVar10 == 2) {
      if ((uVar13 & 0xff) != 0x12) goto LAB_00703284;
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar8 = FUN_0071caa4(puVar9);
        *(long *)(param_1 + 0x18) = lVar8;
        bVar4 = *pbVar12;
        if (-1 < (char)bVar4) goto LAB_0070327c;
LAB_00703394:
        auVar17 = FUN_0052e5f0(pbVar12);
        if (auVar17._0_8_ == 0) goto LAB_007034b8;
      }
      else {
        bVar4 = *pbVar12;
        if ((char)bVar4 < '\0') goto LAB_00703394;
LAB_0070327c:
        auVar17[8] = bVar4;
        auVar17._0_8_ = pbVar12 + 1;
        auVar17._9_3_ = 0;
      }
      uVar13 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      lVar5 = param_3[0xb];
      iVar11 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar13;
      *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
      if ((0 < (int)lVar5) &&
         (param_2 = (byte *)FUN_0070d684(lVar8,auVar17._0_8_,param_3), param_2 != (byte *)0x0))
      goto LAB_007033e8;
      goto LAB_007034b8;
    }
    if ((uVar10 != 1) || ((uVar13 & 0xff) != 10)) goto LAB_00703284;
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
    param_2 = (byte *)FUN_0052e7f0(pbVar14,pbVar12,param_3);
    uVar3 = *(ulong *)(pbVar14 + 8);
    pbVar12 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar12 = pbVar14 + 1;
      uVar3 = (ulong)(*pbVar14 >> 1);
    }
    bVar7 = FUN_0052e6b0(pbVar12,uVar3,0);
    bVar4 = bVar7 & param_2 != (byte *)0x0;
    if ((bVar7 & 1) == 0) {
      iVar11 = 2;
      if (bVar4 == 0) {
        iVar11 = 4;
      }
    }
    else {
      iVar11 = 2;
      if (bVar4 == 0) {
        iVar11 = (uint)(param_2 == (byte *)0x0) << 2;
      }
    }
  } while (iVar11 == 2);
  if (iVar11 == 4) {
LAB_007034b8:
    param_2 = (byte *)0x0;
  }
  return param_2;
}


