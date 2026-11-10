/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e7974; name: FUN_028e7974
 */


void FUN_028e7974(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_028e8488(param_1,uVar2);
      if ((uVar1 & 1) == 0) {
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulong *)(param_1 + 0xb0));
  }
  return;
}


