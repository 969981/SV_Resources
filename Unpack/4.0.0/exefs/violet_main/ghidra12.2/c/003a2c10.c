/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2c10; name: FUN_003a2c10
 */


void FUN_003a2c10(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x28);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_00452f80(plVar1,"external/openssl/ssl/packet.c",0x1a5);
    plVar1 = (long *)lVar2;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


