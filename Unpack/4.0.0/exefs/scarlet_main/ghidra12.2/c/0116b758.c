/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0116b758; name: FUN_0116b758
 */


void FUN_0116b758(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 < 0x1e5f3f7baf3665e2) {
    if (lVar2 == 0x11e72207bd2aab88) {
      FUN_0116b840(0x11);
      return;
    }
    if (lVar2 == -0x491cc4d97eb7925c) {
      FUN_0116b840(0xd);
      return;
    }
  }
  else {
    if (lVar2 == 0x1e5f3f7baf3665e2) {
      FUN_0116b840(0xe);
      return;
    }
    if (lVar2 == 0x5555585d4e95cdeb) {
      FUN_0116b840(0xf);
      return;
    }
    if (lVar2 == 0x607c70bb6004c425) {
      FUN_0116b840(0x10);
      return;
    }
  }
  *param_1 = lVar2;
  lVar2 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar2;
  plVar1 = (long *)param_2[3];
  param_1[3] = (long)plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0116b804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


