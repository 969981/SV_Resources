/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec8864; name: FUN_01ec8864
 */


void FUN_01ec8864(undefined1 *param_1,long param_2,undefined8 *param_3)

{
  ulong *puVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int local_48;
  undefined4 uStack_44;
  ulong local_38;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar9 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar9;
  if ((((lVar9 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
      (uVar8 = FUN_00e66ab4(*(long *)PTR_DAT_047d0a08,*param_3), (uVar8 & 1) != 0)) &&
     ((*(long *)(lVar9 + 0x70) != 0 && (*(long *)PTR_DAT_047d0860 != 0)))) {
    local_38 = CONCAT71(local_38._1_7_,0xfd);
    FUN_00f42ddc(&local_48,*(long *)PTR_DAT_047d0860,&local_38,*param_3);
    if ((((byte)local_38 == 0xfd) ||
        ((local_48 != 0 || (DAT_045dfcb0 < (byte)local_38 || DAT_045dfcb0 == (byte)local_38)))) ||
       (*(char *)(param_2 + (local_38 & 0xff) + 0x206) == '\x02')) goto LAB_01ec88e4;
    FUN_0175164c(&local_48,param_3);
    if (CONCAT44(uStack_44,local_48) == 0) goto LAB_01ec88e4;
    puVar6 = (ulong *)CONCAT44(uStack_44,local_48);
    if (*(short *)(CONCAT44(uStack_44,local_48) + 0x1a) == 0) {
      if (puVar6 == (ulong *)0x0) goto LAB_01ec88e4;
    }
    else {
      if (puVar6 == (ulong *)0x0) goto LAB_01ec88e4;
      if (puVar6[2] != 0) {
        lVar9 = (**(code **)(*(long *)(puVar6[2] - 0x28) + 0x68))();
        uVar8 = *(ulong *)(lVar9 + 0x38);
        uVar10 = *(undefined8 *)(lVar9 + 0x30);
        *param_1 = 1;
        *(ulong *)(param_1 + 0x18) = uVar8 & 0xffffffff;
        *(undefined8 *)(param_1 + 0x10) = uVar10;
        puVar6 = (ulong *)CONCAT44(uStack_44,local_48);
        if (puVar6 == (ulong *)0x0) {
          return;
        }
        puVar1 = puVar6 + 3;
        do {
          sVar3 = (short)*puVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar5) {
            *(short *)puVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar6 + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == -1) {
            return;
          }
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_38);
          return;
        }
        if (sVar3 != 0) {
          return;
        }
        goto LAB_01ec89f0;
      }
    }
    puVar1 = puVar6 + 3;
    do {
      sVar3 = (short)*puVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *(short *)puVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar6 + 0x1c);
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
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_38 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_01ec89f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
LAB_01ec88e4:
  *param_1 = 0;
  return;
}


