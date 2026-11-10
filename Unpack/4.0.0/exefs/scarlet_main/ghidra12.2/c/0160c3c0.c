/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0160c3c0; name: FUN_0160c3c0
 */


void FUN_0160c3c0(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  byte *pbVar17;
  long lVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  ushort *puVar21;
  undefined4 uVar22;
  undefined1 *puVar23;
  undefined1 *local_a0;
  char *pcStack_98;
  size_t local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  
  puVar21 = (ushort *)((long)param_3 - (long)*param_3);
  uVar5 = *puVar21;
  if ((uVar5 < 5) || ((ulong)puVar21[2] == 0)) {
    lVar14 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_3 + (ulong)puVar21[2]);
    lVar14 = (long)puVar2 + (ulong)*puVar2;
  }
  puVar23 = &DAT_cbf29ce484222645;
  local_90 = strlen((char *)(lVar14 + 4));
  bVar4 = *(byte *)(lVar14 + 4);
  if (bVar4 != 0) {
    pbVar17 = (byte *)(lVar14 + 5);
    do {
      puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar4 != 0);
  }
  local_88 = (long *)0x0;
  if (uVar5 < 7) {
    uVar20 = 0;
  }
  else {
    if ((ulong)puVar21[3] == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(undefined4 *)((long)param_3 + (ulong)puVar21[3]);
    }
    if (8 < uVar5) {
      if ((ulong)puVar21[4] == 0) {
        uVar22 = 4;
      }
      else {
        uVar22 = *(undefined4 *)((long)param_3 + (ulong)puVar21[4]);
      }
      if (uVar5 < 0xb) {
        bVar8 = false;
LAB_0160c82c:
        bVar10 = false;
        bVar9 = false;
      }
      else {
        if ((ulong)puVar21[5] == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(char *)((long)param_3 + (ulong)puVar21[5]) != '\0';
        }
        if (uVar5 < 0xd) goto LAB_0160c82c;
        if ((ulong)puVar21[6] == 0) {
          bVar9 = false;
        }
        else {
          bVar9 = *(char *)((long)param_3 + (ulong)puVar21[6]) != '\0';
        }
        if (uVar5 < 0xf) {
          bVar10 = false;
        }
        else {
          if ((ulong)puVar21[7] == 0) {
            bVar10 = false;
          }
          else {
            bVar10 = *(char *)((long)param_3 + (ulong)puVar21[7]) != '\0';
          }
          if ((0x10 < uVar5) && ((ulong)puVar21[8] != 0)) {
            bVar11 = *(char *)((long)param_3 + (ulong)puVar21[8]) != '\0';
            goto LAB_0160c508;
          }
        }
      }
      bVar11 = false;
      goto LAB_0160c508;
    }
  }
  bVar10 = false;
  bVar8 = false;
  bVar9 = false;
  bVar11 = false;
  uVar22 = 4;
LAB_0160c508:
  local_a0 = puVar23;
  pcStack_98 = (char *)(lVar14 + 4);
  FUN_00daf940(param_1,&local_a0);
  *(undefined4 *)(param_1 + 1) = uVar20;
  *(undefined4 *)((long)param_1 + 0xc) = uVar22;
  *(bool *)(param_1 + 2) = bVar8;
  *(bool *)((long)param_1 + 0x11) = bVar9;
  *(bool *)((long)param_1 + 0x12) = bVar10;
  *(bool *)((long)param_1 + 0x13) = bVar11;
  if (((*PTR_DAT_047d8c28 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar12 != 0)) {
    local_80 = FUN_00d44228();
    puVar7 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_80);
    FUN_00100190(PTR_LAB_047d9240,puVar7,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar13 = *(long **)PTR_DAT_047d8c30;
  param_1[3] = plVar13;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))();
  }
  plVar13 = param_1 + 10;
  *plVar13 = 0;
  param_1[7] = 0;
  param_1[8] = 0x400000004;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (*(char *)((long)param_1 + 0x13) != '\0') {
    lVar14 = FUN_01233940(&local_80,param_2);
    if (lVar14 != 0) {
      lVar18 = *(long *)(lVar14 + 0x30);
      if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 0) {
        uVar16 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
        *(undefined8 *)(lVar18 + 8) = uVar16;
        *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar15 = (long *)*plVar13;
    *plVar13 = 0;
    if (plVar15 != (long *)0x0) {
      lVar18 = plVar15[6];
      psVar1 = (short *)(lVar18 + 0x1a);
      do {
        sVar3 = *psVar1;
        cVar6 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar18 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *plVar13 = lVar14;
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    uVar19 = *(undefined8 *)PTR_DAT_047d8288;
    *(undefined8 *)PTR_DAT_047d8290 = uVar19;
    uVar16 = FUN_00cf8198(param_1[10]);
    plVar15 = (long *)*param_1;
    plVar13 = (long *)PTR_DAT_047d8b70;
    if (plVar15 != (long *)0x0) {
      plVar13 = plVar15 + 6;
    }
    local_80 = *plVar13;
    plVar13 = (long *)PTR_PTR_047d4508;
    if (plVar15 != (long *)0x0) {
      plVar13 = plVar15 + 7;
    }
    lStack_78 = *plVar13;
    if (plVar15 == (long *)0x0) {
      local_70 = 0;
    }
    else {
      local_70 = plVar15[8];
    }
    local_68 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    local_68 = plVar15;
    FUN_0160c898(uVar19,uVar16,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return;
}


