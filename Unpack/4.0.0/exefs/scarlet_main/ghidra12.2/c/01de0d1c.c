/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de0d1c; name: FUN_01de0d1c
 */


uint FUN_01de0d1c(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2[1];
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = FUN_014a24ec();
    iVar4 = 8;
    if (iVar2 != 2) {
      iVar4 = 4;
    }
    uVar3 = *param_2 + iVar4 * (iVar1 + -1) & 0xff;
  }
  return uVar3;
}


