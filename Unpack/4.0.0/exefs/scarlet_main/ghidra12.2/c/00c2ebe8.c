/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2ebe8; name: FUN_00c2ebe8
 */


undefined4 FUN_00c2ebe8(long param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong local_48;
  undefined8 local_40;
  void *local_38;
  
  bVar6 = *(byte *)(param_1 + 0x70);
  uVar7 = (uint)bVar6;
  if ((param_2 & 1) == 0) {
    while (uVar7 - 0x30 < 10) {
      FUN_00c2dea0(param_1);
      bVar6 = *(byte *)(param_1 + 0x70);
      uVar7 = (uint)bVar6;
    }
LAB_00c2ed90:
    if ((param_3 & 1) == 0) {
      if (bVar6 == 0x2e) {
        FUN_00c2dea0(param_1);
        bVar6 = *(byte *)(param_1 + 0x70);
        while (bVar6 - 0x30 < 10) {
          FUN_00c2dea0(param_1);
          bVar6 = *(byte *)(param_1 + 0x70);
        }
        goto LAB_00c2ed94;
      }
      bVar1 = false;
    }
    else {
LAB_00c2ed94:
      bVar1 = true;
    }
    if ((bVar6 | 0x20) == 0x65) {
      FUN_00c2dea0(param_1);
      if ((*(char *)(param_1 + 0x70) == '-') || (*(char *)(param_1 + 0x70) == '+')) {
        FUN_00c2dea0(param_1);
      }
      if (*(byte *)(param_1 + 0x70) - 0x30 < 10) {
        do {
          FUN_00c2dea0(param_1);
        } while (*(byte *)(param_1 + 0x70) - 0x30 < 10);
      }
      else {
        lVar5 = tpidr_el0;
        plVar9 = *(long **)(lVar5 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        pvVar3 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,8);
        local_48 = 0x31;
        local_40 = 0x21;
        local_38 = pvVar3;
        memcpy(pvVar3,"\"e\" must be followed by exponent.",0x21);
        *(undefined1 *)((long)pvVar3 + 0x21) = 0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_48);
        pvVar3 = local_38;
        if (((local_48 & 1) != 0) && (local_38 != (void *)0x0)) {
          plVar9 = *(long **)(lVar5 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar5 + 0x30) = DAT_04859430;
          }
          uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,pvVar3,0,8);
          }
          else {
            FUN_00c48fe8(plVar9,pvVar3,0,8);
          }
        }
      }
      bVar1 = true;
    }
    if ((*(char *)(param_1 + 0xa4) != '\0') &&
       ((*(char *)(param_1 + 0x70) == 'F' || (*(char *)(param_1 + 0x70) == 'f')))) {
      FUN_00c2dea0(param_1);
      bVar1 = true;
    }
LAB_00c2eedc:
    bVar6 = *(byte *)(param_1 + 0x70);
  }
  else {
    if ((uVar7 | 0x20) == 0x78) {
      FUN_00c2dea0(param_1);
      if ((9 < *(byte *)(param_1 + 0x70) - 0x30) &&
         ((uVar7 = *(byte *)(param_1 + 0x70) - 0x41, 0x25 < uVar7 ||
          ((1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) == 0)))) {
        lVar5 = tpidr_el0;
        plVar9 = *(long **)(lVar5 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        pvVar3 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,8);
        local_48 = 0x31;
        local_40 = 0x24;
        local_38 = pvVar3;
        memcpy(pvVar3,"\"0x\" must be followed by hex digits.",0x24);
        *(undefined1 *)((long)pvVar3 + 0x24) = 0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),&local_48);
        pvVar3 = local_38;
        if (((local_48 & 1) != 0) && (local_38 != (void *)0x0)) {
          plVar9 = *(long **)(lVar5 + 0x30);
          if (plVar9 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar9 = DAT_04859430;
            *(long **)(lVar5 + 0x30) = DAT_04859430;
          }
          uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,pvVar3,0,8);
          }
          else {
            FUN_00c48fe8(plVar9,pvVar3,0,8);
          }
        }
LAB_00c2f138:
        bVar1 = false;
        goto LAB_00c2eedc;
      }
      do {
        do {
          FUN_00c2dea0(param_1);
          bVar6 = *(byte *)(param_1 + 0x70);
        } while (bVar6 - 0x30 < 10);
        uVar7 = bVar6 - 0x41;
      } while (uVar7 < 0x26 && (1L << ((ulong)uVar7 & 0x3f) & 0x3f0000003fU) != 0);
    }
    else {
      if (9 < uVar7 - 0x30) goto LAB_00c2ed90;
      if ((uVar7 & 0xf8) == 0x30) {
        do {
          FUN_00c2dea0(param_1);
        } while ((*(byte *)(param_1 + 0x70) & 0xf8) == 0x30);
        if (9 < *(byte *)(param_1 + 0x70) - 0x30) goto LAB_00c2f138;
      }
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      pvVar3 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      local_48 = 0x41;
      local_40 = 0x34;
      local_38 = pvVar3;
      memcpy(pvVar3,"Numbers starting with leading zero must be in octal.",0x34);
      *(undefined1 *)((long)pvVar3 + 0x34) = 0;
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),&local_48);
      pvVar3 = local_38;
      if (((local_48 & 1) != 0) && (local_38 != (void *)0x0)) {
        plVar9 = *(long **)(lVar5 + 0x30);
        if (plVar9 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar9 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,pvVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar9,pvVar3,0,8);
        }
      }
      bVar6 = *(byte *)(param_1 + 0x70);
      while (bVar6 - 0x30 < 10) {
        FUN_00c2dea0(param_1);
        bVar6 = *(byte *)(param_1 + 0x70);
      }
    }
    bVar1 = false;
  }
  uVar7 = (uint)bVar6;
  if ((((uVar7 - 0x61 < 0x1a) || (uVar7 == 0x5f)) || ((uVar7 - 0x41 & 0xff) < 0x1a)) &&
     (*(char *)(param_1 + 0xac) != '\0')) {
    lVar5 = tpidr_el0;
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    pvVar3 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,8);
    local_48 = 0x31;
    local_40 = 0x29;
    local_38 = pvVar3;
    memcpy(pvVar3,"Need space between number and identifier.",0x29);
    *(undefined1 *)((long)pvVar3 + 0x29) = 0;
  }
  else {
    if (uVar7 != 0x2e) goto LAB_00c2f04c;
    if (bVar1) {
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      pvVar3 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x40,8);
      local_48 = 0x41;
      local_40 = 0x3e;
      local_38 = pvVar3;
      memcpy(pvVar3,"Already saw decimal point or exponent; can\'t have another one.",0x3e);
      *(undefined1 *)((long)pvVar3 + 0x3e) = 0;
    }
    else {
      lVar5 = tpidr_el0;
      plVar9 = *(long **)(lVar5 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      pvVar3 = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,0x30,8);
      local_48 = 0x31;
      local_40 = 0x27;
      local_38 = pvVar3;
      memcpy(pvVar3,"Hex and octal numbers must be integers.",0x27);
      *(undefined1 *)((long)pvVar3 + 0x27) = 0;
    }
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
             *(undefined4 *)(param_1 + 0x90),&local_48);
  pvVar3 = local_38;
  if (((local_48 & 1) != 0) && (local_38 != (void *)0x0)) {
    plVar9 = *(long **)(lVar5 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,pvVar3,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,pvVar3,0,8);
    }
  }
LAB_00c2f04c:
  uVar8 = 3;
  if (bVar1) {
    uVar8 = 4;
  }
  return uVar8;
}


