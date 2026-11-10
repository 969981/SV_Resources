/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007da00c; name: FUN_007da00c
 */


void FUN_007da00c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 local_48;
  undefined4 local_38 [2];
  
  *(undefined8 *)(param_2 + 0x60) = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(*(undefined8 *)(param_2 + 0x60));
  *(undefined2 *)(param_2 + 0x68) = 0;
  *(undefined1 *)(param_2 + 0x6a) = 0;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_018ff39c(param_2 + 0x6c,&local_48);
  *(undefined1 *)(param_2 + 0x7c) = 0;
  local_48 = 0;
  FUN_007935cc(&local_48);
  *(undefined4 *)(param_2 + 0x98) = 1;
  *(ulong *)(param_2 + 0x90) = local_48;
  local_48 = local_48 & 0xffffffff00000000;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_018ff39c(param_2 + 0x9c,&local_48);
  plVar1 = (long *)FUN_0079365c();
  lVar2 = *plVar1;
  local_48 = 0;
  FUN_007935cc(&local_48);
  *(undefined **)(param_2 + 0x30) = PTR_FUN_047d1318;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "JoinMeshJob::SetupLocalAndHostStation";
  *(ulong *)(param_2 + 0x80) = local_48 + lVar2 * 15000;
  local_48 = local_48 & 0xffffffff00000000;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,&local_48);
  return;
}


