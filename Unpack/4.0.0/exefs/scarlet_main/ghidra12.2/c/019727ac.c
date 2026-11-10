/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019727ac; name: FUN_019727ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019727ac(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined8 *puVar5;
  code *pcVar6;
  int iVar7;
  undefined8 in_x7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  short sVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  char local_108 [8];
  undefined1 auStack_100 [24];
  long *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 auStack_90 [96];
  
  local_e0 = *(undefined8 *)(param_1 + 0x110);
  uStack_d8 = *(undefined8 *)(param_1 + 0x118);
  local_d0 = *(undefined8 *)(param_1 + 0x120);
  plVar9 = *(long **)(param_1 + 0x128);
  local_c8 = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_c0 = (undefined8 *)0x0;
    uStack_b8 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_c0,param_1 + 0x30,&local_e0);
    plVar9 = local_c8;
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (local_c0 != (undefined8 *)0x0) {
    if (*(short *)((long)local_c0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_c0 + 0x1a);
      sVar11 = *(short *)((long)local_c0 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01972878;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01972878:
          bVar10 = false;
        }
        if (bVar10) {
          plVar9 = (long *)(local_c0[2] + -0x28);
          if (local_c0[2] == 0) goto LAB_019729c0;
          local_b0 = 0xa5d87c9ff14c683c;
          local_a8 = (code *)0x3c2f425;
          local_a0 = 9;
          local_98 = (long *)0x0;
          FUN_01315eac(local_108,param_1,&local_b0);
          if (local_98 != (long *)0x0) {
            (**(code **)(*local_98 + 0x20))();
          }
          if (local_108[0] != '\0') {
            if (((*PTR_DAT_047d8280 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d8280);
            }
            lVar12 = *(long *)PTR_DAT_047d8288;
            *(long *)PTR_DAT_047d8290 = lVar12;
            lVar8 = (**(code **)(*plVar9 + 0x68))(plVar9);
            uVar13 = *(undefined8 *)(lVar8 + 0x30);
            uVar14 = *(ulong *)(lVar8 + 0x38) & 0xffffffff;
            memset(&local_b0,0,0x80);
            iVar7 = FUN_02231004(uVar13,_DAT_03d634e0,_DAT_03d634f0,lVar12,auStack_100);
            if ((iVar7 != 0) &&
               (FUN_0104f218(*(undefined8 *)(lVar12 + 0x220),auStack_100,iVar7,0xffffffffffffffff,0,
                             &local_b0,0,in_x7,uVar13,uVar14), pcVar6 = local_a8,
               local_a8 != (code *)0x0)) {
              local_a0 = 0;
              local_98 = (long *)0x0;
              local_b0 = 0;
              local_a8 = (code *)0x0;
              (*pcVar6)(auStack_90);
            }
            if (local_108[0] != '\0') {
              if (local_e8 != (long *)0x0) {
                (**(code **)(*local_e8 + 0x20))();
              }
              local_108[0] = '\0';
            }
          }
          (**(code **)(*plVar9 + 0x60))(plVar9);
          break;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
      if (local_c0 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_019729c0:
    puVar5 = local_c0;
    psVar1 = (short *)(local_c0 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_c0 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
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
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_b0 = *puVar5;
        FUN_00c44438(lVar8 + 0x8040,&local_b0);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


