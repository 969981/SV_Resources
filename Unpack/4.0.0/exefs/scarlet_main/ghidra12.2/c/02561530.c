/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02561530; name: FUN_02561530
 */


undefined8 FUN_02561530(long *param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x10), lVar2 == 0)) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + ((long)param_3 >> 1) + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x02561558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_4);
  return uVar1;
}


