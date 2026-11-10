/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00263640; name: FUN_00263640
 */


void FUN_00263640(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 0026366c to 00263677 has its CatchHandler @ 0026369c */
    FUN_00267c98(lVar1,0);
  }
  *param_1 = lVar1;
  uVar2 = FUN_002594d4(param_2);
                    /* try { // try from 00263688 to 0026368f has its CatchHandler @ 002636a0 */
  FUN_00267c10(lVar1,uVar2);
  return;
}


