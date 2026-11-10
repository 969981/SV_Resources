/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cf580; name: FUN_003cf580
 */


undefined8 FUN_003cf580(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  default:
    return 2;
  case 0x13:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) {
      FUN_003a0f80(param_1);
    }
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) {
      FUN_003a0f80(param_1);
      goto LAB_003cf730;
    }
    break;
  case 0x16:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      return 2;
    }
    break;
  case 0x21:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) {
      iVar1 = **(int **)(param_1 + 8);
      if (iVar1 < 0x304) {
        return 2;
      }
      if (iVar1 == 0x10000) {
        return 2;
      }
      if (*(long *)(param_1 + 0x1960) != 0) {
        return 2;
      }
      if (*(int *)(param_1 + 0x744) == 0) {
        uVar2 = FUN_003cd110(param_1,param_2,0,0);
        return uVar2;
      }
      return 2;
    }
LAB_003cf730:
    *(undefined4 *)(param_1 + 0x78) = 0;
    return 2;
  case 0x23:
    lVar3 = *(long *)(*(int **)(param_1 + 8) + 0x30);
    if ((((*(byte *)(lVar3 + 0x60) >> 3 & 1) != 0) ||
        (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x1f0);
      if (lVar4 == 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x1f0) =
             *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x238);
      }
      else if (lVar4 != *(long *)(*(long *)(param_1 + 0xa8) + 0x238)) {
        FUN_003c3950(param_1,0x50,0x280,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x2f8);
        return 0;
      }
      uVar2 = (**(code **)(lVar3 + 0x10))(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) != 0)
      goto LAB_003cf730;
    }
    break;
  case 0x2e:
    if ((*(int *)(param_1 + 0x84) != 9) &&
       ((*(byte *)(*(long *)(param_1 + 0xa8) + 1) >> 3 & 1) == 0)) {
      return 2;
    }
  case 1:
    uVar2 = FUN_003cd110(param_1,param_2,1,1);
    return uVar2;
  }
  return 2;
}


