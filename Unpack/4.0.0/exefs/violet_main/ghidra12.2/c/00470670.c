/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00470670; name: FUN_00470670
 */


undefined8 FUN_00470670(undefined1 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined1 *__s;
  
  param_2 = param_2 - param_4;
  if (param_2 < 2) {
    FUN_004806c0(4,0x7f,0x6e,"external/openssl/crypto/rsa/rsa_x931.c",0x1e);
    return 0xffffffff;
  }
  __s = param_1 + 1;
  if (param_2 == 2) {
    *param_1 = 0x6a;
  }
  else {
    *param_1 = 0x6b;
    puVar1 = __s;
    if (3 < param_2) {
      memset(__s,0xbb,(ulong)(param_2 - 3));
      puVar1 = __s + (param_2 - 3);
    }
    __s = puVar1 + 1;
    *puVar1 = 0xba;
  }
  memcpy(__s,param_3,(ulong)param_4);
  __s[(int)param_4] = 0xcc;
  return 1;
}


