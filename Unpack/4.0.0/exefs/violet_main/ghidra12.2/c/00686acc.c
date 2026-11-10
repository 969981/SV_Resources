/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00686acc; name: FUN_00686acc
 */


byte * FUN_00686acc(long param_1,byte *param_2,ulong *param_3)

{
  int iVar1;
  byte bVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  
  if (param_2 < (byte *)*param_3) goto LAB_00686b60;
LAB_00686dd8:
  do {
    if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
      return param_2;
    }
    auVar10 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar10._0_8_;
    if ((auVar10._8_8_ & 1) != 0) {
      return param_2;
    }
LAB_00686b60:
    do {
      while( true ) {
        pbVar8 = param_2 + 1;
        bVar2 = *param_2;
        uVar9 = (uint)bVar2;
        if ((char)bVar2 < '\0') break;
        uVar6 = (uint)(bVar2 >> 3);
joined_r0x00686cc4:
        if (uVar6 != 3) goto LAB_00686b7c;
LAB_00686bf0:
        if ((uVar9 & 0xff) != 0x1a) goto LAB_00686c68;
        if (*(int *)(param_1 + 0x1c) == 3) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          bVar2 = *pbVar8;
          if ((char)bVar2 < '\0') goto LAB_00686c18;
LAB_00686cfc:
          auVar11[8] = bVar2;
          auVar11._0_8_ = pbVar8 + 1;
          auVar11._9_3_ = 0;
        }
        else {
          FUN_0068640c(param_1);
          puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 3;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar3 = (ulong *)*puVar3;
          }
          uVar4 = FUN_0068cc10(puVar3);
          *(undefined8 *)(param_1 + 0x10) = uVar4;
          bVar2 = *pbVar8;
          if (-1 < (char)bVar2) goto LAB_00686cfc;
LAB_00686c18:
          auVar11 = FUN_0052e5f0(pbVar8);
          if (auVar11._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        uVar9 = auVar11._8_4_ + (auVar11._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
        uVar7 = param_3[0xb];
        iVar1 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar9;
        *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
        if ((int)uVar7 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_00688880(uVar4,auVar11._0_8_,param_3);
joined_r0x00686d40:
        if ((param_2 == (byte *)0x0) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar9 = *(int *)((long)param_3 + 0x1c) + (iVar1 - uVar9);
        *(uint *)((long)param_3 + 0x1c) = uVar9;
        pbVar8 = (byte *)(param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f));
        *param_3 = (ulong)pbVar8;
        if (pbVar8 <= param_2) goto LAB_00686dd8;
      }
      uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
      if ((char)*pbVar8 < '\0') {
        auVar10 = FUN_0052e560(param_2,uVar9);
        pbVar8 = auVar10._0_8_;
        uVar9 = auVar10._8_4_;
        if (pbVar8 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar6 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x00686cc4;
      }
      pbVar8 = param_2 + 2;
      uVar6 = uVar9 >> 3;
      if (uVar6 == 3) goto LAB_00686bf0;
LAB_00686b7c:
      if (uVar6 == 2) {
        if ((uVar9 & 0xff) == 0x12) {
          if (*(int *)(param_1 + 0x1c) == 2) {
            uVar4 = *(undefined8 *)(param_1 + 0x10);
            bVar2 = *pbVar8;
            if ((char)bVar2 < '\0') goto LAB_00686c54;
LAB_00686d78:
            auVar12[8] = bVar2;
            auVar12._0_8_ = pbVar8 + 1;
            auVar12._9_3_ = 0;
          }
          else {
            FUN_0068640c(param_1);
            puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
            *(undefined4 *)(param_1 + 0x1c) = 2;
            if ((*(ulong *)(param_1 + 8) & 1) != 0) {
              puVar3 = (ulong *)*puVar3;
            }
            uVar4 = FUN_0068cb4c(puVar3);
            *(undefined8 *)(param_1 + 0x10) = uVar4;
            bVar2 = *pbVar8;
            if (-1 < (char)bVar2) goto LAB_00686d78;
LAB_00686c54:
            auVar12 = FUN_0052e5f0(pbVar8);
            if (auVar12._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar9 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar1 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar9;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_00687eb0(uVar4,auVar12._0_8_,param_3);
          goto joined_r0x00686d40;
        }
LAB_00686c68:
        if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
          *(uint *)(param_3 + 10) = uVar9 - 1;
          return pbVar8;
        }
        uVar7 = *(ulong *)(param_1 + 8);
        if ((uVar7 & 1) == 0) {
          lVar5 = FUN_0021d48c((ulong *)(param_1 + 8));
        }
        else {
          lVar5 = (uVar7 & 0xfffffffffffffffe) + 8;
        }
        param_2 = (byte *)FUN_0052f000(uVar9,lVar5,pbVar8,param_3);
      }
      else {
        if ((uVar6 != 1) || ((uVar9 & 0xff) != 10)) goto LAB_00686c68;
        if (*(int *)(param_1 + 0x1c) == 1) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
        }
        else {
          FUN_0068640c(param_1);
          puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar3 = (ulong *)*puVar3;
          }
          uVar4 = FUN_0068ca7c(puVar3);
          *(undefined8 *)(param_1 + 0x10) = uVar4;
        }
        param_2 = (byte *)FUN_00686e64(param_3,uVar4,pbVar8);
      }
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    } while (param_2 < (byte *)*param_3);
  } while( true );
}


