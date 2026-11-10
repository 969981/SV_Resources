/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469df0; name: FUN_00469df0
 */


undefined8 FUN_00469df0(undefined8 param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_3 == 0) || (param_3[1] == 0)) {
    FUN_004806c0(3,100,0x6b,"external/openssl/crypto/bn/bn_blind.c",0x8d);
  }
  else {
    if ((int)param_3[5] == -1) {
      *(undefined4 *)(param_3 + 5) = 0;
    }
    else {
      iVar1 = FUN_00469ad0(param_3,param_4);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if ((param_2 == 0) || (lVar2 = FUN_003eb8f0(param_2,param_3[1]), lVar2 != 0)) {
      if (param_3[7] == 0) {
        uVar3 = FUN_003f0dc0(param_1,param_1,*param_3,param_3[3],param_4);
        return uVar3;
      }
      uVar3 = FUN_003ec770(param_1,param_1,*param_3,param_3[7],param_4);
      return uVar3;
    }
  }
  return 0;
}


