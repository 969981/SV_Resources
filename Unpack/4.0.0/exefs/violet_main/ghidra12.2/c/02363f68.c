/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02363f68; name: FUN_02363f68
 */


void FUN_02363f68(long *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined1 *param_4)

{
  long *plVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x10), lVar2 == 0)) {
    return;
  }
  plVar1 = (long *)(lVar2 + ((long)param_3 >> 1) + -0x28);
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02363f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_4);
  return;
}


