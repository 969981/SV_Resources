/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00804fd0; name: FUN_00804fd0
 */


void FUN_00804fd0(long *param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,long param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1688;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078a1c0(param_1 + 4,param_5);
  FUN_0078a1c0(param_1 + 8,param_6);
  param_1[0xc] = param_7;
  memset(param_1 + 0xd,0,2);
  memset((void *)((long)param_1 + 0x6a),0,1);
  return;
}


