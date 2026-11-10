/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022494e0; name: FUN_022494e0
 */


void FUN_022494e0(undefined8 param_1)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  byte **ppbVar4;
  size_t *psVar5;
  long **pplVar6;
  byte bVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  byte *__s;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  short sVar17;
  ulong *puVar18;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 *local_a8;
  byte *local_a0;
  size_t local_98;
  long *local_90;
  long *local_88;
  byte *local_80;
  size_t local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  ulong *local_40 [2];
  
  puVar12 = (undefined8 *)FUN_0140f310();
  local_60 = *puVar12;
  uStack_58 = puVar12[1];
  local_50 = puVar12[2];
  local_48 = (long *)puVar12[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  FUN_0140f318(local_40,param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40[0] != (ulong *)0x0) {
    puVar18 = local_40[0];
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      sVar17 = *(short *)((long)local_40[0] + 0x1a);
LAB_02249574:
      sVar8 = *psVar1;
      if (sVar8 == sVar17) {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar17 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_02249598;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02249598:
        bVar10 = false;
      }
      if (!bVar10) goto code_r0x022495a0;
      uVar14 = local_40[0][2];
      if (uVar14 == 0) goto LAB_0224973c;
      lVar16 = FUN_01491340(uVar14 + 0xe0,&local_a8);
      if (lVar16 != 0) {
        local_c8 = 0x4b7e3afd7500d638;
        puStack_c0 = &DAT_03c36071;
        local_b8 = 4;
        local_b0 = (long *)0x0;
        FUN_01315eac(&local_a8,param_1,&local_c8);
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        bVar10 = (char)local_a8 != '\0';
        ppbVar4 = (byte **)PTR_DAT_047d3e30;
        if (bVar10) {
          ppbVar4 = &local_a0;
        }
        local_80 = *ppbVar4;
        psVar5 = (size_t *)(PTR_DAT_047d3e30 + 8);
        if (bVar10) {
          psVar5 = &local_98;
        }
        local_78 = *psVar5;
        pplVar6 = (long **)(PTR_DAT_047d3e30 + 0x10);
        if (bVar10) {
          pplVar6 = &local_90;
        }
        local_70 = *pplVar6;
        pplVar6 = (long **)(PTR_DAT_047d3e30 + 0x18);
        if (bVar10) {
          pplVar6 = &local_88;
        }
        local_68 = *pplVar6;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
        if ((char)local_a8 != '\0') {
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          local_a8 = (undefined1 *)((ulong)local_a8 & 0xffffffffffffff00);
        }
        if (local_b0 != (long *)0x0) {
          (**(code **)(*local_b0 + 0x20))();
        }
        plVar13 = (long *)FUN_0145966c();
        __s = (byte *)(**(code **)(*plVar13 + 0x50))(plVar13,&local_80,0);
        if (__s != (byte *)0x0) {
          local_98 = strlen((char *)__s);
          bVar7 = *__s;
          local_a8 = &DAT_cbf29ce484222645;
          pbVar15 = __s;
          while (bVar7 != 0) {
            pbVar15 = pbVar15 + 1;
            local_a8 = (undefined1 *)(((ulong)local_a8 ^ (ulong)bVar7) * 0x100000001b3);
            bVar7 = *pbVar15;
          }
          local_90 = (long *)0x0;
          local_a0 = __s;
          FUN_0224989c(lVar16,&local_a8);
          if (local_90 != (long *)0x0) {
            (**(code **)(*local_90 + 0x20))();
          }
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
      }
      (**(code **)(*(long *)(uVar14 - 0x28) + 0x60))((long *)(uVar14 - 0x28));
LAB_02249738:
      puVar18 = local_40[0];
      if (local_40[0] == (ulong *)0x0) {
        return;
      }
    }
LAB_0224973c:
    puVar2 = puVar18 + 3;
    do {
      sVar17 = (short)*puVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *(short *)puVar2 = sVar17 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar17 == 1) {
      piVar3 = (int *)((long)puVar18 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_a8 = (undefined1 *)*puVar18;
        FUN_00c44438(lVar16 + 0x8040,&local_a8);
      }
    }
    else if (sVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x022495a0:
  sVar17 = sVar8;
  if (sVar8 == 0) goto LAB_02249738;
  goto LAB_02249574;
}


