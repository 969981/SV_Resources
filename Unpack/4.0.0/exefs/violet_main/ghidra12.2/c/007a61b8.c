/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a61b8; name: FUN_007a61b8
 */


void FUN_007a61b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong local_50 [2];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar3 = local_50;
  FUN_007a6294(local_40,param_2,param_3,2);
  if (local_40[0] == 0) {
    *(undefined1 *)(param_2 + 100) = 0;
    iVar1 = (**(code **)(**(long **)(param_2 + 0x78) + 0x1d8))();
    plVar2 = (long *)FUN_0079365c();
    lVar4 = *plVar2;
    local_50[0] = 0;
    FUN_007935cc(local_50);
    *(ulong *)(param_2 + 0x70) = local_50[0] + lVar4 * iVar1;
    local_50[0] = 0;
    FUN_007935cc(local_50);
    *(undefined4 *)(param_2 + 200) = 4;
    *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartDestroyNetwork";
    *(undefined8 *)(param_2 + 0x30) = 200;
    *(undefined8 *)(param_2 + 0x38) = 1;
    *(ulong *)(param_2 + 0xc0) = local_50[0];
    local_50[0] = local_50[0] & 0xffffffff00000000;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    puVar3 = (ulong *)local_40;
  }
  FUN_00cbd7c0(param_1,puVar3);
  return;
}


