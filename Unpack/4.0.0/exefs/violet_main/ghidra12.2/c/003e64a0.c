/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e64a0; name: FUN_003e64a0
 */


void FUN_003e64a0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != (undefined8 *)0x0) {
    if ((*(int *)((long)puVar1 + 0x24) == 0) && ((code *)puVar1[3] != (code *)0x0)) {
      (*(code *)puVar1[3])(param_1,*puVar1,*(undefined4 *)(puVar1 + 1),puVar1[2]);
    }
    puVar2 = (undefined8 *)puVar1[5];
    FUN_00452f80(puVar1,"external/openssl/crypto/async/async_wait.c",0x25);
    puVar1 = puVar2;
  }
  FUN_00452f80(param_1,"external/openssl/crypto/async/async_wait.c",0x29);
  return;
}


