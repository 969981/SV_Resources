/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c3bd0; name: FUN_006c3bd0
 */


bool FUN_006c3bd0(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  sockaddr *psVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  psVar3 = (sockaddr *)FUN_006c3a48(param_2);
  uVar1 = FUN_006c3a4c(param_2);
  iVar2 = nn::socket::Bind(iVar2,psVar3,uVar1);
  return iVar2 == 0;
}


