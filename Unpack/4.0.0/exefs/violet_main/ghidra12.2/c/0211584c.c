/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0211584c; name: FUN_0211584c
 */


bool FUN_0211584c(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00f7e27c(param_2);
  uVar3 = FUN_00f7e28c(uVar2,param_1);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_02115a34(param_2);
    uVar3 = FUN_01823914(uVar2,1,param_1);
    bVar1 = 3 < uVar3;
  }
  return bVar1;
}


