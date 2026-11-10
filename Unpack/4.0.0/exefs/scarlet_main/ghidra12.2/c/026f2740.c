/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f2740; name: FUN_026f2740
 */


void FUN_026f2740(undefined4 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_026f2e08(*param_2);
  if (*(ulong *)(param_3 + 8) < (ulong)(*(long *)(param_3 + 0x10) + lVar1)) {
    *param_1 = 0xd;
    return;
  }
  FUN_026f2e3c(param_1,param_2,param_3);
  return;
}


