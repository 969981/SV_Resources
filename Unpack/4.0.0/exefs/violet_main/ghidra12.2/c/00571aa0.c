/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00571aa0; name: FUN_00571aa0
 */


byte * FUN_00571aa0(long param_1,byte *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  
LAB_00571acc:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar11 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar11._0_8_;
      if ((auVar11._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar8 = param_2 + 1;
    bVar1 = *param_2;
    uVar9 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar9 = (uVar9 + (uint)*pbVar8 * 0x80) - 0x80;
      if ((char)*pbVar8 < '\0') {
        auVar11 = FUN_0052e560(param_2,uVar9);
        pbVar8 = auVar11._0_8_;
        uVar9 = auVar11._8_4_;
        if (pbVar8 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar4 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x00571e24;
      }
      pbVar8 = param_2 + 2;
      uVar4 = uVar9 >> 3;
      if (uVar4 != 2) goto LAB_00571af4;
LAB_00571c74:
      if ((uVar9 & 0xff) == 0x12) {
        param_2 = pbVar8 + -1;
        do {
          piVar5 = *(int **)(param_1 + 0x38);
          pbVar8 = param_2 + 1;
          if (piVar5 == (int *)0x0) {
            iVar7 = *(int *)(param_1 + 0x34);
LAB_00571ce4:
            FUN_00532334(param_1 + 0x28,iVar7 + 1);
            piVar5 = *(int **)(param_1 + 0x38);
            iVar7 = *piVar5;
LAB_00571cf8:
            *piVar5 = iVar7 + 1;
            uVar10 = FUN_00585e30(*(undefined8 *)(param_1 + 0x28));
            iVar7 = *(int *)(param_1 + 0x30);
            *(int *)(param_1 + 0x30) = iVar7 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 8 + 8) = uVar10;
            bVar1 = *pbVar8;
            if ((char)bVar1 < '\0') goto LAB_00571cbc;
LAB_00571d30:
            auVar13[8] = bVar1;
            auVar13._0_8_ = param_2 + 2;
            auVar13._9_3_ = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x30);
            iVar7 = *piVar5;
            if (iVar7 <= iVar2) {
              if (iVar7 == *(int *)(param_1 + 0x34)) goto LAB_00571ce4;
              goto LAB_00571cf8;
            }
            *(int *)(param_1 + 0x30) = iVar2 + 1;
            uVar10 = *(undefined8 *)(piVar5 + (long)iVar2 * 2 + 2);
            bVar1 = *pbVar8;
            if (-1 < (char)bVar1) goto LAB_00571d30;
LAB_00571cbc:
            auVar13 = FUN_0052e5f0(pbVar8);
            if (auVar13._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar9 = auVar13._8_4_ + (auVar13._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
          uVar6 = param_3[0xb];
          iVar7 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar9;
          *(int *)(param_3 + 0xb) = (int)uVar6 + -1;
          if ((int)uVar6 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_00580f2c(uVar10,auVar13._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar9 = *(int *)((long)param_3 + 0x1c) + (iVar7 - uVar9);
          *(uint *)((long)param_3 + 0x1c) = uVar9;
          pbVar8 = (byte *)(param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f));
          *param_3 = (ulong)pbVar8;
        } while ((param_2 < pbVar8) && (*param_2 == 0x12));
        goto LAB_00571acc;
      }
    }
    else {
      uVar4 = (uint)(bVar1 >> 3);
joined_r0x00571e24:
      if (uVar4 == 2) goto LAB_00571c74;
LAB_00571af4:
      if ((uVar4 == 1) && ((uVar9 & 0xff) == 10)) {
        param_2 = pbVar8 + -1;
        do {
          piVar5 = *(int **)(param_1 + 0x20);
          pbVar8 = param_2 + 1;
          if (piVar5 == (int *)0x0) {
            iVar7 = *(int *)(param_1 + 0x1c);
LAB_00571b6c:
            FUN_00532334(param_1 + 0x10,iVar7 + 1);
            piVar5 = *(int **)(param_1 + 0x20);
            iVar7 = *piVar5;
LAB_00571b80:
            *piVar5 = iVar7 + 1;
            uVar10 = FUN_00585648(*(undefined8 *)(param_1 + 0x10));
            iVar7 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar7 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar7 * 8 + 8) = uVar10;
            bVar1 = *pbVar8;
            if ((char)bVar1 < '\0') goto LAB_00571b44;
LAB_00571bb8:
            auVar12[8] = bVar1;
            auVar12._0_8_ = param_2 + 2;
            auVar12._9_3_ = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x18);
            iVar7 = *piVar5;
            if (iVar7 <= iVar2) {
              if (iVar7 == *(int *)(param_1 + 0x1c)) goto LAB_00571b6c;
              goto LAB_00571b80;
            }
            *(int *)(param_1 + 0x18) = iVar2 + 1;
            uVar10 = *(undefined8 *)(piVar5 + (long)iVar2 * 2 + 2);
            bVar1 = *pbVar8;
            if (-1 < (char)bVar1) goto LAB_00571bb8;
LAB_00571b44:
            auVar12 = FUN_0052e5f0(pbVar8);
            if (auVar12._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar9 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f);
          uVar6 = param_3[0xb];
          iVar7 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar9;
          *(int *)(param_3 + 0xb) = (int)uVar6 + -1;
          if ((int)uVar6 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_0057a2e0(uVar10,auVar12._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar9 = *(int *)((long)param_3 + 0x1c) + (iVar7 - uVar9);
          *(uint *)((long)param_3 + 0x1c) = uVar9;
          pbVar8 = (byte *)(param_3[1] + (long)(int)(uVar9 & (int)uVar9 >> 0x1f));
          *param_3 = (ulong)pbVar8;
        } while ((param_2 < pbVar8) && (*param_2 == 10));
        goto LAB_00571acc;
      }
    }
    if ((uVar9 == 0) || ((uVar9 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar9 - 1;
      return pbVar8;
    }
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) == 0) {
      lVar3 = FUN_0021d48c((ulong *)(param_1 + 8));
    }
    else {
      lVar3 = (uVar6 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar9,lVar3,pbVar8,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


