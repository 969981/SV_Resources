/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026e9dbc; name: FUN_026e9dbc
 */


void FUN_026e9dbc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_026e8748(param_1 + 0x18,uVar1);
    *(ulong *)(param_1 + 8) = uVar1 + 8;
    return;
  }
  FUN_026e9f88(param_1,param_2);
  return;
}


