/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007215f8; name: FUN_007215f8
 */


/* WARNING: Removing unreachable block (ram,0x007217c8) */
/* WARNING: Removing unreachable block (ram,0x007218b0) */

byte * FUN_007215f8(long param_1,byte *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  byte bVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  puVar8 = PTR_DAT_047cba80;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  puVar2 = (ulong *)(param_1 + 8);
  puVar3 = (undefined8 *)(param_1 + 0x10);
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
      pbVar13 = param_2 + 1;
      bVar6 = *param_2;
      uVar14 = (uint)bVar6;
      if ((char)bVar6 < '\0') break;
      uVar12 = (uint)(bVar6 >> 3);
joined_r0x007217ec:
      if (uVar12 == 3) goto LAB_007216c8;
LAB_0072165c:
      if (uVar12 == 2) {
        if ((uVar14 & 0xff) != 0x12) goto LAB_00721784;
        lVar10 = *(long *)(param_1 + 0x20);
        if (lVar10 == 0) {
          puVar11 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) != 0) {
            puVar11 = (ulong *)*puVar11;
          }
          lVar10 = FUN_0071d248(puVar11);
          *(long *)(param_1 + 0x20) = lVar10;
          bVar6 = *pbVar13;
          if (-1 < (char)bVar6) goto LAB_0072177c;
LAB_00721818:
          auVar17 = FUN_0052e5f0(pbVar13);
          if (auVar17._0_8_ == 0) goto LAB_00721948;
        }
        else {
          bVar6 = *pbVar13;
          if ((char)bVar6 < '\0') goto LAB_00721818;
LAB_0072177c:
          auVar17[8] = bVar6;
          auVar17._0_8_ = pbVar13 + 1;
          auVar17._9_3_ = 0;
        }
        uVar14 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
        lVar7 = param_3[0xb];
        iVar5 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
        if ((((int)lVar7 < 1) ||
            (param_2 = (byte *)FUN_0071bc28(lVar10,auVar17._0_8_,param_3), param_2 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
        goto LAB_00721948;
        uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar5 - uVar14);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
      }
      else {
        if ((uVar12 != 1) || ((uVar14 & 0xff) != 10)) goto LAB_00721784;
        puVar11 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          pbVar15 = (byte *)*puVar3;
        }
        else {
          puVar11 = (ulong *)*puVar11;
          pbVar15 = (byte *)*puVar3;
        }
        if (pbVar15 == puVar8) {
          FUN_001fcdc8(puVar3,puVar11,puVar8);
          pbVar15 = (byte *)*puVar3;
        }
LAB_007216fc:
        param_2 = (byte *)FUN_0052e7f0(pbVar15,pbVar13,param_3);
        uVar4 = *(ulong *)(pbVar15 + 8);
        pbVar13 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar13 = pbVar15 + 1;
          uVar4 = (ulong)(*pbVar15 >> 1);
        }
        bVar9 = FUN_0052e6b0(pbVar13,uVar4,0);
        bVar6 = bVar9 & param_2 != (byte *)0x0;
        if ((bVar9 & 1) == 0) {
          iVar5 = 2;
          if (bVar6 == 0) {
            iVar5 = 4;
          }
        }
        else {
          iVar5 = 2;
          if (bVar6 == 0) {
            iVar5 = (uint)(param_2 == (byte *)0x0) << 2;
          }
        }
        if (iVar5 != 2) {
          if (iVar5 != 4) goto LAB_0072194c;
          goto LAB_00721948;
        }
      }
    }
    uVar14 = (uVar14 + (uint)*pbVar13 * 0x80) - 0x80;
    if ((char)*pbVar13 < '\0') {
      auVar16 = FUN_0052e560(param_2,uVar14);
      pbVar13 = auVar16._0_8_;
      uVar14 = auVar16._8_4_;
      if (pbVar13 != (byte *)0x0) {
        uVar12 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x007217ec;
      }
      break;
    }
    pbVar13 = param_2 + 2;
    uVar12 = uVar14 >> 3;
    if (uVar12 != 3) goto LAB_0072165c;
LAB_007216c8:
    if ((uVar14 & 0xff) == 0x1a) {
      puVar11 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) {
        pbVar15 = (byte *)*puVar1;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        pbVar15 = (byte *)*puVar1;
      }
      if (pbVar15 == puVar8) {
        FUN_001fcdc8(puVar1,puVar11,puVar8);
        pbVar15 = (byte *)*puVar1;
      }
      goto LAB_007216fc;
    }
LAB_00721784:
    if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar14 - 1;
      return pbVar13;
    }
    if ((*puVar2 & 1) == 0) {
      lVar10 = FUN_0021d48c(puVar2);
    }
    else {
      lVar10 = (*puVar2 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar14,lVar10,pbVar13,param_3);
  } while (param_2 != (byte *)0x0);
LAB_00721948:
  param_2 = (byte *)0x0;
LAB_0072194c:
  return param_2;
}


