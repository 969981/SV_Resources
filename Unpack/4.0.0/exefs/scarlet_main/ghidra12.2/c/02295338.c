/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02295338; name: FUN_02295338
 */


void FUN_02295338(long *param_1,long *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047dde08;
  if ((*param_2 == 0) || (lVar2 = *(long *)(*param_2 + 0x10), lVar2 == 0)) {
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    *param_1 = (long)(puVar1 + 0x10);
    memset(param_1 + 3,0,0x80);
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + ((long)param_4 >> 1) + -0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x0229535c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


