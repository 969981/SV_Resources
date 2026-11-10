/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ed1b8; name: FUN_007ed1b8
 */


undefined8 FUN_007ed1b8(long *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 local_40;
  undefined4 local_38;
  
  if ((long *)param_1[3] != param_1 + 2) {
    plVar4 = (long *)(param_1[3] - (long)*(int *)((long)param_1 + 0x24));
    do {
      cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (cVar1 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x007ed270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
        return uVar2;
      }
      plVar3 = *(long **)((long)plVar4 + (long)*(int *)((long)param_1 + 0x24) + 8);
      plVar4 = (long *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x24));
    } while (plVar3 != param_1 + 2);
  }
  local_38 = 0;
  local_40 = 1;
  (**(code **)(*param_1 + 0x10))(param_1,&local_40);
  return 0;
}


