/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dba020; name: FUN_00dba020
 */


void FUN_00dba020(undefined8 *param_1)

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
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 local_68;
  
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar14 = (undefined8 *)*param_1;
  if (puVar14 == (undefined8 *)0x0) {
    return;
  }
  puVar15 = (undefined8 *)param_1[1];
  puVar16 = puVar14;
  if (puVar15 != puVar14) {
    do {
      puVar15 = puVar15 + -2;
      puVar16 = (undefined8 *)*puVar15;
      if (puVar16 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar16 + 3);
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
          piVar2 = (int *)((long)puVar16 + 0x1c);
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
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_68 = *puVar16;
            FUN_00c44438(lVar13 + 0x8040,&local_68);
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
    } while (puVar15 != puVar14);
    puVar16 = (undefined8 *)*param_1;
  }
  lVar13 = param_1[2];
  plVar4 = (long *)param_1[3];
  param_1[1] = puVar14;
  uVar11 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00dba0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))(plVar4,puVar16,lVar13 - (long)puVar16,8);
    return;
  }
  FUN_00c48fe8(plVar4,puVar16,lVar13 - (long)puVar16,8);
  return;
}


