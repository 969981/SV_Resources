/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a6957c; name: FUN_00a6957c
 */


void FUN_00a6957c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(param_1 + 0x1820) != (code *)0x0) {
    (**(code **)(param_1 + 0x1820))(param_1 + 0x1840);
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x1828);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x1830) = 0;
      *(undefined8 *)(param_1 + 0x1838) = 0;
      *(undefined8 *)(param_1 + 0x1820) = 0;
      *(undefined8 *)(param_1 + 0x1828) = 0;
                    /* WARNING: Could not recover jumptable at 0x00a695d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1 + 0x1840);
      return;
    }
  }
  return;
}


