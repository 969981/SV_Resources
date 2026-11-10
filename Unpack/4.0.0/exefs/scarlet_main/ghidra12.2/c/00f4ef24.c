/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4ef24; name: FUN_00f4ef24
 */


undefined8 FUN_00f4ef24(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  void *__src;
  long lVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  
  plVar9 = (long *)FUN_00f4b944();
  lVar11 = *plVar9;
  if ((lVar11 == 0) || (*(short *)(lVar11 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar14 = *(short *)(lVar11 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar14) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00f4efa8;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f4efa8:
      bVar4 = false;
    }
    if (bVar4) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        return 0;
      }
      plVar9 = (long *)FUN_0190bbe8(param_1);
      lVar12 = *plVar9;
      if (lVar12 == 0) {
        uVar16 = 0;
        goto LAB_00f4efdc;
      }
      if (*(short *)(lVar12 + 0x1a) == 0) break;
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar14 = *(short *)(lVar12 + 0x1a);
      goto LAB_00f4f058;
    }
    sVar14 = sVar2;
    if (sVar2 == 0) {
      return 0;
    }
  } while( true );
LAB_00f4f0e0:
  uVar16 = 0;
  goto LAB_00f4efdc;
LAB_00f4f0fc:
  sVar2 = *psVar1;
  if (sVar2 == sVar14) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar14 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00f4f120;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00f4f120:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x00f4f128;
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
LAB_00f4f0b0:
    uVar16 = 0;
  }
  else {
    plVar18 = (long *)(lVar13 + -0x28);
    puVar10 = (undefined8 *)FUN_01e149b8(plVar15);
    plVar9 = (long *)*puVar10;
    uVar16 = 0;
    if (plVar9 != (long *)0x0) {
      lVar17 = plVar9[6];
      if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar14 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
        *(undefined8 *)(lVar17 + 8) = uVar16;
        *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
      }
      else if (sVar14 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar17 = FUN_01fada74(plVar9);
      if (*(char *)(lVar17 + 0x60) == '\0') {
        lVar17 = FUN_01fada80(plVar18);
        __src = (void *)(lVar17 + 0x50);
      }
      else {
        lVar17 = FUN_01fada74(plVar9);
        __src = (void *)(lVar17 + 0x70);
      }
      memcpy((void *)(param_1 + 0x1560),__src,0x4c);
      fVar19 = (float)*(undefined8 *)(lVar11 + 0x138);
      *(ulong *)(param_1 + 0x1568) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1568) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1568) * fVar19);
      *(ulong *)(param_1 + 0x1560) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1560) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1560) * fVar19);
      *(ulong *)(param_1 + 0x1578) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1578) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1578) * fVar19);
      *(ulong *)(param_1 + 0x1570) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1570) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1570) * fVar19);
      *(ulong *)(param_1 + 0x1588) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1588) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1588) * fVar19);
      *(ulong *)(param_1 + 0x1580) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1580) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1580) * fVar19);
      *(ulong *)(param_1 + 0x1598) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1598) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1598) * fVar19);
      *(ulong *)(param_1 + 0x1590) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1590) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1590) * fVar19);
      *(float *)(param_1 + 0x15a8) = *(float *)(param_1 + 0x15a8) * fVar19;
      uVar5 = FUN_016a0274(0x1c0,0);
      uVar7 = FUN_016c8438(plVar15);
      uVar8 = FUN_01e0c66c(plVar15);
      uVar6 = FUN_016a0274(uVar7,uVar8);
      fVar19 = (float)uVar6 / (float)uVar5;
      *(ulong *)(param_1 + 0x1568) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1568) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1568) * fVar19);
      *(ulong *)(param_1 + 0x1560) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1560) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1560) * fVar19);
      *(ulong *)(param_1 + 0x1578) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1578) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1578) * fVar19);
      *(ulong *)(param_1 + 0x1570) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1570) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1570) * fVar19);
      *(ulong *)(param_1 + 0x1588) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1588) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1588) * fVar19);
      *(ulong *)(param_1 + 0x1580) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1580) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1580) * fVar19);
      *(ulong *)(param_1 + 0x1598) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1598) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1598) * fVar19);
      *(ulong *)(param_1 + 0x1590) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1590) >> 0x20) * fVar19,
                    (float)*(undefined8 *)(param_1 + 0x1590) * fVar19);
      *(float *)(param_1 + 0x15a8) = fVar19 * *(float *)(param_1 + 0x15a8);
      lVar17 = plVar9[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar14 == 0) goto LAB_00f4f004;
      uVar16 = 1;
    }
    lVar13 = *(long *)(lVar13 + 8);
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar14 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))(plVar18);
    }
    else if (sVar14 == 0) goto LAB_00f4f004;
  }
  goto LAB_00f4f0b4;
code_r0x00f4f128:
  uVar16 = 0;
  sVar14 = sVar2;
  if (sVar2 == 0) goto LAB_00f4f0b4;
  goto LAB_00f4f0fc;
LAB_00f4f0b4:
  lVar12 = *(long *)(lVar12 + 0x70);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
  }
  else if (sVar14 == 0) goto LAB_00f4f004;
  goto LAB_00f4efdc;
  while (uVar16 = 0, sVar14 = sVar2, sVar2 != 0) {
LAB_00f4f058:
    sVar2 = *psVar1;
    if (sVar2 == sVar14) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar14 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00f4f07c;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f4f07c:
      bVar4 = false;
    }
    if (bVar4) {
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 == 0) goto LAB_00f4f0e0;
      plVar15 = (long *)(lVar12 + -0x28);
      plVar9 = (long *)FUN_01e420f4();
      lVar13 = *plVar9;
      if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) goto LAB_00f4f0b0;
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar14 = *(short *)(lVar13 + 0x1a);
      goto LAB_00f4f0fc;
    }
  }
LAB_00f4efdc:
  lVar12 = *(long *)(lVar11 + 0x70);
  psVar1 = (short *)(lVar12 + 0x1a);
  do {
    sVar14 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar14 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar14 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))();
  }
  else if (sVar14 == 0) {
LAB_00f4f004:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return uVar16;
}


