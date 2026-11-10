/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c13d90; name: FUN_00c13d90
 */


void FUN_00c13d90(void *param_1,long *param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long *plVar14;
  long *plVar15;
  long unaff_x24;
  long *plVar16;
  long *plVar17;
  ulong unaff_x26;
  undefined1 auStack_88 [16];
  ulong local_78;
  long local_70;
  
  if (*param_2 == 0) {
    if (*param_3 == 1) {
      puVar12 = (undefined8 *)(*(long *)(param_3 + 10) + 0x20);
    }
    else {
      puVar12 = (undefined8 *)(*(long *)(param_3 + 2) + 0x10);
    }
    puVar12 = (undefined8 *)*puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      if ((*(int *)(puVar12 + 1) == 9) && (pbVar13 = (byte *)*puVar12, pbVar13 != (byte *)0x0)) {
        if (((*pbVar13 & 1) != 0) && (lVar5 = *(long *)(pbVar13 + 0x10), lVar5 != 0)) {
          unaff_x26 = tpidr_el0;
          plVar16 = *(long **)(unaff_x26 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(unaff_x26 + 0x30) = DAT_04859430;
          }
          uVar3 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,lVar5,0,8);
          }
          else {
            FUN_00c48fe8(plVar16,lVar5,0,8);
          }
        }
        lVar5 = tpidr_el0;
        plVar16 = *(long **)(lVar5 + 0x30);
        if (plVar16 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar16 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,pbVar13,0,8);
        }
        else {
          FUN_00c48fe8(plVar16,pbVar13,0,8);
        }
      }
      unaff_x24 = tpidr_el0;
      plVar16 = *(long **)(unaff_x24 + 0x30);
      if (plVar16 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar16 = DAT_04859430;
        *(long **)(unaff_x24 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar16 + 0xf8))(plVar16);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar16 + 0x18))(plVar16,puVar12,0,8);
      }
      else {
        FUN_00c48fe8(plVar16,puVar12,0,8);
      }
    }
  }
  if (*param_3 == 1) {
    plVar16 = *(long **)(param_3 + 10);
    puVar12 = (undefined8 *)0x0;
    *(long *)(param_3 + 10) = *plVar16;
  }
  else {
    puVar12 = *(undefined8 **)(param_3 + 2);
    unaff_x24 = *(long *)(param_3 + 4);
    unaff_x26 = *(ulong *)(param_3 + 6);
    FUN_00c1a764();
    plVar16 = (long *)0x0;
  }
  if (*(char *)((long)param_2 + 0xc) == '\0') {
    uVar3 = *(long *)(unaff_x24 + 8) - 1U & unaff_x26;
    puVar8 = *(undefined8 **)(*(long *)(unaff_x24 + 0x20) + uVar3 * 8);
    plVar16 = (long *)param_2[2];
    if (puVar8 == puVar12) {
LAB_00c14054:
      puVar8 = (undefined8 *)(plVar16[4] + uVar3 * 8);
LAB_00c14060:
      uVar4 = FUN_00c1b964(puVar12,*puVar8);
      *(undefined8 *)(plVar16[4] + uVar3 * 8) = uVar4;
    }
    else {
      if ((puVar8 != (undefined8 *)0x0) &&
         (puVar8 != *(undefined8 **)(*(long *)(unaff_x24 + 0x20) + (uVar3 ^ 1) * 8))) {
        do {
          puVar8 = (undefined8 *)puVar8[3];
          if (puVar8 == (undefined8 *)0x0) goto LAB_00c13ff8;
        } while (puVar8 != puVar12);
        goto LAB_00c14054;
      }
LAB_00c13ff8:
      FUN_00c1a8fc(auStack_88,unaff_x24,puVar12);
      lVar5 = *(long *)(*(long *)(unaff_x24 + 0x20) + local_78 * 8);
      uVar3 = local_78;
      if (lVar5 == 0) goto LAB_00c14054;
      plVar17 = plVar16 + 4;
      puVar8 = (undefined8 *)(*plVar17 + local_78 * 8);
      if (lVar5 != *(long *)(*(long *)(unaff_x24 + 0x20) + (local_78 ^ 1) * 8)) goto LAB_00c14060;
      plVar14 = (long *)*puVar8;
      plVar15 = *(long **)(local_70 + 8);
      if (*(long **)(local_70 + 8) == (long *)0x0) {
        plVar15 = (long *)(local_70 + 0x10);
        plVar9 = (long *)*plVar15;
        if (*plVar9 != local_70) {
          do {
            lVar5 = *plVar15;
            plVar15 = (long *)(lVar5 + 0x10);
            plVar9 = (long *)*plVar15;
          } while (*plVar9 != lVar5);
        }
      }
      else {
        do {
          plVar9 = plVar15;
          plVar15 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if (*plVar14 == local_70) {
        *plVar14 = (long)plVar9;
      }
      plVar14[3] = plVar14[3] + -1;
      FUN_01336080(plVar14[1],local_70);
      if ((plVar14[2] == 0) && (local_70 != 0)) {
        lVar5 = tpidr_el0;
        plVar15 = *(long **)(lVar5 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar15 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,local_70,0,8);
        }
        else {
          FUN_00c48fe8(plVar15,local_70,0,8);
        }
      }
      if (plVar14[3] == 0) {
        uVar3 = local_78 & 0xfffffffffffffffe;
        lVar5 = plVar16[5];
        FUN_00c1a630(plVar14,plVar14[1]);
        if (lVar5 == 0) {
          lVar5 = tpidr_el0;
          plVar15 = *(long **)(lVar5 + 0x30);
          if (plVar15 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar15 = DAT_04859430;
            *(long **)(lVar5 + 0x30) = DAT_04859430;
          }
          uVar7 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,0,8);
          }
          else {
            FUN_00c48fe8(plVar15,plVar14,0,8);
          }
        }
        *(undefined8 *)(*plVar17 + (local_78 << 3 | 8)) = 0;
        *(undefined8 *)(*plVar17 + uVar3 * 8) = 0;
      }
    }
    if ((*(int *)(puVar12 + 1) == 9) && (pbVar13 = (byte *)*puVar12, pbVar13 != (byte *)0x0)) {
      if (((*pbVar13 & 1) != 0) && (lVar5 = *(long *)(pbVar13 + 0x10), lVar5 != 0)) {
        lVar6 = tpidr_el0;
        plVar17 = *(long **)(lVar6 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar7 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar17,lVar5,0,8);
        }
      }
      lVar5 = tpidr_el0;
      plVar17 = *(long **)(lVar5 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar17 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,pbVar13,0,8);
      }
      else {
        FUN_00c48fe8(plVar17,pbVar13,0,8);
      }
    }
    if (plVar16[5] == 0) {
      lVar5 = tpidr_el0;
      plVar17 = *(long **)(lVar5 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar17 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar7 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar12,0,8);
      }
      else {
        FUN_00c48fe8(plVar17,puVar12,0,8);
      }
    }
    *plVar16 = *plVar16 + -1;
    if ((uVar3 == plVar16[3]) && (uVar3 < (ulong)plVar16[1])) {
      do {
        if (*(long *)(plVar16[4] + uVar3 * 8) != 0) break;
        uVar3 = uVar3 + 1;
        plVar16[3] = uVar3;
      } while (plVar16[1] != uVar3);
    }
    goto LAB_00c142ac;
  }
  plVar17 = (long *)param_2[2];
  uVar10 = plVar17[1];
  uVar3 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = plVar16[1];
  uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar3 < 2) {
    uVar7 = uVar10 - 1 & uVar7;
  }
  else if (uVar10 <= uVar7) {
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar7 / uVar10;
    }
    uVar7 = uVar7 - uVar11 * uVar10;
  }
  plVar15 = *(long **)(*plVar17 + uVar7 * 8);
  do {
    plVar14 = plVar15;
    plVar15 = (long *)*plVar14;
  } while ((long *)*plVar14 != plVar16);
  if (plVar14 == plVar17 + 3) {
LAB_00c13fd8:
    if (*plVar16 != 0) {
      uVar11 = *(ulong *)(*plVar16 + 8);
      if (uVar3 < 2) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar1 = 0;
        if (uVar10 != 0) {
          uVar1 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar1 * uVar10;
      }
      if (uVar11 == uVar7) goto LAB_00c14194;
    }
    *(undefined8 *)(*plVar17 + uVar7 * 8) = 0;
  }
  else {
    uVar11 = plVar14[1];
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar1 * uVar10;
    }
    if (uVar11 != uVar7) goto LAB_00c13fd8;
  }
LAB_00c14194:
  if (*plVar16 != 0) {
    uVar11 = *(ulong *)(*plVar16 + 8);
    if (uVar3 < 2) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar3 = 0;
      if (uVar10 != 0) {
        uVar3 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar3 * uVar10;
    }
    if (uVar11 != uVar7) {
      *(long **)(*plVar17 + uVar11 * 8) = plVar14;
    }
  }
  *plVar14 = *plVar16;
  *plVar16 = 0;
  plVar17[5] = plVar17[5] + -1;
  if (plVar16 != (long *)0x0) {
    if (((int)plVar16[3] == 9) && (pbVar13 = (byte *)plVar16[2], pbVar13 != (byte *)0x0)) {
      if (((*pbVar13 & 1) != 0) && (lVar5 = *(long *)(pbVar13 + 0x10), lVar5 != 0)) {
        lVar6 = tpidr_el0;
        plVar15 = *(long **)(lVar6 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar15 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar15 + 0xf8))(plVar15);
        if (((uVar3 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar15 + 0x18))(plVar15,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar15,lVar5,0,8);
        }
      }
      lVar5 = tpidr_el0;
      plVar15 = *(long **)(lVar5 + 0x30);
      if (plVar15 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar15 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,pbVar13,0,8);
      }
      else {
        FUN_00c48fe8(plVar15,pbVar13,0,8);
      }
    }
    if (plVar17[4] == 0) {
      lVar5 = tpidr_el0;
      plVar17 = *(long **)(lVar5 + 0x30);
      if (plVar17 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar17 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar16,0,8);
      }
      else {
        FUN_00c48fe8(plVar17,plVar16,0,8);
      }
    }
  }
LAB_00c142ac:
  memcpy(param_1,param_3,0x30);
  return;
}


