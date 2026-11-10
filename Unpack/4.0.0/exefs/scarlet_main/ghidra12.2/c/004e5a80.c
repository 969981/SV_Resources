/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e5a80; name: FUN_004e5a80
 */


byte * FUN_004e5a80(long param_1,byte *param_2,ulong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar6;
  long lVar5;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  do {
    while( true ) {
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
      bVar3 = *param_2;
      auVar11[8] = bVar3;
      auVar11._0_8_ = param_2 + 1;
      auVar11._9_7_ = 0;
      if ((char)bVar3 < '\0') {
        bVar2 = param_2[1];
        if ((char)bVar2 < '\0') {
          auVar11 = FUN_0052e560(param_2);
          if (auVar11._0_8_ == 0) {
            return (byte *)0x0;
          }
        }
        else {
          auVar11._8_4_ = (uint)bVar3 + (uint)bVar2 * 0x80 + -0x80;
          auVar11._0_8_ = param_2 + 2;
          auVar11._12_4_ = 0;
        }
      }
      param_2 = auVar11._0_8_;
      uVar6 = auVar11._8_4_;
      if (uVar6 == 10) break;
      if ((uVar6 == 0) || ((uVar6 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar6 - 1;
        return param_2;
      }
      uVar7 = *(ulong *)(param_1 + 8);
      if ((uVar7 & 1) == 0) {
        lVar5 = FUN_00264e54((ulong *)(param_1 + 8));
      }
      else {
        lVar5 = (uVar7 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_00515960(auVar11._8_8_ & 0xffffffff,lVar5,param_2,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
    param_2 = param_2 + -1;
    do {
      piVar8 = *(int **)(param_1 + 0x20);
      pbVar1 = param_2 + 1;
      if (piVar8 == (int *)0x0) {
        iVar9 = *(int *)(param_1 + 0x1c);
LAB_004e5b9c:
        FUN_00532334(param_1 + 0x10,iVar9 + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar9 = *piVar8;
LAB_004e5bb0:
        *piVar8 = iVar9 + 1;
        uVar10 = FUN_004e7a0c(*(undefined8 *)(param_1 + 0x10));
        iVar9 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar9 + 1;
        *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 8 + 8) = uVar10;
        bVar3 = *pbVar1;
        if ((char)bVar3 < '\0') goto LAB_004e5b74;
LAB_004e5be8:
        auVar12[8] = bVar3;
        auVar12._0_8_ = param_2 + 2;
        auVar12._9_3_ = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar9 = *piVar8;
        if (iVar9 <= iVar4) {
          if (iVar9 == *(int *)(param_1 + 0x1c)) goto LAB_004e5b9c;
          goto LAB_004e5bb0;
        }
        *(int *)(param_1 + 0x18) = iVar4 + 1;
        uVar10 = *(undefined8 *)(piVar8 + (long)iVar4 * 2 + 2);
        bVar3 = *pbVar1;
        if (-1 < (char)bVar3) goto LAB_004e5be8;
LAB_004e5b74:
        auVar12 = FUN_0052e5f0(pbVar1);
        if (auVar12._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      uVar6 = auVar12._8_4_ + (auVar12._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar6 & (int)uVar6 >> 0x1f);
      uVar7 = param_3[0xb];
      iVar9 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar6;
      *(int *)(param_3 + 0xb) = (int)uVar7 + -1;
      if ((int)uVar7 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_004e4dfc(uVar10,auVar12._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      if ((int)param_3[10] != 0) {
        return (byte *)0x0;
      }
      uVar6 = *(int *)((long)param_3 + 0x1c) + (iVar9 - uVar6);
      *(uint *)((long)param_3 + 0x1c) = uVar6;
      pbVar1 = (byte *)(param_3[1] + (long)(int)(uVar6 & (int)uVar6 >> 0x1f));
      *param_3 = (ulong)pbVar1;
    } while ((param_2 < pbVar1) && (*param_2 == 10));
  } while( true );
}


