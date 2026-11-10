/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03122c64; name: FUN_03122c64
 */


void FUN_03122c64(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined *local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  
  lVar14 = tpidr_el0;
  lVar8 = *(long *)(lVar14 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar14 + 0x1000b8) = lVar8;
  }
  plVar16 = *(long **)(lVar8 + 0x3e0);
  if (plVar16 != (long *)0x0) {
    lVar14 = *plVar16;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      (**(code **)(lVar14 + 0x18))("disableAsyncProcessing",0x16,*(undefined8 *)(lVar14 + 0x28));
    }
    puVar15 = (undefined8 *)plVar16[2];
    uVar9 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = "TtdisableAsyncProcessing";
      uVar5 = nn::os::GetSystemTick();
      puVar15[1] = uVar5;
    }
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
      puVar15 = (undefined8 *)plVar16[2];
      uVar9 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
      }
    }
  }
  puVar2 = PTR_DAT_047e3318;
  plVar6 = *(long **)(param_1 + 0x4e8);
  if (plVar6 != (long *)0x0) {
    if (*(long *)(param_1 + 0x4f0) != 0) {
      FUN_03123214(param_1);
      puVar1 = puVar2 + 0x10;
      local_90 = -0x8000000000000000;
      local_98 = 0;
      local_a0 = puVar1;
      FUN_03123434(param_1,&local_a0);
      lVar14 = local_90;
      uVar9 = (ulong)local_90._4_4_;
      local_90 = (ulong)local_90._4_4_ << 0x20;
      local_a0 = puVar1;
      if ((-1 < lVar14) && (local_98 != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar9 << 3);
      }
      plVar6 = *(long **)(param_1 + 0x4e8);
    }
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = *(long **)(param_1 + 0x4e8);
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar11 = plVar6 + 2;
      do {
        lVar14 = *plVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *plVar11 = lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar14 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  puVar1 = PTR_DAT_047d1a08;
  if (0 < *(int *)(**(long **)(param_1 + 0x4e0) + 8) +
          *(int *)((long)*(long **)(param_1 + 0x4e0) + 0x1c)) {
    local_54 = 0x7fffffff7fffffff;
    local_4c = 0xffffffff;
    local_7c = 0;
    puVar2 = puVar2 + 0x10;
    local_68 = &DAT_03d7702c;
    local_60 = 0;
    local_98 = 0;
    local_90 = -0x8000000000000000;
    local_58 = 0;
    local_48 = 0;
    local_a0 = (undefined *)CONCAT71(local_a0._1_7_,1);
    local_88 = 0;
    local_80 = 0;
    local_a8 = -0x8000000000000000;
    local_78 = 0;
    local_70 = -0x8000000000000000;
    local_b0 = 0;
    local_b8 = puVar2;
    FUN_0312373c(param_1,&local_a0,&local_b8,1);
    lVar14 = local_a8;
    uVar9 = (ulong)local_a8._4_4_;
    local_a8 = (ulong)local_a8._4_4_ << 0x20;
    local_b8 = puVar2;
    if ((-1 < lVar14) && (local_b0 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_b0,uVar9 << 3);
    }
    if ((local_68 != (undefined *)0x0) && (*(int *)(local_68 + 4) != -2)) {
      (**(code **)(puVar1 + 8))(PTR_PTR_047d1a50[8],local_68,0);
      local_68 = &DAT_03d7702c;
      local_60 = 0;
    }
    lVar14 = local_70;
    uVar9 = (ulong)local_70._4_4_;
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_78 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar9 << 4);
    }
    lVar14 = local_90;
    local_70 = CONCAT44(0x80000000,(undefined4)local_70);
    uVar9 = (ulong)local_90._4_4_;
    local_78 = 0;
    local_90 = (ulong)local_90._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_98 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar9 << 2);
    }
  }
  local_a0 = (undefined *)0x1a08000010;
  FUN_00e08a00(param_1 + 0x28,param_1,&local_a0);
  FUN_031c34c8(*(undefined8 *)(param_1 + 0x4e0));
  plVar6 = *(long **)(param_1 + 0x4e0);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 != 0) {
      FUN_031c34c8(plVar6);
    }
    (**(code **)(puVar1 + 8))(0,plVar6,0);
  }
  puVar15 = *(undefined8 **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  lVar14 = *(long *)(param_1 + 0x4d0);
  uVar7 = *(uint *)(puVar15 + 3);
  if (*(char *)((long)puVar15 + 0xc) != '\0') {
    plVar6 = (long *)puVar15[2];
    if ((int)uVar7 < 1) {
      plVar11 = plVar6;
    }
    else {
      plVar11 = plVar6;
      if (uVar7 != 1) {
        iVar13 = -(uVar7 & 0xfffffffe);
        do {
          plVar10 = plVar6;
          if (*plVar11 != 0) {
            plVar10 = plVar6 + 1;
            *plVar6 = *plVar11;
          }
          plVar6 = plVar10;
          if (plVar11[1] != 0) {
            plVar6 = plVar10 + 1;
            *plVar10 = plVar11[1];
          }
          plVar11 = plVar11 + 2;
          iVar13 = iVar13 + 2;
        } while (iVar13 != 0);
      }
      plVar10 = plVar6;
      if (((uVar7 & 1) != 0) && (*plVar11 != 0)) {
        plVar10 = plVar6 + 1;
        *plVar6 = *plVar11;
      }
      plVar6 = plVar10;
      plVar11 = (long *)puVar15[2];
    }
    uVar7 = (uint)((ulong)((long)plVar6 - (long)plVar11) >> 3);
    *(undefined1 *)((long)puVar15 + 0xc) = 0;
  }
  if (uVar7 != 0) {
    if (lVar14 == 0) {
      (**(code **)(*(long *)*puVar15 + 0x28))((long *)*puVar15,puVar15[2]);
    }
    else {
      FUN_031c2998(lVar14,puVar15[2]);
    }
  }
  *(undefined4 *)(puVar15 + 3) = 0;
  *(undefined4 *)(puVar15 + 1) = 0;
  plVar6 = *(long **)(param_1 + 0x4d8);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 != 0) {
      uVar7 = *(uint *)(plVar6 + 3);
      if (*(char *)((long)plVar6 + 0xc) != '\0') {
        plVar11 = (long *)plVar6[2];
        if ((int)uVar7 < 1) {
          plVar10 = plVar11;
        }
        else {
          plVar10 = plVar11;
          if (uVar7 != 1) {
            iVar13 = -(uVar7 & 0xfffffffe);
            do {
              plVar12 = plVar11;
              if (*plVar10 != 0) {
                plVar12 = plVar11 + 1;
                *plVar11 = *plVar10;
              }
              plVar11 = plVar12;
              if (plVar10[1] != 0) {
                plVar11 = plVar12 + 1;
                *plVar12 = plVar10[1];
              }
              plVar10 = plVar10 + 2;
              iVar13 = iVar13 + 2;
            } while (iVar13 != 0);
          }
          plVar12 = plVar11;
          if (((uVar7 & 1) != 0) && (*plVar10 != 0)) {
            plVar12 = plVar11 + 1;
            *plVar11 = *plVar10;
          }
          plVar11 = plVar12;
          plVar10 = (long *)plVar6[2];
        }
        uVar7 = (uint)((ulong)((long)plVar11 - (long)plVar10) >> 3);
        *(undefined1 *)((long)plVar6 + 0xc) = 0;
      }
      if (uVar7 != 0) {
        (**(code **)(*(long *)*plVar6 + 0x28))((long *)*plVar6,plVar6[2]);
      }
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)(plVar6 + 1) = 0;
    }
    *(undefined4 *)(plVar6 + 3) = 0;
    if ((-1 < (int)*(uint *)((long)plVar6 + 0x1c)) && (plVar6[2] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,plVar6[2],(ulong)*(uint *)((long)plVar6 + 0x1c) << 3);
    }
    plVar6[2] = 0;
    *(undefined4 *)((long)plVar6 + 0x1c) = 0x80000000;
    (**(code **)(puVar1 + 8))(0,plVar6,0);
  }
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  if (plVar16 != (long *)0x0) {
    lVar14 = *plVar16;
    if (((*(byte *)(lVar14 + 0x38) & 1) != 0) && (plVar16[6] != 0)) {
      puVar15 = (undefined8 *)plVar16[2];
      uVar9 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar15 != (undefined8 *)0x0)) {
        *puVar15 = &DAT_03c4e575;
        puVar15[1] = *(undefined8 *)(plVar16[6] + 8);
      }
    }
    puVar15 = (undefined8 *)plVar16[2];
    uVar9 = (long)puVar15 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar16[3]) && (plVar16[2] = uVar9, puVar15 != (undefined8 *)0x0)) {
      *puVar15 = &DAT_03c2d363;
      uVar5 = nn::os::GetSystemTick();
      puVar15[1] = uVar5;
    }
    if (*(code **)(lVar14 + 0x20) != (code *)0x0) {
      (**(code **)(lVar14 + 0x20))(*(undefined8 *)(lVar14 + 0x28));
    }
  }
  return;
}


