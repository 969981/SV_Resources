/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f8280; name: FUN_031f8280
 */


long FUN_031f8280(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_3 < (int)param_2) {
    return 0;
  }
  iVar1 = param_3 + (int)param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 >> 1;
  uVar2 = FUN_031f8280(param_1,param_2,iVar1 + -1);
  uVar3 = FUN_031f8280(param_1,iVar1 + 1,param_3);
  lVar4 = *(long *)(*param_1 + (long)iVar1 * 8);
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  return lVar4;
}


