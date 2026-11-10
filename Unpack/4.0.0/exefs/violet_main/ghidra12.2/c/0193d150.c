/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193d150; name: FUN_0193d150
 */


void FUN_0193d150(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (**(int **)(param_2 + 0xa8) - 2U < 3) {
    puVar2 = (undefined4 *)(param_2 + 0x120);
    FUN_00cbd7c0(local_38,*(int **)(param_2 + 0xa8) + 1);
    uVar1 = FUN_00796534(puVar2,local_38);
    if ((uVar1 & 1) == 0) {
      puVar2 = (undefined4 *)(*(long *)(param_2 + 0xa8) + 4);
    }
  }
  else {
    local_38[0] = 0x10408;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    puVar2 = local_38;
  }
  FUN_00cbd7c0(param_1,puVar2);
  return;
}


