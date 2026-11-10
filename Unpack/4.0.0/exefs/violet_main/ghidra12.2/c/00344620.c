/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344620; name: FUN_00344620
 */


void FUN_00344620(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x60);
    do {
      (**(code **)(*plVar2 + 0x40))(plVar2);
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return;
}


