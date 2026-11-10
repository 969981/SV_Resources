/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea2260; name: FUN_01ea2260
 */


void FUN_01ea2260(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_01ea201c();
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  lVar4 = *param_1;
  uVar3 = FUN_00c4e564(plVar2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01ea22bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,8);
    return;
  }
  FUN_00c48fe8(plVar2,lVar4,lVar1 - lVar4,8);
  return;
}


