/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027f8780; name: FUN_027f8780
 */


void FUN_027f8780(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined2 local_38;
  
  plVar8 = (long *)param_1[3];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) goto LAB_027f890c;
  }
  plVar8 = (long *)param_1[2];
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_027f890c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  uVar10 = *param_1;
  lVar9 = tpidr_el0;
  if (*(long *)(lVar9 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar9 + 0x30) = DAT_04859430;
  }
  uVar3 = *(undefined8 *)(lVar9 + 0x30);
  uVar4 = *(undefined8 *)(lVar9 + 0x38);
  *(undefined8 *)(lVar9 + 0x30) = uVar10;
  *(undefined2 *)(lVar9 + 0x38) = 1;
  plVar8 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))();
  }
  *(undefined8 *)(lVar9 + 0x30) = uVar3;
  local_38 = (undefined2)uVar4;
  *(undefined2 *)(lVar9 + 0x38) = local_38;
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x027f8894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 8))();
  return;
}


