/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0151aee4; name: FUN_0151aee4
 */


void FUN_0151aee4(undefined4 param_1,undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  
  uVar27 = param_4._8_8_;
  uVar24 = param_4._0_8_;
  uVar22 = param_3._12_4_;
  uVar21 = param_3._8_4_;
  uVar20 = param_3._4_4_;
  uVar19 = param_3._0_4_;
  uVar18 = param_2._12_4_;
  uVar17 = param_2._8_4_;
  uVar16 = param_2._4_4_;
  uVar15 = param_2._0_4_;
  FUN_00d4a7f4();
  FUN_0151af90(param_1);
  lVar4 = *(long *)(param_5 + 0x1e8);
  *(ulong *)(lVar4 + 0x48) = CONCAT44(extraout_var_01,extraout_var_00);
  *(ulong *)(lVar4 + 0x40) = CONCAT44(extraout_var,extraout_s0);
  *(ulong *)(lVar4 + 0x58) = CONCAT44(uVar18,uVar17);
  *(ulong *)(lVar4 + 0x50) = CONCAT44(uVar16,uVar15);
  *(ulong *)(lVar4 + 0x68) = CONCAT44(uVar22,uVar21);
  *(ulong *)(lVar4 + 0x60) = CONCAT44(uVar20,uVar19);
  *(undefined8 *)(lVar4 + 0x78) = uVar27;
  *(undefined8 *)(lVar4 + 0x70) = uVar24;
  puVar5 = *(undefined8 **)(param_5 + 0x1e8);
  auVar1 = *(undefined1 (*) [12])(puVar5 + 8);
  auVar3 = *(undefined1 (*) [12])(puVar5 + 10);
  auVar2 = *(undefined1 (*) [12])(puVar5 + 0xc);
  fVar6 = auVar1._0_4_;
  fVar8 = auVar1._4_4_;
  fVar12 = auVar2._0_4_;
  fVar13 = auVar2._4_4_;
  fVar10 = SUB124(*(undefined1 (*) [12])(puVar5 + 8),8);
  fVar14 = SUB124(*(undefined1 (*) [12])(puVar5 + 0xc),8);
  fVar7 = auVar3._0_4_;
  fVar9 = auVar3._4_4_;
  fVar11 = SUB124(*(undefined1 (*) [12])(puVar5 + 10),8);
  fVar23 = (float)puVar5[0xe];
  fVar25 = (float)((ulong)puVar5[0xe] >> 0x20);
  puVar5[1] = (ulong)(uint)fVar12;
  *puVar5 = CONCAT44(fVar7,fVar6);
  puVar5[3] = (ulong)(uint)fVar13;
  puVar5[2] = CONCAT44(fVar9,fVar8);
  fVar26 = (float)puVar5[0xf];
  fVar28 = (float)((ulong)puVar5[0xf] >> 0x20);
  puVar5[5] = (ulong)(uint)fVar14;
  puVar5[4] = CONCAT44(fVar11,fVar10);
  puVar5[7] = CONCAT44(0x3f800000,
                       -(fVar12 * fVar23 + fVar13 * fVar25 + fVar14 * fVar26 +
                        (float)((ulong)puVar5[0xd] >> 0x20) * fVar28));
  puVar5[6] = CONCAT44(-(fVar7 * fVar23 + fVar9 * fVar25 + fVar11 * fVar26 +
                        (float)((ulong)puVar5[0xb] >> 0x20) * fVar28),
                       -(fVar6 * fVar23 + fVar8 * fVar25 + fVar10 * fVar26 +
                        (float)((ulong)puVar5[9] >> 0x20) * fVar28));
  *(undefined1 *)(*(long *)(param_5 + 0x1e8) + 0x180) = 1;
  return;
}


