/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035351c; name: FUN_0035351c
 */


void FUN_0035351c(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    if (4 < param_3) {
      FUN_00350fd0(param_3);
      return;
    }
  }
  else {
    lVar1 = tpidr_el0;
    lVar1 = *(long *)(lVar1 + 0x48);
    param_2[3] = param_3;
    *param_2 = 0;
    plVar2 = (long *)(lVar1 + 8);
    if (*plVar2 != 0) {
      plVar2 = *(long **)(lVar1 + 0x10);
    }
    *plVar2 = (long)param_2;
    *(undefined8 **)(lVar1 + 0x10) = param_2;
  }
  return;
}


