/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df7ce8; name: FUN_01df7ce8
 */


void FUN_01df7ce8(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58 [3];
  long *local_40;
  undefined8 local_38;
  
  plVar8 = (long *)FUN_01df7498();
  lVar10 = *plVar8;
  if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar6 = *(short *)(lVar10 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar6) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01df7d64;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01df7d64:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar10 + 0x10) == 0) {
          return;
        }
        plVar8 = (long *)(*(long *)(lVar10 + 0x10) + -0x28);
        puVar9 = (undefined8 *)FUN_01df7f84(plVar8);
        uVar12 = *puVar9;
        FUN_00d8fb98(local_58,&DAT_045435b0);
        sVar6 = FUN_00c8ea20(uVar12,local_58);
        if (local_40 != (long *)0x0) {
          (**(code **)(*local_40 + 0x20))();
        }
        if (-1 < sVar6) {
          fVar13 = (float)param_1 / *(float *)(param_2 + 0x40);
          puVar9 = (undefined8 *)FUN_01df7f84(plVar8);
          FUN_00cc3788(CONCAT44(fVar13,fVar13),*puVar9,(int)sVar6);
          local_78 = 0xfbd1483c8ad31142;
          pcStack_70 = "SetSize";
          local_68 = 7;
          local_60 = (long *)0x0;
          FUN_01751920(local_58,param_2 + 0x48,&local_78,1,0);
          lVar10 = 0;
          if (local_58[0] != (undefined8 *)0x0) {
            lVar10 = 0;
            if (local_58[0][2] != 0) {
              lVar10 = local_58[0][2] + -0x28;
            }
            psVar1 = (short *)(local_58[0] + 3);
            do {
              sVar6 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar6 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar6 == 1) {
              piVar2 = (int *)((long)local_58[0] + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_38 = *local_58[0];
                FUN_00c44438(lVar11 + 0x8040,&local_38);
              }
            }
            else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          if (local_60 != (long *)0x0) {
            (**(code **)(*local_60 + 0x20))();
          }
          if (lVar10 != 0) {
            FUN_01df7f90(param_1,lVar10);
          }
        }
        (**(code **)(*plVar8 + 0x60))(plVar8);
        return;
      }
      sVar6 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


