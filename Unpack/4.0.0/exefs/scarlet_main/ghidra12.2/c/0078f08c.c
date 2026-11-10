/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078f08c; name: FUN_0078f08c
 */


int FUN_0078f08c(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1 - param_1[1];
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    uVar1 = (iVar4 + (param_3 & 0xffff) * -2) - 0x1a;
    uVar3 = FUN_0078db64(1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    iVar4 = iVar4 + (uVar2 * uVar3 - uVar1);
  }
  return iVar4;
}


