/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029be6e4; name: FUN_029be6e4
 */


long FUN_029be6e4(long param_1,long *param_2,long *param_3)

{
  short *psVar1;
  uint *puVar2;
  short sVar3;
  undefined4 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 *local_b8 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  char *pcStack_90;
  size_t local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  piVar13 = *(int **)(param_1 + 0x28);
  if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 7) ||
     (uVar16 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[3], uVar16 == 0)) {
    piVar13 = (int *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar13 + uVar16);
    piVar13 = (int *)((long)puVar2 + (ulong)*puVar2);
  }
  if ((*(ushort *)((long)piVar13 - (long)*piVar13) < 5) ||
     (uVar16 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar16 == 0)) {
    lVar15 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar13 + uVar16);
    lVar15 = (long)puVar2 + (ulong)*puVar2;
  }
  puVar18 = &DAT_cbf29ce484222645;
  local_88 = strlen((char *)(lVar15 + 4));
  bVar5 = *(byte *)(lVar15 + 4);
  if (bVar5 != 0) {
    pbVar14 = (byte *)(lVar15 + 5);
    do {
      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (bVar5 != 0);
  }
  local_80 = (long *)0x0;
  local_98 = puVar18;
  pcStack_90 = (char *)(lVar15 + 4);
  (**(code **)(*param_3 + 0x40))(local_b8,param_3,&local_98);
  lVar9 = (**(code **)(*param_2 + 0x38))(param_2);
  iVar8 = (int)((ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) >> 3) * -0x33333333;
  FUN_00cbd48c(lVar9 + 0x10,iVar8);
  FUN_00c43ef0(lVar9 + 0x50,local_b8);
  *(undefined4 *)(lVar9 + 0x68) = local_a0;
  *(undefined8 *)(lVar9 + 0x60) = local_a8;
  (**(code **)(*param_2 + 0x48))(&local_78,param_2,iVar8);
  *(undefined8 *)(lVar9 + 0x70) = local_78;
  *(undefined8 *)(lVar9 + 0x78) = uStack_70;
  *(undefined8 *)(lVar9 + 0x80) = 0x18;
  lVar15 = *(long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != lVar15) {
    uVar16 = 0;
    do {
      plVar10 = (long *)FUN_00d2b5d0(*(undefined8 *)(param_1 + 0x30),
                                     *(undefined8 *)(lVar15 + uVar16 * 0x28));
      uVar12 = 0;
      if (plVar10 != (long *)0x0) {
        uVar11 = (**(code **)(*plVar10 + 0x28))(plVar10);
        if ((uVar11 & 1) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar10 + 0x40))(plVar10,param_2,param_3);
        }
      }
      lVar17 = *(long *)(lVar9 + 0x70) + *(long *)(lVar9 + 0x80) * uVar16;
      uVar4 = *(undefined4 *)(lVar15 + uVar16 * 0x28 + 0x20);
      *(undefined8 *)(lVar17 + 8) = uVar12;
      *(undefined4 *)(lVar17 + 0x10) = uVar4;
      FUN_0106cbc8(lVar9,uVar12);
      if (*(long *)(lVar9 + 0x88) == 0) {
        *(undefined8 *)(lVar9 + 0x88) = uVar12;
      }
      lVar15 = *(long *)(param_1 + 0x38);
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar16 < (ulong)((*(long *)(param_1 + 0x40) - lVar15 >> 3) * -0x3333333333333333));
  }
  if (local_b8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8[0] + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar13 = (int *)((long)local_b8[0] + 0x1c);
      do {
        iVar8 = *piVar13;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar7) {
          *piVar13 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_78 = *local_b8[0];
        FUN_00c44438(lVar15 + 0x8040,&local_78);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  return lVar9;
}


