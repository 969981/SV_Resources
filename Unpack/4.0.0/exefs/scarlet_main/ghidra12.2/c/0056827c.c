/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0056827c; name: FUN_0056827c
 */


void FUN_0056827c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long *plStack_28;
  
  FUN_0056ba5c(&local_40,param_2,param_3,param_4);
                    /* try { // try from 005682a0 to 005682ab has its CatchHandler @ 0056830c */
  FUN_00568020(param_1 + 0x10,&local_40);
  lVar1 = local_40;
  if (local_40 != 0) {
    lVar2 = local_38;
    if (local_38 != local_40) {
      do {
        lVar2 = lVar2 + -8;
        FUN_0056b3f0(lVar2);
      } while (lVar1 != lVar2);
    }
    local_38 = lVar1;
    (**(code **)(*plStack_28 + 0x18))(plStack_28,local_40,local_30 - local_40,8);
  }
  return;
}


