/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005681dc; name: FUN_005681dc
 */


void FUN_005681dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  long local_30;
  long *plStack_28;
  
  FUN_0056b9f0(&local_40,param_2,param_3);
                    /* try { // try from 005681fc to 00568207 has its CatchHandler @ 00568268 */
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


