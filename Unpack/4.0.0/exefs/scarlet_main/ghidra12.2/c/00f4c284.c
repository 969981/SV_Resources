/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4c284; name: FUN_00f4c284
 */


uint FUN_00f4c284(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  
  plVar6 = (long *)FUN_00f4ca44();
  lVar10 = *plVar6;
  if ((lVar10 == 0) || (*(short *)(lVar10 + 0x1a) == 0)) {
LAB_00f4c2ac:
    uVar5 = 0;
  }
  else {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar13 = *(short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar13) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_00f4c300;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f4c300:
        bVar4 = false;
      }
      if (bVar4) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) goto LAB_00f4c2ac;
        plVar6 = (long *)FUN_00f4958c(param_1);
        lVar11 = *plVar6;
        if (lVar11 == 0) {
          uVar5 = 0;
          goto LAB_00f4c334;
        }
        if (*(short *)(lVar11 + 0x1a) == 0) goto LAB_00f4c434;
        psVar1 = (short *)(lVar11 + 0x1a);
        sVar13 = *(short *)(lVar11 + 0x1a);
        goto LAB_00f4c3ac;
      }
      uVar5 = 0;
      sVar13 = sVar2;
    } while (sVar2 != 0);
  }
  goto LAB_00f4c2b0;
LAB_00f4c434:
  uVar5 = 0;
  goto LAB_00f4c334;
LAB_00f4c450:
  sVar2 = *psVar1;
  if (sVar2 == sVar13) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar13 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00f4c474;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00f4c474:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x00f4c47c;
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
LAB_00f4c404:
    uVar5 = 0;
  }
  else {
    plVar16 = (long *)(lVar12 + -0x28);
    puVar7 = (undefined8 *)FUN_01e149b8(plVar14);
    plVar6 = (long *)*puVar7;
    if (plVar6 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      lVar15 = plVar6[6];
      if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar13 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        *(undefined8 *)(lVar15 + 8) = uVar9;
        *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
      }
      else if (sVar13 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      uVar8 = FUN_01fada88(plVar16);
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_01e1c630(plVar6);
      }
      lVar15 = plVar6[6];
      psVar1 = (short *)(lVar15 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar15 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))(plVar6);
      }
      else if (sVar13 == 0) goto LAB_00f4c35c;
    }
    lVar12 = *(long *)(lVar12 + 8);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar13 == 0) goto LAB_00f4c35c;
  }
  goto LAB_00f4c408;
code_r0x00f4c47c:
  uVar5 = 0;
  sVar13 = sVar2;
  if (sVar2 == 0) goto LAB_00f4c408;
  goto LAB_00f4c450;
LAB_00f4c408:
  lVar11 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*plVar14 + 0x50))(plVar14);
  }
  else if (sVar13 == 0) goto LAB_00f4c35c;
  goto LAB_00f4c334;
  while( true ) {
    uVar5 = 0;
    sVar13 = sVar2;
    if (sVar2 == 0) break;
LAB_00f4c3ac:
    sVar2 = *psVar1;
    if (sVar2 == sVar13) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00f4c3d0;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f4c3d0:
      bVar4 = false;
    }
    if (bVar4) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) goto LAB_00f4c434;
      plVar14 = (long *)(lVar11 + -0x28);
      plVar6 = (long *)FUN_01e420f4();
      lVar12 = *plVar6;
      if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) goto LAB_00f4c404;
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar13 = *(short *)(lVar12 + 0x1a);
      goto LAB_00f4c450;
    }
  }
LAB_00f4c334:
  lVar11 = *(long *)(lVar10 + 0x70);
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar13 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
    (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
  }
  else if (sVar13 == 0) {
LAB_00f4c35c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_00f4c2b0:
  return uVar5 & 1;
}


