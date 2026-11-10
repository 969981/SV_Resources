/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a6e58; name: FUN_007a6e58
 */


void FUN_007a6e58(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong *puVar1;
  ulong local_50 [2];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = local_50;
  FUN_007a6294(local_40,param_2,param_3,8);
  if (local_40[0] == 0) {
    local_50[0] = 0;
    FUN_007935cc(local_50);
    *(undefined4 *)(param_2 + 200) = 10;
    *(undefined4 *)(param_2 + 0x68) = param_4;
    *(undefined8 *)(param_2 + 0x30) = 0x128;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(ulong *)(param_2 + 0xc0) = local_50[0];
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartChangeNetworkState";
    local_50[0] = local_50[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    puVar1 = (ulong *)local_40;
  }
  FUN_00cbd7c0(param_1,puVar1);
  return;
}


