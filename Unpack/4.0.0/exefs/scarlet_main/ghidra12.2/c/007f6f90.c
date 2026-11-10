/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f6f90; name: FUN_007f6f90
 */


void FUN_007f6f90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_48 [4];
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  FUN_007e8a68(local_48,*(undefined8 *)(param_2 + 0x40),param_3);
  FUN_018ff39c(local_38,local_48);
  FUN_007e8a68(local_48,*(undefined8 *)(param_2 + 0x48),param_3);
  FUN_018ff39c(local_38,local_48);
  local_48[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


