/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f4c600; name: FUN_00f4c600
 */


undefined8 FUN_00f4c600(long param_1)

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
  char *pcVar11;
  void *__src;
  long lVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  float fVar20;
  
  plVar9 = (long *)FUN_00f4ca44();
  lVar12 = *plVar9;
  if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar15 = *(short *)(lVar12 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar15) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00f4c684;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f4c684:
      bVar4 = false;
    }
    if (bVar4) {
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        return 0;
      }
      plVar9 = (long *)FUN_00f4958c(param_1);
      lVar13 = *plVar9;
      if (lVar13 == 0) {
        uVar17 = 0;
        goto LAB_00f4c6b8;
      }
      if (*(short *)(lVar13 + 0x1a) == 0) break;
      psVar1 = (short *)(lVar13 + 0x1a);
      sVar15 = *(short *)(lVar13 + 0x1a);
      goto LAB_00f4c734;
    }
    sVar15 = sVar2;
    if (sVar2 == 0) {
      return 0;
    }
  } while( true );
LAB_00f4c7bc:
  uVar17 = 0;
  goto LAB_00f4c6b8;
LAB_00f4c7d8:
  sVar2 = *psVar1;
  if (sVar2 == sVar15) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar15 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00f4c7fc;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00f4c7fc:
    bVar4 = false;
  }
  if (!bVar4) goto code_r0x00f4c804;
  lVar14 = *(long *)(lVar14 + 0x10);
  if (lVar14 == 0) {
LAB_00f4c78c:
    uVar17 = 0;
  }
  else {
    plVar18 = (long *)(lVar14 + -0x28);
    puVar10 = (undefined8 *)FUN_01e149b8(plVar16);
    plVar9 = (long *)*puVar10;
    uVar17 = 0;
    if (plVar9 != (long *)0x0) {
      lVar19 = plVar9[6];
      if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar15 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar15 == 0) {
        uVar17 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        *(undefined8 *)(lVar19 + 8) = uVar17;
        *(undefined4 *)(lVar19 + 0x1c) = 0xfffffffe;
      }
      else if (sVar15 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      pcVar11 = (char *)FUN_01fada74(plVar9);
      if (*pcVar11 == '\0') {
        __src = (void *)FUN_01fada80(plVar18);
      }
      else {
        lVar19 = FUN_01fada74(plVar9);
        __src = (void *)(lVar19 + 0x10);
      }
      memcpy((void *)(param_1 + 0x110),__src,0x4c);
      fVar20 = (float)*(undefined8 *)(lVar12 + 0x138);
      *(ulong *)(param_1 + 0x118) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x118) * fVar20);
      *(ulong *)(param_1 + 0x110) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x110) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x110) * fVar20);
      *(ulong *)(param_1 + 0x128) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x128) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x128) * fVar20);
      *(ulong *)(param_1 + 0x120) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x120) * fVar20);
      *(ulong *)(param_1 + 0x138) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x138) * fVar20);
      *(ulong *)(param_1 + 0x130) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x130) * fVar20);
      *(ulong *)(param_1 + 0x148) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x148) * fVar20);
      *(ulong *)(param_1 + 0x140) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x140) * fVar20);
      *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) * fVar20;
      uVar5 = FUN_016a0274(0x1c0,0);
      uVar7 = FUN_016c8438(plVar16);
      uVar8 = FUN_01e0c66c(plVar16);
      uVar6 = FUN_016a0274(uVar7,uVar8);
      fVar20 = (float)uVar6 / (float)uVar5;
      *(ulong *)(param_1 + 0x118) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x118) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x118) * fVar20);
      *(ulong *)(param_1 + 0x110) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x110) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x110) * fVar20);
      *(ulong *)(param_1 + 0x128) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x128) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x128) * fVar20);
      *(ulong *)(param_1 + 0x120) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x120) * fVar20);
      *(ulong *)(param_1 + 0x138) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x138) * fVar20);
      *(ulong *)(param_1 + 0x130) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x130) * fVar20);
      *(ulong *)(param_1 + 0x148) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x148) * fVar20);
      *(ulong *)(param_1 + 0x140) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20) * fVar20,
                    (float)*(undefined8 *)(param_1 + 0x140) * fVar20);
      *(float *)(param_1 + 0x158) = fVar20 * *(float *)(param_1 + 0x158);
      lVar19 = plVar9[6];
      psVar1 = (short *)(lVar19 + 0x1a);
      do {
        sVar15 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar15 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar15 == 0) goto LAB_00f4c6e0;
      uVar17 = 1;
    }
    lVar14 = *(long *)(lVar14 + 8);
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar18 + 0x50))(plVar18);
    }
    else if (sVar15 == 0) goto LAB_00f4c6e0;
  }
  goto LAB_00f4c790;
code_r0x00f4c804:
  uVar17 = 0;
  sVar15 = sVar2;
  if (sVar2 == 0) goto LAB_00f4c790;
  goto LAB_00f4c7d8;
LAB_00f4c790:
  lVar13 = *(long *)(lVar13 + 0x70);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar16 + 0x50))(plVar16);
  }
  else if (sVar15 == 0) goto LAB_00f4c6e0;
  goto LAB_00f4c6b8;
  while (uVar17 = 0, sVar15 = sVar2, sVar2 != 0) {
LAB_00f4c734:
    sVar2 = *psVar1;
    if (sVar2 == sVar15) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_00f4c758;
      bVar4 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f4c758:
      bVar4 = false;
    }
    if (bVar4) {
      lVar13 = *(long *)(lVar13 + 0x10);
      if (lVar13 == 0) goto LAB_00f4c7bc;
      plVar16 = (long *)(lVar13 + -0x28);
      plVar9 = (long *)FUN_01e420f4();
      lVar14 = *plVar9;
      if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) goto LAB_00f4c78c;
      psVar1 = (short *)(lVar14 + 0x1a);
      sVar15 = *(short *)(lVar14 + 0x1a);
      goto LAB_00f4c7d8;
    }
  }
LAB_00f4c6b8:
  lVar13 = *(long *)(lVar12 + 0x70);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar15 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
  }
  else if (sVar15 == 0) {
LAB_00f4c6e0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return uVar17;
}


