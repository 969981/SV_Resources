/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ecb4; name: FUN_0080ecb4
 */


void FUN_0080ecb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0xac8) = param_3;
  local_38[0] = 0;
  FUN_007935cc(local_38);
  *(ulong *)(param_2 + 0xab8) = local_38[0];
  local_38[0] = local_38[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


