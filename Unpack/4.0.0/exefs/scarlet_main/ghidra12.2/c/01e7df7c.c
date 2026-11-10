/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7df7c; name: FUN_01e7df7c
 */


void FUN_01e7df7c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long local_88;
  long lStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_78 = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  local_88 = param_2;
  lStack_80 = param_1;
  local_70 = param_6;
  if (puVar11 == (undefined8 *)0x0) {
    lVar8 = param_2;
  }
  else {
    lVar8 = FUN_0175c950(param_1,puVar11,param_4,param_2);
    local_78 = (lVar8 - param_2 >> 4) * -0x71c71c71c71c71c7;
  }
  lVar13 = local_78;
  FUN_01e7e1d4(&local_70,param_1,lVar8,param_5);
  lVar8 = lVar8 + param_5 * 0x90;
  local_78 = lVar13 + param_5;
  if (puVar11 != (undefined8 *)0x0) {
    lVar8 = FUN_0175c950(param_1,param_4,puVar11 + *(long *)(param_1 + 0x28) * 0x12,lVar8);
    puVar6 = PTR_DAT_047d3918;
    lVar13 = *(long *)(param_1 + 0x28);
    while (lVar13 != 0) {
      puVar12 = (undefined8 *)puVar11[0x10];
      if (puVar12 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar12 + 3);
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
          piVar2 = (int *)((long)puVar12 + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar6 = lVar10;
            local_68 = *puVar12;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
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
      pcVar9 = (code *)puVar11[1];
      lVar13 = lVar13 + -1;
      if (pcVar9 != (code *)0x0) {
        puVar11[2] = 0;
        puVar11[3] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        (*pcVar9)(puVar11 + 4);
      }
      puVar11 = puVar11 + 0x12;
    }
    FUN_0175c6f4(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = (lVar8 - param_2 >> 4) * -0x71c71c71c71c71c7;
  local_88 = 0;
  FUN_017591ec(&local_88);
  return;
}


