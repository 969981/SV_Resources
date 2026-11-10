/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021be6c4; name: FUN_021be6c4
 */


void FUN_021be6c4(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00d1a240(param_1,0x80098080);
  *param_1 = (long)&PTR_FUN_04603190;
  param_1[4] = (long)&PTR_LAB_046032f8;
  param_1[5] = (long)&DAT_04603420;
  param_1[0x24] = (long)&PTR_LAB_046034d8;
  param_1[6] = (long)&PTR_LAB_04603478;
  param_1[7] = (long)&PTR_LAB_046034a0;
  FUN_029ad040(param_1 + 0x25);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  puVar1 = PTR_DAT_047dd330 + 0x10;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x43] = (long)puVar1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x33] = (long)puVar1;
  param_1[0x34] = 0;
  param_1[0x3b] = (long)puVar1;
  param_1[0x3c] = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0x100;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  FUN_00f2babc(param_1 + 0x33,0,param_2 + 0x30,0,0);
  FUN_00f2babc(param_1 + 0x3b,0,param_2,0,0);
  FUN_00f2babc(param_1 + 0x43,0,param_2 + 0x60,0,0);
  return;
}


