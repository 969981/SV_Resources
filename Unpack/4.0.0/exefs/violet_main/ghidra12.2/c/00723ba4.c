/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00723ba4; name: FUN_00723ba4
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_00723ba4(long param_1,byte *param_2,ulong *param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  
  if (param_2 < (byte *)*param_3) goto LAB_00723c3c;
LAB_00723ee4:
  do {
    if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
      return param_2;
    }
    auVar11 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
    param_2 = auVar11._0_8_;
    if ((auVar11._8_8_ & 1) != 0) {
      return param_2;
    }
LAB_00723c3c:
    do {
      while( true ) {
        pbVar8 = param_2 + 1;
        bVar2 = *param_2;
        uVar10 = (uint)bVar2;
        if ((char)bVar2 < '\0') break;
        uVar6 = (uint)(bVar2 >> 3);
joined_r0x00723d88:
        if (uVar6 == 3) goto LAB_00723cc8;
LAB_00723c58:
        if (uVar6 == 2) {
          if ((uVar10 & 0xff) != 0x10) goto LAB_00723d2c;
          bVar2 = *pbVar8;
          if ((char)bVar2 < '\0') {
            iVar1 = (uint)bVar2 + (uint)pbVar8[1] * 0x80 + -0x80;
            if ((char)pbVar8[1] < '\0') {
              auVar11 = FUN_0052e420(pbVar8,iVar1);
              iVar1 = *(int *)(param_1 + 0x1c);
              auVar3 = auVar11;
            }
            else {
              auVar3._8_4_ = iVar1;
              auVar3._0_8_ = pbVar8 + 2;
              auVar3._12_4_ = 0;
              auVar11._8_4_ = iVar1;
              auVar11._0_8_ = pbVar8 + 2;
              auVar11._12_4_ = 0;
              iVar1 = *(int *)(param_1 + 0x1c);
            }
          }
          else {
            auVar3[8] = bVar2;
            auVar3._0_8_ = pbVar8 + 1;
            auVar3._9_7_ = 0;
            auVar11[8] = bVar2;
            auVar11._0_8_ = pbVar8 + 1;
            auVar11._9_7_ = 0;
            iVar1 = *(int *)(param_1 + 0x1c);
          }
          if (iVar1 != 2) {
            FUN_00723960(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 2;
            auVar11 = auVar3;
          }
          param_2 = auVar11._0_8_;
          *(bool *)(param_1 + 0x10) = auVar11._8_8_ != 0;
          goto joined_r0x00723d60;
        }
        if ((uVar6 != 1) || ((uVar10 & 0xff) != 10)) goto LAB_00723d2c;
        if (*(int *)(param_1 + 0x1c) == 1) {
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          bVar2 = *pbVar8;
          if ((char)bVar2 < '\0') goto LAB_00723c90;
LAB_00723dc0:
          auVar12[8] = bVar2;
          auVar12._0_8_ = pbVar8 + 1;
          auVar12._9_3_ = 0;
        }
        else {
          FUN_00723960(param_1);
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 1;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          uVar9 = FUN_0071d248(puVar4);
          *(undefined8 *)(param_1 + 0x10) = uVar9;
          bVar2 = *pbVar8;
          if (-1 < (char)bVar2) goto LAB_00723dc0;
LAB_00723c90:
          auVar12 = FUN_0052e5f0(pbVar8);
          if (auVar12._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        uVar10 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
        uVar7 = param_3[0xb];
        iVar1 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar10;
        *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
        if ((int)uVar7 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_0071bc28(uVar9,auVar12._0_8_,param_3);
joined_r0x00723e04:
        if ((param_2 == (byte *)0x0) ||
           (*(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1, (int)param_3[10] != 0)) {
          return (byte *)0x0;
        }
        uVar10 = *(int *)((long)param_3 + 0x1c) + (iVar1 - uVar10);
        *(uint *)((long)param_3 + 0x1c) = uVar10;
        pbVar8 = (byte *)(param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f));
        *param_3 = (ulong)pbVar8;
        if (pbVar8 <= param_2) goto LAB_00723ee4;
      }
      uVar10 = (uVar10 + (uint)*pbVar8 * 0x80) - 0x80;
      if ((char)*pbVar8 < '\0') {
        auVar11 = FUN_0052e560(param_2,uVar10);
        pbVar8 = auVar11._0_8_;
        uVar10 = auVar11._8_4_;
        if (pbVar8 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar6 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x00723d88;
      }
      pbVar8 = param_2 + 2;
      uVar6 = uVar10 >> 3;
      if (uVar6 != 3) goto LAB_00723c58;
LAB_00723cc8:
      if ((uVar10 & 0xff) == 0x1a) {
        if (*(int *)(param_1 + 0x1c) == 3) {
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          bVar2 = *pbVar8;
          if ((char)bVar2 < '\0') goto LAB_00723cf0;
LAB_00723e3c:
          auVar13[8] = bVar2;
          auVar13._0_8_ = pbVar8 + 1;
          auVar13._9_3_ = 0;
        }
        else {
          FUN_00723960(param_1);
          puVar4 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x1c) = 3;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar4 = (ulong *)*puVar4;
          }
          uVar9 = FUN_006ffab4(puVar4);
          *(undefined8 *)(param_1 + 0x10) = uVar9;
          bVar2 = *pbVar8;
          if (-1 < (char)bVar2) goto LAB_00723e3c;
LAB_00723cf0:
          auVar13 = FUN_0052e5f0(pbVar8);
          if (auVar13._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        uVar10 = auVar13._8_4_ + (auVar13._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar10 & (int)uVar10 >> 0x1f);
        uVar7 = param_3[0xb];
        iVar1 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar10;
        *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
        if ((int)uVar7 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_006ff5dc(uVar9,auVar13._0_8_,param_3);
        goto joined_r0x00723e04;
      }
LAB_00723d2c:
      if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar10 - 1;
        return pbVar8;
      }
      uVar7 = *(ulong *)(param_1 + 8);
      if ((uVar7 & 1) == 0) {
        lVar5 = FUN_0021d48c((ulong *)(param_1 + 8));
      }
      else {
        lVar5 = (uVar7 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_0052f000(uVar10,lVar5,pbVar8,param_3);
joined_r0x00723d60:
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    } while (param_2 < (byte *)*param_3);
  } while( true );
}


