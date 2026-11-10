/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02503d24; name: FUN_02503d24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02503d24(long param_1,code *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = _DAT_03caa980;
  if (param_1 != 0) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
    auVar1 = (*param_2)();
  }
  return auVar1;
}


