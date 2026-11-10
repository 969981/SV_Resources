/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02295104; name: FUN_02295104
 */


void FUN_02295104(long *param_1,undefined1 *param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047dde08;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 8) != 0) {
      if ((param_4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_2 + 8) + ((long)param_4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x02295140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    break;
  case 1:
    FUN_022952f0(param_2 + 8);
    return;
  case 2:
    FUN_02295338(param_2 + 8);
    return;
  case 3:
    FUN_0229538c(param_2 + 8);
    return;
  }
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = (long)(puVar1 + 0x10);
  memset(param_1 + 3,0,0x80);
  return;
}


