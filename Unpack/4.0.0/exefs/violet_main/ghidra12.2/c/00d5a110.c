/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5a110; name: FUN_00d5a110
 */


void FUN_00d5a110(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_28 [8];
  
  uVar3 = *(uint *)*param_1;
  FUN_00d56620(uVar3,uVar3 ^ (int)uVar3 >> 0x1f,auStack_28,(uint *)*param_1 + 2,param_5,param_6,0,0)
  ;
  lVar4 = *param_1;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined8 *)(lVar4 + 8) = *param_2;
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  *(int *)*param_1 = (int)param_1[1];
  return;
}


