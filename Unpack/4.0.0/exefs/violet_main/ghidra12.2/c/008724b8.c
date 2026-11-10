/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008724b8; name: FUN_008724b8
 */


undefined4 FUN_008724b8(long param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined1 auVar7 [12];
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 local_1890;
  undefined4 local_1888;
  undefined1 *local_1880 [2];
  undefined8 local_1870;
  undefined8 uStack_1868;
  undefined8 uStack_1860;
  undefined8 uStack_1858;
  undefined8 local_1850;
  undefined8 uStack_1848;
  undefined4 local_1840;
  undefined1 *local_1830;
  undefined8 local_1828;
  undefined1 auStack_1820 [6144];
  
  local_1880[0] = (undefined1 *)&local_1890;
  local_1888 = 0;
  uStack_1868 = param_2[1];
  local_1870 = *param_2;
  fVar6 = *param_3 - (float)local_1870;
  fVar11 = param_3[1] - (float)((ulong)local_1870 >> 0x20);
  fVar12 = param_3[2] - (float)uStack_1868;
  uVar2 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x60);
  local_1840 = 0xffffffff;
  iVar13 = -(uint)(fVar6 == 0.0);
  iVar14 = -(uint)(fVar11 == 0.0);
  iVar15 = -(uint)(fVar12 == 0.0);
  iVar16 = -(uint)((float)uVar2 == 0.0);
  fVar6 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                            SUB41(fVar6,0) & ~(byte)iVar13)));
  auVar7._0_8_ = CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT16((byte)((uint)fVar11 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT15((byte)((uint)fVar11 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            CONCAT14(SUB41(fVar11,0) & ~(byte)iVar14,fVar6))));
  auVar7[8] = SUB41(fVar12,0) & ~(byte)iVar15;
  auVar7[9] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar15 >> 8);
  auVar7[10] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
  auVar7[0xb] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
  auVar8[0xc] = (byte)uVar2 & ~(byte)iVar16;
  auVar8._0_12_ = auVar7;
  auVar8[0xd] = (byte)((ulong)uVar2 >> 8) & ~(byte)((uint)iVar16 >> 8);
  auVar8[0xe] = (byte)((ulong)uVar2 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10);
  auVar8[0xf] = (byte)((ulong)uVar2 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18);
  fVar11 = (float)((ulong)auVar7._0_8_ >> 0x20);
  iVar13 = -(uint)(fVar6 == 0.0);
  iVar14 = -(uint)(fVar11 == 0.0);
  iVar15 = -(uint)(auVar7._8_4_ == 0.0);
  iVar16 = -(uint)(auVar8._12_4_ == 0.0);
  uStack_1858 = auVar8._8_8_;
  auVar9[0] = ~(byte)iVar13;
  auVar9[1] = ~(byte)((uint)iVar13 >> 8);
  auVar9[2] = ~(byte)((uint)iVar13 >> 0x10);
  auVar9[3] = ~(byte)((uint)iVar13 >> 0x18);
  auVar9[4] = ~(byte)iVar14;
  auVar9[5] = ~(byte)((uint)iVar14 >> 8);
  auVar9[6] = ~(byte)((uint)iVar14 >> 0x10);
  auVar9[7] = ~(byte)((uint)iVar14 >> 0x18);
  auVar9[8] = ~(byte)iVar15;
  auVar9[9] = ~(byte)((uint)iVar15 >> 8);
  auVar9[10] = ~(byte)((uint)iVar15 >> 0x10);
  auVar9[0xb] = ~(byte)((uint)iVar15 >> 0x18);
  auVar9[0xc] = ~(byte)iVar16;
  auVar9[0xd] = ~(byte)((uint)iVar16 >> 8);
  auVar9[0xe] = ~(byte)((uint)iVar16 >> 0x10);
  auVar9[0xf] = ~(byte)((uint)iVar16 >> 0x18);
  auVar1._4_4_ = (float)((ulong)uVar2 >> 0x20) / fVar11;
  auVar1._0_4_ = (float)uVar2 / fVar6;
  auVar1._8_4_ = (float)*(undefined8 *)(PTR_DAT_047d19b0 + 0x68) / auVar7._8_4_;
  auVar1._12_4_ = (float)((ulong)*(undefined8 *)(PTR_DAT_047d19b0 + 0x68) >> 0x20) / auVar8._12_4_;
  auVar3._8_4_ = 0x7f7fffee;
  auVar3._0_8_ = 0x7f7fffee7f7fffee;
  auVar3._12_4_ = 0x7f7fffee;
  auVar10._8_4_ = 0x7f7fffee;
  auVar10._0_8_ = 0x7f7fffee7f7fffee;
  auVar10._12_4_ = 0x7f7fffee;
  auVar10 = auVar10 ^ (auVar3 ^ auVar1) & auVar9;
  local_1830 = auStack_1820;
  local_1828 = -0x7fffff8000000000;
  uStack_1848 = auVar10._8_8_;
  local_1850 = auVar10._0_8_;
  local_1890 = param_4;
  uStack_1860 = auVar7._0_8_;
  FUN_008727fc(*(long *)(param_1 + 0x18) + 0x20,&local_1830,local_1880);
  lVar4 = local_1828;
  uVar5 = (ulong)local_1828._4_4_;
  local_1828 = (ulong)local_1828._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_1830 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1830,uVar5 * 0x30);
  }
  return local_1888;
}


