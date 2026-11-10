/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02273188; name: FUN_02273188
 */


void FUN_02273188(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  FUN_00d1a22c(param_1,0xd);
  *param_1 = &PTR_LAB_045af328;
  uVar1 = param_1[1];
  param_1[4] = &PTR_LAB_045af470;
  param_1[5] = &DAT_045af598;
  param_1[0x24] = &PTR_LAB_045af650;
  param_1[6] = &PTR_LAB_045af5f0;
  param_1[7] = &PTR_LAB_045af618;
  FUN_02277ffc(auStack_70,*param_2 + 0x120);
  uVar1 = FUN_0227805c(uVar1,auStack_70,param_3);
  FUN_022781b0(auStack_68,uVar1);
  FUN_0227826c(param_1 + 0x24,auStack_68,param_1 + 0x29,param_4);
  FUN_02278358(auStack_68);
  FUN_02274d6c(auStack_70);
  *param_1 = &PTR_LAB_045af328;
  param_1[0x24] = &PTR_LAB_045af650;
  param_1[4] = &PTR_LAB_045af470;
  param_1[5] = &DAT_045af598;
  param_1[6] = &PTR_LAB_045af5f0;
  param_1[7] = &PTR_LAB_045af618;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_022783d0(param_1 + 0x2b);
  return;
}


