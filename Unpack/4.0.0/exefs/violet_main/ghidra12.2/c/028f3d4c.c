/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f3d4c; name: FUN_028f3d4c
 */


void FUN_028f3d4c(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  if (plVar4 != (long *)0x0) {
    uVar3 = *param_2;
    plVar1 = plVar2;
    do {
      if ((ulong)plVar4[4] >= uVar3) {
        plVar1 = plVar4;
      }
      plVar4 = (long *)plVar4[(ulong)plVar4[4] < uVar3];
    } while (plVar4 != (long *)0x0);
    if ((plVar1 != plVar2) && ((ulong)plVar1[4] <= uVar3)) {
      FUN_028f6628();
      return;
    }
  }
  return;
}


