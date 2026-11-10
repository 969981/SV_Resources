/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b66d0; name: FUN_028b66d0
 */


undefined4
FUN_028b66d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_5 + 0x46) = 1;
  iVar1 = *(int *)(param_5 + 0x20);
  iVar2 = *(int *)(param_5 + 0x30);
  iVar3 = *(int *)(param_5 + 0x28);
  FUN_015c8088(param_4,0x3f333333,param_5,0xc);
  FUN_015c8088(param_3,0x3f6b851f,param_5,10);
  FUN_015c8088(param_2,0x38d1b717,param_5,8);
  FUN_015c8088(param_1,0x3f4ccccd,param_5,6);
  FUN_01a04714(param_5,4,param_6,1);
  uVar4 = FUN_01571a80(param_5,(iVar1 - iVar2) + iVar3);
  return uVar4;
}


