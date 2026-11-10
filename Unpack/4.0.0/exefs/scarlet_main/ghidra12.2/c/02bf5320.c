/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bf5320; name: FUN_02bf5320
 */


void FUN_02bf5320(long *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined2 local_38;
  
  lVar9 = param_1[1];
  lVar10 = tpidr_el0;
  if (*(long *)(lVar10 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar10 + 0x30) = DAT_04859430;
  }
  lVar3 = *(long *)(lVar10 + 0x30);
  uVar4 = *(undefined8 *)(lVar10 + 0x38);
  *(long *)(lVar10 + 0x30) = lVar9;
  *(undefined2 *)(lVar10 + 0x38) = 1;
  plVar8 = (long *)param_1[2];
  param_1[2] = 0;
  local_38 = (undefined2)uVar4;
  if (plVar8 == (long *)0x0) {
    *(long *)(lVar10 + 0x30) = lVar3;
    *(undefined2 *)(lVar10 + 0x38) = local_38;
  }
  else {
    (**(code **)(*plVar8 + 8))();
    plVar8 = (long *)param_1[2];
    *(long *)(lVar10 + 0x30) = lVar3;
    *(undefined2 *)(lVar10 + 0x38) = local_38;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    lVar10 = param_1[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x02bf5458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


