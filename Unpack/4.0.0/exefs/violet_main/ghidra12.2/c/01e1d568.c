/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1d568; name: FUN_01e1d568
 */


undefined4 FUN_01e1d568(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-1 < (int)param_2) && (*(char *)(param_1 + 0x728) != '\0')) {
    if ((ulong)(*(long *)(param_1 + 0x14a0) - *(long *)(param_1 + 0x1498) >> 2) <= (ulong)param_2) {
      return 0;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x1498) + (ulong)param_2 * 4);
  }
  return uVar1;
}


