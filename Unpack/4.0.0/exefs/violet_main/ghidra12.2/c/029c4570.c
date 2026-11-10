/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c4570; name: FUN_029c4570
 */


undefined4 FUN_029c4570(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  FUN_018df678(param_2,4,param_3,0);
  FUN_015c8088(param_1,0,param_2,6);
  uVar4 = FUN_01571a80(param_2,(iVar1 - iVar2) + iVar3);
  return uVar4;
}


