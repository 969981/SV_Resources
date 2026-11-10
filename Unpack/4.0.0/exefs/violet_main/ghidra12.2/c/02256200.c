/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02256200; name: FUN_02256200
 */


void FUN_02256200(undefined1 param_1 [16],undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  ulong *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  byte *pbVar14;
  bool bVar15;
  short sVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  long *local_130;
  undefined8 local_120;
  ulong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0 [8];
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  
  lVar13 = param_3[1];
  if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar13 + 0x1a);
  sVar16 = *(short *)(lVar13 + 0x1a);
LAB_02256264:
  sVar5 = *psVar1;
  if (sVar5 == sVar16) {
    cVar6 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar16 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02256290;
    bVar15 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02256290:
    bVar15 = false;
  }
  if (!bVar15) {
    sVar16 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02256264;
  }
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uVar17 = *param_3;
  lVar10 = FUN_00fa5b78(uVar17,"text_height_adjust");
  uVar19 = 0;
  if (((lVar10 != 0) && (uVar19 = 0, *(char *)(lVar10 + 10) == '\x01')) &&
     (uVar19 = 0, *(int *)(lVar10 + (ulong)*(uint *)(lVar10 + 4)) == 1)) {
    local_90 = *param_3;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_00c81640(&local_88,param_3 + 1);
    FUN_02256c00(&local_90,param_4);
    puVar12 = local_88;
    uVar19 = param_2;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
      do {
        sVar16 = *psVar1;
        cVar6 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        piVar3 = (int *)((long)local_88 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar15) {
            *piVar3 = -1;
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
          local_d0[0] = *puVar12;
          FUN_00c44438(lVar10 + 0x8040,local_d0);
        }
      }
      else if (sVar16 == 0) goto LAB_0225668c;
    }
  }
  iVar9 = 0;
  while( true ) {
    snprintf((char *)local_d0,0x40,"text_height_pane_name_%02d",iVar9);
    lVar10 = FUN_00fa5b78(uVar17,local_d0);
    if ((lVar10 == 0) || (*(char *)(lVar10 + 10) != '\0')) break;
    snprintf((char *)local_d0,0x40,"pane_%s",(char *)(lVar10 + (ulong)*(uint *)(lVar10 + 4)));
    if ((byte)local_d0[0] == 0) {
      local_f0 = &DAT_cbf29ce484222645;
    }
    else {
      local_f0 = &DAT_cbf29ce484222645;
      pbVar14 = (byte *)((ulong)local_d0 | 1);
      bVar4 = (byte)local_d0[0];
      do {
        local_f0 = (undefined1 *)(((ulong)local_f0 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar4 != 0);
    }
    local_e0 = 0x3f;
    local_d8 = (long *)0x0;
    puStack_e8 = local_d0;
    plVar11 = (long *)FUN_00c8c7b4(*param_5,&local_f0);
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar8 != 0)) {
      *(undefined8 *)PTR_DAT_047d20a0 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    if ((plVar11 == (long *)0x0) ||
       (puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(), puVar12 == (undefined8 *)0x0)) {
      local_130 = (long *)0x0;
    }
    else {
      do {
        if (puVar12 == (undefined8 *)PTR_DAT_047d20a0) {
          local_130 = plVar11;
          break;
        }
        puVar12 = (undefined8 *)*puVar12;
        local_130 = (long *)0x0;
      } while (puVar12 != (undefined8 *)0x0);
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_130 == (long *)0x0) {
      local_108 = *param_3;
      local_f8 = 0;
      local_100 = (ulong *)0x0;
      FUN_00c81640(&local_100,param_3 + 1);
      local_130 = (long *)FUN_02256a40(&local_108,lVar10 + (ulong)*(uint *)(lVar10 + 4));
      puVar7 = local_100;
      if (local_100 != (ulong *)0x0) {
        puVar2 = local_100 + 3;
        do {
          sVar16 = (short)*puVar2;
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar15) {
            *(short *)puVar2 = sVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar16 == 1) {
          piVar3 = (int *)((long)local_100 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar15) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_f0 = (undefined1 *)*puVar7;
            FUN_00c44438(lVar10 + 0x8040,&local_f0);
          }
        }
        else if (sVar16 == 0) goto LAB_0225668c;
      }
      if (local_130 == (long *)0x0) break;
    }
    if ((float)uVar19 == 0.0) {
      local_120 = *param_3;
      local_110 = 0;
      local_118 = (ulong *)0x0;
      FUN_00c81640(&local_118,param_3 + 1);
      FUN_02256c00(&local_120,param_4);
      puVar7 = local_118;
      uVar19 = param_2;
      if (local_118 != (ulong *)0x0) {
        puVar2 = local_118 + 3;
        do {
          sVar16 = (short)*puVar2;
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar15) {
            *(short *)puVar2 = sVar16 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar16 == 1) {
          piVar3 = (int *)((long)local_118 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar15) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_f0 = (undefined1 *)*puVar7;
            FUN_00c44438(lVar10 + 0x8040,&local_f0);
          }
        }
        else if (sVar16 == 0) {
LAB_0225668c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    lVar10 = FUN_00fa5b78(local_130,"text_height_offset_y");
    fVar18 = 0.0;
    if ((lVar10 != 0) && (fVar18 = 0.0, *(char *)(lVar10 + 10) == '\x02')) {
      fVar18 = *(float *)(lVar10 + (ulong)*(uint *)(lVar10 + 4));
    }
    iVar9 = iVar9 + 1;
    *(float *)((long)local_130 + 0x54) = (float)uVar19 + fVar18;
    *(byte *)(local_130 + 0xb) = *(byte *)(local_130 + 0xb) | 0x10;
    if (iVar9 == 100) break;
  }
  lVar10 = *(long *)(lVar13 + 8);
  psVar1 = (short *)(lVar10 + 0x1a);
  do {
    sVar16 = *psVar1;
    cVar6 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar15) {
      *psVar1 = sVar16 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar16 == 1) {
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*(long *)(lVar13 + -0x28) + 0x50))((long *)(lVar13 + -0x28));
    return;
  }
  if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


