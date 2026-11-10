/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040c800; name: FUN_0040c800
 */


ulong FUN_0040c800(void *param_1,ulong param_2,undefined8 param_3,long *param_4,code *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong local_40;
  void *local_38;
  ulong local_28;
  
  local_38 = (void *)0x0;
  local_28 = param_2;
  if (*(code **)(*param_4 + 0x48) == (code *)0x0) {
    uVar2 = 0x98;
    uVar3 = 0x87;
  }
  else {
    if (param_2 >> 0x1f == 0) {
      uVar1 = (**(code **)(*param_4 + 0x48))(&local_38,&local_40);
      pvVar4 = local_38;
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if (param_5 == (code *)0x0) {
        if (local_40 < param_2) {
          local_28 = local_40;
          param_2 = local_40;
        }
        memcpy(param_1,local_38,param_2);
      }
      else {
        (*param_5)(local_38,local_40,param_1,&local_28);
        pvVar4 = local_38;
      }
      FUN_00453260(pvVar4,local_40,"external/openssl/crypto/ec/ec_kmeth.c",0x97);
      return local_28 & 0xffffffff;
    }
    uVar2 = 0xa1;
    uVar3 = 0x8b;
  }
  FUN_004806c0(0x10,0xf6,uVar2,"external/openssl/crypto/ec/ec_kmeth.c",uVar3);
  return 0;
}


