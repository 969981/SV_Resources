/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ad9ec; name: FUN_007ad9ec
 */


undefined8 FUN_007ad9ec(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((**(int **)(param_1 + 0x60) == 1) ||
     (uVar1 = FUN_0078cdf4(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x180)), (uVar1 & 1) != 0)) {
    return 5;
  }
  FUN_00cbd7c0(local_38,*(long *)(param_1 + 0x60) + 4);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  if (local_38[0] == 0) {
    local_38[0] = 0;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_00cbd7c0(auStack_58,local_38);
    FUN_0078cb28(uVar2,auStack_58);
  }
  else {
    FUN_00cbd7c0(auStack_48,*(long *)(param_1 + 0x60) + 4);
    FUN_0078cb94(uVar2,auStack_48);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_0079af14(*(undefined8 *)(param_1 + 0x68));
  FUN_007965fc(*(long *)(param_1 + 0x68) + 0x68);
  return 1;
}


