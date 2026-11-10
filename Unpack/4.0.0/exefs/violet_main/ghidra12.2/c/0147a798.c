/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147a798; name: FUN_0147a798
 */


ulong FUN_0147a798(long param_1)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long *local_38;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar17 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar17;
  puVar8 = PTR_DAT_047d4a88;
  puVar7 = PTR_DAT_047d4a80;
  puVar3 = *(undefined8 **)(lVar17 + 0x1c8);
  for (puVar20 = *(undefined8 **)(lVar17 + 0x1c0); puVar20 != puVar3; puVar20 = puVar20 + 1) {
    plVar22 = (long *)*puVar20;
    plVar15 = (long *)(**(code **)plVar22[5])(plVar22 + 5);
    if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
      uVar16 = FUN_01b5c440();
      *(undefined8 *)puVar8 = uVar16;
      __cxa_guard_release(puVar7);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar8) goto LAB_0147a844;
    }
  }
  plVar22 = (long *)0x0;
LAB_0147a844:
  pbVar19 = *(byte **)(param_1 + 8);
  puVar24 = &DAT_cbf29ce484222645;
  bVar4 = *pbVar19;
  puVar25 = &DAT_cbf29ce484222645;
  if (bVar4 != 0) {
    puVar25 = &DAT_cbf29ce484222645;
    do {
      pbVar19 = pbVar19 + 1;
      puVar25 = (undefined1 *)(((ulong)puVar25 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar19;
    } while (bVar4 != 0);
  }
  if (plVar22[8] == 0) {
    if (plVar22[9] != 0) {
      uVar9 = (**(code **)(*plVar22 + 0xa0))(plVar22);
      uVar10 = (**(code **)(*plVar22 + 0x88))(plVar22);
      if ((uVar9 != 0) && (uVar10 != 0)) {
        uVar18 = 0;
        uVar23 = 0;
        do {
          puVar20 = *(undefined8 **)(plVar22[9] + uVar18 * 8);
          iVar13 = (int)uVar23;
          uVar21 = (ulong)uVar10;
          do {
            if ((undefined1 *)*puVar20 == puVar25) goto LAB_0147aa30;
            uVar23 = (ulong)((int)uVar23 + 1);
            uVar21 = uVar21 - 1;
            puVar20 = puVar20 + 0x2e;
          } while (uVar21 != 0);
          uVar18 = uVar18 + 1;
          uVar23 = (ulong)(iVar13 + uVar10);
        } while (uVar18 != uVar9);
      }
    }
  }
  else {
    uVar10 = (**(code **)(*plVar22 + 0x88))(plVar22);
    if (uVar10 != 0) {
      puVar20 = (undefined8 *)plVar22[8];
      uVar23 = 0;
      do {
        if ((undefined1 *)*puVar20 == puVar25) goto LAB_0147aa30;
        uVar23 = uVar23 + 1;
        puVar20 = puVar20 + 0x2e;
      } while (uVar10 != uVar23);
    }
  }
  if ((char)plVar22[10] == '\0') {
    if ((char)plVar22[0xb] == '\0') {
      *(undefined1 *)(plVar22 + 0xb) = 1;
    }
    uVar18 = plVar22[10];
    goto LAB_0147a9e0;
  }
  uVar10 = *(uint *)((long)plVar22 + 0x54);
  lVar17 = plVar22[8];
  if (lVar17 == 0) {
    if (plVar22[9] != 0) {
      uVar11 = (**(code **)(*plVar22 + 0x88))(plVar22);
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar10 / uVar11;
      }
      uVar12 = (**(code **)(*plVar22 + 0x88))(plVar22);
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar10 / uVar12;
      }
      uVar10 = uVar10 - uVar11 * uVar12;
      lVar17 = *(long *)(plVar22[9] + (ulong)uVar14 * 8);
      goto LAB_0147a964;
    }
  }
  else {
LAB_0147a964:
    if (lVar17 != 0) {
      pbVar19 = *(byte **)(param_1 + 8);
      bVar4 = *pbVar19;
      while (bVar4 != 0) {
        pbVar19 = pbVar19 + 1;
        puVar24 = (undefined1 *)(((ulong)puVar24 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar19;
      }
      *(undefined1 **)(lVar17 + (ulong)uVar10 * 0x170) = puVar24;
    }
  }
  uVar10 = *(int *)((long)plVar22 + 0x54) + 1;
  uVar18 = plVar22[10];
  *(uint *)((long)plVar22 + 0x54) = uVar10;
  iVar13 = (**(code **)(*plVar22 + 0x88))(plVar22);
  uVar14 = (**(code **)(*plVar22 + 0xa0))(plVar22);
  if (iVar13 * (uVar14 & 0xffff) <= uVar10) {
    *(undefined1 *)(plVar22 + 10) = 0;
  }
LAB_0147a9e0:
  uVar23 = uVar18 >> 0x20;
  if ((uVar18 & 1) != 0) {
    FUN_014154e4(&local_38,plVar22);
    FUN_01415150(plVar22,uVar23,&local_38);
    if (local_38 != (long *)0x0) {
      lVar17 = local_38[6];
      psVar1 = (short *)(lVar17 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
LAB_0147aa30:
  return uVar23 & 0xffffffff;
}


