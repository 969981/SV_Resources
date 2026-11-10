/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01687930; name: FUN_01687930
 */


void FUN_01687930(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  
  if (3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_02716170();
  }
  plVar1 = *(long **)(param_1 + (ulong)param_2 * 8);
                    /* WARNING: Could not recover jumptable at 0x01687958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_3,param_4);
  return;
}


