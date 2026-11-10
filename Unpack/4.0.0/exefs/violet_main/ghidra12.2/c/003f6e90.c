/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f6e90; name: FUN_003f6e90
 */


undefined8 FUN_003f6e90(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  if (param_3 == 0xffffffff) {
    param_3 = (uint)(*(long *)(param_2 + 0x40) != 0);
    lVar2 = *(long *)(param_2 + 8);
  }
  else {
    lVar2 = *(long *)(param_2 + 8);
  }
  if ((lVar2 != 0) &&
     (((iVar1 = FUN_003eb510(lVar2,2), iVar1 == 0 || (iVar1 = FUN_003eb510(lVar2,1), iVar1 != 0)) &&
      (lVar2 = FUN_003eb7a0(lVar2), lVar2 == 0)))) {
    return 0;
  }
  FUN_003eb490(*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 8) = lVar2;
  lVar2 = *(long *)(param_2 + 0x10);
  if (((lVar2 != 0) &&
      ((iVar1 = FUN_003eb510(lVar2,2), iVar1 == 0 || (iVar1 = FUN_003eb510(lVar2,1), iVar1 != 0))))
     && (lVar2 = FUN_003eb7a0(lVar2), lVar2 == 0)) {
    return 0;
  }
  FUN_003eb490(*(undefined8 *)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = lVar2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x40);
    if (((lVar2 != 0) &&
        ((iVar1 = FUN_003eb510(lVar2,2), iVar1 == 0 || (iVar1 = FUN_003eb510(lVar2,1), iVar1 != 0)))
        ) && (lVar2 = FUN_003eb7a0(lVar2), lVar2 == 0)) {
      return 0;
    }
    FUN_003eb490(*(undefined8 *)(param_1 + 0x40));
    *(long *)(param_1 + 0x40) = lVar2;
    lVar2 = *(long *)(param_2 + 0x48);
    if ((lVar2 != 0) &&
       (((iVar1 = FUN_003eb510(lVar2,2), iVar1 == 0 || (iVar1 = FUN_003eb510(lVar2,1), iVar1 != 0))
        && (lVar2 = FUN_003eb7a0(lVar2), lVar2 == 0)))) {
      return 0;
    }
    FUN_003eb490(*(undefined8 *)(param_1 + 0x48));
    *(long *)(param_1 + 0x48) = lVar2;
    FUN_00452f80(*(undefined8 *)(param_1 + 0x50),"external/openssl/crypto/dh/dh_ameth.c",0x197);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(long *)(param_2 + 0x50) != 0) {
      lVar2 = FUN_0045ace0(*(long *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x58),
                           "external/openssl/crypto/dh/dh_ameth.c",0x19b);
      *(long *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    }
  }
  return 1;
}


