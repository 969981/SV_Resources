/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02762abc; name: FUN_02762abc
 */


void FUN_02762abc(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(int *)(param_1 + 0x128) == 1) &&
     (uVar3 = FUN_02762b74(*(undefined8 *)(param_1 + 0x130)), (uVar3 & 1) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x130);
    uVar4 = FUN_00f351bc();
    FUN_00ebbcc0(uVar5,uVar4,*(undefined1 *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x128) = 2;
    if ((*(char *)(param_1 + 0x58) != -0x7e) || (*(char *)(param_1 + 0x59) != -0x7e)) {
      uVar2 = *(undefined2 *)(param_1 + 0x58);
      plVar1 = (long *)(param_1 + 0x38);
      *(undefined2 *)(param_1 + 0x58) = 0x8282;
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x02762b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
      return;
    }
  }
  return;
}


