/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029807c0; name: FUN_029807c0
 */


ulong FUN_029807c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_01582534();
  uVar1 = FUN_0158253c();
  uVar2 = FUN_01582544(uVar1,param_2);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_01243584(param_1);
    uVar2 = FUN_0124bf8c(uVar1,param_2,0);
    if ((uVar2 & 1) != 0) {
      uVar1 = FUN_01243584(param_1);
      FUN_02980954(uVar1,param_2,param_3);
      return 1;
    }
  }
  if ((param_4 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0194a110(param_3);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  uVar1 = FUN_01243584(param_1);
  FUN_02980994(uVar1,param_2,uVar2 & 0xffffffff);
  return 1;
}


