/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0054f9f8; name: FUN_0054f9f8
 */


void FUN_0054f9f8(long *param_1,long *param_2,undefined8 param_3,long *param_4,long param_5,
                 long *param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long lStack_48;
  
  FUN_006c5398();
  *param_1 = (long)(PTR_DAT_047cdf58 + 0x10);
  lVar10 = (**(code **)(*param_4 + 0x10))(param_4,param_5,0x10);
  if (lVar10 == 0) {
    local_90 = CONCAT44(local_90._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_90,"");
  }
  FUN_006c4058(param_1 + 6,*param_2,0,lVar10,param_5,1);
  puVar1 = PTR_DAT_047cdf60 + 0x10;
  param_1[0x29] = (long)param_4;
  param_1[0x2a] = param_5;
  param_1[6] = (long)puVar1;
  lVar10 = *param_2;
  param_1[0x2c] = param_2[1];
  param_1[0x2b] = lVar10;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((long)param_1 + 0x169) = 1;
  lVar10 = *param_6;
  lVar6 = param_6[1];
  lVar2 = param_6[2];
  lVar7 = param_6[3];
  lVar3 = param_6[4];
  lVar8 = param_6[5];
  lVar4 = param_6[6];
  lVar9 = param_6[7];
  lVar5 = param_6[8];
  lStack_e8 = param_6[9];
  param_6[8] = 0;
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_6[3] = 0;
  param_6[4] = 0;
  param_6[5] = 0;
  param_6[6] = 0;
  param_6[7] = 0;
  local_f0 = 0;
  local_a0 = 0;
  local_50 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  param_1[0x1f] = lVar10;
  param_1[0x20] = lVar6;
  local_90 = 0;
  uStack_88 = 0;
  param_1[0x21] = lVar2;
  param_1[0x22] = lVar7;
  local_80 = 0;
  uStack_78 = 0;
  param_1[0x23] = lVar3;
  param_1[0x24] = lVar8;
  local_70 = 0;
  uStack_68 = 0;
  param_1[0x25] = lVar4;
  param_1[0x26] = lVar9;
  local_60 = 0;
  uStack_58 = 0;
  param_1[0x27] = lVar5;
  param_1[0x28] = lStack_e8;
  lStack_98 = lStack_e8;
  lStack_48 = lStack_e8;
  FUN_001ff1dc(&local_90);
  FUN_001ff1dc(&local_e0);
  FUN_001ff1dc(&local_130);
  return;
}


