/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00691178; name: FUN_00691178
 */


/* WARNING: Removing unreachable block (ram,0x006914ec) */
/* WARNING: Removing unreachable block (ram,0x00691358) */

byte * FUN_00691178(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  byte bVar7;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  
  puVar6 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar16 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar16._0_8_;
        if ((auVar16._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar12 = param_2 + 1;
      bVar4 = *param_2;
      uVar14 = (uint)bVar4;
      if (-1 < (char)bVar4) break;
      uVar14 = (uVar14 + (uint)*pbVar12 * 0x80) - 0x80;
      if ((char)*pbVar12 < '\0') {
        auVar16 = FUN_0052e560(param_2,uVar14);
        pbVar12 = auVar16._0_8_;
        uVar14 = auVar16._8_4_;
        if (pbVar12 != (byte *)0x0) {
          uVar10 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x006911d8;
        }
        goto LAB_00691564;
      }
      pbVar12 = param_2 + 2;
      uVar10 = uVar14 >> 3;
      if (uVar10 != 4) goto LAB_006911dc;
LAB_0069124c:
      if ((uVar14 & 0xff) == 0x22) {
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0) {
          puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar8 = (ulong *)*puVar8;
          }
          lVar9 = FUN_0051444c(puVar8);
          *(long *)(param_1 + 0x10) = lVar9;
          bVar4 = *pbVar12;
          if ((char)bVar4 < '\0') goto LAB_00691454;
LAB_0069126c:
          auVar18[8] = bVar4;
          auVar18._0_8_ = pbVar12 + 1;
          auVar18._9_3_ = 0;
        }
        else {
          bVar4 = *pbVar12;
          if (-1 < (char)bVar4) goto LAB_0069126c;
LAB_00691454:
          auVar18 = FUN_0052e5f0(pbVar12);
          if (auVar18._0_8_ == 0) goto LAB_00691564;
        }
        uVar14 = auVar18._8_4_ + (auVar18._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
        lVar5 = param_3[0xb];
        iVar11 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *(int *)(param_3 + 0xb) = (int)lVar5 + -1;
        if (((int)lVar5 < 1) ||
           (param_2 = (byte *)FUN_00513d54(lVar9,auVar18._0_8_,param_3), param_2 == (byte *)0x0))
        goto LAB_00691564;
LAB_006914a8:
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) goto LAB_00691564;
        uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar11 - uVar14);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
      }
      else {
LAB_00691314:
        if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar14 - 1;
          return pbVar12;
        }
        if ((*puVar1 & 1) == 0) {
          lVar9 = FUN_0021d48c(puVar1);
        }
        else {
          lVar9 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar14,lVar9,pbVar12,param_3);
        if (param_2 == (byte *)0x0) goto LAB_00691564;
      }
    }
    uVar10 = (uint)(bVar4 >> 3);
joined_r0x006911d8:
    if (uVar10 == 4) goto LAB_0069124c;
LAB_006911dc:
    if (uVar10 != 2) {
      if ((uVar10 != 1) || ((uVar14 & 0xff) != 10)) goto LAB_00691314;
      if (*(int *)(param_1 + 0x24) == 1) {
        uVar13 = *(undefined8 *)(param_1 + 0x18);
        bVar4 = *pbVar12;
        if ((char)bVar4 < '\0') goto LAB_00691214;
LAB_006913b4:
        auVar17[8] = bVar4;
        auVar17._0_8_ = pbVar12 + 1;
        auVar17._9_3_ = 0;
      }
      else {
        FUN_00690efc(param_1);
        puVar8 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x24) = 1;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar8 = (ulong *)*puVar8;
        }
        uVar13 = FUN_0068f00c(puVar8);
        *(undefined8 *)(param_1 + 0x18) = uVar13;
        bVar4 = *pbVar12;
        if (-1 < (char)bVar4) goto LAB_006913b4;
LAB_00691214:
        auVar17 = FUN_0052e5f0(pbVar12);
        if (auVar17._0_8_ == 0) goto LAB_00691564;
      }
      uVar14 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
      lVar9 = param_3[0xb];
      iVar11 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar14;
      *(int *)(param_3 + 0xb) = (int)lVar9 + -1;
      if ((0 < (int)lVar9) &&
         (param_2 = (byte *)FUN_0068d69c(uVar13,auVar17._0_8_,param_3), param_2 != (byte *)0x0))
      goto LAB_006914a8;
      goto LAB_00691564;
    }
    if ((uVar14 & 0xff) != 0x12) goto LAB_00691314;
    if (*(int *)(param_1 + 0x24) == 2) {
      puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
      if ((*puVar1 & 1) == 0) goto LAB_00691298;
LAB_0069141c:
      puVar8 = (ulong *)*puVar8;
      pbVar15 = (byte *)*puVar2;
    }
    else {
      FUN_00690efc(param_1);
      *(undefined4 *)(param_1 + 0x24) = 2;
      *(undefined **)(param_1 + 0x18) = puVar6;
      puVar8 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
      if ((*puVar1 & 1) != 0) goto LAB_0069141c;
LAB_00691298:
      pbVar15 = (byte *)*puVar2;
    }
    if (pbVar15 == puVar6) {
      FUN_001fcdc8(puVar2,puVar8,puVar6);
      pbVar15 = (byte *)*puVar2;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar15,pbVar12,param_3);
    uVar3 = *(ulong *)(pbVar15 + 8);
    pbVar12 = *(byte **)(pbVar15 + 0x10);
    if ((*pbVar15 & 1) == 0) {
      pbVar12 = pbVar15 + 1;
      uVar3 = (ulong)(*pbVar15 >> 1);
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
LAB_00691564:
    param_2 = (byte *)0x0;
  }
  return param_2;
}


