/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033110c; name: FUN_0033110c
 */


void FUN_0033110c(void)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (local_18 != (long *)0x0) {
    *local_18 = (long)(PTR_DAT_047ccc48 + 0x10);
  }
                    /* try { // try from 0033113c to 00331143 has its CatchHandler @ 00331184 */
  DAT_047ef4c8 = FUN_0033933c(&local_18);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  return;
}


