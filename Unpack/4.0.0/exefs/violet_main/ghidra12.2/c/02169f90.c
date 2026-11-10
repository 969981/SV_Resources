/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02169f90; name: FUN_02169f90
 */


void FUN_02169f90(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3) <= (ulong)(long)param_2)
  {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x2d8) + (long)param_2 * 8);
  plVar2 = *(long **)(lVar1 + 0x148);
  *(undefined8 *)(lVar1 + 0x148) = 0;
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02169fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))();
  return;
}


