/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d6710; name: FUN_019d6710
 */


void FUN_019d6710(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  float fStack_8c;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  FUN_019d6650(param_1,param_1 + 4,param_1 + 8);
  if (param_1 + 0xc != param_2) {
    lVar14 = 0;
    puVar10 = param_1 + 0xc;
    puVar13 = param_1 + 8;
    do {
      puVar8 = puVar10;
      if (*(float *)((long)puVar13 + 4) < *(float *)((long)puVar8 + 4)) {
        uVar12 = puVar8[1];
        uVar9 = *puVar8;
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_00fa4468(&local_80,puVar8 + 2);
        lVar11 = lVar14;
        do {
          lVar15 = lVar11;
          lVar1 = (long)param_1 + lVar15 + 0x50;
          *(undefined8 *)((long)param_1 + lVar15 + 0x60) =
               *(undefined8 *)((long)param_1 + lVar15 + 0x40);
          *(undefined8 *)((long)param_1 + lVar15 + 0x68) =
               *(undefined8 *)((long)param_1 + lVar15 + 0x48);
          FUN_00fa4468((long)param_1 + lVar15 + 0x70,lVar1);
          if (lVar15 == -0x40) {
            puVar10 = param_1;
            goto LAB_019d67e4;
          }
          fStack_8c = (float)((ulong)uVar9 >> 0x20);
          lVar11 = lVar15 + -0x20;
        } while (*(float *)((long)param_1 + lVar15 + 0x24) < fStack_8c);
        puVar10 = (undefined8 *)((long)param_1 + lVar15 + 0x40);
LAB_019d67e4:
        *puVar10 = uVar9;
        puVar10[1] = uVar12;
        FUN_00fa4468(lVar1,&local_80);
        puVar10 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_80 + 3);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_80 + 0x1c);
            do {
              iVar7 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_68 = *puVar10;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
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
      lVar14 = lVar14 + 0x20;
      puVar10 = puVar8 + 4;
      puVar13 = puVar8;
    } while (puVar8 + 4 != param_2);
  }
  return;
}


