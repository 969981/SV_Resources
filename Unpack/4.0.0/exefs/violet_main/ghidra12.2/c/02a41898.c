/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a41898; name: FUN_02a41898
 */


void FUN_02a41898(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  lVar14 = param_1[1];
  lVar16 = param_1[2];
  while (lVar16 != lVar14) {
    param_1[2] = lVar16 + -0x48;
    FUN_00cb786c(lVar16 + -0x38);
    puVar13 = *(undefined8 **)(lVar16 + -0x48);
    if (puVar13 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar13 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar13 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          lVar16 = *(long *)puVar7;
          *(long *)puVar8 = lVar16;
          local_68 = *puVar13;
          FUN_00c44438(lVar16 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar16 = param_1[2];
  }
  lVar14 = *param_1;
  if (lVar14 == 0) {
    return;
  }
  lVar16 = param_1[3];
  plVar15 = *(long **)param_1[4];
  uVar11 = (**(code **)(*plVar15 + 0xf8))(plVar15);
  if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02a41a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar14,lVar16 - lVar14,8);
    return;
  }
  FUN_00c48fe8(plVar15,lVar14,lVar16 - lVar14,8);
  return;
}


