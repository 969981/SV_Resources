/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cd838; name: FUN_008cd838
 */


void FUN_008cd838(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0x101;
  *(undefined8 *)((long)param_1 + 0x24) = 0x417fd70a;
  uVar1 = FUN_008ee2f4(param_1 + 3);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x202;
  *(undefined8 *)((long)param_1 + 0x44) = 0x417fd70a;
  uVar1 = FUN_008ee2f4(param_1 + 7);
  param_1[2] = uVar1;
  return;
}


