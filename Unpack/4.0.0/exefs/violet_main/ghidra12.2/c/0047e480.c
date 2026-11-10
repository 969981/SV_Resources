/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e480; name: FUN_0047e480
 */


undefined8 FUN_0047e480(int *param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (-1 < (int)param_2)) {
    if (*param_1 <= (int)param_2) {
      return 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8) = param_3;
    param_1[4] = 0;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8);
  }
  return uVar1;
}


