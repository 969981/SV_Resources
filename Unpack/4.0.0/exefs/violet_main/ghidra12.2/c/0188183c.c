/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188183c; name: FUN_0188183c
 */


void FUN_0188183c(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  short sVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  int *piVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  byte local_80;
  undefined1 local_7f;
  byte local_7e;
  undefined1 local_7d;
  byte local_7c;
  undefined1 local_7b;
  byte local_7a;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined2 local_66;
  
  bVar9 = FUN_00f7e274(param_4);
  if (bVar9 == 0) {
    return;
  }
  uVar24 = 0;
  puVar1 = PTR_DAT_047d8ee0 + 0x10;
LAB_01881898:
  if (((uint)uVar24 & 0xff) < (uint)*(byte *)(param_4 + 0x30)) {
    plVar25 = *(long **)(param_4 + uVar24 * 8);
  }
  else {
    plVar25 = (long *)0x0;
  }
  uVar17 = (**(code **)(*plVar25 + 0x200))(plVar25);
  if ((uVar17 & 1) == 0) {
    lVar23 = *(long *)(param_3 + 0x290);
    uVar14 = (**(code **)(*plVar25 + 0x98))(plVar25);
    puVar18 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar23 + 8) + 0x50),uVar14);
    if (puVar18 == (uint *)0x0) {
      uVar22 = 0;
    }
    else {
      uVar22 = *puVar18;
      if (4 < (int)uVar22) {
        uVar22 = 0;
      }
    }
    local_98 = *(undefined4 *)(*(long *)(param_2 + 0x38) + 0x30);
    uVar15 = (**(code **)(*param_5 + 0x118))(param_5);
    if ((uVar22 & 0xff) < 5) {
      local_94 = (uint)*(byte *)(*(long *)(param_2 + 0x38) + (ulong)(uVar22 & 0xff) * 0xc0 + 0x184);
      if ((uVar15 & 0xff) <= local_94) {
        local_94 = 100;
      }
    }
    else {
      local_94 = 100;
    }
    local_90 = (**(code **)(*param_5 + 0x600))(param_5);
    local_8c = (**(code **)(*param_5 + 0x118))(param_5);
    local_8c = local_8c & 0xff;
    local_88 = (**(code **)(*plVar25 + 0x118))(plVar25);
    local_88 = local_88 & 0xff;
    if (((*(byte *)(*(long *)(param_2 + 0x38) + 0x499) >> 2 & 1) == 0) &&
       (*(uint *)(*(long *)(param_2 + 0x38) + 0x30) < 2)) {
      lVar23 = *(long *)(param_3 + 0x290);
      uVar14 = (**(code **)(*plVar25 + 0x98))(plVar25);
      piVar19 = (int *)FUN_011e2dd4(*(undefined8 *)(*(long *)(lVar23 + 8) + 0x50),uVar14);
      if ((piVar19 != (int *)0x0) && ((*piVar19 < 5 && (*piVar19 != 0)))) goto LAB_018819ec;
      local_84 = (**(code **)(*plVar25 + 0x460))(plVar25);
      local_84 = local_84 & 0xff;
    }
    else {
LAB_018819ec:
      local_84 = 0;
    }
    uVar14 = (**(code **)(*plVar25 + 0x98))(plVar25);
    local_80 = (**(code **)(*param_5 + 0x418))(param_5,uVar14);
    local_80 = local_80 & 1;
    local_7f = 1;
    uVar14 = (**(code **)(*plVar25 + 0x2a8))(plVar25);
    plVar26 = *(long **)(param_2 + 400);
    if (plVar26 != (long *)0x0) {
      plVar2 = plVar26 + 5;
      do {
        lVar23 = *plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)lVar23 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((int)lVar23 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    bVar10 = (**(code **)(*plVar26 + 0x28))(plVar26,0xcf7f463ad4a13fe9,uVar14);
    if (plVar26 != (long *)0x0) {
      plVar2 = plVar26 + 5;
      do {
        lVar23 = *plVar2;
        iVar16 = (int)lVar23 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar16 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
      else if ((int)lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    local_7e = bVar10 & 1;
    puVar20 = (undefined8 *)(**(code **)plVar25[5])(plVar25 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar16 != 0)) {
      uVar21 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar21;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; puVar20 != (undefined8 *)0x0; puVar20 = (undefined8 *)*puVar20) {
      if (puVar20 == (undefined8 *)PTR_DAT_047d3f08) {
        uVar4 = (undefined2)plVar25[0xe2];
        uVar5 = (undefined2)plVar25[0xe3];
        bVar10 = (**(code **)(*plVar25 + 0x118))(plVar25);
        local_70 = puVar1;
        local_68 = uVar4;
        local_66 = uVar5;
        bVar11 = FUN_00cf4870(&local_70);
        if (bVar11 != 0) {
          uVar15 = 0;
          goto LAB_01881bf4;
        }
        break;
      }
    }
    uVar8 = 0;
    goto LAB_01881b28;
  }
  goto LAB_01881ba4;
  while( true ) {
    uVar15 = uVar15 + 1;
    uVar8 = 0;
    if (bVar11 == uVar15) break;
LAB_01881bf4:
    sVar13 = FUN_0196f860(uVar4,uVar5);
    if ((sVar13 == 4) && (bVar12 = FUN_00cf51e4(uVar4,uVar5,uVar15), bVar12 <= bVar10)) {
      uVar8 = 1;
      break;
    }
  }
LAB_01881b28:
  local_7d = uVar8;
  local_7c = (**(code **)(*plVar25 + 0x7b0))(plVar25);
  local_7c = local_7c & 1;
  local_7b = *(undefined1 *)(*(long *)(param_2 + 0x38) + 0x488);
  local_7a = (**(code **)(*plVar25 + 0x7a8))(plVar25);
  local_7a = local_7a & 1;
  local_78 = *(undefined4 *)(*(long *)(param_2 + 0x38) + (ulong)uVar22 * 4 + 0x4c4);
  FUN_01881ce8(&local_98,&local_70);
  puVar3 = (undefined4 *)(param_1 + uVar24 * 0x10);
  *puVar3 = (undefined4)local_70;
  *(undefined1 *)(puVar3 + 3) = local_70._4_1_;
  *(undefined1 *)((long)puVar3 + 0xb) = local_70._5_1_;
LAB_01881ba4:
  uVar24 = uVar24 + 1;
  if (uVar24 == bVar9) {
    return;
  }
  goto LAB_01881898;
}


