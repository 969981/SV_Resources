/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00469ad0; name: FUN_00469ad0
 */


undefined8 FUN_00469ad0(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*param_1 == 0) || (lVar2 = param_1[1], lVar2 == 0)) {
    FUN_004806c0(3,0x67,0x6b,"external/openssl/crypto/bn/bn_blind.c",0x62);
    uVar3 = 0;
    goto LAB_00469be8;
  }
  if ((int)param_1[5] == -1) {
    *(undefined4 *)(param_1 + 5) = 1;
LAB_00469b6c:
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      if (param_1[7] == 0) {
        uVar3 = FUN_003f0dc0(lVar2,lVar2,lVar2,param_1[3],param_2);
        if ((int)uVar3 == 0) goto LAB_00469be8;
        lVar2 = *param_1;
        uVar3 = FUN_003f0dc0(lVar2,lVar2,lVar2,param_1[3],param_2);
        iVar1 = (int)uVar3;
      }
      else {
        uVar3 = FUN_003ec7a0(lVar2,lVar2,lVar2,param_1[7],param_2);
        if ((int)uVar3 == 0) goto LAB_00469be8;
        lVar2 = *param_1;
        uVar3 = FUN_003ec7a0(lVar2,lVar2,lVar2,param_1[7],param_2);
        iVar1 = (int)uVar3;
      }
      if (iVar1 == 0) goto LAB_00469be8;
    }
  }
  else {
    iVar1 = (int)param_1[5] + 1;
    *(int *)(param_1 + 5) = iVar1;
    if (((iVar1 != 0x20) || (param_1[2] == 0)) || ((*(byte *)(param_1 + 6) >> 1 & 1) != 0))
    goto LAB_00469b6c;
    lVar2 = FUN_00469c10(param_1,0,0,param_2,0,0);
    if (lVar2 == 0) {
      uVar3 = 0;
      goto LAB_00469be8;
    }
  }
  uVar3 = 1;
LAB_00469be8:
  if ((int)param_1[5] == 0x20) {
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return uVar3;
}


