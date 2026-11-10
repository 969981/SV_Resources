/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00395dcc; name: FUN_00395dcc
 */


undefined1  [16] FUN_00395dcc(undefined1 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_3;
  uVar1 = FUN_00395e38(&local_20,*param_1,param_4);
  if (uVar1 == 0xffffffffffffffff) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_20 + local_18;
    return auVar3;
  }
  if (local_18 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00395f20("absl::string_view::substr");
  }
  auVar2[8] = local_18 != uVar1;
  auVar2._0_8_ = local_20 + uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}


