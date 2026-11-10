/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a2745c; name: FUN_02a2745c
 */


void FUN_02a2745c(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = 0xbf8;
  do {
    if (*(long **)(lVar2 + 0x4567160) != (long *)0x0) {
      (**(code **)(**(long **)(lVar2 + 0x4567160) + 0x20))();
    }
    bVar1 = lVar2 != 0x18;
    lVar2 = lVar2 + -0x20;
  } while (bVar1);
  return;
}


