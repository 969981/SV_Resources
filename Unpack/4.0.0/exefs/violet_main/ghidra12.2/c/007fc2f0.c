/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fc2f0; name: FUN_007fc2f0
 */


void FUN_007fc2f0(undefined8 param_1,long param_2)

{
  int *piVar1;
  ErrorResultVariant *this;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 9) == '\0') {
    local_38[0] = 0x6c05;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar1 = local_38;
  }
  else {
    FUN_008101d0(local_38,*(undefined8 *)(param_2 + 0x20));
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    local_48[0] = 0x6c05;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    if (local_38[0] == local_48[0]) {
      local_48[0] = 0x6c05;
    }
    else {
      if (local_38[0] != 0) {
        piVar1 = local_38;
        goto LAB_007fc3a0;
      }
      this = (ErrorResultVariant *)((ulong)local_48 | 4);
      local_48[0] = 0;
    }
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_28);
    piVar1 = local_48;
  }
LAB_007fc3a0:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


