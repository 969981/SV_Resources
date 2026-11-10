/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0086ffa4; name: FUN_0086ffa4
 */


undefined4
FUN_0086ffa4(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_290;
  undefined4 local_288;
  undefined1 *local_280 [2];
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined1 auStack_220 [512];
  
  local_280[0] = (undefined1 *)&local_290;
  local_288 = 0;
  uStack_268 = param_2[1];
  local_270 = *param_2;
  fVar6 = (float)*param_3 - (float)local_270;
  fVar7 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_270 >> 0x20);
  fVar8 = (float)param_3[1] - (float)uStack_268;
  uVar2 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
  local_238 = 0xffffffff;
  iVar10 = -(uint)(fVar6 == 0.0);
  iVar13 = -(uint)(fVar7 == 0.0);
  iVar14 = -(uint)(fVar8 == 0.0);
  iVar15 = -(uint)((float)uVar2 == 0.0);
  fVar6 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar10)));
  uStack_260 = CONCAT17((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                        CONCAT16((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                 CONCAT15((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                          CONCAT14(SUB41(fVar7,0) & ~(byte)iVar13,fVar6))));
  fVar8 = (float)CONCAT13((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT11((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            SUB41(fVar8,0) & ~(byte)iVar14)));
  uStack_258 = CONCAT17((byte)((ulong)uVar2 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                        CONCAT16((byte)((ulong)uVar2 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                 CONCAT15((byte)((ulong)uVar2 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                          CONCAT14((byte)uVar2 & ~(byte)iVar15,fVar8))));
  fVar7 = (float)((ulong)uStack_260 >> 0x20);
  fVar9 = (float)((ulong)uStack_258 >> 0x20);
  iVar10 = -(uint)(fVar6 == 0.0);
  iVar13 = -(uint)(fVar7 == 0.0);
  iVar14 = -(uint)(fVar8 == 0.0);
  iVar15 = -(uint)(fVar9 == 0.0);
  auVar11[0] = ~(byte)iVar10;
  auVar11[1] = ~(byte)((uint)iVar10 >> 8);
  auVar11[2] = ~(byte)((uint)iVar10 >> 0x10);
  auVar11[3] = ~(byte)((uint)iVar10 >> 0x18);
  auVar11[4] = ~(byte)iVar13;
  auVar11[5] = ~(byte)((uint)iVar13 >> 8);
  auVar11[6] = ~(byte)((uint)iVar13 >> 0x10);
  auVar11[7] = ~(byte)((uint)iVar13 >> 0x18);
  auVar11[8] = ~(byte)iVar14;
  auVar11[9] = ~(byte)((uint)iVar14 >> 8);
  auVar11[10] = ~(byte)((uint)iVar14 >> 0x10);
  auVar11[0xb] = ~(byte)((uint)iVar14 >> 0x18);
  auVar11[0xc] = ~(byte)iVar15;
  auVar11[0xd] = ~(byte)((uint)iVar15 >> 8);
  auVar11[0xe] = ~(byte)((uint)iVar15 >> 0x10);
  auVar11[0xf] = ~(byte)((uint)iVar15 >> 0x18);
  auVar1._4_4_ = (float)((ulong)uVar2 >> 0x20) / fVar7;
  auVar1._0_4_ = (float)uVar2 / fVar6;
  auVar1._8_4_ = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x68) / fVar8;
  auVar1._12_4_ = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x68) >> 0x20) / fVar9;
  auVar3[8] = 0xee;
  auVar3._0_8_ = 0x7f7fffee7f7fffee;
  auVar3[9] = 0xff;
  auVar3[10] = 0x7f;
  auVar3[0xb] = 0x7f;
  auVar3[0xc] = 0xee;
  auVar3[0xd] = 0xff;
  auVar3[0xe] = 0x7f;
  auVar3[0xf] = 0x7f;
  auVar12[8] = 0xee;
  auVar12._0_8_ = 0x7f7fffee7f7fffee;
  auVar12[9] = 0xff;
  auVar12[10] = 0x7f;
  auVar12[0xb] = 0x7f;
  auVar12[0xc] = 0xee;
  auVar12[0xd] = 0xff;
  auVar12[0xe] = 0x7f;
  auVar12[0xf] = 0x7f;
  auVar12 = auVar12 ^ (auVar3 ^ auVar1) & auVar11;
  uStack_248 = auVar12._8_8_;
  local_250 = auVar12._0_8_;
  local_240 = *param_4;
  local_230 = auStack_220;
  local_228 = -0x7fffff8000000000;
  local_290 = param_5;
  FUN_00870770(*(long *)(param_1 + 0x18) + 0x18,&local_230,local_280);
  lVar4 = local_228;
  uVar5 = (ulong)local_228._4_4_;
  local_228 = (ulong)local_228._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_230 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_230,uVar5 << 2);
  }
  return local_288;
}


