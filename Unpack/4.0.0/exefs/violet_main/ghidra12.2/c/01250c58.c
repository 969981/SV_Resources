/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250c58; name: FUN_01250c58
 */


void FUN_01250c58(long param_1,long *param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_02923b14(*(undefined8 *)(param_1 + 0x50),0);
  *(undefined2 *)(param_1 + 0xc46c) = uVar1;
  uVar1 = FUN_02923b14(*(undefined8 *)(param_1 + 0x50),1);
  *(undefined2 *)(param_1 + 0xc46e) = uVar1;
  uVar1 = FUN_02923b14(*(undefined8 *)(param_1 + 0x50),2);
  *(undefined2 *)(param_1 + 0xc470) = uVar1;
  uVar1 = FUN_02923b14(*(undefined8 *)(param_1 + 0x50),3);
  *(undefined2 *)(param_1 + 0xc472) = uVar1;
  uVar1 = FUN_02923b14(*(undefined8 *)(param_1 + 0x50),4);
  *(undefined2 *)(param_1 + 0xc474) = uVar1;
  *param_2 = param_1 + 0xc46c;
  *param_3 = 10;
  return;
}


