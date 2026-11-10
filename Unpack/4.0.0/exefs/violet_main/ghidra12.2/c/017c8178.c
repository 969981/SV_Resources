/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c8178; name: FUN_017c8178
 */


void FUN_017c8178(long *param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined8 local_68;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    puVar21 = (undefined1 *)param_1[1];
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 == 0) {
      *puVar21 = *param_2;
      *(undefined8 *)(puVar21 + 0x10) = 0;
      *(undefined8 *)(puVar21 + 8) = 0;
      FUN_00d0a34c(puVar21 + 8,param_2 + 8);
    }
    else {
      if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar10;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
      uVar4 = *param_2;
      *(undefined8 *)(puVar21 + 0x10) = 0;
      *puVar21 = uVar4;
      *(undefined8 *)(puVar21 + 8) = 0;
      FUN_00d0a34c(puVar21 + 8,param_2 + 8);
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar21 + 0x18);
    return;
  }
  lVar10 = FUN_017c8700(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  lVar16 = param_1[1] - *param_1 >> 3;
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar10 * 0x18,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar21 = (undefined1 *)(lVar11 + lVar16 * 8);
  lVar22 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar12 == 0) {
    *puVar21 = *param_2;
    lVar16 = lVar11 + lVar16 * 8;
    puVar13 = (undefined8 *)(lVar16 + 8);
    *puVar13 = 0;
    *(undefined8 *)(lVar16 + 0x10) = 0;
    FUN_00d0a34c(puVar13,param_2 + 8);
  }
  else {
    if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_017c86b0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar22;
    lVar16 = lVar11 + lVar16 * 8;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    *puVar21 = *param_2;
    puVar13 = (undefined8 *)(lVar16 + 8);
    *puVar13 = 0;
    *(undefined8 *)(lVar16 + 0x10) = 0;
    FUN_00d0a34c(puVar13,param_2 + 8);
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  }
  lVar16 = *param_1;
  lVar22 = param_1[1];
  if (lVar22 == lVar16) {
    puVar17 = puVar21;
    lVar22 = lVar16;
  }
  else {
    lVar12 = 0;
    do {
      lVar20 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar14 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar14 == 0) {
        uVar4 = *(undefined1 *)(lVar22 + lVar12 + -0x18);
        *(undefined8 *)(puVar21 + lVar12 + -0x10) = 0;
        *(undefined8 *)(puVar21 + lVar12 + -8) = 0;
        puVar21[lVar12 + -0x18] = uVar4;
        FUN_00d0a34c(puVar21 + lVar12 + -0x10,lVar22 + lVar12 + -0x10);
      }
      else {
        if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_017c86b0;
        *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar20;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        uVar4 = *(undefined1 *)(lVar22 + lVar12 + -0x18);
        *(undefined8 *)(puVar21 + lVar12 + -0x10) = 0;
        *(undefined8 *)(puVar21 + lVar12 + -8) = 0;
        puVar21[lVar12 + -0x18] = uVar4;
        FUN_00d0a34c(puVar21 + lVar12 + -0x10,lVar22 + lVar12 + -0x10);
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
      }
      lVar12 = lVar12 + -0x18;
    } while (lVar16 - lVar22 != lVar12);
    lVar16 = *param_1;
    puVar17 = puVar21 + lVar12;
    lVar22 = param_1[1];
  }
  lVar12 = param_1[2];
  *param_1 = (long)puVar17;
  param_1[1] = (long)(puVar21 + 0x18);
  param_1[2] = lVar11 + lVar10 * 0x18;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  if (lVar22 != lVar16) {
    pbVar18 = PTR_DAT_047d3908;
    do {
      puVar13 = *(undefined8 **)(lVar22 + -0x10);
      if (puVar13 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar13 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar13 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*pbVar18 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)
               ) {
              FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)puVar7;
            *(long *)puVar8 = lVar10;
            local_68 = *puVar13;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
            pbVar18 = PTR_DAT_047d3908;
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
      lVar22 = lVar22 + -0x18;
    } while (lVar22 != lVar16);
  }
  if (lVar16 != 0) {
    plVar19 = (long *)param_1[3];
    uVar15 = (**(code **)(*plVar19 + 0xf8))(plVar19);
    if (((uVar15 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar12 - lVar16,8);
    }
    else {
      FUN_00c48fe8(plVar19,lVar16,lVar12 - lVar16,8);
    }
  }
  return;
}


