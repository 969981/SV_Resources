/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f0ac0; name: FUN_026f0ac0
 */


void FUN_026f0ac0(long param_1,long *param_2,int param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_78;
  long local_70;
  undefined2 local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_3 == 0x18) {
    lVar11 = param_2[2];
    plVar12 = *(long **)(param_1 + 0x8068);
    plVar4 = *(long **)(param_1 + 0x8070);
    if (plVar12 == plVar4) {
LAB_026f0b48:
      if (plVar12 != plVar4) {
        lVar10 = plVar12[2];
        if ((((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) &&
            (local_50 = param_4, lVar10 = FUN_0265dff4(lVar10 + 0xe0,&local_78), lVar10 != 0)) &&
           (uVar9 = FUN_026d5e08(), (uVar9 & 1) != 0)) {
          if ((int)lVar11 == 0) {
            local_68 = (undefined2)plVar12[1];
            local_70 = *plVar12;
            local_60 = (undefined8 *)0x0;
            uStack_58 = 0;
            local_78 = param_4;
            FUN_00ca1a48(&local_60,plVar12 + 2);
            FUN_026f0cb4(param_1,&local_78);
            puVar7 = local_60;
            if (local_60 != (undefined8 *)0x0) {
              psVar1 = (short *)(local_60 + 3);
              do {
                sVar3 = *psVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar6) {
                  *psVar1 = sVar3 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar3 == 1) {
                piVar2 = (int *)((long)local_60 + 0x1c);
                do {
                  iVar8 = *piVar2;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar6) {
                    *piVar2 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar8 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar11 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar11;
                  local_48 = *puVar7;
                  FUN_00c44438(lVar11 + 0x8040,&local_48);
                }
              }
              else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          else {
            FUN_026f0d10(lVar10,&local_50);
          }
        }
      }
    }
    else {
      do {
        if ((*plVar12 == *param_2) && ((short)plVar12[1] == (short)param_2[1])) goto LAB_026f0b48;
        plVar12 = plVar12 + 4;
      } while (plVar4 != plVar12);
    }
  }
  return;
}


