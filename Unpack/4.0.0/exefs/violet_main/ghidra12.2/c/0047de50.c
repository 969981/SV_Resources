/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047de50; name: FUN_0047de50
 */


undefined8 FUN_0047de50(int *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 != (int *)0x0) {
    if (param_2 < 0) {
      return 1;
    }
    if (param_2 <= 0x7fffffff - *param_1) {
      uVar2 = *param_1 + param_2;
      if ((int)uVar2 < 5) {
        uVar2 = 4;
      }
      if (*(long *)(param_1 + 2) == 0) {
        lVar1 = FUN_00452ce0((ulong)uVar2 << 3,"external/openssl/crypto/stack/stack.c",0xb4);
        *(long *)(param_1 + 2) = lVar1;
        if (lVar1 == 0) {
          FUN_004806c0(0xf,0x81,0x41,"external/openssl/crypto/stack/stack.c",0xb5);
          return 0;
        }
        param_1[5] = uVar2;
        return 1;
      }
      if (uVar2 == param_1[5]) {
        return 1;
      }
      lVar1 = FUN_00452db0(*(long *)(param_1 + 2),(ulong)uVar2 << 3,
                           "external/openssl/crypto/stack/stack.c",0xc6);
      if (lVar1 != 0) {
        *(long *)(param_1 + 2) = lVar1;
        param_1[5] = uVar2;
        return 1;
      }
    }
  }
  return 0;
}


