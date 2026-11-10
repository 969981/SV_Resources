/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0060eb58; name: FUN_0060eb58
 */


/* WARNING: Removing unreachable block (ram,0x0060ed28) */
/* WARNING: Removing unreachable block (ram,0x0060ee10) */

byte * FUN_0060eb58(long param_1,byte *param_2,long *param_3)

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
  ulong *puVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
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
      pbVar12 = param_2 + 1;
      bVar6 = *param_2;
      uVar14 = (uint)bVar6;
      if ((char)bVar6 < '\0') break;
      uVar11 = (uint)(bVar6 >> 3);
joined_r0x0060ed4c:
      if (uVar11 == 3) goto LAB_0060ec18;
LAB_0060ebbc:
      if (uVar11 == 2) {
        if ((uVar14 & 0xff) != 0x12) goto LAB_0060ece4;
        puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          pbVar15 = (byte *)*puVar3;
        }
        else {
          puVar10 = (ulong *)*puVar10;
          pbVar15 = (byte *)*puVar3;
        }
        if (pbVar15 == puVar8) {
          FUN_001fcdc8(puVar3,puVar10,puVar8);
          pbVar15 = (byte *)*puVar3;
        }
LAB_0060ec84:
        param_2 = (byte *)FUN_0052e7f0(pbVar15,pbVar12,param_3);
        uVar4 = *(ulong *)(pbVar15 + 8);
        pbVar12 = *(byte **)(pbVar15 + 0x10);
        if ((*pbVar15 & 1) == 0) {
          pbVar12 = pbVar15 + 1;
          uVar4 = (ulong)(*pbVar15 >> 1);
        }
        bVar9 = FUN_0052e6b0(pbVar12,uVar4,0);
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
          if (iVar5 != 4) goto LAB_0060eeac;
          goto LAB_0060eea8;
        }
      }
      else {
        if ((uVar11 != 1) || ((uVar14 & 0xff) != 10)) goto LAB_0060ece4;
        lVar13 = *(long *)(param_1 + 0x20);
        if (lVar13 == 0) {
          puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
          if ((*puVar2 & 1) != 0) {
            puVar10 = (ulong *)*puVar10;
          }
          lVar13 = FUN_006160e8(puVar10);
          *(long *)(param_1 + 0x20) = lVar13;
          bVar6 = *pbVar12;
          if (-1 < (char)bVar6) goto LAB_0060ebec;
LAB_0060ed78:
          auVar17 = FUN_0052e5f0(pbVar12);
          if (auVar17._0_8_ == 0) goto LAB_0060eea8;
        }
        else {
          bVar6 = *pbVar12;
          if ((char)bVar6 < '\0') goto LAB_0060ed78;
LAB_0060ebec:
          auVar17[8] = bVar6;
          auVar17._0_8_ = pbVar12 + 1;
          auVar17._9_3_ = 0;
        }
        uVar14 = auVar17._8_4_ + (auVar17._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
        lVar7 = param_3[0xb];
        iVar5 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
        if ((((int)lVar7 < 1) ||
            (param_2 = (byte *)FUN_0060fa3c(lVar13,auVar17._0_8_,param_3), param_2 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
        goto LAB_0060eea8;
        uVar14 = *(int *)((long)param_3 + 0x1c) + (iVar5 - uVar14);
        *(uint *)((long)param_3 + 0x1c) = uVar14;
        *param_3 = param_3[1] + (long)(int)(uVar14 & (int)uVar14 >> 0x1f);
      }
    }
    uVar14 = (uVar14 + (uint)*pbVar12 * 0x80) - 0x80;
    if ((char)*pbVar12 < '\0') {
      auVar16 = FUN_0052e560(param_2,uVar14);
      pbVar12 = auVar16._0_8_;
      uVar14 = auVar16._8_4_;
      if (pbVar12 != (byte *)0x0) {
        uVar11 = (uint)(auVar16._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x0060ed4c;
      }
      break;
    }
    pbVar12 = param_2 + 2;
    uVar11 = uVar14 >> 3;
    if (uVar11 != 3) goto LAB_0060ebbc;
LAB_0060ec18:
    if ((uVar14 & 0xff) == 0x1a) {
      puVar10 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
      if ((*puVar2 & 1) == 0) {
        pbVar15 = (byte *)*puVar1;
      }
      else {
        puVar10 = (ulong *)*puVar10;
        pbVar15 = (byte *)*puVar1;
      }
      if (pbVar15 == puVar8) {
        FUN_001fcdc8(puVar1,puVar10,puVar8);
        pbVar15 = (byte *)*puVar1;
      }
      goto LAB_0060ec84;
    }
LAB_0060ece4:
    if ((uVar14 == 0) || ((uVar14 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar14 - 1;
      return pbVar12;
    }
    if ((*puVar2 & 1) == 0) {
      lVar13 = FUN_0021d48c(puVar2);
    }
    else {
      lVar13 = (*puVar2 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar14,lVar13,pbVar12,param_3);
  } while (param_2 != (byte *)0x0);
LAB_0060eea8:
  param_2 = (byte *)0x0;
LAB_0060eeac:
  return param_2;
}


