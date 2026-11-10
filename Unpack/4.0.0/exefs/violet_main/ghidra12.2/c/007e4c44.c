/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e4c44; name: FUN_007e4c44
 */


void FUN_007e4c44(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0xf8))(local_30);
  if (local_30[0] == 0) {
    *(char **)(param_2 + 0x40) = "SessionStatusCheckJob::CheckSessionStatus";
    *(undefined **)(param_2 + 0x30) = PTR_FUN_047d1450;
    *(undefined8 *)(param_2 + 0x38) = 0;
    local_40[0] = 0;
    local_18[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
  }
  else {
    piVar1 = local_30;
  }
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


