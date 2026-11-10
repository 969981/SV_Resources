/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002ff5c0; name: FUN_002ff5c0
 */


uint FUN_002ff5c0(char *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_40;
  long local_38;
  long local_30;
  ulong local_28;
  
  if (param_2 != 0) {
    local_28 = param_4;
    if (*(char *)(param_3 + (param_4 - 1)) == '.') {
      local_28 = param_4 - 1;
    }
    uVar3 = param_2 - 1;
    if ((param_1[uVar3] != '.') || (param_2 = uVar3, uVar3 != 0)) {
      local_30 = param_3;
      uVar3 = FUN_003949e0(param_3,local_28,param_1,param_2);
      if ((uVar3 & 1) == 0) {
        uVar1 = 0;
        if ((2 < param_2) && (*param_1 == '*')) {
          if (param_1[1] != '.') {
            return 0;
          }
          uVar3 = FUN_00395e38(&local_30,0x2e,0);
          if (uVar3 == 0xffffffffffffffff) {
            return 0;
          }
          if (local_28 - 2 <= uVar3) {
            return 0;
          }
          if (local_28 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_00395f20("absl::string_view::substr");
          }
          local_38 = local_28 - (uVar3 + 1);
          local_40 = local_30 + uVar3 + 1;
          lVar2 = FUN_00395e38(&local_40,0x2e,0);
          if (lVar2 == -1) {
            return 0;
          }
          lVar4 = local_38 + -1;
          if (lVar2 == lVar4) {
            return 0;
          }
          if (*(char *)(local_40 + lVar4) == '.') {
            local_38 = lVar4;
          }
          uVar1 = FUN_003949e0(local_40,local_38,param_1 + 2,param_2 - 2);
          return uVar1 & 1;
        }
      }
      else {
        uVar1 = 1;
      }
      return uVar1;
    }
  }
  return 0;
}


