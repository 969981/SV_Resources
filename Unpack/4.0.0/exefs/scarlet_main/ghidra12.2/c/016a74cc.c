/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a74cc; name: FUN_016a74cc
 */


void FUN_016a74cc(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  if ((param_4 & 1) == 0) {
    FUN_00d101e0();
    return;
  }
  FUN_01690980(*(undefined8 *)(param_1 + 200),2,param_2,param_3);
  return;
}


