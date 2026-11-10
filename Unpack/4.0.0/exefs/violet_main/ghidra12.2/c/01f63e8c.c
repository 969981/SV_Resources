/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f63e8c; name: FUN_01f63e8c
 */


void FUN_01f63e8c(undefined8 *param_1,long param_2,undefined1 param_3,long param_4)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  long *plVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 local_78;
  long *local_70;
  byte local_68;
  undefined1 local_67;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1e0));
  if (((-1 < (char)*(byte *)(param_2 + 0x15f)) && (*(long *)(param_2 + 0x48) != 0)) &&
     (lVar12 = *(long *)(*(long *)(param_2 + 0x48) + 0x10), lVar12 != 0)) {
    local_68 = *(byte *)(param_2 + 0x15f) ^ 0x80;
    puVar13 = (undefined8 *)(param_2 + 0x58);
    local_67 = param_3;
    lVar11 = FUN_02899ea0(*puVar13,*(undefined8 *)(param_2 + 0x60),&local_68);
    if (*(long *)(param_2 + 0x60) != lVar11) {
      FUN_02899f1c(puVar13,lVar11);
    }
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    FUN_00c43ef0(&local_90,param_4);
    local_80 = *(undefined8 *)(param_4 + 0x10);
    local_78 = *(undefined1 *)(param_4 + 0x18);
    FUN_0178ea5c(&local_70,lVar12 + -0x28,&local_68,&local_90);
    puVar9 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_90 + 3);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_90 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar8) {
            *piVar2 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_60[0] = (undefined8 *)*puVar9;
          FUN_00c44438(lVar12 + 0x8040,local_60);
        }
      }
      else if (sVar4 == 0) goto LAB_01f6417c;
    }
    if (local_70 != (long *)0x0) {
      lVar12 = *(long *)(param_2 + 0x170);
      *(undefined8 *)(param_2 + 0x1d0) = 0;
      if (lVar12 != *(long *)(param_2 + 0x178)) {
        lVar11 = param_2 + 0x1a8;
        FUN_013fcb68(lVar11,lVar12 + 8);
        if ((lVar12 + 0x10 != *(long *)(param_2 + 0x178)) &&
           (FUN_013fcb68(lVar11,lVar12 + 0x18), lVar12 + 0x20 != *(long *)(param_2 + 0x178))) {
          FUN_013fcb68(lVar11,lVar12 + 0x28);
          for (lVar12 = lVar12 + 0x30; lVar12 != *(long *)(param_2 + 0x178); lVar12 = lVar12 + 0x10)
          {
            FUN_013fcb68(lVar11,lVar12 + 8);
          }
        }
      }
      if (((*PTR_DAT_047d6c98 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d6c98);
      }
      lVar12 = *(long *)PTR_DAT_047d6ca0;
      *(long *)PTR_DAT_047d6ca8 = lVar12;
      if (((lVar12 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) ||
         (lVar12 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8), lVar12 == 0)) {
LAB_01f64000:
        lVar15 = 0;
      }
      else {
        lVar11 = *(long *)(param_2 + 0x170);
        lVar6 = *(long *)(param_2 + 0x178);
        if (lVar11 == lVar6) {
LAB_01f641b4:
          if (lVar11 == lVar6) goto LAB_01f64000;
          lVar15 = *(long *)(lVar11 + 8);
        }
        else {
          do {
            if (*(long *)(lVar11 + 8) == lVar12) goto LAB_01f641b4;
            lVar11 = lVar11 + 0x10;
            lVar15 = 0;
          } while (lVar6 != lVar11);
        }
      }
      plVar5 = *(long **)(param_2 + 0x1c8);
      plVar3 = plVar5;
      if (*(long *)(param_2 + 0x1d0) != 0) {
        plVar3 = plVar5 + *(long *)(param_2 + 0x1d0);
      }
      if (plVar5 != plVar3) {
        if (*plVar5 != lVar15) {
          FUN_0178e9f0(local_70,plVar5);
        }
        if (plVar5 + 1 != plVar3) {
          if (plVar5[1] != lVar15) {
            FUN_0178e9f0(local_70);
          }
          for (plVar5 = plVar5 + 2; plVar5 != plVar3; plVar5 = plVar5 + 1) {
            if (*plVar5 != lVar15) {
              FUN_0178e9f0(local_70,plVar5);
            }
          }
        }
      }
      FUN_019d4e3c(puVar13,&local_70);
      plVar3 = local_70;
      plVar14 = local_70 + 5;
      (**(code **)(*local_70 + 0x18))(local_60,local_70);
      *param_1 = 0;
      param_1[1] = 0;
      plVar5 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        plVar5 = plVar14;
      }
      if ((long *)local_60[0][2] == plVar5) {
        FUN_0178ee74(param_1,local_60);
      }
      puVar13 = local_60[0];
      if (local_60[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_60[0] + 3);
        do {
          sVar4 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_60[0] + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar8) {
              *piVar2 = -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_38 = *puVar13;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) goto LAB_01f6417c;
      }
      if (local_70 != (long *)0x0) {
        lVar12 = local_70[6];
        psVar1 = (short *)(lVar12 + 0x1a);
        do {
          sVar4 = *psVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar4 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          (**(code **)(*local_70 + 0x50))();
        }
        else if (sVar4 == 0) {
LAB_01f6417c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      goto LAB_01f640a8;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_01f640a8:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1e0));
  return;
}


