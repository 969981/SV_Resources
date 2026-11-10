/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d45f4; name: FUN_007d45f4
 */


void FUN_007d45f4(undefined8 param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  uVar2 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0xc0));
  if ((uVar2 & 1) == 0) {
    iVar1 = FUN_0078cdcc(*(undefined8 *)(param_2 + 0xc0));
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_2 + 0xc0) + 0x10))(*(long **)(param_2 + 0xc0),1);
    }
    FUN_007db9ec(local_38,*(undefined8 *)(param_2 + 0xc0),param_3 & 1);
    if (local_38[0] == 0) {
      FUN_0078cd58(*(undefined8 *)(param_2 + 0xc0),0);
    }
    local_48[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar3 = local_48;
  }
  else {
    local_38[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
    piVar3 = local_38;
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


