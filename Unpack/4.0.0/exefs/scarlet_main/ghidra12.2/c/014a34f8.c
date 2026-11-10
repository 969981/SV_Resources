/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a34f8; name: FUN_014a34f8
 */


void FUN_014a34f8(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *local_60 [2];
  undefined8 local_38;
  
  puVar7 = PTR_DAT_047d6528;
  puVar6 = PTR_DAT_047d6520;
  lVar11 = *(long *)(param_2 + 0x388);
joined_r0x014a3518:
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_014a3588;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014a3588:
        bVar5 = false;
      }
      if (bVar5) goto LAB_014a35a4;
      sVar12 = sVar3;
      if (sVar3 == 0) break;
    } while( true );
  }
LAB_014a351c:
  *param_1 = 0;
  param_1[1] = 0;
  return;
LAB_014a35a4:
  puVar15 = *(undefined8 **)(lVar11 + 0x10);
  if (puVar15 == (undefined8 *)0x0) goto LAB_014a351c;
  plVar13 = puVar15 + -5;
  plVar9 = (long *)(**(code **)*puVar15)(puVar15);
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
    uVar10 = FUN_0151c130();
    *(undefined8 *)puVar7 = uVar10;
    __cxa_guard_release(puVar6);
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9 == (long *)puVar7) {
      (**(code **)(puVar15[-5] + 0x18))(local_60,plVar13);
      *param_1 = 0;
      param_1[1] = 0;
      puVar14 = local_60[0];
      if ((undefined8 *)local_60[0][2] == puVar15) {
        FUN_00cbc6dc(param_1,local_60);
        puVar14 = local_60[0];
      }
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
        do {
          sVar12 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar12 == 1) {
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *puVar14;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      (**(code **)(*plVar13 + 0x60))(plVar13);
      return;
    }
  }
  (**(code **)(*plVar13 + 0x60))(plVar13);
  lVar11 = *(long *)(param_2 + 0x388);
  goto joined_r0x014a3518;
}


