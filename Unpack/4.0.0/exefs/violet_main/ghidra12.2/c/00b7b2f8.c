/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7b2f8; name: FUN_00b7b2f8
 */


long FUN_00b7b2f8(long *param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  byte *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [152];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined1 local_70;
  
  lVar12 = *param_1;
  if (lVar12 != 0) {
    FUN_00bb1344(lVar12);
  }
  lVar15 = param_1[4];
  if (*(long *)(lVar15 + 0x58) != 0) {
    if (*(long **)(lVar15 + 0x50) != (long *)0x0) {
      lVar11 = tpidr_el0;
      plVar13 = *(long **)(lVar15 + 0x50);
      do {
        plVar16 = (long *)*plVar13;
        if (((*(byte *)(plVar13 + 2) & 1) != 0) && (lVar7 = plVar13[4], lVar7 != 0)) {
          plVar14 = *(long **)(lVar11 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar11 + 0x30) = DAT_04859430;
          }
          uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,lVar7,0,8);
          }
        }
        plVar14 = *(long **)(lVar11 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar11 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,plVar13,0,8);
        }
        plVar13 = plVar16;
      } while (plVar16 != (long *)0x0);
    }
    uVar6 = *(ulong *)(lVar15 + 0x48);
    *(undefined8 *)(lVar15 + 0x50) = 0;
    if (uVar6 != 0) {
      uVar9 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar15 + 0x40) + uVar10 * 8) = 0;
          *(undefined8 *)(*(long *)(lVar15 + 0x40) + uVar10 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar15 + 0x40) + uVar10 * 8 + 0x10) = 0;
          lVar11 = uVar10 * 8;
          uVar10 = uVar10 + 4;
          *(undefined8 *)(*(long *)(lVar15 + 0x40) + lVar11 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar10);
      }
      if (uVar9 != 0) {
        lVar11 = uVar10 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar15 + 0x40) + lVar11) = 0;
          uVar9 = uVar9 - 1;
          lVar11 = lVar11 + 8;
        } while (uVar9 != 0);
      }
    }
    *(undefined8 *)(lVar15 + 0x58) = 0;
    lVar15 = param_1[4];
  }
  if (*(long *)(lVar15 + 0x30) != 0) {
    if (*(long **)(lVar15 + 0x28) != (long *)0x0) {
      lVar11 = tpidr_el0;
      plVar13 = *(long **)(lVar15 + 0x28);
      do {
        plVar16 = (long *)*plVar13;
        if (((*(byte *)(plVar13 + 2) & 1) != 0) && (lVar7 = plVar13[4], lVar7 != 0)) {
          plVar14 = *(long **)(lVar11 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar11 + 0x30) = DAT_04859430;
          }
          uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,lVar7,0,8);
          }
        }
        plVar14 = *(long **)(lVar11 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar11 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,plVar13,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,plVar13,0,8);
        }
        plVar13 = plVar16;
      } while (plVar16 != (long *)0x0);
    }
    uVar6 = *(ulong *)(lVar15 + 0x20);
    *(undefined8 *)(lVar15 + 0x28) = 0;
    if (uVar6 != 0) {
      uVar9 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar15 + 0x18) + uVar10 * 8) = 0;
          *(undefined8 *)(*(long *)(lVar15 + 0x18) + uVar10 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar15 + 0x18) + uVar10 * 8 + 0x10) = 0;
          lVar11 = uVar10 * 8;
          uVar10 = uVar10 + 4;
          *(undefined8 *)(*(long *)(lVar15 + 0x18) + lVar11 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar10);
      }
      if (uVar9 != 0) {
        lVar11 = uVar10 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar15 + 0x18) + lVar11) = 0;
          uVar9 = uVar9 - 1;
          lVar11 = lVar11 + 8;
        } while (uVar9 != 0);
      }
    }
    *(undefined8 *)(lVar15 + 0x30) = 0;
    lVar15 = param_1[4];
  }
  local_158 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_158 = param_2 + 1;
  }
  lVar15 = FUN_00ba6514(lVar15 + 0x118,&local_158);
  if (((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x18), lVar15 == 0)) &&
     ((param_1[3] == 0 || (lVar15 = FUN_00b7b2f8(param_1[3],param_2), lVar15 == 0)))) {
    if ((param_1[1] != 0) && (lVar15 = FUN_00badb04(param_1[4] + 0x18,param_2), lVar15 == 0)) {
      local_158 = PTR_DAT_047dabe0 + 0x10;
      uStack_150 = 0;
      memset(auStack_130,0,0x98);
      puVar4 = PTR_LAB_047daba8;
      puVar3 = PTR_DAT_047dab98;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        local_80 = PTR_DAT_047daba0 + 0x10;
        puStack_78 = PTR_LAB_047daba8;
        local_70 = 0;
        if (*(long *)PTR_DAT_047dab98 != 2) {
          do {
            lVar15 = *(long *)puVar3;
            if (lVar15 != 0) break;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *(undefined8 *)puVar3 = 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          puVar3 = PTR_DAT_047dab98;
          DataMemoryBarrier(2,3);
          if (lVar15 == 0) {
            FUN_00bb162c(&local_80);
            *(undefined8 *)PTR_DAT_047dab98 = 2;
          }
          else {
            while (lVar15 == 1) {
              sched_yield();
              lVar15 = *(long *)puVar3;
            }
          }
        }
      }
      local_140 = *(undefined8 *)PTR_DAT_047dabb0;
      local_98 = 0;
      uStack_90 = 0;
      local_148 = 0;
      uStack_138 = local_140;
      local_88 = local_140;
      uVar6 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],param_2,&local_158);
      if (((uVar6 & 1) == 0) || (lVar15 = FUN_00b7d75c(param_1,&local_158), lVar15 == 0)) {
        FUN_00b7e9c0(param_1[4] + 0x18,param_2);
        FUN_00bb9a58(&local_158);
      }
      else {
        FUN_00bb9a58(&local_158);
        local_158 = param_2 + 1;
        if ((*param_2 & 1) != 0) {
          local_158 = *(byte **)(param_2 + 0x10);
        }
        lVar15 = FUN_00ba6514(param_1[4] + 0x118,&local_158);
        if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x18), lVar15 != 0)) goto LAB_00b7b994;
      }
    }
    lVar15 = 0;
  }
LAB_00b7b994:
  if (lVar12 != 0) {
    FUN_00bb14b8(lVar12);
  }
  return lVar15;
}


