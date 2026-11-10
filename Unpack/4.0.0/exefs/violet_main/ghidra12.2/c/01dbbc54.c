/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbbc54; name: FUN_01dbbc54
 */


void FUN_01dbbc54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x17c) = uVar2;
  *(undefined8 *)(param_1 + 0x184) = uVar3;
  *(undefined8 *)(param_1 + 0x174) = uVar1;
  return;
}


