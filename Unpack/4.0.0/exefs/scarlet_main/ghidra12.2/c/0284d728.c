/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284d728; name: FUN_0284d728
 */


void FUN_0284d728(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  long *local_48;
  long *plStack_40;
  long local_38;
  long *local_18;
  
  plVar8 = *(long **)(param_1 + 0x28);
  local_48 = plVar8;
  if (*(long *)(param_1 + 0x30) != 0) {
    local_48 = plVar8 + *(long *)(param_1 + 0x30) * 4;
  }
  plStack_40 = plVar8;
  if (local_48 != plVar8) {
    if ((char)plVar8[3] == '\0') {
      if (*plVar8 == 0) goto LAB_0284d8a0;
      if (*(short *)(*plVar8 + 0x1a) == 0) goto LAB_0284d8a0;
    }
    if (plVar8[2] == 0) goto LAB_0284d8a0;
    plVar8 = plVar8 + 4;
    while( true ) {
      plStack_40 = *(long **)(param_1 + 0x28);
      local_48 = plStack_40;
      if (*(long *)(param_1 + 0x30) != 0) {
        local_48 = plStack_40 + *(long *)(param_1 + 0x30) * 4;
      }
      if (local_48 == plVar8) break;
      if ((((char)plVar8[3] == '\0') && ((*plVar8 == 0 || (*(short *)(*plVar8 + 0x1a) == 0)))) ||
         (plVar8[2] == 0)) {
LAB_0284d8a0:
        FUN_0284db00(&local_18,param_1 + 8,plVar8);
        plVar8 = local_18;
      }
      else {
        plVar8 = plVar8 + 4;
      }
    }
  }
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00c43ef0(&local_68,param_2);
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = *(undefined1 *)(param_2 + 0x18);
  FUN_0284dc20(&local_38,&plStack_40,&local_48,&local_68);
  puVar6 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
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
      piVar2 = (int *)((long)local_68 + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_18 = (long *)*puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_18);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar9 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30) * 0x20;
  }
  if (local_38 != lVar9) {
    FUN_0284db00(&local_18,param_1 + 8);
  }
  return;
}


