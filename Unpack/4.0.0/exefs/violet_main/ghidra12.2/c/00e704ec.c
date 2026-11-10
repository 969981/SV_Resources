/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e704ec; name: FUN_00e704ec
 */


long FUN_00e704ec(long param_1)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  lVar1 = param_1 + 0x100;
  if ((*(long *)(param_1 + 0x100) != 0) && (*(short *)(*(long *)(param_1 + 0x100) + 0x1a) != 0)) {
    return lVar1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return lVar1;
  }
  if (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) == 0) {
    return lVar1;
  }
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 == 0) {
    return lVar1;
  }
  if (*(short *)(lVar10 + 0x1a) == 0) {
    return lVar1;
  }
  psVar2 = (short *)(lVar10 + 0x1a);
  sVar11 = *(short *)(lVar10 + 0x1a);
  do {
    sVar4 = *psVar2;
    if (sVar4 == sVar11) {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00e70594;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e70594:
      bVar14 = false;
    }
    if (bVar14) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        return lVar1;
      }
      plVar12 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
      local_60 = 0x13;
      local_58 = (long *)0x0;
      local_70 = (undefined8 *)&DAT_a8bd1e5eb87a9f71;
      pcStack_68 = "FieldPokemonRecvHit";
      FUN_00fe4300(local_50,plVar12,&local_70);
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_50[0] == (undefined8 *)0x0) goto LAB_00e70614;
      if (*(short *)((long)local_50[0] + 0x1a) == 0) goto LAB_00e7060c;
      if (local_50[0] == (undefined8 *)0x0) goto LAB_00e70614;
      if (*(short *)((long)local_50[0] + 0x1a) == 0) goto LAB_00e7060c;
      psVar2 = (short *)((long)local_50[0] + 0x1a);
      sVar11 = *(short *)((long)local_50[0] + 0x1a);
      goto LAB_00e70678;
    }
    sVar11 = sVar4;
    if (sVar4 == 0) {
      return lVar1;
    }
  } while( true );
LAB_00e70770:
  if (*plVar9 == 0) goto code_r0x00e70778;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar10 + 0xf0));
        while (*plVar9 == 0) {
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar14) {
            *plVar9 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00e707cc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar14) {
      *plVar9 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00e707cc:
  bVar14 = false;
LAB_00e707d0:
  plVar9 = (long *)FUN_01e16d60(*(undefined8 *)(lVar10 + 0x100),*(undefined8 *)(lVar10 + 0x108));
  if ((*(long **)(lVar10 + 0x108) == plVar9) || (*plVar9 == 0)) {
    plVar9 = (long *)FUN_01e16d60(*(undefined8 *)(lVar10 + 0x138),*(undefined8 *)(lVar10 + 0x140));
    if (*(long **)(lVar10 + 0x140) == plVar9) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*plVar9 != 0) {
        lVar8 = *plVar9 + -0x20;
      }
    }
  }
  else {
    lVar8 = *plVar9 + -0x20;
  }
  if (!bVar14) {
    *(undefined8 *)(lVar10 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar10 + 0xf0));
  }
  if (lVar8 != 0) {
    FUN_00f1b364(&local_70,lVar8,0);
    FUN_01961c04(lVar1,&local_70);
    puVar6 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_70 + 3);
      do {
        sVar11 = *psVar2;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar14) {
          *psVar2 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        piVar3 = (int *)((long)local_70 + 0x1c);
        do {
          iVar7 = *piVar3;
          cVar5 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar14) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
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
      else if (sVar11 == 0) goto LAB_00e7087c;
    }
  }
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
  goto LAB_00e7060c;
code_r0x00e70778:
  cVar5 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar9,0x10);
  if (bVar14) {
    *plVar9 = lVar8;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_00e707cc;
  goto LAB_00e70770;
  while (sVar11 = sVar4, sVar4 != 0) {
LAB_00e70678:
    sVar4 = *psVar2;
    if (sVar4 == sVar11) {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00e7069c;
      bVar14 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00e7069c:
      bVar14 = false;
    }
    if (bVar14) {
      lVar10 = local_50[0][2];
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xe8);
        lVar13 = *plVar9;
        lVar8 = nn::os::GetCurrentThread();
        if (lVar8 == lVar13) {
          bVar14 = true;
          goto LAB_00e707d0;
        }
        lVar8 = nn::os::GetCurrentThread();
        goto LAB_00e70770;
      }
      break;
    }
  }
LAB_00e7060c:
  if (local_50[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_50[0] + 3);
    do {
      sVar11 = *psVar2;
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar14) {
        *psVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar3 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar7 = *piVar3;
        cVar5 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar14) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_70 = (undefined8 *)*local_50[0];
        FUN_00c44438(lVar10 + 0x8040,&local_70);
      }
    }
    else if (sVar11 == 0) {
LAB_00e7087c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_00e70614:
  (**(code **)(*plVar12 + 0x60))(plVar12);
  return lVar1;
}


