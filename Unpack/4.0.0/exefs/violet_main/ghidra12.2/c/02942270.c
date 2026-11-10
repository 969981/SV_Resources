/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02942270; name: FUN_02942270
 */


void FUN_02942270(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_014813f4(param_1,*param_3);
  FUN_01582534(param_1);
  uVar3 = FUN_012440e8();
  uVar4 = FUN_0124e480(param_1);
  uVar5 = FUN_01582534(param_1);
  uVar1 = FUN_011e21c0(uVar4,uVar5,uVar2,*(undefined2 *)(param_3 + 1),uVar3);
  *param_2 = uVar1;
  return;
}


