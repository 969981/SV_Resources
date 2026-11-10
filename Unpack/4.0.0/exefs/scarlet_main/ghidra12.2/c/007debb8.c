/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007debb8; name: FUN_007debb8
 */


void FUN_007debb8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  *(undefined8 *)(param_2 + 0x60) = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(*(undefined8 *)(param_2 + 0x60));
  *(char **)(param_2 + 0x40) = "LeaveMeshWithHostMigrationJob::WaitHostMigrationProcess";
  *(undefined **)(param_2 + 0x30) = PTR_FUN_047d13f8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


