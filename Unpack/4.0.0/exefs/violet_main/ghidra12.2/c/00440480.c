/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00440480; name: FUN_00440480
 */


undefined8 FUN_00440480(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    lVar1 = FUN_0043d130(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_00440390(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  FUN_004806c0(6,0xa8,0x98,"external/openssl/crypto/evp/pmeth_lib.c",0x1c5);
  return 0;
}


