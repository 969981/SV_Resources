/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02009e60; name: FUN_02009e60
 */


void FUN_02009e60(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  short sVar15;
  long *plVar16;
  undefined8 *local_a0;
  undefined8 uStack_98;
  char local_90 [8];
  undefined8 *local_88;
  undefined8 local_48;
  
  lVar9 = FUN_0200a254(param_2,*param_4);
  if ((((*(long *)(lVar9 + 0xd8) == 0) || (*(short *)(*(long *)(lVar9 + 0xd8) + 0x1a) == 0)) &&
      (uVar11 = FUN_01473a8c(lVar9 + 0xc0), (uVar11 & 1) == 0)) || (*(long *)(lVar9 + 0xd0) == 0)) {
    puVar10 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar10;
    return;
  }
  FUN_019e480c(local_90,*(long *)(lVar9 + 0xd0),
               *(undefined4 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xe8)));
  if (((local_88 != (undefined8 *)0x0) && (*(short *)((long)local_88 + 0x1a) != 0)) &&
     ((local_88 != (undefined8 *)0x0 && (*(short *)((long)local_88 + 0x1a) != 0)))) {
    psVar2 = (short *)((long)local_88 + 0x1a);
    sVar15 = *(short *)((long)local_88 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0200a010;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0200a010:
        bVar5 = false;
      }
      if (bVar5) {
        puVar12 = (undefined8 *)local_88[2];
        if (puVar12 != (undefined8 *)0x0) {
          plVar16 = puVar12 + -5;
          plVar13 = (long *)(**(code **)*puVar12)();
          puVar7 = PTR_DAT_047d6528;
          puVar6 = PTR_DAT_047d6520;
          if (((*PTR_DAT_047d6520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
            uVar14 = FUN_0151c130();
            *(undefined8 *)puVar7 = uVar14;
            __cxa_guard_release(PTR_DAT_047d6520);
          }
          goto joined_r0x0200a058;
        }
        break;
      }
      sVar15 = sVar3;
    } while (sVar3 != 0);
  }
LAB_02009ee8:
  puVar10 = (undefined1 *)FUN_00f6866c();
LAB_02009eec:
  *param_1 = *puVar10;
LAB_02009ef4:
  if (local_88 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_88 + 3);
    do {
      sVar15 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_88 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_a0 = (undefined8 *)*local_88;
        FUN_00c44438(lVar9 + 0x8040,&local_a0);
      }
    }
    else if (sVar15 == 0) {
LAB_02009f34:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
joined_r0x0200a058:
  if (plVar13 == (long *)0x0) goto LAB_0200a0d4;
  if (plVar13 == (long *)puVar7) {
    if (*(char *)((long)puVar12 + 0x79f) != '\0') {
      puVar10 = (undefined1 *)FUN_00f6866c();
      *param_1 = *puVar10;
      (**(code **)(*plVar16 + 0x60))(plVar16);
      goto LAB_02009ef4;
    }
    goto LAB_0200a0d4;
  }
  plVar13 = (long *)*plVar13;
  goto joined_r0x0200a058;
LAB_0200a0d4:
  (**(code **)(*plVar16 + 0x60))(plVar16);
  if (local_90[0] != '\b') goto LAB_02009ee8;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  if ((local_88 != (undefined8 *)0x0) &&
     (puVar12 = (undefined8 *)local_88[1], puVar12 != (undefined8 *)0x0)) {
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
      uVar14 = FUN_0151c130();
      *(undefined8 *)puVar7 = uVar14;
      __cxa_guard_release(PTR_DAT_047d6520);
    }
    do {
      if (puVar12 == (undefined8 *)puVar7) {
        FUN_00d7c390(&local_a0,(ulong)local_90 | 8);
        break;
      }
      puVar12 = (undefined8 *)*puVar12;
    } while (puVar12 != (undefined8 *)0x0);
  }
  FUN_01e03efc(&local_a0);
  puVar12 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_a0 + 3);
    do {
      sVar15 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar1 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_48 = *puVar12;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar15 == 0) goto LAB_02009f34;
  }
  puVar10 = (undefined1 *)FUN_015c0588();
  goto LAB_02009eec;
}


