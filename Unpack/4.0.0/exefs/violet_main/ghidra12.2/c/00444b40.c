/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00444b40; name: FUN_00444b40
 */


undefined8 FUN_00444b40(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    lVar3 = FUN_0047dcc0();
    *param_1 = lVar3;
    if (lVar3 == 0) {
      uVar4 = 0x177;
LAB_00444bec:
      FUN_004806c0(0xf,0x66,0x41,"external/openssl/crypto/ex_data.c",uVar4);
      return 0;
    }
  }
  iVar1 = FUN_0047e430();
  lVar3 = *param_1;
  if (iVar1 <= param_2) {
    iVar1 = (param_2 - iVar1) + 1;
    do {
      iVar2 = FUN_0047e2f0(lVar3,0);
      if (iVar2 == 0) {
        uVar4 = 0x17e;
        goto LAB_00444bec;
      }
      lVar3 = *param_1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_0047e480(lVar3,param_2,param_3);
  return 1;
}


