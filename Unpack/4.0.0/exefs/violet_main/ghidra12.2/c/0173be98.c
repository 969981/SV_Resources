/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0173be98; name: FUN_0173be98
 */


void FUN_0173be98(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  for (plVar2 = *(long **)(lVar1 + 0x108); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN_00f844f4(lVar1,plVar2 + 2);
    FUN_0173bed4();
  }
  return;
}


