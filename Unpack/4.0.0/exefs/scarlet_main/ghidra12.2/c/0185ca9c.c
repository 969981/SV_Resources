/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0185ca9c; name: FUN_0185ca9c
 */


void FUN_0185ca9c(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  short sVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 uVar17;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_68 = *(undefined8 *)(param_1 + 0x110);
  uStack_60 = *(undefined8 *)(param_1 + 0x118);
  local_58 = *(undefined8 *)(param_1 + 0x120);
  plVar16 = *(long **)(param_1 + 0x128);
  local_50 = plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
  }
  else {
    (**(code **)(param_1 + 0x10))(&local_48,param_1 + 0x30,&local_68);
    plVar16 = local_50;
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (local_48 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_48 + 0x1a) != 0) {
    psVar1 = (short *)((long)local_48 + 0x1a);
    sVar13 = *(short *)((long)local_48 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar13) {
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0185cb70;
        bVar12 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0185cb70:
        bVar12 = false;
      }
      if (bVar12) {
        lVar10 = local_48[2];
        if (lVar10 == 0) goto LAB_0185cbe4;
        lVar9 = FUN_015bf2c8(lVar10 + 0xe0,&local_38);
        if (((lVar9 == 0) || (uVar7 = FUN_012595d8(param_1,0x100000001), (uVar7 & 0xff) == 0)) ||
           (uVar7 < 0x100)) goto LAB_0185cbcc;
        uVar11 = *(ulong *)(param_1 + 0x160);
        uVar17 = 0;
        if (uVar11 == 0) goto LAB_0185cdcc;
        uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
        uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 < 2) {
          uVar15 = uVar11 - 1 & 0x55c0d7a581349f0f;
        }
        else {
          uVar15 = 0x55c0d7a581349f0f;
          if (uVar11 < 0x55c0d7a581349f10) {
            uVar15 = 0;
            if (uVar11 != 0) {
              uVar15 = 0x55c0d7a581349f0f / uVar11;
            }
            uVar15 = 0x55c0d7a581349f0f - uVar15 * uVar11;
          }
        }
        plVar16 = *(long **)(*(long *)(param_1 + 0x158) + uVar15 * 8);
        if ((plVar16 == (long *)0x0) || (plVar16 = (long *)*plVar16, plVar16 == (long *)0x0))
        goto LAB_0185cdcc;
        if (1 < uVar14) goto LAB_0185cd90;
        goto LAB_0185cca8;
      }
      sVar13 = sVar3;
    } while (sVar3 != 0);
    goto LAB_0185cbe0;
  }
  goto LAB_0185cbe4;
LAB_0185cd90:
  do {
    uVar14 = plVar16[1];
    if (uVar14 == 0x55c0d7a581349f0f) {
      if (plVar16[2] == 0x55c0d7a581349f0f) goto LAB_0185cdc8;
    }
    else {
      if (uVar11 <= uVar14) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar14 / uVar11;
        }
        uVar14 = uVar14 - uVar5 * uVar11;
      }
      if (uVar14 != uVar15) break;
    }
    plVar16 = (long *)*plVar16;
  } while (plVar16 != (long *)0x0);
  goto LAB_0185cdcc;
LAB_0185cdc8:
  uVar17 = (undefined4)plVar16[6];
  goto LAB_0185cdcc;
  while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
LAB_0185cca8:
    if (plVar16[1] == 0x55c0d7a581349f0f) {
      if (plVar16[2] == 0x55c0d7a581349f0f) goto LAB_0185cdc8;
    }
    else if ((plVar16[1] & uVar11 - 1) != uVar15) break;
  }
LAB_0185cdcc:
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  FUN_00d54750(uVar17,lVar9,PTR_DAT_047d3e30);
LAB_0185cbcc:
  (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))((long *)(lVar10 + -0x28));
LAB_0185cbe0:
  if (local_48 != (undefined8 *)0x0) {
LAB_0185cbe4:
    puVar6 = local_48;
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar13 = *psVar1;
      cVar4 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar13 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_38 = *puVar6;
        FUN_00c44438(lVar10 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


