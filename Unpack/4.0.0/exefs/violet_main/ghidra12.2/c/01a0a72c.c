/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a0a72c; name: FUN_01a0a72c
 */


void FUN_01a0a72c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x40c8);
  lVar2 = *(long *)(param_1 + 0x40d0);
  if (((lVar2 != lVar1) && (FUN_01751d6c(lVar2 + -8), lVar2 + -0x10 != lVar1)) &&
     (FUN_01751d6c(lVar2 + -0x18), lVar2 + -0x20 != lVar1)) {
    do {
      FUN_01751d6c(lVar2 + -0x28);
      lVar2 = lVar2 + -0x10;
    } while (lVar1 + 0x20 != lVar2);
  }
  *(undefined8 *)(param_1 + 0x4108) = *(undefined8 *)(param_1 + 0x4100);
  *(long *)(param_1 + 0x40d0) = lVar1;
  *(undefined1 *)(param_1 + 0x41c0) = 0;
  return;
}


