/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02730f88; name: FUN_02730f88
 */


void FUN_02730f88(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 local_3c;
  undefined4 auStack_38 [2];
  
  FUN_02731000();
  lVar1 = *(long *)(param_1 + 0xe8);
  local_3c = 4;
  auStack_38[0] = 0x22;
  FUN_00c85118(lVar1 + 0xd8,&local_3c,auStack_38);
  *(int *)(lVar1 + 0x118) = *(int *)(lVar1 + 0x118) + 0xc;
  FUN_00ebd51c(lVar1 + 0xd8,param_2,param_3,1);
  return;
}


