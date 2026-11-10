/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0042bc40; name: FUN_0042bc40
 */


undefined8 FUN_0042bc40(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  FUN_0043b7c0(param_1,2);
  lVar3 = *param_1;
  if (lVar3 != param_2) {
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x44) != 0)) {
      FUN_00453260(param_1[3],(long)*(int *)(lVar3 + 0x44),"external/openssl/crypto/evp/digest.c",
                   0x7b);
      param_1[3] = 0;
    }
    *param_1 = param_2;
    if (((*(byte *)((long)param_1 + 0x11) & 1) == 0) &&
       (iVar1 = *(int *)(param_2 + 0x44), iVar1 != 0)) {
      param_1[5] = *(long *)(param_2 + 0x20);
      lVar3 = FUN_00452ce0((long)iVar1,"external/openssl/crypto/evp/digest.c",0x81);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        FUN_004806c0(6,0x80,0x41,"external/openssl/crypto/evp/digest.c",0x83);
        return 0;
      }
    }
  }
  if (((param_1[4] != 0) &&
      (iVar1 = FUN_00440390(param_1[4],0xffffffff,0xf8,7,0,param_1), iVar1 < 1)) && (iVar1 != -2)) {
    return 0;
  }
  if ((*(byte *)((long)param_1 + 0x11) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0042bd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    return uVar2;
  }
  return 1;
}


