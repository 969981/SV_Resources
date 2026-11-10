/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210bc34; name: FUN_0210bc34
 */


int FUN_0210bc34(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_014c0c04();
  iVar3 = FUN_014c0c04(param_1,param_3);
  switch(uVar2) {
  case 0:
    if (iVar3 - 1U < 3) {
      return iVar3 + 4;
    }
    return 0;
  case 1:
    bVar1 = iVar3 == 1;
    iVar3 = 8;
    break;
  case 2:
    bVar1 = iVar3 == 2;
    iVar3 = 10;
    break;
  case 3:
    return 0xc;
  default:
    return 0;
  }
  if (bVar1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


