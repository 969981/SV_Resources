/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00688880; name: FUN_00688880
 */


byte * FUN_00688880(long param_1,byte *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  
LAB_006888b0:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar10 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar10._0_8_;
      if ((auVar10._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar7 = param_2 + 1;
    bVar2 = *param_2;
    uVar8 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar7 * 0x80) - 0x80;
      if ((char)*pbVar7 < '\0') {
        auVar10 = FUN_0052e560(param_2,uVar8);
        pbVar7 = auVar10._0_8_;
        uVar8 = auVar10._8_4_;
        if (pbVar7 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(auVar10._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x00688a78;
      }
      pbVar7 = param_2 + 2;
      uVar5 = uVar8 >> 3;
      if (uVar5 != 2) goto LAB_006888d8;
LAB_00688934:
      if ((uVar8 & 0xff) == 0x12) {
        if (*(int *)(param_1 + 0x24) == 2) {
          uVar9 = *(undefined8 *)(param_1 + 0x18);
          bVar2 = *pbVar7;
          if (-1 < (char)bVar2) goto LAB_006889d4;
LAB_0068895c:
          auVar11 = FUN_0052e5f0(pbVar7);
          if (auVar11._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(param_1 + 0x24) = 2;
          if ((*(ulong *)(param_1 + 8) & 1) != 0) {
            puVar3 = (ulong *)*puVar3;
          }
          uVar9 = FUN_0068cd98(puVar3);
          *(undefined8 *)(param_1 + 0x18) = uVar9;
          bVar2 = *pbVar7;
          if ((char)bVar2 < '\0') goto LAB_0068895c;
LAB_006889d4:
          auVar11[8] = bVar2;
          auVar11._0_8_ = pbVar7 + 1;
          auVar11._9_3_ = 0;
        }
        uVar8 = auVar11._8_4_ + (auVar11._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
        lVar4 = param_3[0xb];
        iVar1 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        *(int *)(param_3 + 0xb) = (int)lVar4 + -1;
        if ((int)lVar4 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_0068982c(uVar9,auVar11._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar8 = *(int *)((long)param_3 + 0x1c) + (iVar1 - uVar8);
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
        goto LAB_006888b0;
      }
    }
    else {
      uVar5 = (uint)(bVar2 >> 3);
joined_r0x00688a78:
      if (uVar5 == 2) goto LAB_00688934;
LAB_006888d8:
      if ((uVar5 == 1) && ((uVar8 & 0xff) == 8)) {
        bVar2 = *pbVar7;
        if ((char)bVar2 < '\0') {
          if ((char)pbVar7[1] < '\0') {
            auVar11 = FUN_0052e420(pbVar7);
            param_2 = auVar11._0_8_;
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
            *(int *)(param_1 + 0x10) = auVar11._8_4_;
          }
          else {
            param_2 = pbVar7 + 2;
            *(uint *)(param_1 + 0x10) = (uint)bVar2 + (uint)pbVar7[1] * 0x80 + -0x80;
          }
        }
        else {
          param_2 = pbVar7 + 1;
          *(uint *)(param_1 + 0x10) = (uint)bVar2;
        }
        goto LAB_006888b0;
      }
    }
    if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
      return pbVar7;
    }
    uVar6 = *(ulong *)(param_1 + 8);
    if ((uVar6 & 1) == 0) {
      lVar4 = FUN_0021d48c((ulong *)(param_1 + 8));
    }
    else {
      lVar4 = (uVar6 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar8,lVar4,pbVar7,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


