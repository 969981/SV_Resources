/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008edac4; name: FUN_008edac4
 */


undefined8 FUN_008edac4(undefined4 *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = 0;
  param_1[1] = param_4;
  local_40 = 0;
  uStack_38 = 0;
  FUN_008f0470(&local_40);
  local_40 = CONCAT44(0x10,(undefined4)local_40);
  lVar1 = FUN_008f06e0(param_2,&local_40);
  *(ulong *)(param_1 + 10) = (param_3 + lVar1) - 1U & -lVar1;
  uVar2 = FUN_008d42e0();
  uVar3 = FUN_008ee488(param_1 + 0xe,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  FUN_008f0980(param_1 + 0xe,param_1 + 0x72);
  uVar2 = FUN_008d42e0();
  uVar3 = FUN_008ee488(param_1 + 0x7a,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
  if ((uVar3 & 1) == 0) {
LAB_008edbcc:
    uVar2 = 0;
  }
  else {
    FUN_008f0980(param_1 + 0x7a,param_1 + 0xde);
    if (param_1[1] == 3) {
      uVar2 = FUN_008d42e0();
      uVar3 = FUN_008ee488(param_1 + 0xe6,param_2,uVar2,0x10,*(undefined8 *)(param_1 + 10));
      if ((uVar3 & 1) == 0) goto LAB_008edbcc;
      FUN_008f0980(param_1 + 0xe6,param_1 + 0x14a);
    }
    uVar2 = 1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return uVar2;
}


