/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a642c; name: FUN_007a642c
 */


void FUN_007a642c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong local_58 [2];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  FUN_007a6294(local_38,param_2,param_3,2);
  if (local_38[0] == 0) {
    *(undefined2 *)(param_2 + 100) = 0;
    local_58[0] = 0;
    FUN_007935cc(local_58);
    *(undefined4 *)(param_2 + 200) = 5;
    *(ulong *)(param_2 + 0xc0) = local_58[0];
    local_58[0] = local_58[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
    FUN_00cbd7c0(auStack_48,local_58);
    FUN_007a5ef8(param_2,auStack_48);
    local_58[0] = local_58[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
    puVar1 = local_58;
  }
  else {
    puVar1 = (ulong *)local_38;
  }
  FUN_00cbd7c0(param_1,puVar1);
  return;
}


