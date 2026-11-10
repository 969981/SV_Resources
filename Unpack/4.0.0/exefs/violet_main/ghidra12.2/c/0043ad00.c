/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043ad00; name: FUN_0043ad00
 */


undefined8 FUN_0043ad00(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar3 = (uint)*(undefined8 *)(lVar4 + 0x10);
  if ((uVar3 >> 7 & 1) != 0) {
    if (lVar4 == 0) {
      uVar1 = 0x83;
      uVar2 = 0x290;
    }
    else if (*(code **)(lVar4 + 0x48) == (code *)0x0) {
      uVar1 = 0x84;
      uVar2 = 0x295;
    }
    else {
      uVar1 = (**(code **)(lVar4 + 0x48))(param_1,1,param_2,0);
      if ((int)uVar1 != -1) {
        return uVar1;
      }
      uVar1 = 0x85;
      uVar2 = 0x29c;
    }
    FUN_004806c0(6,0x7c,uVar1,"external/openssl/crypto/evp/evp_enc.c",uVar2);
    return 0;
  }
  if ((int)param_1[0xd] == param_2) {
    return 1;
  }
  if ((param_2 < 1) || ((uVar3 >> 3 & 1) == 0)) {
    FUN_004806c0(6,0x7a,0x82,"external/openssl/crypto/evp/evp_enc.c",0x27e);
    return 0;
  }
  *(int *)(param_1 + 0xd) = param_2;
  return 1;
}


