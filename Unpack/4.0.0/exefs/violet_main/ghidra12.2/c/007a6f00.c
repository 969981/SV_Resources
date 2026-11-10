/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a6f00; name: FUN_007a6f00
 */


undefined8 FUN_007a6f00(long param_1)

{
  code *pcVar1;
  undefined1 auStack_40 [16];
  undefined4 local_30 [4];
  int local_20 [4];
  
  local_20[0] = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  if (*(int *)(param_1 + 0x68) == 1) {
    pcVar1 = *(code **)(**(long **)(param_1 + 0x78) + 0xa0);
  }
  else {
    pcVar1 = *(code **)(**(long **)(param_1 + 0x78) + 0xa8);
  }
  (*pcVar1)(local_30);
  FUN_018ff39c(local_20,local_30);
  if (local_20[0] == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0x130;
    *(undefined8 *)(param_1 + 0x38) = 1;
    *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::WaitChangeNetworkState";
    return 0xf0004;
  }
  FUN_00cbd7c0(auStack_40,local_20);
  FUN_018ff39c(param_1 + 0x80,auStack_40);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d0ba8;
  *(char **)(param_1 + 0x40) = "NetBackgroundProcessJob::CompleteFailureProcess";
  return 0;
}


