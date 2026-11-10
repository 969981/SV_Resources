/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ef9f0; name: FUN_004ef9f0
 */


byte * FUN_004ef9f0(ulong *param_1,char *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  undefined1 auVar7 [12];
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  if (*param_2 < '\0') {
    auVar13 = FUN_0052e5f0(param_2);
    if (auVar13._0_8_ == 0) {
      return (byte *)0x0;
    }
  }
  else {
    auVar13[8] = *param_2;
    auVar13._0_8_ = param_2 + 1;
    auVar13._9_3_ = 0;
  }
  pbVar10 = auVar13._0_8_;
  uVar2 = auVar13._8_4_ + (auVar13._0_4_ - (int)param_1[1]);
  pbVar1 = (byte *)(param_1[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f));
  iVar3 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar2;
  *param_1 = (ulong)pbVar1;
  iVar3 = iVar3 - uVar2;
  if (-1 < iVar3) {
    if (pbVar10 < pbVar1) goto LAB_004efab0;
LAB_004efa68:
    if ((long)pbVar10 - param_1[1] != (long)*(int *)((long)param_1 + 0x1c)) {
      auVar12 = FUN_0052dd3c(param_1,pbVar10,0xffffffff);
      pbVar10 = auVar12._0_8_;
      if ((auVar12._8_8_ & 1) != 0) goto LAB_004efb7c;
LAB_004efab0:
      do {
        while( true ) {
          bVar5 = *pbVar10;
          if (-1 < (char)bVar5) break;
          iVar6 = (uint)bVar5 + (uint)pbVar10[1] * 0x80 + -0x80;
          if ((char)pbVar10[1] < '\0') {
            auVar12 = FUN_0052e420(pbVar10,iVar6);
            auVar7 = auVar12._0_12_;
            if (auVar12._0_8_ == 0) {
              return (byte *)0x0;
            }
            uVar8 = (*(code *)param_3[1])(param_3[2],auVar12._8_8_ & 0xffffffff);
            goto joined_r0x004efb6c;
          }
          auVar12._8_4_ = iVar6;
          auVar12._0_8_ = pbVar10 + 2;
          auVar12._12_4_ = 0;
          auVar7._8_4_ = iVar6;
          auVar7._0_8_ = pbVar10 + 2;
          uVar8 = (*(code *)param_3[1])(param_3[2],iVar6);
          if ((uVar8 & 1) == 0) goto LAB_004efb14;
LAB_004efacc:
          pbVar10 = auVar7._0_8_;
          puVar11 = (uint *)*param_3;
          uVar2 = *puVar11;
          if (uVar2 == puVar11[1]) {
            FUN_00531134(puVar11,uVar2 + 1);
          }
          *(int *)(*(long *)(puVar11 + 2) + (ulong)uVar2 * 4) = auVar7._8_4_;
          *puVar11 = uVar2 + 1;
          if ((byte *)*param_1 <= pbVar10) goto LAB_004efa68;
        }
        auVar12[8] = bVar5;
        auVar12._0_8_ = pbVar10 + 1;
        auVar12._9_7_ = 0;
        auVar7[8] = bVar5;
        auVar7._0_8_ = pbVar10 + 1;
        auVar7._9_3_ = 0;
        uVar8 = (*(code *)param_3[1])(param_3[2],bVar5);
joined_r0x004efb6c:
        if ((uVar8 & 1) != 0) goto LAB_004efacc;
LAB_004efb14:
        pbVar10 = auVar12._0_8_;
        uVar4 = *(undefined4 *)(param_3 + 4);
        if ((*(ulong *)param_3[3] & 1) == 0) {
          lVar9 = FUN_00264e54();
        }
        else {
          lVar9 = (*(ulong *)param_3[3] & 0xfffffffffffffffe) + 8;
        }
        FUN_00514e00(lVar9,uVar4,auVar12._8_8_);
      } while (pbVar10 < (byte *)*param_1);
      goto LAB_004efa68;
    }
LAB_004efb7c:
    if ((int)param_1[10] == 0) {
      uVar2 = *(int *)((long)param_1 + 0x1c) + iVar3;
      *(uint *)((long)param_1 + 0x1c) = uVar2;
      *param_1 = param_1[1] + (long)(int)(uVar2 & (int)uVar2 >> 0x1f);
      return pbVar10;
    }
  }
  return (byte *)0x0;
}


