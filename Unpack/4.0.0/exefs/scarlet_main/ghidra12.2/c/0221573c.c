/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221573c; name: FUN_0221573c
 */


undefined4
FUN_0221573c(undefined1 param_1 [16],long param_2,ulong param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar10;
  int iVar11;
  undefined1 auVar8 [16];
  int iVar12;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x120));
  lVar2 = (**(code **)(**(long **)(param_2 + 8) + 0x118))
                    (*(long **)(param_2 + 8),param_3 & 0xffffffff | 0x8000000000000000);
  local_f0 = 0;
  uStack_e8 = 0;
  auVar8 = ZEXT816(0x3f800000);
  local_d0 = 0xfb0001;
  local_e0 = *(undefined2 *)(lVar2 + 0x8a);
  auVar13 = NEON_fmov(0x3f800000,4);
  local_dc = *(undefined4 *)(lVar2 + 0x8c);
  local_d8 = *(undefined8 *)(lVar2 + 0x98);
  local_b8 = *(undefined8 *)(lVar2 + 0x78);
  local_60 = 0;
  uStack_58 = 0;
  local_80 = 0x3a83126f;
  local_74 = 0x100;
  local_7c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_68 = 0x7f7fffee;
  uStack_a8 = *(undefined8 *)(lVar2 + 0x38);
  local_b0 = *(undefined8 *)(lVar2 + 0x30);
  fVar3 = param_1._0_4_ - (float)local_b0;
  fVar4 = param_1._4_4_ - (float)((ulong)local_b0 >> 0x20);
  fVar5 = param_1._8_4_ - (float)uStack_a8;
  iVar7 = -(uint)(fVar3 == 0.0);
  iVar10 = -(uint)(fVar4 == 0.0);
  iVar11 = -(uint)(fVar5 == 0.0);
  iVar12 = -(uint)(auVar8._0_4_ == 0.0);
  fVar3 = (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                          CONCAT12((byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                   CONCAT11((byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                            SUB41(fVar3,0) & ~(byte)iVar7)));
  local_a0 = CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                      CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                               CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                        CONCAT14(SUB41(fVar4,0) & ~(byte)iVar10,fVar3))));
  fVar5 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18),
                          CONCAT12((byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10),
                                   CONCAT11((byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar11 >> 8),
                                            SUB41(fVar5,0) & ~(byte)iVar11)));
  uStack_98 = CONCAT17(auVar8[3] & ~(byte)((uint)iVar12 >> 0x18),
                       CONCAT16(auVar8[2] & ~(byte)((uint)iVar12 >> 0x10),(uint6)(uint)fVar5));
  auVar14._0_4_ = auVar13._0_4_ / fVar3;
  fVar4 = (float)((ulong)local_a0 >> 0x20);
  auVar14._4_4_ = auVar13._4_4_ / fVar4;
  auVar14._8_4_ = auVar13._8_4_ / fVar5;
  fVar6 = (float)((ulong)uStack_98 >> 0x20);
  auVar14._12_4_ = auVar13._12_4_ / fVar6;
  iVar7 = -(uint)(fVar3 == 0.0);
  iVar10 = -(uint)(fVar4 == 0.0);
  iVar11 = -(uint)(fVar5 == 0.0);
  iVar12 = -(uint)(fVar6 == 0.0);
  auVar9[0] = ~(byte)iVar7;
  auVar9[1] = ~(byte)((uint)iVar7 >> 8);
  auVar9[2] = ~(byte)((uint)iVar7 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar7 >> 0x18);
  auVar9[4] = ~(byte)iVar10;
  auVar9[5] = ~(byte)((uint)iVar10 >> 8);
  auVar9[6] = ~(byte)((uint)iVar10 >> 0x10);
  auVar9[7] = ~(byte)((uint)iVar10 >> 0x18);
  auVar9[8] = ~(byte)iVar11;
  auVar9[9] = ~(byte)((uint)iVar11 >> 8);
  auVar9[10] = ~(byte)((uint)iVar11 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar11 >> 0x18);
  auVar9[0xc] = ~(byte)iVar12;
  auVar9[0xd] = ~(byte)((uint)iVar12 >> 8);
  auVar9[0xe] = ~(byte)((uint)iVar12 >> 0x10);
  auVar9[0xf] = ~(byte)((uint)iVar12 >> 0x18);
  auVar8._8_4_ = 0x7f7fffee;
  auVar8._0_8_ = 0x7f7fffee7f7fffee;
  auVar8._12_4_ = 0x7f7fffee;
  auVar13._8_4_ = 0x7f7fffee;
  auVar13._0_8_ = 0x7f7fffee7f7fffee;
  auVar13._12_4_ = 0x7f7fffee;
  auVar13 = auVar13 ^ (auVar8 ^ auVar14) & auVar9;
  uStack_88 = auVar13._8_8_;
  uStack_90 = auVar13._0_8_;
  local_70 = lVar2;
  local_f0 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  uVar1 = FUN_00da9c58(param_2,&local_f0,lVar2,param_4,param_5,param_6);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x120));
  return uVar1;
}


