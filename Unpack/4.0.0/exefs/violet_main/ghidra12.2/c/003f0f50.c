/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f0f50; name: FUN_003f0f50
 */


undefined8 FUN_003f0f50(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((param_1 != param_2) && (lVar3 = FUN_003eb8f0(param_1), lVar3 == 0)) {
    return 0;
  }
  do {
    if (param_3 < 1) {
      return 1;
    }
    iVar1 = FUN_003eb2b0(param_4);
    iVar2 = FUN_003eb2b0(param_1);
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      FUN_004806c0(3,0x77,0x6e,"external/openssl/crypto/bn/bn_mod.c",0x126);
      return 0;
    }
    iVar2 = param_3;
    if (iVar1 <= param_3) {
      iVar2 = iVar1;
    }
    if (iVar2 == 0) {
      uVar4 = FUN_003f1f80(param_1,param_1);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_3 = param_3 + -1;
      iVar1 = FUN_003ebf70(param_1,param_4);
    }
    else {
      uVar4 = FUN_003f2120(param_1,param_1,iVar2);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      param_3 = param_3 - iVar2;
      iVar1 = FUN_003ebf70(param_1,param_4);
    }
  } while ((iVar1 < 0) || (uVar4 = FUN_003f06e0(param_1,param_1,param_4), (int)uVar4 != 0));
  return uVar4;
}


