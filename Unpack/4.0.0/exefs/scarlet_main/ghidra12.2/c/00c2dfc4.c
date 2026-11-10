/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c2dfc4; name: FUN_00c2dfc4
 */


void FUN_00c2dfc4(long param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong local_78 [2];
  char *local_68;
  
LAB_00c2e018:
  cVar1 = *(char *)(param_1 + 0x70);
  if (cVar1 == '\n') {
    if (*(char *)(param_1 + 0xad) == '\0') {
      lVar10 = tpidr_el0;
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      pcVar8 = (char *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,8);
      local_78[0] = 0x31;
      local_78[1] = 0x2d;
      local_68 = pcVar8;
      memcpy(pcVar8,"String literals cannot cross line boundaries.",0x2d);
      pcVar8[0x2d] = '\0';
LAB_00c2ea38:
      (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                 *(undefined4 *)(param_1 + 0x90),local_78);
      pcVar8 = local_68;
      if ((local_78[0] & 1) == 0) {
        return;
      }
      if (local_68 == (char *)0x0) {
        return;
      }
      plVar11 = *(long **)(lVar10 + 0x30);
      if (plVar11 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar11 = DAT_04859430;
        *(long **)(lVar10 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,pcVar8,0,8);
        return;
      }
      FUN_00c48fe8(plVar11,pcVar8,0,8);
      return;
    }
  }
  else {
    if (cVar1 != '\\') {
      if (cVar1 == '\0') {
        lVar10 = tpidr_el0;
        plVar11 = *(long **)(lVar10 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        local_68 = (char *)(**(code **)(*plVar11 + 0x10))(plVar11,0x20,8);
        local_78[0] = 0x21;
        local_78[1] = 0x19;
        local_68[0x18] = '.';
        uVar5 = s_Unexpected_end_of_string__03ca5025._16_8_;
        uVar4 = s_Unexpected_end_of_string__03ca5025._0_8_;
        *(undefined8 *)(local_68 + 8) = s_Unexpected_end_of_string__03ca5025._8_8_;
        *(undefined8 *)(local_68 + 0x10) = uVar5;
        *(undefined8 *)local_68 = uVar4;
        local_68[0x19] = '\0';
        goto LAB_00c2ea38;
      }
      FUN_00c2dea0(param_1);
      if (cVar1 == param_2) {
        return;
      }
      goto LAB_00c2e018;
    }
    FUN_00c2dea0(param_1);
    bVar2 = *(byte *)(param_1 + 0x70);
    uVar3 = bVar2 - 0x61;
    if ((((0x15 < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x2a2023U) == 0)) &&
        ((uVar3 = bVar2 - 0x22, 0x3a < uVar3 ||
         ((1L << ((ulong)uVar3 & 0x3f) & 0x400000020000021U) == 0)))) && ((bVar2 & 0xf8) != 0x30)) {
      if (bVar2 == 0x55) {
        FUN_00c2dea0(param_1);
        if (((*(char *)(param_1 + 0x70) == '0') &&
            (FUN_00c2dea0(param_1), *(char *)(param_1 + 0x70) == '0')) &&
           (FUN_00c2dea0(param_1), (*(byte *)(param_1 + 0x70) & 0xfe) == 0x30)) {
          FUN_00c2dea0(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
              ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_00c2dea0(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_00c2dea0(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                  ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                FUN_00c2dea0(param_1);
                if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                   ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                    ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
                  FUN_00c2dea0(param_1);
                  if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                     ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                      ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) goto LAB_00c2e1c0;
                }
              }
            }
          }
        }
        lVar10 = tpidr_el0;
        plVar11 = *(long **)(lVar10 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
        local_78[0] = 0x41;
        local_78[1] = 0x3d;
        local_68 = pvVar7;
        memcpy(pvVar7,"Expected eight hex digits up to 10ffff for \\U escape sequence",0x3d);
        *(undefined1 *)((long)pvVar7 + 0x3d) = 0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),local_78);
        pcVar8 = local_68;
        if (((local_78[0] & 1) != 0) && (local_68 != (void *)0x0)) {
          plVar11 = *(long **)(lVar10 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,pcVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,pcVar8,0,8);
          }
        }
      }
      else if (bVar2 == 0x75) {
        FUN_00c2dea0(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
            ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
          FUN_00c2dea0(param_1);
          if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
             ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
              ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
            FUN_00c2dea0(param_1);
            if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
               ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) {
              FUN_00c2dea0(param_1);
              if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
                 ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
                  ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) goto LAB_00c2e1c0;
            }
          }
        }
        lVar10 = tpidr_el0;
        plVar11 = *(long **)(lVar10 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x40,8);
        local_78[0] = 0x41;
        local_78[1] = 0x30;
        local_68 = pvVar7;
        memcpy(pvVar7,"Expected four hex digits for \\u escape sequence.",0x30);
        *(undefined1 *)((long)pvVar7 + 0x30) = 0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),local_78);
        pcVar8 = local_68;
        if (((local_78[0] & 1) != 0) && (local_68 != (void *)0x0)) {
          plVar11 = *(long **)(lVar10 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,pcVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,pcVar8,0,8);
          }
        }
      }
      else if (bVar2 == 0x78) {
        FUN_00c2dea0(param_1);
        if ((*(byte *)(param_1 + 0x70) - 0x30 < 10) ||
           ((uVar3 = *(byte *)(param_1 + 0x70) - 0x41, uVar3 < 0x26 &&
            ((1L << ((ulong)uVar3 & 0x3f) & 0x3f0000003fU) != 0)))) goto LAB_00c2e1c0;
        lVar10 = tpidr_el0;
        plVar11 = *(long **)(lVar10 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,8);
        local_78[0] = 0x31;
        local_78[1] = 0x28;
        local_68 = pvVar7;
        memcpy(pvVar7,"Expected hex digits for escape sequence.",0x28);
        *(undefined1 *)((long)pvVar7 + 0x28) = 0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),local_78);
        pcVar8 = local_68;
        if (((local_78[0] & 1) != 0) && (local_68 != (void *)0x0)) {
          plVar11 = *(long **)(lVar10 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,pcVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,pcVar8,0,8);
          }
        }
      }
      else {
        lVar10 = tpidr_el0;
        plVar11 = *(long **)(lVar10 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar10 + 0x30) = DAT_04859430;
        }
        pvVar7 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x30,8);
        local_78[0] = 0x31;
        local_78[1] = 0x2a;
        local_68 = pvVar7;
        memcpy(pvVar7,"Invalid escape sequence in string literal.",0x2a);
        *(undefined1 *)((long)pvVar7 + 0x2a) = 0;
        (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                  (*(long **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x8c),
                   *(undefined4 *)(param_1 + 0x90),local_78);
        pcVar8 = local_68;
        if (((local_78[0] & 1) != 0) && (local_68 != (void *)0x0)) {
          plVar11 = *(long **)(lVar10 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar10 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,pcVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,pcVar8,0,8);
          }
        }
      }
      goto LAB_00c2e018;
    }
  }
LAB_00c2e1c0:
  FUN_00c2dea0(param_1);
  goto LAB_00c2e018;
}


