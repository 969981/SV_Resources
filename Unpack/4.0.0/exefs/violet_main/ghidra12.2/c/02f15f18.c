/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f15f18; name: FUN_02f15f18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f15f18(long *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 local_54;
  
  *(undefined2 *)(param_1 + 4) = 4;
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_047e4668 + 0x10;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *param_1 = (long)puVar1;
  param_1[1] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x26) = 0x11;
  *(undefined2 *)(param_1 + 0x28) = 0xf;
  param_1[0x29] = 0x5f7ffff0df7ffff0;
  param_1[0x2a] = 0x3f8000003f800000;
  *(undefined2 *)(param_1 + 6) = 2;
  *(undefined2 *)(param_1 + 0x2c) = 0x10;
  *(undefined2 *)(param_1 + 0x32) = 0x10;
  *(undefined2 *)(param_1 + 0x18) = 0x17;
  *(undefined8 *)((long)param_1 + 0xc4) = 0x7f7fffee7f7fffee;
  *(undefined8 *)((long)param_1 + 0xcc) = 0x100135f7ffff0;
  param_1[0x24] = 0;
  *(undefined1 *)((long)param_1 + 0x132) = 1;
  *(undefined1 *)((long)param_1 + 0x134) = 1;
  *(undefined1 *)((long)param_1 + 0x142) = 1;
  *(undefined1 *)((long)param_1 + 0x162) = 1;
  param_1[0x2d] = 0x3f8000003f800000;
  *(undefined1 *)((long)param_1 + 0x192) = 1;
  param_1[0x33] = 0x3f8000003f800000;
  *(undefined2 *)(param_1 + 0x38) = 5;
  local_54 = 0x3f800000;
  FUN_00cb06cc((long)param_1 + 0x1c2,&local_54);
  lVar8 = _UNK_03cabe58;
  lVar7 = _DAT_03cabe50;
  lVar4 = _UNK_03caa5b8;
  lVar3 = _DAT_03caa5b0;
  auVar11 = NEON_fmov(0x3f800000,4);
  *(undefined1 *)((long)param_1 + 0x1c3) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x3f8000003f800000;
  param_1[0xd] = lVar4;
  param_1[0xc] = lVar3;
  param_1[0xf] = lVar8;
  param_1[0xe] = lVar7;
  lVar6 = DAT_03cab628;
  lVar5 = DAT_03cab620;
  param_1[0x15] = lVar4;
  param_1[0x14] = lVar3;
  param_1[0x17] = lVar8;
  param_1[0x16] = lVar7;
  lVar8 = _UNK_03cabe68;
  lVar7 = _DAT_03cabe60;
  auVar10._8_4_ = 0xffffffe1;
  auVar10._0_8_ = 0xffffffe1ffffffe1;
  auVar10._12_4_ = 0xffffffe1;
  auVar10 = NEON_sshl(auVar11,auVar10,4);
  *(undefined4 *)((long)param_1 + 0x1cc) = 0;
  param_1[9] = lVar6;
  param_1[8] = lVar5;
  param_1[0xb] = lVar8;
  param_1[10] = lVar7;
  param_1[0x11] = lVar6;
  param_1[0x10] = lVar5;
  param_1[0x13] = lVar8;
  param_1[0x12] = lVar7;
  *(undefined2 *)((long)param_1 + 0x133) = 0x300;
  param_1[0x1d] = lVar6;
  param_1[0x1c] = lVar5;
  param_1[0x1f] = lVar8;
  param_1[0x1e] = lVar7;
  param_1[0x21] = lVar4;
  param_1[0x20] = lVar3;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x940090;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((long)param_1 + 0xd2) = 0;
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x144) = 1;
  param_1[0x29] = 0x3f060aa6bf060aa6;
  param_1[0x2a] = 0x3f8000003f4ccccd;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  *(undefined2 *)((long)param_1 + 0x163) = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x3fece788;
  auVar12._8_4_ = 0x3fc538d1;
  auVar12._0_8_ = 0x3fc538d13fc538d1;
  auVar12._12_4_ = 0x3fc538d1;
  auVar11._8_4_ = 0xffffffe1;
  auVar11._0_8_ = 0xffffffe1ffffffe1;
  auVar11._12_4_ = 0xffffffe1;
  auVar11 = NEON_sshl(auVar12,auVar11,4);
  param_1[0x2d] = 0x3f8000003f4ccccd;
  param_1[0x2e] = 0x3f800000c2c80000;
  *(undefined4 *)(param_1 + 0x2f) = 0x40071c72;
  *(float *)((long)param_1 + 0x184) = (float)(auVar10._0_4_ << 0x1f ^ 0x3f576aa4) * 1.8508158;
  *(undefined4 *)(param_1 + 0x30) = 0xdf7ffff0;
  *(undefined2 *)((long)param_1 + 0x193) = 0x100;
  *(undefined4 *)(param_1 + 0x35) = 0x42055a89;
  *(float *)(param_1 + 0x36) = (float)(auVar11._0_4_ << 0x1f ^ 0x3f7fe283) * 33.338413;
  auVar9._8_4_ = 0x3fcce6e5;
  auVar9._0_8_ = 0x3fcce6e53fcce6e5;
  auVar9._12_4_ = 0x3fcce6e5;
  auVar2._8_4_ = 0xffffffe1;
  auVar2._0_8_ = 0xffffffe1ffffffe1;
  auVar2._12_4_ = 0xffffffe1;
  auVar10 = NEON_sshl(auVar9,auVar2,4);
  param_1[0x33] = 0x3f8000003f4ccccd;
  param_1[0x34] = 0x3fcc430e3fc5dca8;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0xc2055a70;
  *(float *)((long)param_1 + 0x1b4) = (float)(auVar10._0_4_ << 0x1f ^ 0x3f7fe283) * -33.338318;
  return;
}


