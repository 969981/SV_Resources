/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfb000; name: FUN_01dfb000
 */


void FUN_01dfb000(undefined1 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  long local_50;
  undefined8 local_8;
  
  if (*(char *)(param_2 + 0x5c0) == '\0') {
    *param_1 = 0;
  }
  else {
    FUN_01950664(auStack_58,param_2 + 0x5c8);
    uVar4 = *(undefined8 *)(local_50 + -0x20);
    uVar5 = *(undefined8 *)(local_50 + -0x18);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00fa4838(&local_70,local_50 + -0x10);
    puVar8 = local_70;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar9 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_8 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_8);
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
    FUN_0193777c(auStack_58);
  }
  return;
}


