/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a09cb4; name: FUN_01a09cb4
 */


void FUN_01a09cb4(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  ulong *local_50 [2];
  ulong local_28;
  
  (**(code **)(*(long *)param_2[0x1028] + 0x68))();
  local_28 = local_28 & 0xffffffffffffff00;
  local_60 = (undefined8 *)param_2[0x1028];
  local_50[0] = param_2;
  lVar10 = FUN_01790710(param_2[1],&local_28,param_3,param_4,local_50,&local_60);
  *param_1 = lVar10;
  plVar11 = (long *)0x0;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x30);
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_01a09f6c;
    psVar2 = (short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar12;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_01a09f6c;
    plVar11 = (long *)*param_1;
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(local_50);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if ((long *)local_50[0][2] == plVar11 + 5) {
      FUN_0178ee74(&local_60,local_50);
    }
    puVar8 = local_50[0];
    if (local_50[0] != (ulong *)0x0) {
      puVar1 = local_50[0] + 3;
      do {
        sVar4 = (short)*puVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar6) {
          *(short *)puVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) goto LAB_01a09f6c;
    }
    FUN_0178ed30(param_2 + 0x11,&local_60);
    puVar7 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_60 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_60 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_50[0] = (ulong *)*puVar7;
          FUN_00c44438(lVar10 + 0x8040,local_50);
        }
      }
      else if (sVar4 == 0) {
LAB_01a09f6c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


