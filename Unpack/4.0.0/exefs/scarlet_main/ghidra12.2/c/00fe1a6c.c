/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe1a6c; name: FUN_00fe1a6c
 */


uint FUN_00fe1a6c(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 local_14;
  
  lVar2 = *(long *)(*param_1 + 0x1e0);
  local_14 = 1;
  uVar1 = FUN_00fe1ad0(lVar2 + 0x74,&local_14,lVar2,param_1[1],lVar2 + 8,param_1[2],lVar2 + 0x18,
                       param_1[3],lVar2 + 0x30,param_1[4],lVar2 + 0x70,param_1[5]);
  return uVar1 & 1;
}


