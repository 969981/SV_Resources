/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068c368; name: FUN_0068c368
 */


byte * FUN_0068c368(long param_1,byte *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
LAB_0068c390:
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
    pbVar9 = param_2 + 1;
    bVar1 = *param_2;
    uVar4 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar4 = (uVar4 + (uint)*pbVar9 * 0x80) - 0x80;
      if ((char)*pbVar9 < '\0') {
        auVar11 = FUN_0052e560(param_2,uVar4);
        pbVar9 = auVar11._0_8_;
        uVar4 = auVar11._8_4_;
        if (pbVar9 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x0068c3b4;
      }
      pbVar9 = param_2 + 2;
      uVar5 = uVar4 >> 3;
      if (uVar5 != 2) goto LAB_0068c3b8;
LAB_0068c538:
      if ((uVar4 & 0xff) != 0x10) goto LAB_0068c554;
      bVar1 = *pbVar9;
      uVar4 = (uint)bVar1;
      if (-1 < (char)bVar1) {
        lVar3 = 1;
LAB_0068c5a4:
        param_2 = pbVar9 + lVar3;
        *(bool *)(param_1 + 0x28) = uVar4 != 0;
        goto LAB_0068c390;
      }
      uVar4 = ((uint)bVar1 + (uint)pbVar9[1] * 0x80) - 0x80;
      if (-1 < (char)pbVar9[1]) {
        lVar3 = 2;
        goto LAB_0068c5a4;
      }
      auVar11 = FUN_0052e420(pbVar9);
      param_2 = auVar11._0_8_;
      *(bool *)(param_1 + 0x28) = auVar11._8_8_ != 0;
    }
    else {
      uVar5 = (uint)(bVar1 >> 3);
joined_r0x0068c3b4:
      if (uVar5 == 2) goto LAB_0068c538;
LAB_0068c3b8:
      if ((uVar5 == 1) && ((uVar4 & 0xff) == 10)) {
        param_2 = pbVar9 + -1;
        do {
          piVar6 = *(int **)(param_1 + 0x20);
          pbVar9 = param_2 + 1;
          if (piVar6 == (int *)0x0) {
            iVar8 = *(int *)(param_1 + 0x1c);
LAB_0068c430:
            FUN_00532334(param_1 + 0x10,iVar8 + 1);
            piVar6 = *(int **)(param_1 + 0x20);
            iVar8 = *piVar6;
LAB_0068c444:
            *piVar6 = iVar8 + 1;
            uVar10 = FUN_0026ae18(*(undefined8 *)(param_1 + 0x10));
            iVar8 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar8 * 8 + 8) = uVar10;
            bVar1 = *pbVar9;
            if ((char)bVar1 < '\0') goto LAB_0068c408;
LAB_0068c47c:
            auVar12[8] = bVar1;
            auVar12._0_8_ = param_2 + 2;
            auVar12._9_3_ = 0;
          }
          else {
            iVar2 = *(int *)(param_1 + 0x18);
            iVar8 = *piVar6;
            if (iVar8 <= iVar2) {
              if (iVar8 == *(int *)(param_1 + 0x1c)) goto LAB_0068c430;
              goto LAB_0068c444;
            }
            *(int *)(param_1 + 0x18) = iVar2 + 1;
            uVar10 = *(undefined8 *)(piVar6 + (long)iVar2 * 2 + 2);
            bVar1 = *pbVar9;
            if (-1 < (char)bVar1) goto LAB_0068c47c;
LAB_0068c408:
            auVar12 = FUN_0052e5f0(pbVar9);
            if (auVar12._0_8_ == 0) {
              return (byte *)0x0;
            }
          }
          uVar4 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
          *param_3 = param_3[1] + (long)(int)(uVar4 & (int)uVar4 >> 0x1f);
          uVar7 = param_3[0xb];
          iVar8 = *(int *)((long)param_3 + 0x1c);
          *(uint *)((long)param_3 + 0x1c) = uVar4;
          *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
          if ((int)uVar7 < 1) {
            return (byte *)0x0;
          }
          param_2 = (byte *)FUN_0026800c(uVar10,auVar12._0_8_,param_3);
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
          *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
          if ((int)param_3[10] != 0) {
            return (byte *)0x0;
          }
          uVar4 = *(int *)((long)param_3 + 0x1c) + (iVar8 - uVar4);
          *(uint *)((long)param_3 + 0x1c) = uVar4;
          pbVar9 = (byte *)(param_3[1] + (long)(int)(uVar4 & (int)uVar4 >> 0x1f));
          *param_3 = (ulong)pbVar9;
        } while ((param_2 < pbVar9) && (*param_2 == 10));
        goto LAB_0068c390;
      }
LAB_0068c554:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar4 - 1;
        return pbVar9;
      }
      uVar7 = *(ulong *)(param_1 + 8);
      if ((uVar7 & 1) == 0) {
        lVar3 = FUN_0021d48c((ulong *)(param_1 + 8));
      }
      else {
        lVar3 = (uVar7 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_0052f000(uVar4,lVar3,pbVar9,param_3);
    }
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


