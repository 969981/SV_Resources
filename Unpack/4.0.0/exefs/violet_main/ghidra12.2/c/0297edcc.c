/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297edcc; name: FUN_0297edcc
 */


undefined8
FUN_0297edcc(undefined8 param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_01243d7c(param_4);
  lVar1 = FUN_0168003c(param_4);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      uVar2 = FUN_0297ee84(param_1,param_3,lVar1,*param_2);
      if ((uVar2 & 1) == 0) {
        uVar3 = 1;
      }
      else {
        FUN_0167bf08(param_4,lVar1);
      }
      lVar1 = FUN_0168003c(param_4);
    } while (lVar1 != 0);
  }
  return uVar3;
}


