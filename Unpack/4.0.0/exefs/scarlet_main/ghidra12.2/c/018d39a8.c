/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d39a8; name: FUN_018d39a8
 */


void FUN_018d39a8(undefined4 *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,ulong param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    memset(param_1,0,0x708);
    puVar1 = param_1 + 0x1c2;
    do {
      *param_1 = 0xffffffff;
      *(undefined2 *)(param_1 + 1) = 0;
      *(undefined4 *)((long)param_1 + 6) = 0xffffffff;
      *(undefined2 *)((long)param_1 + 10) = 0;
      param_1[3] = 0xffffffff;
      *(undefined2 *)(param_1 + 4) = 0;
      *(undefined4 *)((long)param_1 + 0x12) = 0xffffffff;
      *(undefined2 *)((long)param_1 + 0x16) = 0;
      param_1 = param_1 + 6;
    } while (param_1 != puVar1);
    return;
  }
  if ((param_4 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_2 + ((long)param_4 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x018d39d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


