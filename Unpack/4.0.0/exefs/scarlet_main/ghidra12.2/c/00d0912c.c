/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d0912c; name: FUN_00d0912c
 */


long FUN_00d0912c(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  int *piVar2;
  uint *puVar3;
  short sVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  size_t sVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  code *pcVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  long *local_68 [2];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar14 == 0)) {
    lVar17 = 0;
  }
  else {
    puVar3 = (uint *)((long)param_3 + uVar14);
    lVar17 = (long)puVar3 + (ulong)*puVar3;
  }
  puVar18 = &DAT_cbf29ce484222645;
  sVar11 = strlen((char *)(lVar17 + 4));
  bVar5 = *(byte *)(lVar17 + 4);
  if (bVar5 != 0) {
    pbVar15 = (byte *)(lVar17 + 5);
    do {
      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x20) = puVar18;
  *(char **)(param_1 + 0x28) = (char *)(lVar17 + 4);
  *(size_t *)(param_1 + 0x30) = sVar11;
  plVar12 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  (**(code **)(*param_2 + 0x40))(local_68,param_2,(undefined8 *)(param_1 + 0x20));
  plVar12 = (long *)(param_1 + 0x40);
  FUN_00c43ef0(plVar12,local_68);
  plVar8 = local_68[0];
  *(undefined4 *)(param_1 + 0x58) = local_50;
  *(undefined8 *)(param_1 + 0x50) = local_58;
  if (local_68[0] != (long *)0x0) {
    plVar1 = local_68[0] + 3;
    do {
      sVar4 = (short)*plVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *(short *)plVar1 = sVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_68[0] + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_48 = *plVar8;
        FUN_00c44438(lVar17 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (*(ushort *)((long)param_3 - (long)*param_3) < 7) {
    uVar19 = 0;
  }
  else {
    uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3];
    uVar19 = 0;
    if (uVar14 != 0) {
      uVar19 = *(undefined4 *)((long)param_3 + uVar14);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar19;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 9) ||
     (uVar14 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4], uVar14 == 0)) {
    *(undefined1 *)(param_1 + 8) = 0;
    return param_1;
  }
  uVar6 = *(undefined1 *)((long)param_3 + uVar14);
  *(undefined1 *)(param_1 + 8) = uVar6;
  switch(uVar6) {
  case 1:
    if (((*plVar12 == 0) || (*(short *)(*plVar12 + 0x1a) == 0)) ||
       ((*(char *)(param_1 + 0x54) == '\0' ||
        (FUN_00c90ab8(local_68,plVar12), local_68[0] == (long *)0x0)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)(*local_68[0] + 0x178))(local_68[0],param_1 + 0x54);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*local_68[0] + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar13;
    puVar3 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 == 0)) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(undefined4 *)((long)piVar2 + uVar14);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar19;
    break;
  case 2:
    if ((((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0))
        || (*(char *)(param_1 + 0x54) == '\0')) ||
       (FUN_00c90ab8(local_68,plVar12), local_68[0] == (long *)0x0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)(*local_68[0] + 0x180))(local_68[0],param_1 + 0x54);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*local_68[0] + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar13;
    puVar3 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
    uVar19 = 0;
    if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 != 0)) {
      uVar19 = *(undefined4 *)((long)piVar2 + uVar14);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar19;
    break;
  case 3:
    if (((*(long *)(param_1 + 0x40) == 0) || (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) == 0)) ||
       ((*(char *)(param_1 + 0x54) == '\0' ||
        (FUN_00c90ab8(local_68,plVar12), local_68[0] == (long *)0x0)))) goto LAB_00d093d0;
    pcVar16 = *(code **)(*local_68[0] + 0x188);
LAB_00d0936c:
    uVar13 = (*pcVar16)(local_68[0],param_1 + 0x54);
    if (local_68[0] != (long *)0x0) {
      (**(code **)(*local_68[0] + 0x18))();
    }
    goto LAB_00d093d4;
  case 4:
    if ((((*(long *)(param_1 + 0x40) != 0) && (*(short *)(*(long *)(param_1 + 0x40) + 0x1a) != 0))
        && (*(char *)(param_1 + 0x54) != '\0')) &&
       (FUN_00c90ab8(local_68,plVar12), local_68[0] != (long *)0x0)) {
      pcVar16 = *(code **)(*local_68[0] + 400);
      goto LAB_00d0936c;
    }
LAB_00d093d0:
    uVar13 = 0;
LAB_00d093d4:
    *(undefined8 *)(param_1 + 0x10) = uVar13;
    puVar3 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
       (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 == 0)) {
      bVar9 = false;
    }
    else {
      bVar9 = *(char *)((long)piVar2 + uVar14) != '\0';
    }
    *(bool *)(param_1 + 0x18) = bVar9;
  }
  return param_1;
}


