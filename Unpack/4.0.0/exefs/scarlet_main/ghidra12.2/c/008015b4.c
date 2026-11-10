/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008015b4; name: FUN_008015b4
 */


void FUN_008015b4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_30 [16];
  
  FUN_00798384();
  puVar2 = PTR_DAT_047d1648;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  puVar1 = PTR_DAT_047d15d0;
  *param_1 = (long)(puVar2 + 0x10);
  plVar4 = param_1 + 0x17;
  *plVar4 = (long)(puVar1 + 0x10);
  param_1[0x1b] = (long)(puVar1 + 0x68);
  param_1[0x18] = (long)(param_1 + 0x1c);
  param_1[0x19] = 0x100;
  uVar3 = FUN_00793194(plVar4,&DAT_03c886bc,1);
  FUN_0278a330(auStack_30,plVar4,&DAT_03c886bc,uVar3,1);
  memset(param_1 + 0x3d,0,0x200);
  param_1[4] = (long)(param_1 + 0x3d);
  return;
}


