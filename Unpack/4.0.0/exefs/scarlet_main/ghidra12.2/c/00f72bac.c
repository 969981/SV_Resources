/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f72bac; name: FUN_00f72bac
 */


void FUN_00f72bac(undefined8 *param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  
  if ((param_3 & 0xffffffff) < (ulong)(*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 3)
     ) {
    plVar13 = *(long **)(*(long *)(param_2 + 0x120) + (param_3 & 0xffffffff) * 8);
    if (plVar13 != (long *)0x0) {
      lVar14 = plVar13[6];
      if (*(long *)(lVar14 + 0x10) == 0) {
LAB_00f72d9c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar12;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_00f72dbc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    puVar11 = (undefined8 *)(**(code **)plVar13[5])(plVar13 + 5);
    if (((*PTR_DAT_047d90e0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d90e0), puVar9 = PTR_DAT_047d90f8, iVar10 != 0)) {
      if (((*PTR_DAT_047d90f0 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d90f0), puVar8 = PTR_DAT_047d3ab0, iVar10 != 0)) {
        if (((*PTR_DAT_047d3aa8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3aa8), puVar6 = PTR_DAT_047d39b8, iVar10 != 0))
        {
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar7 = PTR_DAT_047d39c8, iVar10 != 0
             )) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar10 != 0)) {
              *(undefined8 *)puVar7 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar6 = puVar7;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(PTR_DAT_047d3aa8);
        }
        *(undefined **)puVar9 = puVar8;
        __cxa_guard_release(PTR_DAT_047d90f0);
      }
      *(undefined **)PTR_DAT_047d90e8 = puVar9;
      __cxa_guard_release(PTR_DAT_047d90e0);
    }
    if (puVar11 != (undefined8 *)0x0) {
LAB_00f72c44:
      if (puVar11 != (undefined8 *)PTR_DAT_047d90e8) goto LAB_00f72d1c;
      *param_1 = plVar13;
      lVar14 = plVar13[6];
      if (*(long *)(lVar14 + 0x10) != 0) {
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          bVar4 = false;
          *(undefined8 *)(lVar14 + 8) = uVar12;
          *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
        }
        else {
          if (sVar2 == -1) goto LAB_00f72dbc;
          bVar4 = false;
        }
        goto LAB_00f72c88;
      }
      goto LAB_00f72d9c;
    }
LAB_00f72d24:
    bVar4 = true;
LAB_00f72c88:
    if (plVar13 != (long *)0x0) {
      lVar14 = plVar13[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (!bVar4) {
      return;
    }
  }
  *param_1 = 0;
  return;
LAB_00f72d1c:
  puVar11 = (undefined8 *)*puVar11;
  if (puVar11 == (undefined8 *)0x0) goto LAB_00f72d24;
  goto LAB_00f72c44;
}


