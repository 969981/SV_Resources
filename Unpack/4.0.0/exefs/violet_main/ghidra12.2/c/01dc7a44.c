/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc7a44; name: FUN_01dc7a44
 */


uint FUN_01dc7a44(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_010f26f8();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_01dc755c(lVar2,param_5);
    uVar1 = FUN_01dc7564(uVar3,lVar2,param_5);
    FUN_01dc78c0(param_1,param_2,param_3,param_4);
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


