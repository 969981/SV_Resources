/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d4164; name: FUN_007d4164
 */


void FUN_007d4164(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_38 [4];
  undefined4 local_28 [2];
  
  piVar1 = (int *)(param_2 + 0x68);
  if (*piVar1 == 1) {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  }
  else {
    if (*(int *)(param_2 + 0x98) != 0) {
      FUN_0078cac8(piVar1);
      *(undefined4 *)(param_2 + 0x98) = 0;
    }
    FUN_007d4040(local_38,param_2,piVar1);
    if (local_38[0] == 0) {
      *(undefined4 *)(param_2 + 0x98) = 3;
    }
  }
  FUN_00cbd7c0(param_1,local_38);
  return;
}


