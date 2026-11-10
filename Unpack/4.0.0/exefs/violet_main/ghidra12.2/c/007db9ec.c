/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007db9ec; name: FUN_007db9ec
 */


void FUN_007db9ec(undefined8 param_1,long param_2,byte param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong local_78 [8];
  undefined4 local_38 [2];
  
  *(byte *)(param_2 + 0xa8) = param_3 & 1;
  *(undefined1 *)(param_2 + 0xa9) = 0;
  FUN_007e5190(local_78);
  FUN_007e51d8(param_2 + 0xb8,local_78);
  FUN_007e51d0(local_78);
  local_78[0] = 0;
  FUN_007935cc(local_78);
  *(ulong *)(param_2 + 0xb0) = local_78[0];
  iVar1 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x140))();
  plVar2 = (long *)FUN_0079365c();
  lVar3 = *plVar2;
  local_78[0] = 0;
  FUN_007935cc(local_78);
  *(ulong *)(param_2 + 0x68) = local_78[0] + lVar3 * iVar1;
  if (*(int *)(param_2 + 0x60) != 1) {
    *(undefined4 *)(param_2 + 0x60) = 1;
  }
  *(undefined **)(param_2 + 0x30) = PTR_FUN_047d1368;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "ProcessHostMigrationJob::WaitNetworkHostMigration";
  local_78[0] = local_78[0] & 0xffffffff00000000;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_78);
  return;
}


