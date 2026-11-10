/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e9984; name: FUN_007e9984
 */


void FUN_007e9984(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar1 = local_50;
  FUN_00797f74(local_40,*(undefined8 *)(param_2 + 0xe0));
  *(undefined4 *)(param_2 + 0x30) = 0x2000;
  FUN_0079804c(local_50,*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0x28));
  FUN_018ff39c(local_40,local_50);
  FUN_00798034(*(undefined8 *)(param_2 + 0xe0));
  if (local_40[0] == 0) {
    local_50[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    piVar1 = local_40;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


