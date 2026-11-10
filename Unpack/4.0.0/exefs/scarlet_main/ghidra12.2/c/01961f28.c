/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01961f28; name: FUN_01961f28
 */


void FUN_01961f28(undefined1 *param_1,long param_2,int param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  ulong uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  uVar8 = *(ulong *)(param_2 + 0x80);
  lVar10 = *(long *)(param_2 + 0x48);
  plVar12 = (long *)(lVar10 + (uVar8 / 0x55) * 8);
  if (*(long *)(param_2 + 0x50) == lVar10) {
    puVar13 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(long *)(param_2 + 0x88) + uVar8;
    puVar13 = (undefined8 *)(*(long *)(lVar10 + (uVar8 / 0x55) * 8) + (uVar8 % 0x55) * 0x30);
    puVar11 = (undefined8 *)(*(long *)(lVar10 + (uVar3 / 0x55) * 8) + (uVar3 % 0x55) * 0x30);
  }
  if (puVar11 != puVar13) {
    if ((undefined1 *)*param_4 == &DAT_cbf29ce484222645) {
      if (param_3 != -1) {
        do {
          if (*(int *)(puVar13 + 3) == param_3) break;
          puVar13 = puVar13 + 6;
          if ((long)puVar13 - *plVar12 == 0xff0) {
            plVar12 = plVar12 + 1;
            puVar13 = (undefined8 *)*plVar12;
          }
        } while (puVar11 != puVar13);
      }
    }
    else {
      do {
        if ((param_3 == -1 || *(int *)(puVar13 + 3) == param_3) &&
           ((undefined1 *)*param_4 == (undefined1 *)puVar13[5])) break;
        puVar13 = puVar13 + 6;
        if ((long)puVar13 - *plVar12 == 0xff0) {
          plVar12 = plVar12 + 1;
          puVar13 = (undefined8 *)*plVar12;
        }
      } while (puVar11 != puVar13);
    }
  }
  if (*(long *)(param_2 + 0x50) == lVar10) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uVar8 = *(long *)(param_2 + 0x88) + uVar8;
    puVar11 = (undefined8 *)(*(long *)(lVar10 + (uVar8 / 0x55) * 8) + (uVar8 % 0x55) * 0x30);
  }
  if (puVar11 == puVar13) {
    *param_1 = 0;
  }
  else {
    uVar9 = *puVar13;
    local_60 = 0;
    local_68 = (undefined8 *)0x0;
    FUN_00d0a71c(&local_68,puVar13 + 1);
    local_58 = puVar13[3];
    local_50 = puVar13[4];
    uStack_48 = puVar13[5];
    FUN_01962210(param_2 + 0x40,plVar12,puVar13);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 8) = uVar9;
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00d0a34c(param_1 + 0x10,&local_68);
    puVar13 = local_68;
    *(undefined8 *)(param_1 + 0x28) = local_50;
    *(undefined8 *)(param_1 + 0x30) = uStack_48;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x20) = local_58;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar13;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


