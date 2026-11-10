/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00570f08; name: FUN_00570f08
 */


/* WARNING: Removing unreachable block (ram,0x005711f4) */

byte * FUN_00570f08(long param_1,byte *param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  byte bVar9;
  undefined *puVar10;
  long lVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  
  puVar8 = PTR_DAT_047cba80;
  plVar1 = (long *)(param_1 + 0x18);
  puVar2 = (ulong *)(param_1 + 8);
  puVar3 = (undefined8 *)(param_1 + 0x10);
LAB_00570f78:
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
          return param_2;
        }
        auVar18 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar18._0_8_;
        if ((auVar18._8_8_ & 1) != 0) {
          return param_2;
        }
      }
      pbVar15 = param_2 + 1;
      bVar6 = *param_2;
      uVar16 = (uint)bVar6;
      if (-1 < (char)bVar6) break;
      uVar16 = (uVar16 + (uint)*pbVar15 * 0x80) - 0x80;
      if ((char)*pbVar15 < '\0') {
        auVar18 = FUN_0052e560(param_2,uVar16);
        pbVar15 = auVar18._0_8_;
        uVar16 = auVar18._8_4_;
        if (pbVar15 != (byte *)0x0) {
          uVar14 = (uint)(auVar18._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00570f9c;
        }
        goto LAB_00571278;
      }
      pbVar15 = param_2 + 2;
      uVar14 = uVar16 >> 3;
      if (uVar14 != 3) goto LAB_00570fa0;
LAB_00571068:
      if ((uVar16 & 0xff) == 0x1a) {
        puVar13 = (undefined8 *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) == 0) {
          puVar10 = (undefined *)*plVar1;
        }
        else {
          puVar13 = (undefined8 *)*puVar13;
          puVar10 = (undefined *)*plVar1;
        }
        if (puVar10 == puVar8) {
          FUN_001fcdc8(plVar1,puVar13,puVar8);
          param_2 = (byte *)FUN_0052e7f0(*plVar1,pbVar15,param_3);
        }
        else {
          param_2 = (byte *)FUN_0052e7f0(puVar10,pbVar15,param_3);
        }
      }
      else {
LAB_005710d8:
        if ((uVar16 == 0) || ((uVar16 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar16 - 1;
          return pbVar15;
        }
        if ((*puVar2 & 1) == 0) {
          lVar11 = FUN_0021d48c(puVar2);
        }
        else {
          lVar11 = (*puVar2 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar16,lVar11,pbVar15,param_3);
      }
      if (param_2 == (byte *)0x0) goto LAB_00571278;
    }
    uVar14 = (uint)(bVar6 >> 3);
joined_r0x00570f9c:
    if (uVar14 == 3) goto LAB_00571068;
LAB_00570fa0:
    if (uVar14 == 2) {
      if ((uVar16 & 0xff) != 0x12) goto LAB_005710d8;
      lVar11 = *(long *)(param_1 + 0x20);
      if (lVar11 == 0) {
        puVar12 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
        if ((*puVar2 & 1) != 0) {
          puVar12 = (ulong *)*puVar12;
        }
        lVar11 = FUN_00535218(puVar12);
        *(long *)(param_1 + 0x20) = lVar11;
        bVar6 = *pbVar15;
        if ((char)bVar6 < '\0') goto LAB_0057115c;
LAB_005710d0:
        auVar19[8] = bVar6;
        auVar19._0_8_ = pbVar15 + 1;
        auVar19._9_3_ = 0;
      }
      else {
        bVar6 = *pbVar15;
        if (-1 < (char)bVar6) goto LAB_005710d0;
LAB_0057115c:
        auVar19 = FUN_0052e5f0(pbVar15);
        if (auVar19._0_8_ == 0) goto LAB_00571278;
      }
      uVar16 = auVar19._8_4_ + (auVar19._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar16 & (int)uVar16 >> 0x1f);
      lVar7 = param_3[0xb];
      iVar5 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar16;
      *(int *)(param_3 + 0xb) = (int)lVar7 + -1;
      if ((((int)lVar7 < 1) ||
          (param_2 = (byte *)FUN_00534bd4(lVar11,auVar19._0_8_,param_3), param_2 == (byte *)0x0)) ||
         (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
      goto LAB_00571278;
      uVar16 = *(int *)((long)param_3 + 0x1c) + (iVar5 - uVar16);
      *(uint *)((long)param_3 + 0x1c) = uVar16;
      *param_3 = param_3[1] + (long)(int)(uVar16 & (int)uVar16 >> 0x1f);
      goto LAB_00570f78;
    }
    if ((uVar14 != 1) || ((uVar16 & 0xff) != 10)) goto LAB_005710d8;
    puVar12 = (ulong *)(*puVar2 & 0xfffffffffffffffe);
    if ((*puVar2 & 1) == 0) {
      pbVar17 = (byte *)*puVar3;
    }
    else {
      puVar12 = (ulong *)*puVar12;
      pbVar17 = (byte *)*puVar3;
    }
    if (pbVar17 == puVar8) {
      FUN_001fcdc8(puVar3,puVar12,puVar8);
      pbVar17 = (byte *)*puVar3;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar17,pbVar15,param_3);
    uVar4 = *(ulong *)(pbVar17 + 8);
    pbVar15 = *(byte **)(pbVar17 + 0x10);
    if ((*pbVar17 & 1) == 0) {
      pbVar15 = pbVar17 + 1;
      uVar4 = (ulong)(*pbVar17 >> 1);
    }
    bVar9 = FUN_0052e6b0(pbVar15,uVar4,0);
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
      if (iVar5 == 4) {
LAB_00571278:
        param_2 = (byte *)0x0;
      }
      return param_2;
    }
  } while( true );
}


