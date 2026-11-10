/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ac52c; name: FUN_007ac52c
 */


void FUN_007ac52c(undefined8 param_1,long *param_2,long param_3,byte param_4)

{
  long lVar1;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if (*(int *)(param_2[0x16] + 0x288) == 1) {
    (**(code **)(*param_2 + 0x10))(param_2,1);
    param_2[0xb] = param_3;
    FUN_0078cac8(param_3);
    FUN_0078cb14(param_2[0xb]);
    *(byte *)(param_2 + 0x15) = param_4 & 1;
    if ((param_4 & 1) != 0) {
      lVar1 = param_2[0x16];
      if (*(int *)(lVar1 + 0x1c0) != 1) {
        *(undefined4 *)(lVar1 + 0x1c0) = 1;
      }
      if (*(char *)(lVar1 + 0x249) != '\x01') {
        *(undefined1 *)(lVar1 + 0x249) = 1;
      }
    }
    param_2[8] = (long)"NetDestroyNetworkJob::TryPrepareDestroyNetwork";
    param_2[6] = (long)PTR_FUN_047d0cf0;
    param_2[7] = 0;
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


