/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012424b8; name: FUN_012424b8
 */


void FUN_012424b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  FUN_01582534();
  FUN_012409b4();
  uVar1 = FUN_0124d34c();
  if (((uVar1 & 1) == 0) || (lVar2 = FUN_01242508(param_1), lVar2 == 0)) {
    return;
  }
  FUN_01248e44(param_1,param_3);
  return;
}


