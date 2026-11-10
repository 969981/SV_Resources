/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f34328; name: FUN_02f34328
 */


void FUN_02f34328(long *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  uint *puVar15;
  undefined2 uVar16;
  undefined2 extraout_h0;
  undefined2 extraout_h0_00;
  ushort uVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90 [4];
  
  lVar11 = param_1[7];
  uVar12 = param_2 & 0xffffff;
  lVar13 = lVar11 + uVar12 * 0xc0;
  lVar1 = param_1[0x2a] + (ulong)param_3 * 0x80;
  *(uint *)(lVar13 + 0x80) = param_3;
  puVar15 = (uint *)(lVar1 + 0x48);
  uVar10 = (ulong)*puVar15 & 0xffffff;
  uVar7 = (uint)param_2;
  if ((int)uVar10 == 0xffffff) {
    *puVar15 = uVar7;
    *(uint *)(lVar11 + uVar12 * 0xc0 + 0x84) = uVar7;
    if ((char)param_1[0xd] != '\0') {
      *(undefined4 *)(param_1[0xe] + uVar12 * 4) = 0xffffff;
    }
  }
  else {
    lVar14 = param_1[7];
    puVar9 = (uint *)(lVar14 + uVar10 * 0xc0 + 0x84);
    uVar8 = *puVar9;
    *(uint *)(lVar11 + uVar12 * 0xc0 + 0x84) = uVar8;
    if ((char)param_1[0xd] != '\0') {
      *(uint *)(param_1[0xe] + ((ulong)uVar8 & 0xffffff) * 4) = uVar7;
    }
    *puVar9 = uVar7;
    if ((char)param_1[0xd] != '\0') {
      *(undefined4 *)(param_1[0xe] + uVar12 * 4) = *(undefined4 *)(lVar14 + uVar10 * 0xc0 + 0x50);
    }
  }
  *(uint *)(lVar13 + 0x80) = param_3;
  puVar9 = (uint *)(lVar11 + uVar12 * 0xc0 + 0x54);
  uVar8 = *puVar9;
  uVar7 = uVar8 & 0xfffffffc;
  *puVar9 = uVar7 | 2;
  if ((*(int *)(lVar1 + 0x4c) == 0) || (local_90[0] = 0, *(long *)(lVar1 + 0x40) != 0)) {
    uVar7 = uVar8 & 0xfffffff8 | 2;
  }
  else {
    uVar7 = uVar7 | 6;
  }
  *puVar9 = uVar7;
  lVar14 = lVar11 + uVar12 * 0xc0;
  uVar17 = *(ushort *)(lVar1 + 0x5a);
  uVar16 = 0;
  fVar21 = *(float *)(lVar14 + 0x3c);
  if ((float)((uint)uVar17 << 0x10) <= fVar21) {
    uVar16 = SUB42(fVar21,0);
    uVar17 = (ushort)((uint)fVar21 >> 0x10);
  }
  *(short *)(lVar1 + 0x5a) = (short)((uint)((float)CONCAT22(uVar17,uVar16) * 1.0039062) >> 0x10);
  FUN_02f085e8(lVar13,lVar1,param_4);
  puVar5 = PTR_DAT_047d19f0;
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(*(long *)(lVar14 + 0x78) + 0x18) * 0x200
              + 0x18))(*(long *)(lVar14 + 0x78),PTR_DAT_047d19b0 + 0x200,local_90);
  uStack_98 = (ulong)*(uint *)(lVar13 + 0x2c);
  local_a0 = CONCAT44(*(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar14 + 0xc));
  (**(code **)(*(long *)puVar5 + (ulong)*(byte *)(*(long *)(lVar14 + 0x78) + 0x18) * 0x200 + 0x28))
            (*(long *)(lVar14 + 0x78),&local_a0,local_a8);
  uVar16 = local_a8._0_2_;
  *(short *)(lVar14 + 0x94) = local_a8._2_2_ + 1;
  uVar7 = *puVar15;
  fVar21 = 1.8446726e+19;
  lVar13 = param_1[7];
  uVar8 = uVar7;
  do {
    uVar10 = (ulong)(uVar8 & 0xffffff);
    lVar14 = (**(code **)(*param_1 + 0xb0))(uVar16,param_1);
    uVar16 = extraout_h0;
    if ((*(byte *)(lVar14 + (ulong)*(byte *)(lVar13 + uVar10 * 0xc0 + 0x89) * 0x50 + 0x42) & 1) != 0
       ) {
      local_90[0] = CONCAT44(local_90[0]._4_4_,0x5f7ffff0);
      lVar13 = *(long *)(lVar13 + uVar10 * 0xc0 + 0x78);
      if ((lVar13 != 0) &&
         (iVar6 = (**(code **)(*(long *)puVar5 + (ulong)*(byte *)(lVar13 + 0x18) * 0x200 + 0x30))
                            (lVar13,local_90), uVar16 = extraout_h0_00, -1 < iVar6)) {
        uVar16 = (undefined2)local_90[0];
        if ((float)local_90[0] < 1.8446726e+19) {
          fVar3 = (float)local_90[0] * 0.5;
          if (fVar3 <= 0.05) {
            fVar3 = 0.05;
          }
          uVar16 = SUB42(fVar3,0);
          if (fVar3 <= fVar21) {
            fVar21 = fVar3;
          }
          local_90[0] = CONCAT44(local_90[0]._4_4_,fVar3);
        }
      }
    }
    lVar13 = param_1[7];
    uVar8 = *(uint *)(lVar13 + uVar10 * 0xc0 + 0x84);
  } while (uVar8 != uVar7);
  fVar20 = (float)*(undefined8 *)(lVar1 + 0x68);
  fVar18 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
  fVar3 = (float)*(undefined8 *)(lVar1 + 0x60);
  fVar3 = fVar3 * fVar3;
  fVar18 = fVar18 * fVar18;
  fVar20 = fVar20 * fVar20;
  *(short *)(lVar1 + 0x5c) = (short)((uint)fVar21 >> 0x10);
  iVar6 = (int)((float)param_1[0xa8] * (float)param_1[0xaf] * 1.03 *
               (float)(((int)(fVar3 + fVar18 + fVar20) >> 1) + 0x1fbb4000));
  iVar19 = (int)((float)((ulong)param_1[0xa8] >> 0x20) * (float)((ulong)param_1[0xaf] >> 0x20) *
                 1.03 * (float)(((int)(fVar3 + fVar18 + fVar20) >> 1) + 0x1fbb4000));
  auVar2._4_4_ = iVar19;
  auVar2._0_4_ = iVar6;
  auVar2._8_4_ = iVar6;
  auVar2._12_4_ = iVar19;
  uVar4 = NEON_sqxtun(CONCAT44(iVar19,iVar6),auVar2,4);
  *(short *)(lVar11 + uVar12 * 0xc0 + 0x5c) = (short)uVar4;
  return;
}


