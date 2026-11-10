/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178ea5c; name: FUN_0178ea5c
 */


void FUN_0178ea5c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  (**(code **)(*(long *)param_2[0x1028] + 0x68))();
  local_28 = CONCAT71(local_28._1_7_,1);
  local_60 = (undefined8 *)param_2[0x1028];
  local_50[0] = param_2;
  lVar8 = FUN_01790710(param_2[1],&local_28,param_3,param_4,local_50,&local_60);
  *param_1 = lVar8;
  plVar9 = (long *)0x0;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_0178ed18;
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar10;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0178ed18;
    plVar9 = (long *)*param_1;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(local_50);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if ((long *)local_50[0][2] == plVar9 + 5) {
      FUN_0178ee74(&local_60,local_50);
    }
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_0178ed18;
    }
    FUN_0178ed30(param_2 + 0x11,&local_60);
    puVar6 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_50[0] = (undefined8 *)*puVar6;
          FUN_00c44438(lVar8 + 0x8040,local_50);
        }
      }
      else if (sVar3 == 0) {
LAB_0178ed18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


