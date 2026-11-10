/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a6390; name: FUN_007a6390
 */


void FUN_007a6390(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  if (*(char *)((long)param_2 + 0x65) == '\0') {
    uVar1 = FUN_0078cdf4();
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_0078ce3c(param_2);
      if ((uVar1 & 1) != 0) {
        local_30[0] = 0x10408;
        goto LAB_007a63fc;
      }
      if (param_2[0xb] != 0) {
        FUN_0078cc8c();
      }
    }
    (**(code **)(*param_2 + 0x10))(param_2,0);
    *(undefined1 *)((long)param_2 + 0x65) = 1;
  }
  local_30[0] = 0;
LAB_007a63fc:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


