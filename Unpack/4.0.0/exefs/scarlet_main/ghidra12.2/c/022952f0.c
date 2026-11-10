/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022952f0; name: FUN_022952f0
 */


void FUN_022952f0(long *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047dde08;
  if (*param_2 == 0) {
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    *param_1 = (long)(puVar1 + 0x10);
    memset(param_1 + 3,0,0x80);
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x02295308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


