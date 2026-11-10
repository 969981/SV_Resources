/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7c264; name: FUN_00b7c264
 */


long FUN_00b7c264(long *param_1,ulong param_2,int param_3)

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
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  byte *local_140;
  byte *pbStack_138;
  undefined1 auStack_130 [152];
  undefined8 local_98;
  undefined8 uStack_90;
  byte *local_88;
  byte *local_80;
  undefined *puStack_78;
  undefined1 local_70;
  
  lVar15 = *param_1;
  if (lVar15 != 0) {
    FUN_00bb1344(lVar15);
  }
  lVar18 = param_1[4];
  if (*(long *)(lVar18 + 0x58) != 0) {
    if (*(long **)(lVar18 + 0x50) != (long *)0x0) {
      lVar12 = tpidr_el0;
      plVar13 = *(long **)(lVar18 + 0x50);
      do {
        plVar16 = (long *)*plVar13;
        if (((*(byte *)(plVar13 + 2) & 1) != 0) && (lVar7 = plVar13[4], lVar7 != 0)) {
          plVar17 = *(long **)(lVar12 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar17,lVar7,0,8);
          }
        }
        plVar17 = *(long **)(lVar12 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,plVar13,0,8);
        }
        else {
          FUN_00c48fe8(plVar17,plVar13,0,8);
        }
        plVar13 = plVar16;
      } while (plVar16 != (long *)0x0);
    }
    uVar6 = *(ulong *)(lVar18 + 0x48);
    *(undefined8 *)(lVar18 + 0x50) = 0;
    if (uVar6 != 0) {
      uVar9 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar11 * 8) = 0;
          *(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar11 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar11 * 8 + 0x10) = 0;
          lVar12 = uVar11 * 8;
          uVar11 = uVar11 + 4;
          *(undefined8 *)(*(long *)(lVar18 + 0x40) + lVar12 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar11);
      }
      if (uVar9 != 0) {
        lVar12 = uVar11 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar18 + 0x40) + lVar12) = 0;
          uVar9 = uVar9 - 1;
          lVar12 = lVar12 + 8;
        } while (uVar9 != 0);
      }
    }
    *(undefined8 *)(lVar18 + 0x58) = 0;
    lVar18 = param_1[4];
  }
  if (*(long *)(lVar18 + 0x30) != 0) {
    if (*(long **)(lVar18 + 0x28) != (long *)0x0) {
      lVar12 = tpidr_el0;
      plVar13 = *(long **)(lVar18 + 0x28);
      do {
        plVar16 = (long *)*plVar13;
        if (((*(byte *)(plVar13 + 2) & 1) != 0) && (lVar7 = plVar13[4], lVar7 != 0)) {
          plVar17 = *(long **)(lVar12 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar6 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar17,lVar7,0,8);
          }
        }
        plVar17 = *(long **)(lVar12 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,plVar13,0,8);
        }
        else {
          FUN_00c48fe8(plVar17,plVar13,0,8);
        }
        plVar13 = plVar16;
      } while (plVar16 != (long *)0x0);
    }
    uVar6 = *(ulong *)(lVar18 + 0x20);
    *(undefined8 *)(lVar18 + 0x28) = 0;
    if (uVar6 != 0) {
      uVar9 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          *(undefined8 *)(*(long *)(lVar18 + 0x18) + uVar11 * 8) = 0;
          *(undefined8 *)(*(long *)(lVar18 + 0x18) + uVar11 * 8 + 8) = 0;
          *(undefined8 *)(*(long *)(lVar18 + 0x18) + uVar11 * 8 + 0x10) = 0;
          lVar12 = uVar11 * 8;
          uVar11 = uVar11 + 4;
          *(undefined8 *)(*(long *)(lVar18 + 0x18) + lVar12 + 0x18) = 0;
        } while ((uVar6 & 0xfffffffffffffffc) != uVar11);
      }
      if (uVar9 != 0) {
        lVar12 = uVar11 << 3;
        do {
          *(undefined8 *)(*(long *)(lVar18 + 0x18) + lVar12) = 0;
          uVar9 = uVar9 - 1;
          lVar12 = lVar12 + 8;
        } while (uVar9 != 0);
      }
    }
    *(undefined8 *)(lVar18 + 0x30) = 0;
    lVar18 = param_1[4];
  }
  if (*(long **)(lVar18 + 0x148) != (long *)0x0) {
    plVar13 = (long *)(lVar18 + 0x148);
    plVar16 = *(long **)(lVar18 + 0x148);
    do {
      plVar17 = plVar16;
      if (((ulong)plVar17[4] < param_2) ||
         (((ulong)plVar17[4] <= param_2 && ((int)plVar17[5] < param_3)))) {
        plVar10 = plVar17 + 1;
        plVar17 = plVar13;
      }
      else {
        plVar10 = plVar17;
      }
      plVar13 = plVar17;
      plVar16 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
    if ((((plVar17 != (long *)(lVar18 + 0x148)) && ((ulong)plVar17[4] <= param_2)) &&
        (((ulong)plVar17[4] < param_2 || ((int)plVar17[5] <= param_3)))) &&
       (lVar18 = plVar17[6], lVar18 != 0)) goto LAB_00b7c93c;
  }
  if ((param_1[3] != 0) && (lVar18 = FUN_00b7c264(param_1[3],param_2,param_3), lVar18 != 0))
  goto LAB_00b7c93c;
  if (param_1[1] != 0) {
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
          lVar18 = *(long *)puVar3;
          if (lVar18 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar18 == 0) {
          FUN_00bb162c(&local_80);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar18 == 1) {
            sched_yield();
            lVar18 = *(long *)puVar3;
          }
        }
      }
    }
    local_140 = *(byte **)PTR_DAT_047dabb0;
    local_98 = 0;
    uStack_90 = 0;
    local_148 = 0;
    pbStack_138 = local_140;
    local_88 = local_140;
    uVar6 = (**(code **)(*(long *)param_1[1] + 0x20))
                      ((long *)param_1[1],*(undefined8 *)(param_2 + 8),param_3,&local_158);
    if ((uVar6 & 1) != 0) {
      local_80 = *(byte **)(local_140 + 0x10);
      if ((*local_140 & 1) == 0) {
        local_80 = local_140 + 1;
      }
      lVar18 = FUN_00ba6514(param_1[4] + 0x118,&local_80);
      if ((lVar18 == 0) || (*(long *)(lVar18 + 0x18) == 0)) {
        lVar18 = FUN_00b7d75c(param_1,&local_158);
        FUN_00bb9a58(&local_158);
        if (lVar18 != 0) {
          plVar13 = *(long **)(param_1[4] + 0x148);
          if (plVar13 != (long *)0x0) {
            plVar16 = (long *)(param_1[4] + 0x148);
            plVar17 = plVar16;
            do {
              plVar10 = plVar13;
              if (((ulong)plVar10[4] < param_2) ||
                 (((ulong)plVar10[4] <= param_2 && ((int)plVar10[5] < param_3)))) {
                plVar14 = plVar10 + 1;
                plVar10 = plVar17;
              }
              else {
                plVar14 = plVar10;
              }
              plVar17 = plVar10;
              plVar13 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
            if ((((plVar10 != plVar16) && ((ulong)plVar10[4] <= param_2)) &&
                (((ulong)plVar10[4] < param_2 || ((int)plVar10[5] <= param_3)))) &&
               (lVar18 = plVar10[6], lVar18 != 0)) goto LAB_00b7c93c;
          }
        }
        goto LAB_00b7c938;
      }
    }
    FUN_00bb9a58(&local_158);
  }
LAB_00b7c938:
  lVar18 = 0;
LAB_00b7c93c:
  if (lVar15 != 0) {
    FUN_00bb14b8(lVar15);
  }
  return lVar18;
}


