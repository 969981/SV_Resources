/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789c80; name: FUN_02789c80
 */


void FUN_02789c80(void)

{
  long *plVar1;
  
  DAT_0485ea98 = 0;
  if (DAT_0485e998 != (long *)0x0) {
    (**(code **)(*DAT_0485e998 + 0x18))();
    plVar1 = DAT_0485e998;
    DAT_0485e998 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_02789180(&DAT_0485e9a0);
      return;
    }
  }
  return;
}


