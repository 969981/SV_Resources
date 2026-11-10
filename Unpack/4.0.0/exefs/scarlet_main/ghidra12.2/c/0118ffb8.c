/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0118ffb8; name: FUN_0118ffb8
 */


void FUN_0118ffb8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    if (*(long **)(param_2 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x30) + 0x18))();
    }
    if (*(long **)(param_2 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x28) + 0x20))();
    }
  }
  plVar3 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar3,param_2,0x38,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0119002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x38,8);
  return;
}


