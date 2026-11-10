/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00685010; name: FUN_00685010
 */


byte * FUN_00685010(long param_1,byte *param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  
  puVar5 = PTR_LAB_047cba48;
  puVar1 = (ulong *)(param_1 + 8);
  if (param_2 < (byte *)*param_3) goto LAB_0068507c;
LAB_00685238:
  do {
    if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
      return param_2;
    }
    auVar13 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar13._0_8_;
    if ((auVar13._8_8_ & 1) != 0) {
      return param_2;
    }
LAB_0068507c:
    do {
      while( true ) {
        pbVar9 = param_2 + 1;
        bVar3 = *param_2;
        uVar12 = (uint)bVar3;
        if (-1 < (char)bVar3) break;
        uVar12 = (uVar12 + (uint)*pbVar9 * 0x80) - 0x80;
        if ((char)*pbVar9 < '\0') {
          auVar13 = FUN_0052e560(param_2,uVar12);
          pbVar9 = auVar13._0_8_;
          uVar12 = auVar13._8_4_;
          if (pbVar9 == (byte *)0x0) {
            return (byte *)0x0;
          }
          uVar7 = (uint)(auVar13._8_8_ >> 3) & 0x1fffffff;
          goto joined_r0x00685288;
        }
        pbVar9 = param_2 + 2;
        uVar7 = uVar12 >> 3;
        if (uVar7 == 2) goto LAB_006850ec;
LAB_00685098:
        if ((uVar7 == 1) && ((uVar12 & 0xff) == 8)) {
          bVar3 = *pbVar9;
          if ((char)bVar3 < '\0') {
            iVar2 = (uint)bVar3 + (uint)pbVar9[1] * 0x80 + -0x80;
            if ((char)pbVar9[1] < '\0') {
              auVar13 = FUN_0052e420(pbVar9,iVar2);
              iVar2 = *(int *)(param_1 + 0x1c);
            }
            else {
              auVar13._8_4_ = iVar2;
              auVar13._0_8_ = pbVar9 + 2;
              auVar13._12_4_ = 0;
              iVar2 = *(int *)(param_1 + 0x1c);
            }
          }
          else {
            auVar13[8] = bVar3;
            auVar13._0_8_ = pbVar9 + 1;
            auVar13._9_7_ = 0;
            iVar2 = *(int *)(param_1 + 0x1c);
          }
          if (iVar2 != 1) {
            if (iVar2 == 2) {
              puVar8 = (undefined8 *)(*puVar1 & 0xfffffffffffffffe);
              if ((*puVar1 & 1) != 0) {
                puVar8 = (undefined8 *)*puVar8;
              }
              if ((puVar8 == (undefined8 *)0x0) && (lVar10 = *(long *)(param_1 + 0x10), lVar10 != 0)
                 ) {
                FUN_00513c68(lVar10);
                FUN_0049e790(puVar5,lVar10);
              }
            }
            *(undefined4 *)(param_1 + 0x1c) = 1;
          }
          param_2 = auVar13._0_8_;
          *(bool *)(param_1 + 0x10) = auVar13._8_8_ != 0;
        }
        else {
LAB_00685128:
          if ((uVar12 == 0) || ((uVar12 & 7) == 4)) {
            *(uint *)(param_3 + 10) = uVar12 - 1;
            return pbVar9;
          }
          if ((*puVar1 & 1) == 0) {
            lVar10 = FUN_0021d48c(puVar1);
          }
          else {
            lVar10 = (*puVar1 & 0xfffffffffffffffe) + 8;
          }
          param_2 = (byte *)FUN_0052f000(uVar12,lVar10,pbVar9,param_3);
        }
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        if ((byte *)*param_3 <= param_2) goto LAB_00685238;
      }
      uVar7 = (uint)(bVar3 >> 3);
joined_r0x00685288:
      if (uVar7 != 2) goto LAB_00685098;
LAB_006850ec:
      if ((uVar12 & 0xff) != 0x12) goto LAB_00685128;
      if (*(int *)(param_1 + 0x1c) == 2) {
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        bVar3 = *pbVar9;
        if (-1 < (char)bVar3) goto LAB_006851b0;
LAB_00685114:
        auVar14 = FUN_0052e5f0(pbVar9);
        if (auVar14._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        puVar6 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
        *(undefined4 *)(param_1 + 0x1c) = 2;
        if ((*(ulong *)(param_1 + 8) & 1) != 0) {
          puVar6 = (ulong *)*puVar6;
        }
        uVar11 = FUN_0051444c(puVar6);
        *(undefined8 *)(param_1 + 0x10) = uVar11;
        bVar3 = *pbVar9;
        if ((char)bVar3 < '\0') goto LAB_00685114;
LAB_006851b0:
        auVar14[8] = bVar3;
        auVar14._0_8_ = pbVar9 + 1;
        auVar14._9_3_ = 0;
      }
      uVar12 = auVar14._8_4_ + (auVar14._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f);
      uVar4 = param_3[0xb];
      iVar2 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar12;
      *(int *)(param_3 + 0xb) = (int)uVar4 + -1;
      if ((int)uVar4 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_00513d54(uVar11,auVar14._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      if ((int)param_3[10] != 0) {
        return (byte *)0x0;
      }
      uVar12 = *(int *)((long)param_3 + 0x1c) + (iVar2 - uVar12);
      *(uint *)((long)param_3 + 0x1c) = uVar12;
      pbVar9 = (byte *)(param_3[1] + (long)(int)(uVar12 & (int)uVar12 >> 0x1f));
      *param_3 = (ulong)pbVar9;
    } while (param_2 < pbVar9);
  } while( true );
}


