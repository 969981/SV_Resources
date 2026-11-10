/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e3b0; name: FUN_0047e3b0
 */


void FUN_0047e3b0(int *param_1,code *param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 2) + lVar2 * 8) != 0) {
        (*param_2)();
        iVar1 = *param_1;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  FUN_00452f80(*(undefined8 *)(param_1 + 2),"external/openssl/crypto/stack/stack.c",0x178);
  FUN_00452f80(param_1,"external/openssl/crypto/stack/stack.c",0x179);
  return;
}


