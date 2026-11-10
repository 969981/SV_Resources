/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006059a0; name: FUN_006059a0
 */


byte * FUN_006059a0(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  byte bVar8;
  long lVar9;
  ulong *puVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  
  puVar7 = PTR_DAT_047cba80;
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
      bVar5 = *param_2;
      uVar13 = (uint)bVar5;
      if (-1 < (char)bVar5) break;
      uVar13 = (uVar13 + (uint)*pbVar12 * 0x80) - 0x80;
      if ((char)*pbVar12 < '\0') {
        auVar15 = FUN_0052e560(param_2,uVar13);
        pbVar12 = auVar15._0_8_;
        uVar13 = auVar15._8_4_;
        if (pbVar12 != (byte *)0x0) {
          uVar11 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00605b50;
        }
        goto LAB_00605c8c;
      }
      pbVar12 = param_2 + 2;
      uVar11 = uVar13 >> 3;
      if (uVar11 != 2) goto LAB_00605a0c;
LAB_00605acc:
      if ((uVar13 & 0xff) == 0x12) {
        lVar9 = *(long *)(param_1 + 0x18);
        if (lVar9 == 0) {
          puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
          if ((*puVar1 & 1) != 0) {
            puVar10 = (ulong *)*puVar10;
          }
          lVar9 = FUN_00616300(puVar10);
          *(long *)(param_1 + 0x18) = lVar9;
          bVar5 = *pbVar12;
          if (-1 < (char)bVar5) goto LAB_00605aec;
LAB_00605b7c:
          auVar16 = FUN_0052e5f0(pbVar12);
          if (auVar16._0_8_ == 0) goto LAB_00605c8c;
        }
        else {
          bVar5 = *pbVar12;
          if ((char)bVar5 < '\0') goto LAB_00605b7c;
LAB_00605aec:
          auVar16[8] = bVar5;
          auVar16._0_8_ = pbVar12 + 1;
          auVar16._9_3_ = 0;
        }
        uVar13 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
        lVar6 = param_3[0xb];
        iVar4 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *(int *)(param_3 + 0xb) = (int)lVar6 + -1;
        if ((((int)lVar6 < 1) ||
            (param_2 = (byte *)FUN_006112a0(lVar9,auVar16._0_8_,param_3), param_2 == (byte *)0x0))
           || (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
        goto LAB_00605c8c;
        uVar13 = *(int *)((long)param_3 + 0x1c) + (iVar4 - uVar13);
        *(uint *)((long)param_3 + 0x1c) = uVar13;
        *param_3 = param_3[1] + (long)(int)(uVar13 & (int)uVar13 >> 0x1f);
      }
      else {
LAB_00605af4:
        if ((uVar13 == 0) || ((uVar13 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar13 - 1;
          return pbVar12;
        }
        if ((*puVar1 & 1) == 0) {
          lVar9 = FUN_0021d48c(puVar1);
        }
        else {
          lVar9 = (*puVar1 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar13,lVar9,pbVar12,param_3);
        if (param_2 == (byte *)0x0) goto LAB_00605c8c;
      }
    }
    uVar11 = (uint)(bVar5 >> 3);
joined_r0x00605b50:
    if (uVar11 == 2) goto LAB_00605acc;
LAB_00605a0c:
    if ((uVar11 != 1) || ((uVar13 & 0xff) != 10)) goto LAB_00605af4;
    puVar10 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
    if ((*puVar1 & 1) == 0) {
      pbVar14 = (byte *)*puVar2;
    }
    else {
      puVar10 = (ulong *)*puVar10;
      pbVar14 = (byte *)*puVar2;
    }
    if (pbVar14 == puVar7) {
      FUN_001fcdc8(puVar2,puVar10,puVar7);
      pbVar14 = (byte *)*puVar2;
    }
    param_2 = (byte *)FUN_0052e7f0(pbVar14,pbVar12,param_3);
    uVar3 = *(ulong *)(pbVar14 + 8);
    pbVar12 = *(byte **)(pbVar14 + 0x10);
    if ((*pbVar14 & 1) == 0) {
      pbVar12 = pbVar14 + 1;
      uVar3 = (ulong)(*pbVar14 >> 1);
    }
    bVar8 = FUN_0052e6b0(pbVar12,uVar3,0);
    bVar5 = bVar8 & param_2 != (byte *)0x0;
    if ((bVar8 & 1) == 0) {
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
LAB_00605c8c:
    param_2 = (byte *)0x0;
  }
  return param_2;
}


