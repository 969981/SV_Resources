/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bdb770; name: FUN_02bdb770
 */


void FUN_02bdb770(void)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  plVar5 = DAT_0485e990;
  if (DAT_0485e990 != (long *)0x0) {
    if ((*(byte *)((long)DAT_0485e990 + 0x249) & 1) == 0) {
      return;
    }
    DAT_0485e990 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      lVar9 = plVar5[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar5 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_02bdb9b8;
    }
  }
  plVar5 = DAT_0485ea38;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar5;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x360,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xe8))(plVar5);
  }
  else {
    FUN_00cd0d38(plVar7,0x8000);
    plVar7[2] = (long)plVar7;
    *plVar7 = (long)&DAT_045dffe0;
    plVar7[1] = (long)plVar5;
    plVar7[4] = (long)&PTR_LAB_045e0090;
    plVar7[5] = (long)&DAT_045e00e0;
    *(undefined4 *)(plVar7 + 3) = 0x100360;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    lVar9 = plVar7[6];
    if (*(long *)(lVar9 + 0x10) != 0) {
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_02bdb9b8;
      plVar5 = DAT_0485e990;
      DAT_0485e990 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        lVar9 = plVar5[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_02bdb9b8;
      }
      DAT_0485e990 = plVar7;
                    /* WARNING: Could not recover jumptable at 0x02bdb904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x78))(plVar7,"net dispatch",0xffffffff,0);
      return;
    }
  }
LAB_02bdb9b8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


