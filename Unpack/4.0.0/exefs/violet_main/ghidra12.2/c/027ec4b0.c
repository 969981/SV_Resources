/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ec4b0; name: FUN_027ec4b0
 */


void FUN_027ec4b0(long param_1,void *param_2)

{
  short *psVar1;
  int *piVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_590;
  undefined8 uStack_588;
  undefined8 *local_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [80];
  char local_520;
  undefined1 auStack_51c [44];
  char local_4f0 [8];
  undefined1 auStack_4e8 [40];
  char local_4c0;
  char local_490;
  char local_460;
  char local_430;
  char local_400;
  char local_3d0;
  char local_3a0;
  char local_370;
  char local_340;
  char local_310;
  char local_2e0;
  char local_2b0;
  char local_280;
  char local_250;
  char local_220;
  char local_1f0;
  char local_1c0;
  char local_190;
  char local_160;
  char local_130;
  char local_100;
  char local_d0;
  char local_a0;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  memcpy(auStack_570,param_2,0x50);
  local_520 = 0;
  bVar3 = *(char *)((long)param_2 + 0x50) != '\0';
  if (bVar3) {
    memcpy(auStack_51c,(void *)((long)param_2 + 0x54),0x28);
  }
  lVar12 = 0;
  local_520 = bVar3;
  do {
    local_4f0[lVar12] = '\0';
    if (*(char *)((long)param_2 + lVar12 + 0x80) != '\0') {
      memcpy(auStack_4e8 + lVar12,(void *)((long)param_2 + lVar12 + 0x88),0x28);
      local_4f0[lVar12] = '\x01';
    }
    lVar12 = lVar12 + 0x30;
  } while (lVar12 != 0x480);
  FUN_027ecb2c(&local_70,param_1,auStack_570);
  if (local_a0 != '\0') {
    local_a0 = '\0';
  }
  if (local_d0 != '\0') {
    local_d0 = '\0';
  }
  if (local_100 != '\0') {
    local_100 = '\0';
  }
  if (local_130 != '\0') {
    local_130 = '\0';
  }
  if (local_160 != '\0') {
    local_160 = '\0';
  }
  if (local_190 != '\0') {
    local_190 = '\0';
  }
  if (local_1c0 != '\0') {
    local_1c0 = '\0';
  }
  if (local_1f0 != '\0') {
    local_1f0 = '\0';
  }
  if (local_220 != '\0') {
    local_220 = '\0';
  }
  if (local_250 != '\0') {
    local_250 = '\0';
  }
  if (local_280 != '\0') {
    local_280 = '\0';
  }
  if (local_2b0 != '\0') {
    local_2b0 = '\0';
  }
  if (local_2e0 != '\0') {
    local_2e0 = '\0';
  }
  if (local_310 != '\0') {
    local_310 = '\0';
  }
  if (local_340 != '\0') {
    local_340 = '\0';
  }
  if (local_370 != '\0') {
    local_370 = '\0';
  }
  if (local_3a0 != '\0') {
    local_3a0 = '\0';
  }
  if (local_3d0 != '\0') {
    local_3d0 = '\0';
  }
  if (local_400 != '\0') {
    local_400 = '\0';
  }
  if (local_430 != '\0') {
    local_430 = '\0';
  }
  if (local_460 != '\0') {
    local_460 = '\0';
  }
  if (local_490 != '\0') {
    local_490 = '\0';
  }
  if (local_4c0 != '\0') {
    local_4c0 = '\0';
  }
  if (local_4f0[0] != '\0') {
    local_4f0[0] = '\0';
  }
  if (local_520 != '\0') {
    local_520 = '\0';
  }
  FUN_0177dc44(&local_68,*(undefined8 *)(param_1 + 0x18));
  puVar8 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    lVar12 = local_68[2];
    plVar4 = (long *)0x0;
    if (lVar12 != 0) {
      plVar4 = (long *)(lVar12 + -0x28);
    }
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar3) {
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_590 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_590);
      }
    }
    else if (sVar6 == 0) goto LAB_027ec7b8;
    plVar9 = local_70;
    if (lVar12 != 0) {
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_00c43ef0(&local_68,local_70 + 6);
      local_590 = (undefined8 *)0x0;
      uStack_588 = 0;
      plVar5 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar5 = plVar9 + 5;
      }
      if ((long *)local_68[2] == plVar5) {
        FUN_015d2a6c(&local_590,&local_68);
      }
      puVar8 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar3) {
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
            local_58 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_58);
          }
        }
        else if (sVar6 == 0) goto LAB_027ec7b8;
      }
      local_580 = (undefined8 *)0x0;
      uStack_578 = 0;
      FUN_0177de7c(&local_580,&local_590);
      (**(code **)(*plVar4 + 0x90))(plVar4,&local_580);
      puVar8 = local_580;
      if (local_580 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_580 + 3);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar2 = (int *)((long)local_580 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar3) {
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
            local_68 = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar6 == 0) goto LAB_027ec7b8;
      }
      puVar8 = local_590;
      if (local_590 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_590 + 3);
        do {
          sVar6 = *psVar1;
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar6 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (sVar6 == 1) {
          piVar2 = (int *)((long)local_590 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar3) {
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
            local_68 = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar6 == 0) goto LAB_027ec7b8;
      }
    }
  }
  plVar4 = local_70;
  FUN_01932260(local_70 + 0x1e,param_1 + 0x10);
  if ((int)plVar4[9] - 1U < 3) {
    FUN_0174a3b8(plVar4);
  }
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar6 == 0) {
LAB_027ec7b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


