/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030475e0; name: FUN_030475e0
 */


void FUN_030475e0(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  
  if (0 < (int)param_3) {
    lVar2 = (ulong)param_3 + 1;
    plVar1 = (long *)(param_1 + (ulong)param_3 * 0x230);
    do {
      plVar1 = plVar1 + -0x46;
      (**(code **)(*plVar1 + 8))(plVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  return;
}


