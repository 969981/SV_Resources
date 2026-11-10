/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd0490; name: FUN_01dd0490
 */


void FUN_01dd0490(long param_1,undefined4 param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_3c = param_2;
  uVar8 = FUN_01195974();
  uVar12 = *(undefined8 *)(param_1 + 0x1a0);
  iVar7 = *(int *)(param_1 + 0x108);
  uVar13 = uVar8 >> 0x20;
  local_48 = uVar8;
  if (iVar7 == 0) {
    lVar9 = FUN_01195854();
    uVar11 = (uint)*(byte *)(lVar9 + 0x570);
    uVar10 = 0;
    iVar7 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar10 = 1;
    if (iVar7 != 1) {
      if (iVar7 != 2) {
        uVar11 = 0xffffffff;
        uVar10 = 3;
        goto LAB_01dd04d8;
      }
      uVar10 = 2;
    }
    uVar11 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd04d8:
  if (iVar7 == 0) {
    uVar13 = (ulong)(uint)((int)uVar8 + (int)(uVar8 >> 0x20) * 6);
  }
  else if ((iVar7 != 1) && (iVar7 != 2)) {
    uVar13 = 1;
  }
  FUN_01dc74d0(uVar12,uVar10,uVar11,uVar13);
  if (*(char *)(param_1 + 0x19d) != '\0') {
    FUN_014e85a0(param_1,&local_48,0);
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01084328(&local_58,param_1 + 0x130);
  FUN_014e7af0(&local_58,s_FE36C17B6F54D00BA_045414de,&local_3c);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
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
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


