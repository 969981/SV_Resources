/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00464a40; name: FUN_00464a40
 */


undefined8 FUN_00464a40(long *param_1,void *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  if (param_1[4] - uVar3 < param_3) {
    uVar1 = 0x6a;
    uVar2 = 0x2d4;
  }
  else if (*param_1 == 0) {
    uVar1 = 0x44;
    uVar2 = 0x2d9;
  }
  else {
    if (param_3 == 0) {
      return 1;
    }
    if (((void *)(*param_1 + uVar3) != param_2) || ((ulong)param_1[5] <= uVar3)) {
      uVar1 = FUN_00464cf0(param_1,param_3);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
      param_1[1] = param_1[1] + param_3;
      param_1[6] = param_1[6] + param_4;
      return 1;
    }
    uVar1 = 0x44;
    uVar2 = 0x2e7;
  }
  FUN_004806c0(0x24,0x67,uVar1,"external/openssl/crypto/rand/rand_lib.c",uVar2);
  return 0;
}


