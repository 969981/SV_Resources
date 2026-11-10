/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00312da0; name: FUN_00312da0
 */


void FUN_00312da0(undefined8 *param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = &LAB_00312e10;
  param_1[1] = 0;
  param_1[3] = &LAB_00312e90;
  FUN_00367020(&local_30);
  param_1[10] = uStack_28;
  param_1[9] = local_30;
  param_1[0xc] = uStack_18;
  param_1[0xb] = uStack_20;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00367020(&local_30);
  param_1[0x17] = 0;
  param_1[2] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 2;
  param_1[0x11] = uStack_28;
  param_1[0x10] = local_30;
  param_1[0x13] = uStack_18;
  param_1[0x12] = uStack_20;
  return;
}


