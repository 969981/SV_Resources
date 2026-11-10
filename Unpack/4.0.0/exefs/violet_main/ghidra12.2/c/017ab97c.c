/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ab97c; name: FUN_017ab97c
 */


void FUN_017ab97c(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined4 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  short sVar14;
  undefined8 local_28;
  
  plVar8 = (long *)FUN_017abc40();
  if ((((*plVar8 != 0) && (*(short *)(*plVar8 + 0x1a) != 0)) && (lVar11 = *plVar8, lVar11 != 0)) &&
     (*(short *)(lVar11 + 0x1a) != 0)) {
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
        if (cVar3 != '\0') goto LAB_017aba04;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_017aba04:
        bVar4 = false;
      }
      if (bVar4) {
        lVar11 = *(long *)(lVar11 + 0x10);
        if (lVar11 == 0) {
          return;
        }
        FUN_01e149c0(lVar11 + 0x100,param_1 + (param_2 & 0xffffffff) * 0x40 + 0x2b8);
        puVar9 = (undefined4 *)FUN_01e14aa8(lVar11 + 0x100);
        *puVar9 = 0;
        *(undefined1 *)(param_1 + 0x1c2) = 1;
        puVar5 = PTR_DAT_047d8c28;
        if (((*PTR_DAT_047d8c28 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar7 != 0)) {
          local_28 = FUN_00d44228();
          puVar6 = PTR_DAT_047d8c30;
          FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
          FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c28);
        }
        puVar6 = PTR_DAT_047d8c30;
        plVar8 = *(long **)PTR_DAT_047d8c30;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar7 != 0)) {
          local_28 = FUN_00d44228();
          puVar5 = PTR_DAT_047d8c30;
          FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
          FUN_00100190(PTR_LAB_047d9240,puVar5,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c28);
        }
        plVar13 = *(long **)puVar6;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        plVar10 = *(long **)(param_1 + 0x380);
        *(undefined8 *)(param_1 + 0x380) = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        plVar10 = *(long **)(param_1 + 0x388);
        *(long **)(param_1 + 0x380) = plVar8;
        *(undefined8 *)(param_1 + 0x388) = 0;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))();
        }
        *(long **)(param_1 + 0x388) = plVar13;
        *(undefined4 *)(param_1 + 0x390) = 2;
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
          (**(code **)(*(long *)(lVar11 + -0x28) + 0x50))((long *)(lVar11 + -0x28));
          return;
        }
        if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar14 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


