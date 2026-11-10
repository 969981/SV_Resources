/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b54b8; name: FUN_007b54b8
 */


void FUN_007b54b8(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  *(undefined8 *)(param_2 + 0x14c) = 0;
  *(char **)(param_2 + 0x40) = "LocalEjectClientListCheckJob::CheckTargetList";
  *(undefined **)(param_2 + 0x30) = PTR_LAB_047d0e38;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


