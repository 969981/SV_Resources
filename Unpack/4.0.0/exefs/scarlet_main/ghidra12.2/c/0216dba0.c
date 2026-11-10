/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216dba0; name: FUN_0216dba0
 */


void FUN_0216dba0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_02140df8(param_3 + 0x4e0,param_1);
  if (lVar1 == 0) {
    return;
  }
  FUN_02140390(param_3 + 0x40,lVar1 + 0x18);
  FUN_02140f04(param_3 + 0x4e0,lVar1);
  return;
}


