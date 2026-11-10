/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b7a40; name: FUN_003b7a40
 */


undefined8 FUN_003b7a40(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_28;
  
  lVar2 = FUN_003af5b0(param_2,&local_28);
  if (lVar2 == 0) {
    uVar3 = 0xf7;
    uVar4 = 0x85;
LAB_003b7b20:
    FUN_004806c0(0x14,0xc1,uVar3,"external/openssl/ssl/ssl_rsa.c",uVar4);
    return 0;
  }
  if (param_1[local_28 * 5 + 4] != 0) {
    lVar2 = FUN_00483c90();
    if (lVar2 == 0) {
      uVar3 = 0x41;
      uVar4 = 0x8d;
      goto LAB_003b7b20;
    }
    FUN_0043dc10(lVar2,param_2);
    FUN_004808e0();
    iVar1 = FUN_00483ca0(param_1[local_28 * 5 + 4],param_2);
    if (iVar1 == 0) {
      FUN_0048c830(param_1[local_28 * 5 + 4]);
      param_1[local_28 * 5 + 4] = 0;
      return 0;
    }
  }
  FUN_0043e1f0(param_1[local_28 * 5 + 5]);
  FUN_0043dfc0(param_2);
  (param_1 + local_28 * 5 + 4)[1] = param_2;
  *param_1 = (long)(param_1 + local_28 * 5 + 4);
  return 1;
}


