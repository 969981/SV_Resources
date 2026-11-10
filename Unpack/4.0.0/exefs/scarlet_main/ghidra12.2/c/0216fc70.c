/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216fc70; name: FUN_0216fc70
 */


long FUN_0216fc70(long param_1,long param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_0113a9e0();
  param_1 = param_1 + 0x1d0;
  bVar2 = param_1 == param_2;
  lVar4 = param_2;
  while (param_2 = param_2 + 0x1d0, param_2 != param_3) {
    lVar5 = param_2;
    if (!bVar2) {
      lVar5 = lVar4;
    }
    FUN_0113a9e0(param_1,param_2);
    param_1 = param_1 + 0x1d0;
    bVar2 = param_1 == lVar5;
    lVar4 = lVar5;
  }
  if (bVar2) {
    return param_1;
  }
  lVar3 = lVar4;
  lVar5 = param_1;
  do {
    lVar6 = lVar5;
    while( true ) {
      FUN_0113a9e0(lVar6,lVar4);
      lVar4 = lVar4 + 0x1d0;
      lVar5 = lVar6 + 0x1d0;
      if (lVar4 != param_3) break;
      lVar4 = lVar3;
      lVar6 = lVar5;
      if (lVar3 == lVar5) {
        return param_1;
      }
    }
    lVar1 = lVar4;
    if (lVar3 + -0x1d0 != lVar6) {
      lVar1 = lVar3;
    }
    lVar3 = lVar1;
  } while( true );
}


