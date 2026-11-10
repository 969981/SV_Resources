/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031bf308; name: FUN_031bf308
 */


void FUN_031bf308(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_046a3dd8;
  if (*(char *)((long)param_1 + 0x24c) != '\0') {
    nn::os::WaitThread((ThreadType *)(param_1 + 0xf));
    nn::os::DestroyThread((ThreadType *)(param_1 + 0xf));
  }
  puVar3 = PTR_DAT_047d1a08;
  if (param_1[0x47] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[0x47],0);
  }
  if ((param_1[0xd] & 1) != 0) {
    (**(code **)(puVar3 + 8))(0,param_1[0xd] - 1,0);
  }
  lVar4 = param_1[4];
  if (lVar4 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0xc];
  if (UNRECOVERED_JUMPTABLE == (code *)0x1) {
    plVar5 = (long *)(lVar4 + -8);
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 != 0) {
      return;
    }
  }
  else if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031bf3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar4,0);
    return;
  }
  (**(code **)(lVar4 + -0x10))(lVar4,0);
                    /* WARNING: Could not recover jumptable at 0x031bf3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3 + 8))(0,(ulong)(lVar4 + -0x10) & 0xfffffffffffffff0,0);
  return;
}


