/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033d408; name: FUN_0033d408
 */


long FUN_0033d408(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  void *__ptr;
  long lVar1;
  undefined8 uVar2;
  void *local_28;
  
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x58);
  if (lVar1 != 0) {
    local_28 = (void *)*param_2;
    uVar2 = *param_1;
    *param_2 = 0;
                    /* try { // try from 0033d44c to 0033d457 has its CatchHandler @ 0033d480 */
    FUN_0033d4a0(lVar1,uVar2,&local_28,*param_3);
    __ptr = local_28;
    local_28 = (void *)0x0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 0033d464 to 0033d467 has its CatchHandler @ 0033d47c */
      free(__ptr);
    }
  }
  return lVar1;
}


