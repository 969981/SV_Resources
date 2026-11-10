/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0046cb50; name: FUN_0046cb50
 */


undefined8 FUN_0046cb50(undefined2 *param_1,int param_2,void *param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  
  if (param_2 + -0xb < (int)param_4) {
    FUN_004806c0(4,0x6c,0x6e,"external/openssl/crypto/rsa/rsa_pk1.c",0x1a);
    return 0;
  }
  *param_1 = 0x100;
  __n = (size_t)(int)((param_2 - param_4) + -3);
  memset(param_1 + 1,0xff,__n);
  puVar1 = (undefined1 *)((long)(param_1 + 1) + __n);
  *puVar1 = 0;
  memcpy(puVar1 + 1,param_3,(ulong)param_4);
  return 1;
}


