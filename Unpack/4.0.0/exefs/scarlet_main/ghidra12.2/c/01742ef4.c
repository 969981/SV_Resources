/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01742ef4; name: FUN_01742ef4
 */


void FUN_01742ef4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  uVar3 = FUN_00c4e564(plVar2);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01742f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,lVar1 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar2,param_2,lVar1 << 3,8);
  return;
}


