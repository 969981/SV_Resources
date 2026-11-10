/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007b9d0c; name: FUN_007b9d0c
 */


void FUN_007b9d0c(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_007a22c4(param_2,param_3,param_4 & 1);
  if (*param_1 == 0) {
    FUN_007b7268(param_3);
    uVar1 = FUN_00796784();
    if ((uVar1 & 1) == 0) {
      local_30[0] = 0x6439;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
      FUN_018ff39c(param_1,local_30);
      return;
    }
  }
  return;
}


