/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c133d4; name: FUN_00c133d4
 */


undefined8 * FUN_00c133d4(long *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x25;
  ulong uVar14;
  byte *local_b8;
  int local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (*(char *)((long)param_1 + 0xc) == '\0') {
    plVar12 = (long *)param_1[2];
    local_b0 = 0;
    FUN_00c14c90(&local_b8,param_2);
    local_a8 = 0;
    FUN_00c1a8fc(&local_78,plVar12,&local_b8);
    if (local_78 == 0) {
      uVar13 = plVar12[1];
      uVar2 = *plVar12 + 1;
      uVar14 = uVar13 * 3 >> 2 & 0xfffffffffffffff;
      if (uVar2 < uVar14) {
        if ((8 < uVar13) && (uVar2 <= (uVar13 * 3 & 0x3fffffffffffffff) >> 4)) {
          uVar3 = 0;
          do {
            uVar3 = uVar3 + 1;
          } while ((uVar2 * 5 >> 2) + 1 << (uVar3 & 0x3f) < uVar14);
          uVar2 = uVar13 >> (uVar3 & 0x3f);
          if (uVar2 < 9) {
            uVar2 = 8;
          }
          if (uVar2 != uVar13) goto LAB_00c13a1c;
        }
      }
      else if (uVar13 < 0x800000000000001) {
        uVar2 = uVar13 << 1;
LAB_00c13a1c:
        FUN_00c1b1ac(plVar12,uVar2);
        FUN_00c1a8fc(&local_a0,plVar12,&local_b8);
        local_78 = local_a0;
        local_70 = uStack_98;
        local_58 = CONCAT71(uStack_7f,local_80);
        local_68 = local_90;
        local_60 = uStack_88;
      }
      if (plVar12[5] == 0) {
        lVar4 = tpidr_el0;
        plVar10 = *(long **)(lVar4 + 0x30);
        if (plVar10 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar10 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
          uVar9 = local_a8;
        }
        else {
          uVar9 = 0;
        }
        lVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
      }
      else {
        lVar4 = FUN_00c0e238(plVar12[5],0,0x20);
        uVar9 = 0;
      }
      *(undefined4 *)(lVar4 + 8) = 0;
      FUN_00c14c90(lVar4,&local_b8);
      *(undefined8 *)(lVar4 + 0x10) = uVar9;
      FUN_00c1af10(&local_a0,plVar12,local_58,lVar4);
      *plVar12 = *plVar12 + 1;
      local_80 = 1;
    }
    else {
      local_80 = 0;
      local_a0 = local_78;
      uStack_98 = local_70;
      local_90 = local_68;
      uStack_88 = local_60;
    }
    lVar4 = local_a0;
    if ((local_b0 == 9) && (local_b8 != (byte *)0x0)) {
      if (((*local_b8 & 1) != 0) && (lVar5 = *(long *)(local_b8 + 0x10), lVar5 != 0)) {
        lVar6 = tpidr_el0;
        plVar12 = *(long **)(lVar6 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,lVar5,0,8);
        }
      }
      lVar5 = tpidr_el0;
      plVar12 = *(long **)(lVar5 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,local_b8,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,local_b8,0,8);
      }
    }
    plVar12 = (long *)(lVar4 + 0x10);
    goto LAB_00c13888;
  }
  plVar10 = (long *)param_1[2];
  uVar2 = FUN_00c1aa00(param_2);
  uVar13 = plVar10[1];
  if (uVar13 == 0) {
LAB_00c13510:
    if (plVar10[4] == 0) {
      lVar4 = tpidr_el0;
      plVar12 = *(long **)(lVar4 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar12 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x28,8);
    }
    else {
      plVar12 = (long *)FUN_00c0e238(plVar10[4],0,0x28);
    }
    *(undefined4 *)(plVar12 + 3) = 0;
    FUN_00c14c90(plVar12 + 2,param_2);
    plVar12[4] = 0;
    *plVar12 = 0;
    plVar12[1] = uVar2;
    if ((uVar13 == 0) || (*(float *)(plVar10 + 6) * (float)uVar13 < (float)(plVar10[5] + 1))) {
      uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
      uVar14 = (ulong)((float)(plVar10[5] + 1) / *(float *)(plVar10 + 6));
      if (uVar14 <= uVar13) {
        uVar14 = uVar13;
      }
      if (uVar14 - 1 == 0) {
        uVar14 = 2;
      }
      else if ((uVar14 & uVar14 - 1) != 0) {
        uVar14 = std::__next_prime(uVar14);
      }
      uVar13 = plVar10[1];
      if (uVar13 < uVar14) {
        uVar3 = uVar14;
LAB_00c13654:
        FUN_00c19114(plVar10,uVar3);
      }
      else if (uVar14 < uVar13) {
        uVar3 = (ulong)((float)(ulong)plVar10[5] / *(float *)(plVar10 + 6));
        if ((uVar13 < 3) ||
           (uVar7 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
           uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333),
           1 < (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
          uVar3 = std::__next_prime(uVar3);
        }
        else if (1 < uVar3) {
          uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
        }
        if (uVar3 <= uVar14) {
          uVar3 = uVar14;
        }
        if (uVar3 < uVar13) goto LAB_00c13654;
      }
      uVar13 = plVar10[1];
      if ((uVar13 & uVar13 - 1) == 0) {
        unaff_x25 = uVar13 - 1 & uVar2;
      }
      else if (uVar2 < uVar13) {
        unaff_x25 = uVar2;
      }
      else {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar2 / uVar13;
        }
        unaff_x25 = uVar2 - uVar14 * uVar13;
      }
    }
    plVar8 = *(long **)(*plVar10 + unaff_x25 * 8);
    if (plVar8 == (long *)0x0) {
      plVar8 = plVar10 + 3;
      *plVar12 = *plVar8;
      *plVar8 = (long)plVar12;
      *(long **)(*plVar10 + unaff_x25 * 8) = plVar8;
      if (*plVar12 != 0) {
        uVar2 = *(ulong *)(*plVar12 + 8);
        if ((uVar13 & uVar13 - 1) == 0) {
          uVar2 = uVar2 & uVar13 - 1;
        }
        else if (uVar13 <= uVar2) {
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar2 / uVar13;
          }
          uVar2 = uVar2 - uVar14 * uVar13;
        }
        plVar8 = (long *)(*plVar10 + uVar2 * 8);
        goto LAB_00c13874;
      }
    }
    else {
      *plVar12 = *plVar8;
LAB_00c13874:
      *plVar8 = (long)plVar12;
    }
    plVar10[5] = plVar10[5] + 1;
  }
  else {
    uVar14 = uVar13 - 1;
    if ((uVar13 & uVar14) == 0) {
      unaff_x25 = uVar14 & uVar2;
      plVar12 = *(long **)(*plVar10 + unaff_x25 * 8);
      if (plVar12 == (long *)0x0) goto LAB_00c13510;
      do {
        plVar12 = (long *)*plVar12;
        if ((plVar12 == (long *)0x0) || (plVar12[1] != uVar2 && (plVar12[1] & uVar14) != unaff_x25))
        goto LAB_00c13510;
        uVar3 = FUN_00c19624(plVar12 + 2,param_2);
      } while ((uVar3 & 1) == 0);
    }
    else {
      unaff_x25 = uVar2;
      if (uVar13 <= uVar2) {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar2 / uVar13;
        }
        unaff_x25 = uVar2 - uVar14 * uVar13;
      }
      plVar12 = *(long **)(*plVar10 + unaff_x25 * 8);
      if (plVar12 == (long *)0x0) goto LAB_00c13510;
      do {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_00c13510;
        uVar14 = plVar12[1];
        if (uVar14 != uVar2) {
          if (uVar13 <= uVar14) {
            uVar3 = 0;
            if (uVar13 != 0) {
              uVar3 = uVar14 / uVar13;
            }
            uVar14 = uVar14 - uVar3 * uVar13;
          }
          if (uVar14 != unaff_x25) goto LAB_00c13510;
        }
        uVar14 = FUN_00c19624(plVar12 + 2,param_2);
      } while ((uVar14 & 1) == 0);
    }
  }
  plVar12 = plVar12 + 4;
LAB_00c13888:
  puVar11 = (undefined8 *)*plVar12;
  if (puVar11 == (undefined8 *)0x0) {
    if (*param_1 == 0) {
      lVar4 = tpidr_el0;
      plVar10 = *(long **)(lVar4 + 0x30);
      if (plVar10 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar10 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x20,8);
      *(undefined4 *)(puVar11 + 1) = 0;
      FUN_00c14c90(puVar11,param_2);
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
    }
    else {
      puVar11 = (undefined8 *)FUN_00c0e238(*param_1,0,0x20);
      lVar4 = *param_1;
      *(undefined4 *)(puVar11 + 1) = 0;
      FUN_00c1b738(lVar4,puVar11);
      lVar4 = *param_1;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      FUN_00c1b94c(lVar4);
      uVar9 = *param_2;
      *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar11 = uVar9;
    }
    *plVar12 = (long)puVar11;
  }
  return puVar11 + 2;
}


