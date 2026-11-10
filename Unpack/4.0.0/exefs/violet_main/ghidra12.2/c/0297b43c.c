/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297b43c; name: FUN_0297b43c
 */


undefined8 FUN_0297b43c(long param_1,byte param_2,byte param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (((param_2 < 5) && (param_3 < 6)) &&
     (*(short *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x14) != 0)) {
    if (*(char *)(param_1 + (ulong)param_2 * 0x60 + (ulong)param_3 * 0x10 + 0x10) != '\0') {
      plVar1 = (long *)FUN_01079790(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0297b4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x230))();
      return uVar2;
    }
  }
  return 0;
}


