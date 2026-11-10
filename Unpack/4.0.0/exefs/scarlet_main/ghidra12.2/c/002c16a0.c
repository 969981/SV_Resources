/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c16a0; name: FUN_002c16a0
 */


void FUN_002c16a0(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_4 != 0) {
    lVar1 = *param_3;
    lVar2 = 0;
    do {
                    /* try { // try from 002c16c8 to 002c16cf has its CatchHandler @ 002c16fc */
      FUN_002c1740(param_2,lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = *param_3 + 0x18;
      param_2 = param_2 + 0x18;
      *param_3 = lVar1;
    } while (param_4 != lVar2);
  }
  return;
}


