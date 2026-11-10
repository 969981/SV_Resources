/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b6570; name: FUN_028b6570
 */


undefined4
FUN_028b6570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_018df678(param_1,0x16,param_11,0);
  FUN_018df678(param_1,0x14,param_10,0x4000000);
  FUN_018df678(param_1,0x12,param_9,0x4000000);
  FUN_018df678(param_1,0x10,param_8,0x6000000);
  FUN_018df678(param_1,0xe,param_7,0x40000000);
  FUN_018df678(param_1,0xc,param_6,0x4000000);
  FUN_018df678(param_1,10,param_5,0x4000000);
  FUN_018df678(param_1,8,param_4,0x6000000);
  FUN_018df678(param_1,6,param_3,0x30000000);
  FUN_018df678(param_1,4,param_2,0x2000000);
  uVar4 = FUN_01571a80(param_1,(iVar1 - iVar2) + iVar3);
  return uVar4;
}


