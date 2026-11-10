/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b944c; name: FUN_027b944c
 */


/* WARNING: Removing unreachable block (ram,0x027b94e8) */
/* WARNING: Removing unreachable block (ram,0x027b94ec) */
/* WARNING: Removing unreachable block (ram,0x027b94f4) */
/* WARNING: Removing unreachable block (ram,0x027b94fc) */
/* WARNING: Removing unreachable block (ram,0x027b9588) */
/* WARNING: Removing unreachable block (ram,0x027b9590) */
/* WARNING: Removing unreachable block (ram,0x027b9594) */
/* WARNING: Removing unreachable block (ram,0x027b959c) */
/* WARNING: Removing unreachable block (ram,0x027b95a4) */
/* WARNING: Removing unreachable block (ram,0x027b969c) */
/* WARNING: Removing unreachable block (ram,0x027b96ac) */
/* WARNING: Removing unreachable block (ram,0x027b95ac) */
/* WARNING: Removing unreachable block (ram,0x027b9504) */
/* WARNING: Removing unreachable block (ram,0x027b9508) */

void FUN_027b944c(long *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long local_50;
  undefined8 local_48;
  
  plVar1 = param_2 + 1;
  do {
    lVar14 = *plVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar7 = PTR_DAT_047d3908;
  } while (cVar5 != '\0');
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_50,uVar11,lVar14);
  puVar12 = (undefined8 *)*param_2;
  *param_2 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar12 + 3);
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
      piVar3 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar8;
        *(long *)puVar9 = lVar13;
        local_48 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_027b954c;
  }
  if (local_50 == 0) {
    FUN_027ba900(param_1);
  }
  else {
    puVar12 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      psVar2 = (short *)(puVar12 + 3);
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
        piVar3 = (int *)((long)puVar12 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar8;
          *(long *)puVar9 = lVar13;
          local_48 = *puVar12;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
        }
      }
      else if (sVar4 == 0) {
LAB_027b954c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    *param_1 = local_50;
    param_1[1] = lVar14;
  }
  return;
}


