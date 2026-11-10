/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038eeb0; name: FUN_0038eeb0
 */


undefined8 FUN_0038eeb0(char *param_1,ulong param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *local_40;
  ulong uStack_38;
  
  *param_5 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  if ((param_2 == 0) || (*param_1 != '[')) {
    uVar3 = FUN_00395e38(&local_40,0x3a,0);
    if (uVar3 != 0xffffffffffffffff) {
      lVar5 = uVar3 + 1;
      lVar4 = FUN_00395e38(&local_40,0x3a,lVar5);
      if (lVar4 == -1) {
        uVar6 = uStack_38;
        if (uVar3 <= uStack_38) {
          uVar6 = uVar3;
        }
        *param_3 = (long)local_40;
        param_3[1] = uVar6;
        if (uVar3 < uStack_38) {
          uVar6 = uStack_38 - lVar5;
          if (uStack_38 + ~uVar3 <= uStack_38 - lVar5) {
            uVar6 = uStack_38 + ~uVar3;
          }
          *param_4 = (long)(local_40 + lVar5);
          param_4[1] = uVar6;
          *param_5 = 1;
          return 1;
        }
        goto LAB_0038f038;
      }
    }
    param_3[1] = uStack_38;
    *param_3 = (long)local_40;
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    uVar3 = FUN_00395e38(&local_40,0x5d,1);
    if (uVar3 == 0xffffffffffffffff) {
      return 0;
    }
    uVar6 = uStack_38 - 1;
    if (uVar3 == uVar6) {
      *param_4 = 0;
      param_4[1] = 0;
    }
    else {
      if (local_40[uVar3 + 1] != ':') {
        return 0;
      }
      uVar1 = uVar3 + 2;
      if (uStack_38 < uVar1) goto LAB_0038f038;
      uVar7 = (uStack_38 - uVar3) - 2;
      uVar2 = uStack_38 - uVar1;
      if (uVar7 <= uStack_38 - uVar1) {
        uVar2 = uVar7;
      }
      *param_4 = (long)(local_40 + uVar1);
      param_4[1] = uVar2;
      *param_5 = 1;
    }
    if (uStack_38 == 0) {
LAB_0038f038:
                    /* WARNING: Subroutine does not return */
      FUN_00395f20("absl::string_view::substr");
    }
    if (uVar3 - 1 <= uVar6) {
      uVar6 = uVar3 - 1;
    }
    *param_3 = (long)(local_40 + 1);
    param_3[1] = uVar6;
    lVar5 = FUN_00395e38(param_3,0x3a,0);
    if (lVar5 == -1) {
      *param_3 = 0;
      param_3[1] = 0;
      return 0;
    }
  }
  return 1;
}


