/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e2b3c; name: FUN_007e2b3c
 */


void FUN_007e2b3c(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (param_3 == (undefined1 *)0x0) {
    local_30[0] = 0x10407;
  }
  else {
    lVar1 = FUN_007e2bb4(param_2,param_4);
    if (lVar1 == 0) {
      local_30[0] = 0x2c0a;
    }
    else {
      *param_3 = *(undefined1 *)(lVar1 + 0x28);
      local_30[0] = 0;
    }
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


