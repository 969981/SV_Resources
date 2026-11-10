/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036a0b0; name: FUN_0036a0b0
 */


void FUN_0036a0b0(long *param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar1 = param_1[2];
  }
  uVar2 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar2 = param_1[1];
  }
  FUN_0038d120(lVar1,uVar2,param_2);
  return;
}


