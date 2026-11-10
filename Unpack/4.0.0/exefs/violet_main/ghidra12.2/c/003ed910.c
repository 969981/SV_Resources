/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ed910; name: FUN_003ed910
 */


int FUN_003ed910(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_003eb480(param_4);
  if (iVar1 == 0) {
    if (*(int *)(*param_4 + (long)(int)param_4[1] * 4 + -4) != 0) {
      iVar1 = FUN_003ed9e0(param_1,param_2,param_3,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_1 != 0) {
        FUN_003ebc30(param_1);
      }
      if (param_2 == 0) {
        return iVar1;
      }
      FUN_003ebc30(param_2);
      return iVar1;
    }
    uVar3 = 0xe1;
    uVar2 = 0x6b;
  }
  else {
    uVar2 = 0x67;
    uVar3 = 0xd7;
  }
  FUN_004806c0(3,0x6b,uVar2,"external/openssl/crypto/bn/bn_div.c",uVar3);
  return 0;
}


