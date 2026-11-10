/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0057b79c; name: FUN_0057b79c
 */


byte * FUN_0057b79c(long param_1,byte *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  
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
    uVar8 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar7 * 0x80) - 0x80;
      if (-1 < (char)*pbVar7) {
        pbVar7 = param_2 + 2;
        goto joined_r0x0057b840;
      }
      auVar12 = FUN_0052e560(param_2,uVar8);
      if (auVar12._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
joined_r0x0057b840:
      auVar12._8_4_ = uVar8;
      auVar12._0_8_ = pbVar7;
    }
    uVar8 = auVar12._8_4_;
    param_2 = auVar12._0_8_;
    if (uVar8 == 10) {
      param_2 = param_2 + -1;
      do {
        piVar5 = *(int **)(param_1 + 0x20);
        pbVar7 = param_2 + 1;
        if (piVar5 == (int *)0x0) {
          iVar6 = *(int *)(param_1 + 0x1c);
LAB_0057b8a8:
          FUN_00532334(param_1 + 0x10,iVar6 + 1);
          piVar5 = *(int **)(param_1 + 0x20);
          iVar6 = *piVar5;
LAB_0057b8bc:
          *piVar5 = iVar6 + 1;
          uVar9 = FUN_0026ae18(*(undefined8 *)(param_1 + 0x10));
          iVar6 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar6 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8 + 8) = uVar9;
          bVar1 = *pbVar7;
          if ((char)bVar1 < '\0') goto LAB_0057b880;
LAB_0057b8f4:
          auVar11[8] = bVar1;
          auVar11._0_8_ = param_2 + 2;
          auVar11._9_3_ = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18);
          iVar6 = *piVar5;
          if (iVar6 <= iVar2) {
            if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_0057b8a8;
            goto LAB_0057b8bc;
          }
          *(int *)(param_1 + 0x18) = iVar2 + 1;
          uVar9 = *(undefined8 *)(piVar5 + (long)iVar2 * 2 + 2);
          bVar1 = *pbVar7;
          if (-1 < (char)bVar1) goto LAB_0057b8f4;
LAB_0057b880:
          auVar11 = FUN_0052e5f0(pbVar7);
          if (auVar11._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        uVar8 = auVar11._8_4_ + (auVar11._0_4_ - (int)param_3[1]);
        *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
        uVar4 = param_3[0xb];
        iVar6 = *(int *)((long)param_3 + 0x1c);
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        *(int *)(param_3 + 0xb) = (int)uVar4 + -1;
        if ((int)uVar4 < 1) {
          return (byte *)0x0;
        }
        param_2 = (byte *)FUN_0026800c(uVar9,auVar11._0_8_,param_3);
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
        *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
        if ((int)param_3[10] != 0) {
          return (byte *)0x0;
        }
        uVar8 = *(int *)((long)param_3 + 0x1c) + (iVar6 - uVar8);
        *(uint *)((long)param_3 + 0x1c) = uVar8;
        pbVar7 = (byte *)(param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f));
        *param_3 = (ulong)pbVar7;
      } while ((param_2 < pbVar7) && (*param_2 == 10));
    }
    else {
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        return param_2;
      }
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_0021d48c((ulong *)(param_1 + 8));
      }
      else {
        lVar3 = (uVar4 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_0052f000(uVar8,lVar3,param_2,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  } while( true );
}


