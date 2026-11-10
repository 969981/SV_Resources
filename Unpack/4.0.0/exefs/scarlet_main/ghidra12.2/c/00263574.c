/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00263574; name: FUN_00263574
 */


void FUN_00263574(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 002635a0 to 002635ab has its CatchHandler @ 002635e0 */
    FUN_00267c98(lVar1,0);
  }
  *param_1 = lVar1;
  if (*(int *)(lVar1 + 0x1c) != 3) {
                    /* try { // try from 002635bc to 002635c3 has its CatchHandler @ 002635dc */
    FUN_002679fc(lVar1);
    *(undefined4 *)(lVar1 + 0x1c) = 3;
  }
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  return;
}


