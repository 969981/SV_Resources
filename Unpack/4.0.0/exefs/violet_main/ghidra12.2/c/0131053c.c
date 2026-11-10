/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131053c; name: FUN_0131053c
 */


void FUN_0131053c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x19200) = param_2;
  *(undefined1 **)(param_1 + 0x40) = &LAB_02c7e3a4;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined1 *)(param_1 + 0x172f0) = 1;
  *(undefined4 *)(param_1 + 0x172f4) = 3;
  uVar1 = FUN_015106a8(param_1 + 0x30);
  FUN_01311f18(param_1 + 95000,uVar1,param_1 + 0x38,0,0,0);
  FUN_013105e4(param_1 + 95000,FUN_01736830,param_1);
  *(undefined1 *)(param_1 + 0x191e8) = 0;
  return;
}


