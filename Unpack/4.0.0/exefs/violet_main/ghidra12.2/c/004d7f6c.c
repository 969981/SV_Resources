/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d7f6c; name: FUN_004d7f6c
 */


byte * FUN_004d7f6c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar10;
  long lVar9;
  ulong *puVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  
  puVar7 = PTR_DAT_047cba80;
  uVar14 = 0;
  puVar1 = (ulong *)(param_1 + 8);
  plVar2 = (long *)(param_1 + 0x18);
LAB_004d7fac:
  do {
    while( true ) {
      if ((byte *)*param_3 <= param_2) {
        if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) goto LAB_004d8240;
        auVar15 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
        param_2 = auVar15._0_8_;
        if ((auVar15._8_8_ & 1) != 0) goto LAB_004d8240;
      }
      bVar5 = *param_2;
      auVar15[8] = bVar5;
      auVar15._0_8_ = param_2 + 1;
      auVar15._9_7_ = 0;
      if ((char)bVar5 < '\0') {
        bVar4 = param_2[1];
        if ((char)bVar4 < '\0') {
          auVar15 = FUN_0052e560(param_2);
          param_2 = (byte *)0x0;
          if (auVar15._0_8_ == 0) goto LAB_004d8240;
        }
        else {
          auVar15._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
          auVar15._0_8_ = param_2 + 2;
          auVar15._12_4_ = 0;
        }
      }
      pbVar13 = auVar15._0_8_;
      uVar12 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
      uVar10 = auVar15._8_4_;
      if (uVar12 != 3) break;
      if ((uVar10 & 0xff) != 0x1a) goto LAB_004d80e0;
      lVar9 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar9 == 0) {
        puVar11 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar11 = (ulong *)*puVar11;
        }
        lVar9 = FUN_004e7150(puVar11);
        *(long *)(param_1 + 0x20) = lVar9;
        bVar5 = *pbVar13;
        if (-1 < (char)bVar5) goto LAB_004d8094;
LAB_004d8144:
        auVar16 = FUN_0052e5f0(pbVar13);
        if (auVar16._0_8_ == 0) goto LAB_004d8230;
      }
      else {
        bVar5 = *pbVar13;
        if ((char)bVar5 < '\0') goto LAB_004d8144;
LAB_004d8094:
        auVar16[8] = bVar5;
        auVar16._0_8_ = pbVar13 + 1;
        auVar16._9_3_ = 0;
      }
      uVar10 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
      lVar6 = param_3[0xb];
      iVar3 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar10;
      *(int *)(param_3 + 0xb) = (int)lVar6 + -1;
      if ((((int)lVar6 < 1) ||
          (param_2 = (byte *)FUN_004dfcd4(lVar9,auVar16._0_8_,param_3), param_2 == (byte *)0x0)) ||
         (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0))
      goto LAB_004d8230;
      uVar10 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar10);
      *(uint *)((long)param_3 + 0x1c) = uVar10;
      *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
    }
    if (uVar12 == 2) {
      if ((uVar10 & 0xff) == 0x10) {
        param_2 = pbVar13 + 1;
        uVar14 = 4;
        uVar10 = (uint)*pbVar13;
        if ((char)*pbVar13 < '\0') {
          uVar10 = (uVar10 + (uint)*param_2 * 0x80) - 0x80;
          if ((char)*param_2 < '\0') {
            auVar16 = FUN_0052e420(pbVar13);
            param_2 = auVar16._0_8_;
            *(int *)(param_1 + 0x28) = auVar16._8_4_;
            goto joined_r0x004d8118;
          }
          param_2 = pbVar13 + 2;
        }
        *(uint *)(param_1 + 0x28) = uVar10;
        goto LAB_004d7fac;
      }
LAB_004d80e0:
      if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar10 - 1;
        param_2 = pbVar13;
        goto LAB_004d8240;
      }
      if ((*puVar1 & 1) == 0) {
        lVar9 = FUN_00264e54(puVar1);
      }
      else {
        lVar9 = (*puVar1 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar15._8_8_ & 0xffffffff,lVar9,pbVar13,param_3);
    }
    else {
      if ((uVar12 != 1) || ((uVar10 & 0xff) != 10)) goto LAB_004d80e0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      puVar11 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        puVar8 = (undefined *)*plVar2;
      }
      else {
        puVar11 = (ulong *)*puVar11;
        puVar8 = (undefined *)*plVar2;
      }
      if (puVar8 == puVar7) {
        FUN_001fcdc8(plVar2,puVar11,puVar7);
        puVar8 = (undefined *)*plVar2;
      }
      param_2 = (byte *)FUN_0052e7f0(puVar8,pbVar13,param_3);
    }
joined_r0x004d8118:
    if (param_2 == (byte *)0x0) {
LAB_004d8230:
      param_2 = (byte *)0x0;
LAB_004d8240:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar14;
      return param_2;
    }
  } while( true );
}


