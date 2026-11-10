/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00818304; name: FUN_00818304
 */


void FUN_00818304(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_30 [16];
  
  FUN_00792e30();
  puVar2 = PTR_DAT_047d18f0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_047d0910;
  *param_1 = (long)(puVar2 + 0x10);
  plVar4 = param_1 + 0xc;
  *plVar4 = (long)(puVar1 + 0x10);
  param_1[0x10] = (long)(puVar1 + 0x68);
  param_1[0xd] = (long)(param_1 + 0x11);
  param_1[0xe] = 0x400;
  uVar3 = FUN_00793194(plVar4,&DAT_03c886bc,1);
  FUN_0078d430(auStack_30,plVar4,&DAT_03c886bc,uVar3,1);
  *(undefined2 *)(param_1 + 0x92) = 0;
  FUN_0284e338(param_1 + 0x93);
  param_1[0x97] = 0;
  return;
}


