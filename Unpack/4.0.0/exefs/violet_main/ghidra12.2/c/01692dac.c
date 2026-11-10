/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01692dac; name: FUN_01692dac
 */


void FUN_01692dac(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 long *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  
  iVar1 = FUN_01692e50(param_4);
  plVar3 = *(long **)(param_2 + 8);
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,(long)iVar1,8);
  *param_1 = uVar2;
  param_1[1] = plVar3;
  param_1[2] = (long)iVar1;
  param_1[3] = 8;
  iVar1 = FUN_01692e80(param_3,uVar2,param_4,iVar1);
  *param_5 = (long)iVar1;
  return;
}


