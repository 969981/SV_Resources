/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1ddf4; name: FUN_01e1ddf4
 */


undefined4 FUN_01e1ddf4(long param_1)

{
  short *psVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined4 unaff_w23;
  undefined4 uVar14;
  undefined4 uVar15;
  long lVar16;
  bool bVar17;
  
  plVar6 = (long *)FUN_01400aa8();
  if ((((*plVar6 != 0) && (*(short *)(*plVar6 + 0x1a) != 0)) && (lVar9 = *plVar6, lVar9 != 0)) &&
     (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar12 = *(short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar12) {
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e1de98;
        bVar17 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1de98:
        bVar17 = false;
      }
      if (bVar17) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 != 0) {
          lVar10 = *(long *)(param_1 + 0x88);
          plVar6 = (long *)(lVar9 + -0x28);
          if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) goto LAB_01e1dec0;
          psVar1 = (short *)(lVar10 + 0x1a);
          sVar12 = *(short *)(lVar10 + 0x1a);
          goto LAB_01e1df1c;
        }
        break;
      }
      sVar12 = sVar2;
    } while (sVar2 != 0);
  }
  goto LAB_01e1de3c;
  while (sVar12 = sVar2, sVar2 != 0) {
LAB_01e1df1c:
    sVar2 = *psVar1;
    if (sVar2 == sVar12) {
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e1df40;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e1df40:
      bVar17 = false;
    }
    if (bVar17) {
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 != 0) {
        lVar11 = *(long *)(param_1 + 0x60);
        plVar13 = (long *)(lVar10 + -0x28);
        if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) goto LAB_01e1df68;
        psVar1 = (short *)(lVar11 + 0x1a);
        bVar17 = true;
        sVar12 = *(short *)(lVar11 + 0x1a);
        goto LAB_01e1dff4;
      }
      break;
    }
  }
  goto LAB_01e1dec0;
LAB_01e1df68:
  bVar17 = true;
  goto LAB_01e1df6c;
LAB_01e1e090:
  if (*plVar8 == 0) goto code_r0x01e1e098;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xf0));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar17) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01e1e0ec;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar17) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01e1e0ec:
  bVar17 = false;
LAB_01e1e0f0:
  plVar8 = (long *)FUN_01990520(*(undefined8 *)(lVar11 + 0x100),*(undefined8 *)(lVar11 + 0x108));
  if ((*(long **)(lVar11 + 0x108) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_01990520(*(undefined8 *)(lVar11 + 0x138),*(undefined8 *)(lVar11 + 0x140));
    if (*(long **)(lVar11 + 0x140) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar17) {
    *(undefined8 *)(lVar11 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xf0));
  }
  uVar5 = FUN_01e1c638(lVar7);
  if (uVar5 < 0x19) {
    uVar15 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar5 * 4);
  }
  else {
    uVar15 = 0;
  }
  FUN_01e1e318(param_1,1,uVar14,1);
  unaff_w23 = FUN_0195e1cc(plVar6,uVar14,uVar15);
LAB_01e1e1a0:
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))();
  bVar17 = false;
  goto LAB_01e1df6c;
code_r0x01e1e098:
  cVar4 = '\x01';
  bVar17 = (bool)ExclusiveMonitorPass(plVar8,0x10);
  if (bVar17) {
    *plVar8 = lVar7;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_01e1e0ec;
  goto LAB_01e1e090;
  while (sVar12 = sVar2, sVar2 != 0) {
LAB_01e1dff4:
    sVar2 = *psVar1;
    if (sVar2 == sVar12) {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar3) {
        *psVar1 = sVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_01e1e018;
      bVar3 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01e1e018:
      bVar3 = false;
    }
    if (bVar3) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) goto LAB_01e1df68;
      if (*(int *)(param_1 + 0xac) == 2) {
        unaff_w23 = *(undefined4 *)(param_1 + 0x40);
        goto LAB_01e1e1a0;
      }
      uVar5 = FUN_01e1c638(plVar13);
      if (uVar5 < 0x19) {
        uVar14 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar5 * 4);
      }
      else {
        uVar14 = 0;
      }
      plVar8 = (long *)(lVar11 + 0xe8);
      lVar16 = *plVar8;
      lVar7 = nn::os::GetCurrentThread();
      if (lVar7 != lVar16) {
        lVar7 = nn::os::GetCurrentThread();
        goto LAB_01e1e090;
      }
      bVar17 = true;
      goto LAB_01e1e0f0;
    }
  }
LAB_01e1df6c:
  lVar10 = *(long *)(lVar10 + 0x70);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
    if (bVar17) goto LAB_01e1dec0;
LAB_01e1df94:
    bVar17 = false;
  }
  else {
    if (sVar12 == 0) goto LAB_01e1df9c;
    if (!bVar17) goto LAB_01e1df94;
LAB_01e1dec0:
    bVar17 = true;
  }
  lVar9 = *(long *)(lVar9 + 8);
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar3) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*plVar6 + 0x50))(plVar6);
  }
  else if (sVar12 == 0) {
LAB_01e1df9c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (bVar17) {
LAB_01e1de3c:
    unaff_w23 = *(undefined4 *)(param_1 + 0x40);
  }
  return unaff_w23;
}


