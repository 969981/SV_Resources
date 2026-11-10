/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789ce0; name: FUN_02789ce0
 */


void FUN_02789ce0(void)

{
  long *plVar1;
  
  DAT_0485ea98 = 0;
  if (DAT_0485e9d8 != (long *)0x0) {
    (**(code **)(*DAT_0485e9d8 + 0x18))();
    plVar1 = DAT_0485e9d8;
    DAT_0485e9d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_02789318(&DAT_0485e9e0);
      return;
    }
  }
  return;
}


