/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003e37d0; name: FUN_003e37d0
 */


bool FUN_003e37d0(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  bVar2 = false;
  if (param_1 != (int *)0x0) {
    if ((*param_1 <= (int)uVar1 >> 3) || (*(long *)(param_1 + 2) == 0)) {
      return false;
    }
    bVar2 = (1 << (ulong)(~param_2 & 7) &
            (uint)*(byte *)(*(long *)(param_1 + 2) + (long)((int)uVar1 >> 3))) != 0;
  }
  return bVar2;
}


