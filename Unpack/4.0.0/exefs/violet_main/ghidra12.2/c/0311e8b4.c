/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0311e8b4; name: FUN_0311e8b4
 */


void FUN_0311e8b4(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  uint local_10c;
  undefined1 auStack_108 [24];
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  local_e0 = 0;
  local_d8 = 0x8000000000000000;
  local_b8 = 0;
  local_b0 = 0x8000000000000000;
  local_a8 = 0;
  local_a0 = 0x8000000000000000;
  local_98 = 0;
  local_90 = -0x8000000000000000;
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar5 + 0x1000b8) = lVar10;
  }
  plVar15 = *(long **)(lVar10 + 0x3e0);
  if (plVar15 != (long *)0x0) {
    lVar10 = *plVar15;
    if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
      (**(code **)(lVar10 + 0x18))("ProcessPathRequests",0x13,*(undefined8 *)(lVar10 + 0x28));
    }
    puVar14 = (undefined8 *)plVar15[2];
    uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
    if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
      *puVar14 = "TtProcessPathRequests";
      uVar9 = nn::os::GetSystemTick();
      puVar14[1] = uVar9;
    }
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
      puVar14 = (undefined8 *)plVar15[2];
      uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c4e575;
        puVar14[1] = *(undefined8 *)(plVar15[6] + 8);
      }
    }
  }
  puVar6 = PTR_PTR_047d1a50;
  lVar10 = (long)(*(int *)(param_2 + 0x18) + 1);
  do {
    puVar1 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + lVar10 * 0x40) * 0x40);
    do {
      uVar11 = *puVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint)uVar11 < (uint)(uVar11 >> 0x20)) {
      local_10c = (uint)uVar11;
    }
    else {
      iVar8 = FUN_03232ac8(param_1 + 0x30,lVar10,1,&local_10c);
      if (iVar8 == 0) {
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        plVar15 = *(long **)(lVar10 + 0x3e0);
        if (plVar15 != (long *)0x0) {
          lVar10 = *plVar15;
          if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
            puVar14 = (undefined8 *)plVar15[2];
            uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
            if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar14 != (undefined8 *)0x0)
               ) {
              *puVar14 = &DAT_03c4e575;
              puVar14[1] = *(undefined8 *)(plVar15[6] + 8);
            }
          }
          puVar14 = (undefined8 *)plVar15[2];
          uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
          if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar14 != (undefined8 *)0x0))
          {
            *puVar14 = "EtProcessPathRequests";
            uVar9 = nn::os::GetSystemTick();
            puVar14[1] = uVar9;
          }
          if (*(code **)(lVar10 + 0x20) != (code *)0x0) {
            (**(code **)(lVar10 + 0x20))(*(undefined8 *)(lVar10 + 0x28));
          }
        }
        iVar8 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar11 = local_e8;
        local_e8 = local_e8 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_f0 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        local_f0 = 0;
        local_e8 = CONCAT44(0x80000000,(undefined4)local_e8);
        iVar8 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar11 = local_d8;
        local_d8 = local_d8 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_e0 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        local_e0 = 0;
        local_d8 = CONCAT44(0x80000000,(undefined4)local_d8);
        iVar8 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar11 = local_b0;
        local_b0 = local_b0 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_b8 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        local_b8 = 0;
        local_b0 = CONCAT44(0x80000000,(undefined4)local_b0);
        iVar8 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar11 = local_a0;
        local_a0 = local_a0 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_a8 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        local_a8 = 0;
        local_a0 = CONCAT44(0x80000000,(undefined4)local_a0);
        iVar8 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        lVar10 = local_98;
        if ((int)local_90 != 0) {
          lVar12 = (long)(int)local_90 << 5;
          do {
            lVar2 = lVar10 + lVar12;
            *(undefined4 *)(lVar2 + -8) = 0;
            if ((-1 < (int)*(uint *)(lVar2 + -4)) && (*(long *)(lVar2 + -0x10) != 0)) {
              (**(code **)(*(long *)puVar6 + 0x20))
                        (puVar6,*(long *)(lVar2 + -0x10),(ulong)*(uint *)(lVar2 + -4) << 2);
            }
            lVar12 = lVar12 + -0x20;
            *(undefined8 *)(lVar2 + -0x10) = 0;
            *(undefined4 *)(lVar2 + -4) = 0x80000000;
          } while (lVar12 != 0);
        }
        lVar10 = local_90;
        uVar11 = (ulong)local_90._4_4_;
        local_90 = (ulong)local_90._4_4_ << 0x20;
        if ((-1 < lVar10) && (local_98 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_98,uVar11 << 5);
        }
        local_98 = 0;
        local_90 = CONCAT44(0x80000000,(int)local_90);
        iVar8 = *(int *)PTR_DAT_047e4f38;
        lVar10 = *(long *)(lVar5 + 0x1000b8);
        if (lVar10 == 0) {
          lVar10 = FUN_00e5d3b4();
          *(long *)(lVar5 + 0x1000b8) = lVar10;
        }
        if (*(long *)(lVar10 + (long)iVar8 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        lVar5 = local_98;
        if ((int)local_90 != 0) {
          lVar10 = (long)(int)local_90 << 5;
          do {
            lVar12 = lVar5 + lVar10;
            *(undefined4 *)(lVar12 + -8) = 0;
            if ((-1 < (int)*(uint *)(lVar12 + -4)) && (*(long *)(lVar12 + -0x10) != 0)) {
              (**(code **)(*(long *)puVar6 + 0x20))
                        (puVar6,*(long *)(lVar12 + -0x10),(ulong)*(uint *)(lVar12 + -4) << 2);
            }
            lVar10 = lVar10 + -0x20;
            *(undefined8 *)(lVar12 + -0x10) = 0;
            *(undefined4 *)(lVar12 + -4) = 0x80000000;
          } while (lVar10 != 0);
        }
        lVar5 = local_90;
        uVar11 = (ulong)local_90._4_4_;
        local_90 = (ulong)local_90._4_4_ << 0x20;
        if ((-1 < lVar5) && (local_98 != 0)) {
          (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_98,uVar11 << 5);
        }
        uVar11 = local_a0;
        local_98 = 0;
        local_90 = CONCAT44(0x80000000,(int)local_90);
        local_a0 = local_a0 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_a8 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        uVar11 = local_b0;
        local_a8 = 0;
        local_a0 = CONCAT44(0x80000000,(undefined4)local_a0);
        local_b0 = local_b0 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_b8 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        uVar11 = local_d8;
        local_b8 = 0;
        local_b0 = CONCAT44(0x80000000,(undefined4)local_b0);
        local_d8 = local_d8 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_e0 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))();
        }
        uVar11 = local_e8;
        local_e0 = 0;
        local_d8 = CONCAT44(0x80000000,(undefined4)local_d8);
        local_e8 = local_e8 & 0xffffffff00000000;
        if ((-1 < (long)uVar11) && (local_f0 != 0)) {
          (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20);
        }
        return;
      }
      uVar11 = (ulong)local_10c;
    }
    lVar12 = *(long *)(lVar5 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar12;
    }
    plVar15 = *(long **)(lVar12 + 0x3e0);
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
        (**(code **)(lVar12 + 0x18))("ProcessPathRequestsTask",0x17,*(undefined8 *)(lVar12 + 0x28));
      }
      puVar14 = (undefined8 *)plVar15[2];
      uVar13 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar13 <= (ulong)plVar15[3]) && (plVar15[2] = uVar13, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = "TtProcessPathRequestsTask";
        uVar9 = nn::os::GetSystemTick();
        puVar14[1] = uVar9;
      }
      if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
        puVar14 = (undefined8 *)plVar15[2];
        uVar13 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
        if ((uVar13 <= (ulong)plVar15[3]) && (plVar15[2] = uVar13, puVar14 != (undefined8 *)0x0)) {
          *puVar14 = &DAT_03c4e575;
          puVar14[1] = *(undefined8 *)(plVar15[6] + 8);
        }
      }
      lVar12 = *(long *)(lVar5 + 0x1000b8);
    }
    iVar8 = *(int *)PTR_DAT_047e4f38;
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar8 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    lVar12 = *(long *)(param_1 + 0x918);
    puVar14 = (undefined8 *)(*(long *)(lVar12 + 0x48) + (long)(int)uVar11 * 0x10);
    switch(*(undefined4 *)(puVar14 + 1)) {
    case 0:
      local_78 = 0;
      local_70 = 0x8000000000000000;
      local_88 = 0xffffffffffffffff;
      local_80 = 0xffffffff;
      plVar16 = (long *)0x0;
      if (*(char *)(lVar12 + 0x58) != '\0') {
        plVar16 = &local_78;
      }
      FUN_030d0594(*puVar14,*(undefined8 *)(lVar12 + 0x28),0xffffffff,auStack_108,auStack_d0,plVar16
                   ,&local_88);
      if ((*(char *)(*(long *)(param_1 + 0x918) + 0x58) == '\0') || ((int)local_70 == 0))
      goto LAB_0311ecfc;
      lVar12 = (long)(int)local_90;
      if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
        FUN_0311de7c(&local_98,lVar12 + 1);
      }
      puVar14 = (undefined8 *)(local_98 + (long)(int)local_90 * 0x20);
      local_90 = CONCAT44(local_90._4_4_,(int)(lVar12 + 1));
      *(undefined8 *)((long)puVar14 + 4) = 0xffffffffffffffff;
LAB_0311ec7c:
      plVar16 = puVar14 + 2;
      *plVar16 = 0;
      puVar14[3] = 0x8000000000000000;
      *puVar14 = local_88;
      *(undefined4 *)(puVar14 + 1) = local_80;
      if (&local_78 == plVar16) goto LAB_0311ecfc;
      FUN_0309d15c(plVar16,puVar6);
      FUN_0309d15c(&local_78,puVar6);
      lVar12 = *plVar16;
      *plVar16 = local_78;
      *(int *)(puVar14 + 3) = (int)local_70;
      uVar11 = (ulong)local_70 >> 0x20;
      local_70._4_4_ = *(uint *)((long)puVar14 + 0x1c);
      *(uint *)((long)puVar14 + 0x1c) = (uint)uVar11;
      local_78 = lVar12;
      goto LAB_0311ed00;
    case 1:
      local_78 = 0;
      local_70 = 0x8000000000000000;
      local_88 = 0xffffffffffffffff;
      local_80 = 0xffffffff;
      plVar16 = (long *)0x0;
      if (*(char *)(lVar12 + 0x58) != '\0') {
        plVar16 = &local_78;
      }
      FUN_030cf334(*puVar14,*(undefined8 *)(lVar12 + 0x28),0xffffffff,auStack_108,auStack_d0,plVar16
                   ,&local_88);
      if ((*(char *)(*(long *)(param_1 + 0x918) + 0x58) != '\0') && ((int)local_70 != 0)) {
        lVar12 = (long)(int)local_90;
        if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
          FUN_0311de7c(&local_98,lVar12 + 1);
        }
        puVar14 = (undefined8 *)(local_98 + (long)(int)local_90 * 0x20);
        local_90 = CONCAT44(local_90._4_4_,(int)(lVar12 + 1));
        *puVar14 = 0xffffffffffffffff;
        *(undefined4 *)(puVar14 + 1) = 0xffffffff;
        goto LAB_0311ec7c;
      }
LAB_0311ecfc:
LAB_0311ed00:
      uVar7 = local_70._4_4_;
      local_70 = (ulong)local_70._4_4_ << 0x20;
      if ((-1 < (int)uVar7) && (local_78 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_78,(ulong)uVar7 << 2);
      }
      break;
    case 2:
      FUN_030d0900(*puVar14,*(undefined8 *)(lVar12 + 0x28),0xffffffff,auStack_108);
      break;
    case 3:
      FUN_030cf638(*puVar14,*(undefined8 *)(lVar12 + 0x28),0xffffffff,auStack_108);
      break;
    default:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar8 = *(int *)PTR_DAT_047e4f38;
    lVar12 = *(long *)(lVar5 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar12;
    }
    if (*(long *)(lVar12 + (long)iVar8 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar15[6] != 0)) {
        puVar14 = (undefined8 *)plVar15[2];
        uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
          *puVar14 = &DAT_03c4e575;
          puVar14[1] = *(undefined8 *)(plVar15[6] + 8);
        }
      }
      puVar14 = (undefined8 *)plVar15[2];
      uVar11 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
      if ((uVar11 <= (ulong)plVar15[3]) && (plVar15[2] = uVar11, puVar14 != (undefined8 *)0x0)) {
        *puVar14 = &DAT_03c2d363;
        uVar9 = nn::os::GetSystemTick();
        puVar14[1] = uVar9;
      }
      if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
        (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
      }
    }
  } while( true );
}


