/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e730cc; name: FUN_02e730cc
 */


void FUN_02e730cc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined **local_1058;
  char local_1050;
  undefined8 local_1048;
  undefined8 local_1040;
  long local_1038;
  long local_1030;
  undefined8 local_1028 [500];
  int local_88;
  long *local_80;
  long *plStack_78;
  int *local_70;
  undefined8 local_68;
  long local_60;
  long lStack_58;
  
  lVar15 = tpidr_el0;
  lVar7 = *(long *)(lVar15 + 0x1000b8);
  if (lVar7 == 0) {
    lVar7 = FUN_00e5d3b4();
    *(long *)(lVar15 + 0x1000b8) = lVar7;
  }
  plVar14 = *(long **)(lVar7 + 0x3e0);
  if (plVar14 != (long *)0x0) {
    lVar15 = *plVar14;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("BroadPhase",10,*(undefined8 *)(lVar15 + 0x28));
    }
    puVar6 = (undefined8 *)plVar14[2];
    uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtBroadPhase";
      uVar5 = nn::os::GetSystemTick();
      puVar6[1] = uVar5;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar6 = (undefined8 *)plVar14[2];
      uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    lVar15 = *plVar14;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))("CollideTrees",0xc,*(undefined8 *)(lVar15 + 0x28));
    }
    puVar6 = (undefined8 *)plVar14[2];
    uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TtCollideTrees";
      uVar5 = nn::os::GetSystemTick();
      puVar6[1] = uVar5;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar6 = (undefined8 *)plVar14[2];
      uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
      if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar6 != (undefined8 *)0x0)) {
        *puVar6 = &DAT_03c4e575;
        puVar6[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
  }
  *(long *)(*(long *)(param_1 + 8) + 0x10) = *(long *)(param_2 + 8) + 0x28;
  local_1058 = &PTR_LAB_0460d218;
  local_88 = 0;
  local_1050 = '\x01';
  lVar7 = *(long *)(param_1 + 8);
  local_1040 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  local_70 = (int *)0x0;
  local_68 = -0x8000000000000000;
  local_1048 = param_3;
  local_1038 = param_4;
  local_1030 = param_2;
  local_80 = plVar14;
  plStack_78 = plVar14;
  FUN_02e72f40(lVar7,0xff,&local_70);
  lVar15 = *(long *)(lVar7 + 8);
  if ((int)local_68 != 0) {
    piVar2 = local_70 + (long)(int)local_68 * 2;
    piVar12 = local_70;
    do {
      plVar11 = (long *)(*(long *)(*(long *)(lVar15 + 0x10) + (long)piVar12[1] * 8) + 8);
      plVar10 = (long *)(*(long *)(*(long *)(lVar15 + 0x10) + (long)*piVar12 * 8) + 8);
      if (local_1050 == '\0') {
        FUN_0325a240(plVar10,plVar11,&local_1058,1,1,&local_60);
      }
      else {
        local_60 = 0;
        if (*plVar10 != 0) {
          local_60 = *plVar10 + (long)plVar10;
        }
        lStack_58 = 0;
        if (*plVar11 != 0) {
          lStack_58 = *plVar11 + (long)plVar11;
        }
        FUN_03259290(plVar10,plVar11,&local_1058,1,1,&local_60);
      }
      lVar15 = *(long *)(lVar7 + 8);
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar2);
  }
  iVar3 = *(int *)(lVar15 + 0x18);
  if (iVar3 != 0) {
    plVar11 = *(long **)(lVar15 + 0x10);
    uVar8 = (long)iVar3 * 8 - 8;
    uVar1 = ((uint)(uVar8 >> 3) & 0x1fffffff) + 1;
    if ((uVar1 & 3) == 0) {
      plVar10 = plVar11;
    }
    else {
      lVar15 = -((ulong)uVar1 & 3);
      plVar9 = plVar11;
      do {
        plVar10 = plVar9 + 1;
        bVar4 = lVar15 != -1;
        lVar15 = lVar15 + 1;
        *(undefined1 *)(*plVar9 + 0x1afc) = 0;
        plVar9 = plVar10;
      } while (bVar4);
    }
    if (0x17 < uVar8) {
      do {
        *(undefined1 *)(*plVar10 + 0x1afc) = 0;
        *(undefined1 *)(plVar10[1] + 0x1afc) = 0;
        *(undefined1 *)(plVar10[2] + 0x1afc) = 0;
        plVar9 = plVar10 + 3;
        plVar10 = plVar10 + 4;
        *(undefined1 *)(*plVar9 + 0x1afc) = 0;
      } while (plVar10 != plVar11 + iVar3);
    }
  }
  if (local_88 != 0) {
    plVar11 = *(long **)(*(long *)(local_1030 + 8) + 0x4b8);
    if (plVar11 == (long *)0x0) {
LAB_02e733f8:
      if (0 < local_88) {
        lVar15 = 0;
        do {
          if (*(int *)(local_1038 + 0x18) < 0xf99) {
            puVar6 = (undefined8 *)
                     (*(long *)(local_1038 + 0x10) + (long)*(int *)(local_1038 + 0x18) + 0x20);
          }
          else {
            puVar6 = (undefined8 *)FUN_031c36f4();
          }
          *puVar6 = local_1028[lVar15];
          *(int *)(local_1038 + 0x18) = *(int *)(local_1038 + 0x18) + 8;
          *(int *)(local_1038 + 0x1c) = *(int *)(local_1038 + 0x1c) + 1;
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_88);
      }
    }
    else {
      local_88 = (**(code **)(*plVar11 + 0x20))(plVar11,*(long *)(local_1030 + 8),local_1028);
      if (local_88 != 0) goto LAB_02e733f8;
    }
    local_88 = 0;
  }
  lVar15 = local_68;
  uVar8 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar15) && (local_70 != (int *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_70,uVar8 << 3);
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    memset(*(void **)(param_1 + 0x140),0,(long)*(int *)(param_1 + 0x148));
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  lVar15 = *plVar14;
  if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
    puVar6 = (undefined8 *)plVar14[2];
    uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar14[6] + 8);
    }
  }
  puVar6 = (undefined8 *)plVar14[2];
  uVar8 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
  if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar6 != (undefined8 *)0x0)) {
    *puVar6 = &DAT_03c2d363;
    uVar5 = nn::os::GetSystemTick();
    puVar6[1] = uVar5;
  }
  if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
    (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
  }
  lVar15 = *plVar14;
  if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
    puVar6 = (undefined8 *)plVar14[2];
    puVar13 = (undefined8 *)((long)puVar6 + 0x17U & 0xfffffffffffffff8);
    if (puVar13 <= (undefined8 *)plVar14[3]) {
      plVar14[2] = (long)puVar13;
      if (puVar6 == (undefined8 *)0x0) goto LAB_02e7357c;
      *puVar6 = &DAT_03c4e575;
      puVar6[1] = *(undefined8 *)(plVar14[6] + 8);
    }
  }
  puVar13 = (undefined8 *)plVar14[2];
LAB_02e7357c:
  uVar8 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
  if ((uVar8 <= (ulong)plVar14[3]) && (plVar14[2] = uVar8, puVar13 != (undefined8 *)0x0)) {
    *puVar13 = &DAT_03c2d363;
    uVar5 = nn::os::GetSystemTick();
    puVar13[1] = uVar5;
  }
  if (*(code **)(lVar15 + 0x20) != (code *)0x0) {
    (**(code **)(lVar15 + 0x20))(*(undefined8 *)(lVar15 + 0x28));
  }
  return;
}


