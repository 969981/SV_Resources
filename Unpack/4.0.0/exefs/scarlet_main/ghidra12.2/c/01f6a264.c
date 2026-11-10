/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6a264; name: FUN_01f6a264
 */


void FUN_01f6a264(long param_1,long param_2,undefined4 param_3)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_68 [4];
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  uVar8 = FUN_019c7a40(param_2);
  if (((uVar8 & 1) != 0) && (sVar6 = FUN_01419468(param_2), sVar6 == 2)) {
    lVar9 = FUN_019965ec(param_2);
    lVar10 = FUN_01dcd15c(param_2,0);
    if (lVar10 == lVar9) {
      *(long *)(param_1 + 0x78) = lVar9;
    }
    else {
      *(long *)(param_1 + 0x80) = lVar10;
    }
    lVar10 = FUN_01dcd15c(param_2,1);
    if (lVar10 == lVar9) {
      *(long *)(param_1 + 0x78) = lVar9;
    }
    else {
      lVar9 = *(long *)(param_1 + 0x78);
      *(long *)(param_1 + 0x80) = lVar10;
    }
    if (lVar9 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x80) == 0) {
      return;
    }
    bVar5 = FUN_00ea2ae8(param_2);
    *(byte *)(param_1 + 0x70) = bVar5 & 1;
    FUN_01f6b2ac(local_68,param_1);
    FUN_01e66630(local_48,param_2,param_3,local_68);
    FUN_0178f674(param_1 + 0x60,local_48);
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
      do {
        sVar6 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar6 == 1) {
        piVar2 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *local_48[0];
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar6 == 0) goto LAB_01f6a3bc;
    }
    if (local_68[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68[0] + 3);
      do {
        sVar6 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar6 == 1) {
        piVar2 = (int *)((long)local_68[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_38 = *local_68[0];
          FUN_00c44438(lVar9 + 0x8040,&local_38);
        }
      }
      else if (sVar6 == 0) {
LAB_01f6a3bc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    FUN_00d8e6c4(param_1 + 0x48,param_2);
    FUN_01c45238(param_1 + 0x58,*(undefined8 *)(param_2 + 0x10));
  }
  return;
}


