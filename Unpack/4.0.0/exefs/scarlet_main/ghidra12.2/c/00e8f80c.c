/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8f80c; name: FUN_00e8f80c
 */


void FUN_00e8f80c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else if (*(long **)(param_2 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x10) + 0x20))();
  }
  plVar3 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0x20,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00e8f86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x20,8);
  return;
}


