/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006876a0; name: FUN_006876a0
 */


byte * FUN_006876a0(long param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
LAB_006876d0:
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
    uVar10 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar10 = (uVar10 + (uint)*pbVar9 * 0x80) - 0x80;
      if ((char)*pbVar9 < '\0') {
        auVar11 = FUN_0052e560(param_2,uVar10);
        pbVar9 = auVar11._0_8_;
        uVar10 = auVar11._8_4_;
        if (pbVar9 == (byte *)0x0) {
          return (byte *)0x0;
        }
        uVar5 = (uint)(auVar11._8_8_ >> 3) & 0x1fffffff;
        goto joined_r0x00687884;
      }
      pbVar9 = param_2 + 2;
      uVar5 = uVar10 >> 3;
      if (uVar5 == 2) goto LAB_00687754;
LAB_006876f8:
      if ((uVar5 == 1) && ((uVar10 & 0xff) == 8)) {
        bVar1 = *pbVar9;
        if ((char)bVar1 < '\0') {
          if ((char)pbVar9[1] < '\0') {
            auVar12 = FUN_0052e420(pbVar9);
            param_2 = auVar12._0_8_;
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
            *(int *)(param_1 + 0x28) = auVar12._8_4_;
          }
          else {
            param_2 = pbVar9 + 2;
            *(uint *)(param_1 + 0x28) = (uint)bVar1 + (uint)pbVar9[1] * 0x80 + -0x80;
          }
        }
        else {
          param_2 = pbVar9 + 1;
          *(uint *)(param_1 + 0x28) = (uint)bVar1;
        }
        goto LAB_006876d0;
      }
    }
    else {
      uVar5 = (uint)(bVar1 >> 3);
joined_r0x00687884:
      if (uVar5 != 2) goto LAB_006876f8;
LAB_00687754:
      if ((uVar10 & 0xff) == 0x12) {
        param_2 = pbVar9 + -1;
        do {
          piVar6 = *(int **)(param_1 + 0x20);
          if (piVar6 == (int *)0x0) {
            iVar8 = *(int *)(param_1 + 0x1c);
LAB_006877b8:
            FUN_00532334(param_1 + 0x10,iVar8 + 1);
            piVar6 = *(int **)(param_1 + 0x20);
            iVar8 = *piVar6;
LAB_006877cc:
            *piVar6 = iVar8 + 1;
            uVar3 = FUN_0068c9bc(*(undefined8 *)(param_1 + 0x10));
            iVar8 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar8 + 1;
            *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar8 * 8 + 8) = uVar3;
            param_2 = (byte *)FUN_00687914(param_3,uVar3,param_2 + 1);
          }
          else {
            iVar2 = *(int *)(param_1 + 0x18);
            iVar8 = *piVar6;
            if (iVar8 <= iVar2) {
              if (iVar8 == *(int *)(param_1 + 0x1c)) goto LAB_006877b8;
              goto LAB_006877cc;
            }
            *(int *)(param_1 + 0x18) = iVar2 + 1;
            param_2 = (byte *)FUN_00687914(param_3,*(undefined8 *)(piVar6 + (long)iVar2 * 2 + 2),
                                           param_2 + 1);
          }
          if (param_2 == (byte *)0x0) {
            return (byte *)0x0;
          }
        } while ((param_2 < (byte *)*param_3) && (*param_2 == 0x12));
        goto LAB_006876d0;
      }
    }
    if ((uVar10 == 0) || ((uVar10 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar10 - 1;
      return pbVar9;
    }
    uVar7 = *(ulong *)(param_1 + 8);
    if ((uVar7 & 1) == 0) {
      lVar4 = FUN_0021d48c((ulong *)(param_1 + 8));
    }
    else {
      lVar4 = (uVar7 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar10,lVar4,pbVar9,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


