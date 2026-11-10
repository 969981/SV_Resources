/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284db9c; name: FUN_0284db9c
 */


void FUN_0284db9c(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_3;
  lVar3 = *(long *)(param_2 + 0x20);
  uVar1 = FUN_0284efc4();
  uVar2 = FUN_0175a080(param_2,uVar1);
  FUN_0284f030(param_2,uVar2,uVar1,lVar4,param_4);
  *param_1 = *(long *)(param_2 + 0x20) + (lVar4 - lVar3);
  return;
}


