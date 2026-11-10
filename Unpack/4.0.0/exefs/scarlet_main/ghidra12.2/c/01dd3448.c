/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd3448; name: FUN_01dd3448
 */


void FUN_01dd3448(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x280) == 0) {
    if ((param_3 & 1) == 0) {
      if ((*(int *)(param_1 + 0x298) != 2) || (*(char *)(param_1 + 0x19c) == '\0')) {
        FUN_01dd65d0(param_1);
        goto LAB_01dd349c;
      }
    }
    else {
      uVar1 = FUN_01dd621c(param_1);
      if ((uVar1 & 1) != 0) {
LAB_01dd349c:
        FUN_01dd636c(param_1);
        FUN_014e2ae0(param_1);
        return;
      }
    }
  }
  return;
}


