/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3e578; name: FUN_02a3e578
 */


undefined4 FUN_02a3e578(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  long *local_38;
  
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02a3e5e0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02a3e5e0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return 0xbf800000;
        }
        plVar9 = (long *)(lVar6 + -0x28);
        plVar10 = (long *)(lVar6 + 0x6b8);
        if ((*(char *)(lVar6 + 0x6c8) == '\0') && (*(char *)(lVar6 + 0x6cc) == '\0')) {
          FUN_00cebc38(&local_38,0xbf800000,plVar9);
          plVar10 = local_38 + 0x8f;
          if ((char)local_38[0x91] == '\0') {
            if ((((*(char *)((long)local_38 + 0x48c) == '\0') &&
                 (plVar10 = local_38 + 0x8c, (char)local_38[0x8e] == '\0')) &&
                (*(char *)((long)local_38 + 0x474) == '\0')) &&
               (plVar10 = (long *)local_38[0x8b], plVar10 == (long *)0x0)) {
              if (((*PTR_DAT_047d4df8 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar5 != 0)) {
                FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d4df8);
              }
              lVar7 = *(long *)PTR_DAT_047d4e00;
              *(long *)PTR_DAT_047d4e08 = lVar7;
              plVar10 = (long *)(lVar7 + 0xb140);
            }
          }
          else if (local_38 == (long *)0x0) goto LAB_02a3e664;
          (**(code **)(*local_38 + 0x60))(local_38);
        }
LAB_02a3e664:
        uVar11 = (undefined4)*plVar10;
        lVar6 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
          return uVar11;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.",uVar11);
        }
        return uVar11;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return 0xbf800000;
}


