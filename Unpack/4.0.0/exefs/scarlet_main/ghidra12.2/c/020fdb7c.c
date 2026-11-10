/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fdb7c; name: FUN_020fdb7c
 */


void FUN_020fdb7c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = FUN_020ffc10();
  lVar3 = FUN_020ffc3c(param_1,uVar1);
  if (((lVar3 == 0) || (uVar4 = FUN_0124da8c(param_1 + 0xb0,0x32), (uVar4 & 1) == 0)) ||
     (iVar2 = FUN_020ffcd0(param_1,lVar3), iVar2 < 0)) {
    FUN_020fff20(param_1);
    return;
  }
  return;
}


