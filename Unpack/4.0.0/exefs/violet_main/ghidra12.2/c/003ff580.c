/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003ff580; name: FUN_003ff580
 */


undefined8 FUN_003ff580(undefined4 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((*(int *)(param_3 + 0x10) == 0) && (iVar2 = FUN_003eb480(param_3), iVar2 == 0)) {
    iVar2 = FUN_003eb2b0(param_3);
    if (iVar2 == 1) {
      FUN_003eb9f0(param_2,0);
      uVar4 = 1;
    }
    else {
      iVar3 = FUN_003ec150(param_3,iVar2 + -2);
      if ((iVar3 == 0) && (iVar3 = FUN_003ec150(param_3,iVar2 + -3), iVar3 == 0)) {
        uVar6 = 0xffffff9c;
        do {
          uVar4 = FUN_003ff2f0(param_1,param_2,iVar2 + 1,0xffffffff,0);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          iVar3 = FUN_003ebf70(param_2,param_3);
          if (-1 < iVar3) {
            uVar4 = FUN_003f06e0(param_2,param_2,param_3);
            if ((int)uVar4 == 0) {
              return uVar4;
            }
            iVar3 = FUN_003ebf70(param_2,param_3);
            if ((-1 < iVar3) && (uVar4 = FUN_003f06e0(param_2,param_2,param_3), (int)uVar4 == 0)) {
              return uVar4;
            }
          }
          bVar1 = 0xfffffffe < uVar6;
          uVar6 = uVar6 + 1;
          if (bVar1) {
            uVar4 = 0x71;
            uVar5 = 0x99;
            goto LAB_003ff5c4;
          }
          iVar3 = FUN_003ebf70(param_2,param_3);
          uVar4 = 1;
        } while (-1 < iVar3);
      }
      else {
        uVar6 = 0xffffff9c;
        do {
          uVar4 = FUN_003ff2f0(param_1,param_2,iVar2,0xffffffff,0);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          bVar1 = 0xfffffffe < uVar6;
          uVar6 = uVar6 + 1;
          if (bVar1) {
            uVar4 = 0x71;
            uVar5 = 0xa6;
            goto LAB_003ff5c4;
          }
          iVar3 = FUN_003ebf70(param_2,param_3);
          uVar4 = 1;
        } while (-1 < iVar3);
      }
    }
  }
  else {
    uVar4 = 0x73;
    uVar5 = 0x77;
LAB_003ff5c4:
    FUN_004806c0(3,0x8a,uVar4,"external/openssl/crypto/bn/bn_rand.c",uVar5);
    uVar4 = 0;
  }
  return uVar4;
}


