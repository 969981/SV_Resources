/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00300724; name: FUN_00300724
 */


long FUN_00300724(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long local_28;
  
  lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x38);
  if (lVar2 != 0) {
    local_28 = *param_2;
    *param_2 = 0;
                    /* try { // try from 0030075c to 0030076b has its CatchHandler @ 00300794 */
    FUN_003007b4(lVar2,param_1,&local_28);
    lVar1 = local_28;
    local_28 = 0;
    if (lVar1 != 0) {
                    /* try { // try from 00300778 to 0030077b has its CatchHandler @ 00300790 */
      FUN_003b8e30();
    }
  }
  return lVar2;
}


