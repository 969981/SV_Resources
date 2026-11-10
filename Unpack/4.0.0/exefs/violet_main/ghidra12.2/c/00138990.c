/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00138990; name: FUN_00138990
 */


void FUN_00138990(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  param_2[8] = 0x120;
  param_2[4] = 0;
  *param_2 = param_5;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 1) = 0x100000001;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  *(undefined8 *)(param_2 + 0xe) = param_1;
  *(undefined8 *)(param_2 + 0x10) = param_3;
  uVar1 = FUN_0013be00(param_1,&DAT_03c3fc4e,4);
  *(undefined8 *)(param_2 + 0x1a) = uVar1;
  uVar1 = FUN_0012d4f0(*(undefined8 *)(param_2 + 0xe),**(undefined8 **)(param_2 + 0x12),
                       (*(undefined8 **)(param_2 + 0x12))[2],0x20);
  **(undefined8 **)(param_2 + 0x12) = uVar1;
  *(undefined8 *)(*(long *)(param_2 + 0x12) + 0x10) = 0x20;
  return;
}


