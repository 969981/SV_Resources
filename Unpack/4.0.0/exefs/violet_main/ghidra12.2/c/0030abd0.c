/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030abd0; name: FUN_0030abd0
 */


long FUN_0030abd0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x1378);
  if (lVar1 != 0) {
    FUN_003069b8(lVar1,param_1,param_2,param_3 & 1,param_4);
  }
  return lVar1;
}


