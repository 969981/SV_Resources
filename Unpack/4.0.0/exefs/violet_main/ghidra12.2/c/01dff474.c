/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dff474; name: FUN_01dff474
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dff474(undefined8 param_1,long param_2)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong *local_80 [2];
  undefined8 local_70;
  undefined8 local_48 [2];
  ulong local_38;
  
  FUN_00e95abc(local_80);
  if (local_80[0] != (ulong *)0x0) {
    if (*(short *)((long)local_80[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_80[0] + 0x1a);
      sVar11 = *(short *)((long)local_80[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01dff4f0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dff4f0:
          bVar6 = false;
        }
        if (bVar6) {
          plVar12 = (long *)0x0;
          if (local_80[0][2] != 0) {
            plVar12 = (long *)(local_80[0][2] - 0x28);
          }
          goto LAB_01dff518;
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
    plVar12 = (long *)0x0;
LAB_01dff518:
    puVar2 = local_80[0] + 3;
    do {
      sVar11 = (short)*puVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *(short *)puVar2 = sVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar11 == 1) {
      piVar3 = (int *)((long)local_80[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *local_80[0];
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar12 != (long *)0x0) {
      local_48[0] = 0;
      fVar13 = (float)_DAT_03cabe60 * *(float *)((long)plVar12 + 0x274);
      fVar14 = (float)((ulong)_DAT_03cabe60 >> 0x20) * *(float *)((long)plVar12 + 0x274);
      fVar15 = (float)((ulong)param_1 >> 0x20);
      if (((*PTR_DAT_047d8c00 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c00);
      }
      lVar10 = *(long *)PTR_DAT_047d8c08;
      *(long *)PTR_DAT_047d8c10 = lVar10;
      local_38 = local_38 & 0xffffffffff000000;
      uVar9 = FUN_00d6fedc(CONCAT44(fVar15 + fVar14,(float)param_1 + fVar13),
                           CONCAT44(fVar15 - fVar14,(float)param_1 - fVar13),
                           *(undefined8 *)(lVar10 + 0x70),*(undefined4 *)(param_2 + 0x774),local_80,
                           1,&local_38);
      uVar7 = 0;
      if ((uVar9 & 1) != 0) {
        uVar7 = FUN_01dfdae0(local_70,param_2);
      }
      FUN_012c7df0(local_48);
      lVar10 = plVar12[0x13];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      goto LAB_01dff4a4;
    }
  }
  uVar7 = 1;
LAB_01dff4a4:
  return uVar7 & 1;
}


