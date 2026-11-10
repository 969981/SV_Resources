/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d3ee4; name: FUN_018d3ee4
 */


void FUN_018d3ee4(uint param_1)

{
  char *pcVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long local_38 [2];
  undefined8 local_28 [2];
  uint local_14;
  
  if ((DAT_04839cb0 & 1) == 0) {
    local_14 = param_1;
    iVar7 = __cxa_guard_acquire(&DAT_04839cb0);
    param_1 = local_14;
    if (iVar7 != 0) {
      FUN_00100190(&LAB_00b2080c,&DAT_04839ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839cb0);
      param_1 = local_14;
    }
  }
  lVar8 = DAT_04839ca0;
  DAT_04839c98 = DAT_04839ca0;
  if (DAT_04839ca0 == 0) {
    return;
  }
  pcVar1 = (char *)(DAT_04839ca0 + 0x20a);
  *(char *)(DAT_04839ca0 + 0x20b) = (char)(param_1 & 1);
  if (*pcVar1 == '\0') {
    *(undefined1 *)(lVar8 + 0x20a) = 1;
  }
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar8 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar8;
  if (lVar8 != 0) {
    local_28[0] = 0;
    if (*(long *)PTR_DAT_047d0a08 != 0) {
      local_28[0] = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
    FUN_0175164c(local_38,local_28);
    if (local_38[0] != 0) {
      if (*(short *)(local_38[0] + 0x1a) != 0) {
        FUN_018d4164(local_38,param_1 & 1);
      }
      if (local_38[0] != 0) {
        psVar2 = (short *)(local_38[0] + 0x18);
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
          piVar3 = (int *)(local_38[0] + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            FUN_00c44438(lVar8 + 0x8040,local_28 + 4);
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
  }
  return;
}


