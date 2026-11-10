/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004d51b4; name: FUN_004d51b4
 */


byte * FUN_004d51b4(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  uint uVar11;
  long lVar10;
  undefined8 *puVar12;
  uint uVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  
  puVar7 = PTR_DAT_047cba80;
  puVar1 = (ulong *)(param_1 + 8);
  plVar2 = (long *)(param_1 + 0x18);
  if (param_2 < (byte *)*param_3) goto LAB_004d5224;
LAB_004d53e4:
  do {
    if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
      return param_2;
    }
    auVar15 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar15._0_8_;
    if ((auVar15._8_8_ & 1) != 0) {
      return param_2;
    }
LAB_004d5224:
    do {
      while( true ) {
        bVar5 = *param_2;
        auVar15[8] = bVar5;
        auVar15._0_8_ = param_2 + 1;
        auVar15._9_7_ = 0;
        if ((char)bVar5 < '\0') {
          bVar4 = param_2[1];
          if ((char)bVar4 < '\0') {
            auVar15 = FUN_0052e560(param_2);
            if (auVar15._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          else {
            auVar15._8_4_ = (uint)bVar5 + (uint)bVar4 * 0x80 + -0x80;
            auVar15._0_8_ = param_2 + 2;
            auVar15._12_4_ = 0;
          }
        }
        pbVar14 = auVar15._0_8_;
        uVar13 = (uint)(auVar15._8_8_ >> 3) & 0x1fffffff;
        uVar11 = auVar15._8_4_;
        if (uVar13 == 2) break;
        if ((uVar13 == 1) && ((uVar11 & 0xff) == 10)) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          puVar12 = (undefined8 *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          if ((*(ulong *)(param_1 + 8) & 1) == 0) {
            puVar8 = (undefined *)*plVar2;
          }
          else {
            puVar12 = (undefined8 *)*puVar12;
            puVar8 = (undefined *)*plVar2;
          }
          if (puVar8 == puVar7) {
            FUN_001fcdc8(plVar2,puVar12,puVar7);
            puVar8 = (undefined *)*plVar2;
          }
          param_2 = (byte *)FUN_0052e7f0(puVar8,pbVar14,param_3);
        }
        else {
LAB_004d52ec:
          if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar11 - 1;
            return pbVar14;
          }
          if ((*puVar1 & 1) == 0) {
            lVar10 = FUN_00264e54(puVar1);
          }
          else {
            lVar10 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          param_2 = (byte *)FUN_00515960(auVar15._8_8_ & 0xffffffff,lVar10,pbVar14,param_3);
        }
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_004d53e4;
      }
      if ((uVar11 & 0xff) != 0x12) goto LAB_004d52ec;
      lVar10 = *(long *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (lVar10 == 0) {
        puVar9 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar9 = (ulong *)*puVar9;
        }
        lVar10 = FUN_004e6ed4(puVar9);
        *(long *)(param_1 + 0x20) = lVar10;
        bVar5 = *pbVar14;
        if ((char)bVar5 < '\0') goto LAB_004d5350;
LAB_004d52e4:
        auVar16[8] = bVar5;
        auVar16._0_8_ = pbVar14 + 1;
        auVar16._9_3_ = 0;
      }
      else {
        bVar5 = *pbVar14;
        if (-1 < (char)bVar5) goto LAB_004d52e4;
LAB_004d5350:
        auVar16 = FUN_0052e5f0(pbVar14);
        if (auVar16._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      uVar11 = auVar16._8_4_ + (auVar16._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar11 & (int)uVar11 >> 0x1f);
      uVar6 = param_3[0xb];
      iVar3 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar11;
      *(int *)(param_3 + 0xb) = (int)uVar6 + -1;
      if ((((int)uVar6 < 1) ||
          (param_2 = (byte *)FUN_004dea80(lVar10,auVar16._0_8_,param_3), param_2 == (byte *)0x0)) ||
         (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
        return (byte *)0x0;
      }
      uVar11 = *(int *)((long)param_3 + 0x1c) + (iVar3 - uVar11);
      *(uint *)((long)param_3 + 0x1c) = uVar11;
      pbVar14 = (byte *)(param_3[1] + (long)(int)(uVar11 & (int)uVar11 >> 0x1f));
      *param_3 = (ulong)pbVar14;
    } while (param_2 < pbVar14);
  } while( true );
}


