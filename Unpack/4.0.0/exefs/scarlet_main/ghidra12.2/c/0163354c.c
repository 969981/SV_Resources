/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0163354c; name: FUN_0163354c
 */


void FUN_0163354c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  long *local_90 [6];
  undefined2 local_60 [6];
  byte local_54 [6];
  byte local_4e [14];
  
  pbVar12 = (byte *)*param_3;
  bVar4 = *pbVar12;
  bVar5 = pbVar12[1];
  if ((uint)bVar5 + (uint)bVar4 != 0) {
    bVar3 = (pbVar12[0xe] >> 3 & 1) != 0;
    if (bVar3) {
      local_90[0] = (long *)FUN_014813f4(param_1,*(undefined4 *)(pbVar12 + 8));
      local_60[0] = *(undefined2 *)(pbVar12 + 4);
      local_54[0] = pbVar12[0xc];
      local_4e[0] = pbVar12[0xe] & 1;
      bVar4 = *pbVar12;
      bVar5 = pbVar12[1];
    }
    uVar8 = (ulong)bVar4;
    uVar7 = (ulong)bVar3;
    uVar9 = (ulong)bVar5;
    if (1 < uVar8 + uVar9) {
      if ((pbVar12[0x1a] >> 3 & 1) != 0) {
        plVar13 = (long *)FUN_014813f4(param_1,*(undefined4 *)(pbVar12 + 0x14));
        local_90[uVar7] = plVar13;
        *(undefined2 *)(((ulong)local_90 | uVar7 << 1) + 0x30) = *(undefined2 *)(pbVar12 + 0x10);
        uVar8 = (ulong)local_90 | uVar7;
        uVar7 = (ulong)(bVar3 + 1);
        *(byte *)(uVar8 + 0x3c) = pbVar12[0x18];
        *(byte *)(uVar8 + 0x42) = pbVar12[0x1a] & 1;
        uVar8 = (ulong)*pbVar12;
        uVar9 = (ulong)pbVar12[1];
      }
      if (2 < uVar8 + uVar9) {
        pbVar10 = pbVar12 + 0x26;
        uVar11 = 2;
        uVar14 = uVar7;
        do {
          uVar7 = uVar14;
          if ((*pbVar10 >> 3 & 1) != 0) {
            plVar13 = (long *)FUN_014813f4(param_1,*(undefined4 *)(pbVar10 + -6));
            local_90[uVar14] = plVar13;
            uVar7 = (ulong)((int)uVar14 + 1);
            local_60[uVar14] = *(undefined2 *)(pbVar10 + -10);
            local_54[uVar14] = pbVar10[-2];
            local_4e[uVar14] = *pbVar10 & 1;
            uVar8 = (ulong)*pbVar12;
            uVar9 = (ulong)pbVar12[1];
          }
          uVar11 = uVar11 + 1;
          pbVar10 = pbVar10 + 0xc;
          uVar14 = uVar7;
        } while (uVar11 < uVar8 + uVar9);
      }
    }
    plVar13 = local_90[0];
    uVar2 = (uint)uVar7 & 0xff;
    if ((uVar7 & 0xff) != 0) {
      uVar7 = (**(code **)(*local_90[0] + 0x588))(local_90[0]);
      if ((uVar7 & 1) != 0) {
        uVar6 = FUN_029810e4(param_1,param_3[1],param_3[2],param_3[3],plVar13,local_60[0],
                             local_54[0],local_4e[0]);
        FUN_02981128(param_3[4],plVar13,uVar6,1);
      }
      if (1 < uVar2) {
        uVar7 = 1;
        do {
          uVar7 = uVar7 & 0xff;
          plVar13 = local_90[uVar7];
          uVar8 = (**(code **)(*plVar13 + 0x588))(plVar13);
          if ((uVar8 & 1) != 0) {
            uVar6 = FUN_029810e4(param_1,param_3[1],param_3[2],param_3[3],plVar13,local_60[uVar7],
                                 local_54[uVar7],local_4e[uVar7]);
            FUN_02981128(param_3[4],plVar13,uVar6,1);
          }
          uVar1 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar1;
        } while ((uVar1 & 0xff) < uVar2);
      }
    }
  }
  return;
}


