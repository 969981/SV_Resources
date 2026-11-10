/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03472628; name: FUN_03472628
 */


undefined4
FUN_03472628(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
            undefined4 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = FUN_03471aac();
  uVar2 = FUN_034be6d8(param_1 + 0x38,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
  uVar3 = FUN_03471aac(param_1);
  if ((((uVar1 & 1) != (uVar3 & 1)) && (*(long *)(param_1 + 0x90) != 0)) &&
     (*(int *)PTR_DAT_047e7008 != 2)) {
    *(undefined4 *)PTR_DAT_047e7008 = 2;
  }
  return uVar2;
}


