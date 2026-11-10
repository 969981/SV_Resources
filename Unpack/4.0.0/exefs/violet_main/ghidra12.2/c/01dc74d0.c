/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc74d0; name: FUN_01dc74d0
 */


uint FUN_01dc74d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_010f26f8();
  if ((lVar3 == 0) || (sVar1 = FUN_00e974d8(), sVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar4 = FUN_01dc755c(lVar3,0);
    uVar2 = FUN_01dc7564(uVar4,lVar3,0);
    FUN_01dc78c0(param_1,param_2,param_3,param_4);
    uVar2 = uVar2 & 1;
  }
  return uVar2;
}


