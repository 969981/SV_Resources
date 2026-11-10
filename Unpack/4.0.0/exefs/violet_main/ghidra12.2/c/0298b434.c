/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298b434; name: FUN_0298b434
 */


void FUN_0298b434(undefined8 param_1,undefined2 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = FUN_01246e90();
  uVar3 = FUN_02936708(uVar2,param_3,*param_2);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
    FUN_0167a95c(uVar2,uVar1);
    return;
  }
  lVar4 = FUN_0149b698(param_1);
  FUN_0167a950(lVar4 + 0x10);
  return;
}


