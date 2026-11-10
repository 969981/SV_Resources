/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b4a8b0; name: FUN_02b4a8b0
 */


void FUN_02b4a8b0(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  
  FUN_01033d28(param_1 + -0x20);
  plVar1 = (long *)(param_1 + 0x18);
  if ((*(char *)(param_1 + 0x38) == -0x7e) && (*(char *)(param_1 + 0x39) == -0x7e)) {
    return;
  }
  uVar2 = *(undefined2 *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x38) = 0x8282;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x28),plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02b4a924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  return;
}


