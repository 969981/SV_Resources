/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ad46c; name: FUN_007ad46c
 */


void FUN_007ad46c(undefined8 param_1,long *param_2,undefined1 param_3)

{
  ulong uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  uVar1 = FUN_0078cdf4();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    *(undefined1 *)(param_2 + 0xc) = param_3;
    param_2[8] = (long)"NetUpdatePlayerNumBackgroundJob::UpdatePlayerNum";
    param_2[6] = (long)PTR_FUN_047d0d40;
    param_2[7] = 0;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


