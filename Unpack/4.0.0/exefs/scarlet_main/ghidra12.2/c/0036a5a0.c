/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036a5a0; name: FUN_0036a5a0
 */


bool FUN_0036a5a0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  if (*param_1 == 0) {
    lVar2 = (long)param_1 + 9;
    uVar3 = (ulong)*(byte *)(param_1 + 1);
  }
  else {
    uVar3 = param_1[1];
    lVar2 = param_1[2];
  }
  iVar1 = FUN_0038d140(lVar2,uVar3,param_2);
  return iVar1 != 0;
}


