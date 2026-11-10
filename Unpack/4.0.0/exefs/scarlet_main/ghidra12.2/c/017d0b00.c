/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017d0b00; name: FUN_017d0b00
 */


void FUN_017d0b00(long param_1,undefined2 param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined2 local_38 [4];
  
  sVar2 = strlen(param_3);
  iVar1 = FUN_017d0b6c(local_38,param_1 + 0x44,0x188,param_3,sVar2,0);
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x40) = param_2;
    *(undefined2 *)(param_1 + 0x42) = local_38[0];
  }
  return;
}


