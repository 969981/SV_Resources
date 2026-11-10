/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047d460; name: FUN_0047d460
 */


long FUN_0047d460(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    lVar2 = FUN_003ed1c0();
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_003eb5b0();
      if ((lVar3 != 0) && (iVar1 = FUN_003fd370(lVar3,param_3,param_1,param_2,lVar2), iVar1 == 0)) {
        FUN_003eb520(lVar3);
        lVar3 = 0;
      }
      FUN_003ed280(lVar2);
    }
  }
  return lVar3;
}


