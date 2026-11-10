/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddc158; name: FUN_01ddc158
 */


void FUN_01ddc158(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint extraout_w0;
  int iVar6;
  uint extraout_var;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *local_68 [2];
  undefined8 *local_58 [2];
  undefined8 *local_48 [2];
  uint local_38;
  uint uStack_34;
  undefined8 local_18;
  
  lVar8 = *(long *)(param_1 + 0x1a8);
  FUN_01195974();
  iVar6 = *(int *)(lVar8 + 0x6c38);
  local_38 = extraout_w0;
  uStack_34 = extraout_var;
  if (iVar6 - 1U < 2) {
    if (*(uint *)(param_1 + 0x2a4) != (uint)*(byte *)(lVar8 + 0x6c3c)) {
      FUN_014e3148(param_1);
      *(uint *)(param_1 + 0x2a4) = (uint)*(byte *)(lVar8 + 0x6c3c);
      iVar6 = *(int *)(lVar8 + 0x6c38);
    }
    if (iVar6 == 2) {
      FUN_01dd29cc(local_68,param_1,2);
      if (local_68[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 != 1) goto LAB_01ddc310;
        piVar2 = (int *)((long)local_68[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          puVar10 = local_68[0];
        } while (cVar4 != '\0');
LAB_01ddc374:
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = *puVar10;
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      goto LAB_01ddc238;
    }
    if (iVar6 != 1) goto LAB_01ddc24c;
    FUN_01dd29cc(local_58,param_1,1);
    if (local_58[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58[0] + 3);
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
        piVar2 = (int *)((long)local_58[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = *local_58[0];
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) goto LAB_01ddc314;
    }
    uVar7 = *(uint *)(lVar8 + 0x6c3c);
    uStack_34 = uVar7 >> 0xe & 0x3f;
  }
  else {
    if (iVar6 != 0) goto LAB_01ddc24c;
    lVar9 = FUN_01195854();
    if (*(char *)(lVar9 + 0x570) != *(char *)(lVar8 + 0x6c3c)) {
      FUN_014e2b84(param_1);
      FUN_01dc0660(lVar9,*(undefined1 *)(lVar8 + 0x6c3c));
    }
    FUN_01dd29cc(local_48,param_1,0);
    if (local_48[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48[0] + 3);
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
        piVar2 = (int *)((long)local_48[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          puVar10 = local_48[0];
        } while (cVar4 != '\0');
        goto LAB_01ddc374;
      }
LAB_01ddc310:
      if (sVar3 == 0) {
LAB_01ddc314:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
LAB_01ddc238:
    uVar7 = *(uint *)(lVar8 + 0x6c3c);
    uStack_34 = (uVar7 >> 0xe & 0x3f) + 1;
  }
  local_38 = uVar7 >> 8 & 0x3f;
LAB_01ddc24c:
  FUN_014e4eac(param_1,&local_38);
  iVar6 = *(int *)(param_1 + 0x108);
  if (iVar6 == 0) {
    uVar7 = local_38 + uStack_34 * 6;
  }
  else {
    uVar7 = uStack_34;
    if ((iVar6 != 1) && (iVar6 != 2)) {
      uVar7 = 1;
    }
  }
  *(short *)(param_1 + 0x1e4) = (short)uVar7;
  FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),0);
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(param_1 + 0x170) = 7;
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 7;
  }
  return;
}


