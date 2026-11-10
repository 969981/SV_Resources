/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b4d88; name: FUN_007b4d88
 */


void FUN_007b4d88(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  *(undefined1 *)(param_2 + 0x284) = 0;
  *(undefined1 *)(param_2 + 0x11e0) = 0;
  *(undefined1 *)(param_2 + 0x1232) = 0;
  FUN_007b54b8(local_30,*(undefined8 *)(param_2 + 0x11d8));
  if (local_30[0] == 0) {
    FUN_0078cd58(*(undefined8 *)(param_2 + 0x11d8),0);
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


