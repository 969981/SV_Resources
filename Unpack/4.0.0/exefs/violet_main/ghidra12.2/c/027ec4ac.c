/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027ec4ac; name: thunk_FUN_027ec4b0
 */


void thunk_FUN_027ec4b0(long param_1,void *param_2)

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
  undefined8 *puStack_590;
  undefined8 uStack_588;
  undefined8 *puStack_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [80];
  char cStack_520;
  undefined1 auStack_51c [44];
  char acStack_4f0 [8];
  undefined1 auStack_4e8 [40];
  char cStack_4c0;
  char cStack_490;
  char cStack_460;
  char cStack_430;
  char cStack_400;
  char cStack_3d0;
  char cStack_3a0;
  char cStack_370;
  char cStack_340;
  char cStack_310;
  char cStack_2e0;
  char cStack_2b0;
  char cStack_280;
  char cStack_250;
  char cStack_220;
  char cStack_1f0;
  char cStack_1c0;
  char cStack_190;
  char cStack_160;
  char cStack_130;
  char cStack_100;
  char cStack_d0;
  char cStack_a0;
  long *plStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  memcpy(auStack_570,param_2,0x50);
  cStack_520 = 0;
  bVar3 = *(char *)((long)param_2 + 0x50) != '\0';
  if (bVar3) {
    memcpy(auStack_51c,(void *)((long)param_2 + 0x54),0x28);
  }
  lVar12 = 0;
  cStack_520 = bVar3;
  do {
    acStack_4f0[lVar12] = '\0';
    if (*(char *)((long)param_2 + lVar12 + 0x80) != '\0') {
      memcpy(auStack_4e8 + lVar12,(void *)((long)param_2 + lVar12 + 0x88),0x28);
      acStack_4f0[lVar12] = '\x01';
    }
    lVar12 = lVar12 + 0x30;
  } while (lVar12 != 0x480);
  FUN_027ecb2c(&plStack_70,param_1,auStack_570);
  if (cStack_a0 != '\0') {
    cStack_a0 = '\0';
  }
  if (cStack_d0 != '\0') {
    cStack_d0 = '\0';
  }
  if (cStack_100 != '\0') {
    cStack_100 = '\0';
  }
  if (cStack_130 != '\0') {
    cStack_130 = '\0';
  }
  if (cStack_160 != '\0') {
    cStack_160 = '\0';
  }
  if (cStack_190 != '\0') {
    cStack_190 = '\0';
  }
  if (cStack_1c0 != '\0') {
    cStack_1c0 = '\0';
  }
  if (cStack_1f0 != '\0') {
    cStack_1f0 = '\0';
  }
  if (cStack_220 != '\0') {
    cStack_220 = '\0';
  }
  if (cStack_250 != '\0') {
    cStack_250 = '\0';
  }
  if (cStack_280 != '\0') {
    cStack_280 = '\0';
  }
  if (cStack_2b0 != '\0') {
    cStack_2b0 = '\0';
  }
  if (cStack_2e0 != '\0') {
    cStack_2e0 = '\0';
  }
  if (cStack_310 != '\0') {
    cStack_310 = '\0';
  }
  if (cStack_340 != '\0') {
    cStack_340 = '\0';
  }
  if (cStack_370 != '\0') {
    cStack_370 = '\0';
  }
  if (cStack_3a0 != '\0') {
    cStack_3a0 = '\0';
  }
  if (cStack_3d0 != '\0') {
    cStack_3d0 = '\0';
  }
  if (cStack_400 != '\0') {
    cStack_400 = '\0';
  }
  if (cStack_430 != '\0') {
    cStack_430 = '\0';
  }
  if (cStack_460 != '\0') {
    cStack_460 = '\0';
  }
  if (cStack_490 != '\0') {
    cStack_490 = '\0';
  }
  if (cStack_4c0 != '\0') {
    cStack_4c0 = '\0';
  }
  if (acStack_4f0[0] != '\0') {
    acStack_4f0[0] = '\0';
  }
  if (cStack_520 != '\0') {
    cStack_520 = '\0';
  }
  FUN_0177dc44(&puStack_68,*(undefined8 *)(param_1 + 0x18));
  puVar8 = puStack_68;
  if (puStack_68 != (undefined8 *)0x0) {
    lVar12 = puStack_68[2];
    plVar4 = (long *)0x0;
    if (lVar12 != 0) {
      plVar4 = (long *)(lVar12 + -0x28);
    }
    psVar1 = (short *)(puStack_68 + 3);
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
      piVar2 = (int *)((long)puStack_68 + 0x1c);
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
        puStack_590 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&puStack_590);
      }
    }
    else if (sVar6 == 0) goto LAB_027ec7b8;
    plVar9 = plStack_70;
    if (lVar12 != 0) {
      puStack_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_00c43ef0(&puStack_68,plStack_70 + 6);
      puStack_590 = (undefined8 *)0x0;
      uStack_588 = 0;
      plVar5 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar5 = plVar9 + 5;
      }
      if ((long *)puStack_68[2] == plVar5) {
        FUN_015d2a6c(&puStack_590,&puStack_68);
      }
      puVar8 = puStack_68;
      if (puStack_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(puStack_68 + 3);
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
          piVar2 = (int *)((long)puStack_68 + 0x1c);
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
            uStack_58 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&uStack_58);
          }
        }
        else if (sVar6 == 0) goto LAB_027ec7b8;
      }
      puStack_580 = (undefined8 *)0x0;
      uStack_578 = 0;
      FUN_0177de7c(&puStack_580,&puStack_590);
      (**(code **)(*plVar4 + 0x90))(plVar4,&puStack_580);
      puVar8 = puStack_580;
      if (puStack_580 != (undefined8 *)0x0) {
        psVar1 = (short *)(puStack_580 + 3);
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
          piVar2 = (int *)((long)puStack_580 + 0x1c);
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
            puStack_68 = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,&puStack_68);
          }
        }
        else if (sVar6 == 0) goto LAB_027ec7b8;
      }
      puVar8 = puStack_590;
      if (puStack_590 != (undefined8 *)0x0) {
        psVar1 = (short *)(puStack_590 + 3);
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
          piVar2 = (int *)((long)puStack_590 + 0x1c);
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
            puStack_68 = (undefined8 *)*puVar8;
            FUN_00c44438(lVar12 + 0x8040,&puStack_68);
          }
        }
        else if (sVar6 == 0) goto LAB_027ec7b8;
      }
    }
  }
  plVar4 = plStack_70;
  FUN_01932260(plStack_70 + 0x1e,param_1 + 0x10);
  if ((int)plVar4[9] - 1U < 3) {
    FUN_0174a3b8(plVar4);
  }
  if (plStack_70 != (long *)0x0) {
    lVar12 = plStack_70[6];
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
      (**(code **)(*plStack_70 + 0x50))();
    }
    else if (sVar6 == 0) {
LAB_027ec7b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


