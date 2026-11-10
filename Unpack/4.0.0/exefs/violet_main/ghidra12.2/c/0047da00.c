/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047da00; name: FUN_0047da00
 */


undefined8 * FUN_0047da00(int *param_1)

{
  undefined8 *puVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_00452c30(0x20,"external/openssl/crypto/stack/stack.c",0x31);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_004806c0(0xf,0x80,0x41,"external/openssl/crypto/stack/stack.c",0x32);
    return (undefined8 *)0x0;
  }
  uVar2 = *(undefined8 *)param_1;
  uVar4 = *(undefined8 *)(param_1 + 6);
  uVar3 = *(undefined8 *)(param_1 + 4);
  puVar1[1] = *(undefined8 *)(param_1 + 2);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  if (*param_1 == 0) {
    puVar1[1] = 0;
    *(undefined4 *)((long)puVar1 + 0x14) = 0;
    return puVar1;
  }
  __dest = (void *)FUN_00452c30((long)param_1[5] << 3,"external/openssl/crypto/stack/stack.c",0x40);
  puVar1[1] = __dest;
  if (__dest == (void *)0x0) {
    FUN_00452f80(0,"external/openssl/crypto/stack/stack.c",0x178);
    FUN_00452f80(puVar1,"external/openssl/crypto/stack/stack.c",0x179);
    return (undefined8 *)0x0;
  }
  memcpy(__dest,*(void **)(param_1 + 2),(long)*param_1 << 3);
  return puVar1;
}


