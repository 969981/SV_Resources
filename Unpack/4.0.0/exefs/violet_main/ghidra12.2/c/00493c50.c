/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00493c50; name: FUN_00493c50
 */


long FUN_00493c50(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = FUN_0047e430(param_2);
  if (iVar1 < 1) {
    lVar4 = param_3;
    if (param_3 == 0) {
      lVar4 = FUN_0047dcc0();
      return lVar4;
    }
  }
  else {
    iVar1 = 0;
    lVar5 = param_3;
    do {
      uVar3 = FUN_0047e450(param_2,iVar1);
      lVar4 = FUN_00494150(uVar3,uVar3,lVar5);
      if (lVar4 == 0) {
        if (param_3 == 0) {
          FUN_0047e3b0(lVar5,PTR_LAB_047cd418);
        }
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_2);
      lVar5 = lVar4;
    } while (iVar1 < iVar2);
  }
  return lVar4;
}


