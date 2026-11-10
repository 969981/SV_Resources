/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cf7d4; name: FUN_007cf7d4
 */


void FUN_007cf7d4(long *param_1)

{
  long *plVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  (**(code **)(*param_1 + 0x38))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_0078cc00();
    }
    param_1[0xb] = 0;
  }
  plVar1 = param_1 + 0xc;
  if ((int)*plVar1 == 1) {
    FUN_0078cc00(plVar1);
  }
  FUN_0078cac8(plVar1);
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0x12,local_30);
  return;
}


