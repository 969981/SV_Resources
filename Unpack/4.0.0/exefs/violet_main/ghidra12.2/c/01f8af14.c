/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8af14; name: FUN_01f8af14
 */


void FUN_01f8af14(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  lVar15 = *param_1;
  if (lVar15 == 0) {
    return;
  }
  lVar16 = param_1[1];
  lVar14 = lVar15;
  if (lVar16 != lVar15) {
    pbVar12 = PTR_DAT_047d3908;
    do {
      puVar13 = *(undefined8 **)(lVar16 + -0x18);
      if (puVar13 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar13 + 3);
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
          piVar2 = (int *)((long)puVar13 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*pbVar12 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar14 = *(long *)puVar7;
            *(long *)puVar8 = lVar14;
            local_68 = *puVar13;
            FUN_00c44438(lVar14 + 0x8040,&local_68);
            pbVar12 = PTR_DAT_047d3908;
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
      lVar16 = lVar16 + -0x28;
    } while (lVar16 != lVar15);
    lVar14 = *param_1;
  }
  lVar16 = param_1[2];
  plVar4 = (long *)param_1[3];
  param_1[1] = lVar15;
  uVar11 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar11 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01f8afc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar14,lVar16 - lVar14,8);
    return;
  }
  FUN_00c48fe8(plVar4,lVar14,lVar16 - lVar14,8);
  return;
}


