/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e40250; name: FUN_00e40250
 */


undefined8
FUN_00e40250(long param_1,long param_2,long param_3,long *param_4,uint param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong *__dest;
  void *pvVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ushort *puVar17;
  undefined8 uVar18;
  uint uVar19;
  long *plVar20;
  ulong **__src;
  void **ppvVar21;
  long lVar22;
  ulong *puVar23;
  void **ppvVar24;
  long local_168;
  ulong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong *local_138;
  ulong *local_130;
  ulong *local_128;
  void *local_120;
  void *local_118;
  void *local_110;
  long *plStack_108;
  long local_f8;
  long lStack_f0;
  undefined1 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  long local_b8;
  long local_a8;
  long local_a0;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  long local_80;
  long local_78;
  undefined8 uStack_70;
  
  local_80 = 0;
  local_e0 = local_e0 & 0xffffffff00000000;
  local_78 = 0;
  uStack_70 = 0;
  memset(&uStack_d8,0,0x54);
  puVar17 = *(ushort **)(param_1 + 0x28);
  lVar7 = tpidr_el0;
  uVar18 = 0;
  if (puVar17 == (ushort *)0x0) {
LAB_00e407a0:
    if (local_a8 != 0) {
      local_a0 = local_a8;
      ppvVar21 = *(void ***)(lVar7 + 0x30);
      if (ppvVar21 == (void **)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        ppvVar21 = DAT_04859430;
        *(void ***)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)((long)*ppvVar21 + 0xf8))(ppvVar21);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)((long)*ppvVar21 + 0x18))(ppvVar21,local_a8,0,8);
      }
      else {
        FUN_00c48fe8(ppvVar21,local_a8,0,8);
      }
    }
    if (local_c0 != 0) {
      local_b8 = local_c0;
      ppvVar21 = *(void ***)(lVar7 + 0x30);
      if (ppvVar21 == (void **)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        ppvVar21 = DAT_04859430;
        *(void ***)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)((long)*ppvVar21 + 0xf8))(ppvVar21);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)((long)*ppvVar21 + 0x18))(ppvVar21,local_c0,0,8);
      }
      else {
        FUN_00c48fe8(ppvVar21,local_c0,0,8);
      }
    }
    if ((local_80 != 0) && (FUN_028be280(&local_80), lVar12 = local_80, local_80 != 0)) {
      ppvVar21 = *(void ***)(lVar7 + 0x30);
      if (ppvVar21 == (void **)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        ppvVar21 = DAT_04859430;
        *(void ***)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)((long)*ppvVar21 + 0xf8))(ppvVar21);
      if (((uVar11 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)((long)*ppvVar21 + 0x18))(ppvVar21,lVar12,0,8);
      }
      else {
        FUN_00c48fe8(ppvVar21,lVar12,0,8);
      }
    }
    return uVar18;
  }
  local_e8 = 0;
  local_158 = local_158 & 0xffffffff00000000;
  local_f8 = param_3;
  lStack_f0 = param_3;
  memset(&uStack_150,0,0x54);
  FUN_028be26c(&local_80,&local_158);
  pvVar3 = local_120;
  if (local_120 != (void *)0x0) {
    local_118 = local_120;
    ppvVar21 = *(void ***)(lVar7 + 0x30);
    if (ppvVar21 == (void **)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      ppvVar21 = DAT_04859430;
      *(void ***)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)((long)*ppvVar21 + 0xf8))(ppvVar21);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)((long)*ppvVar21 + 0x18))(ppvVar21,pvVar3,0,8);
    }
    else {
      FUN_00c48fe8(ppvVar21,pvVar3,0,8);
    }
  }
  puVar23 = local_138;
  if (local_138 != (ulong *)0x0) {
    local_130 = local_138;
    ppvVar21 = *(void ***)(lVar7 + 0x30);
    if (ppvVar21 == (void **)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      ppvVar21 = DAT_04859430;
      *(void ***)(lVar7 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)((long)*ppvVar21 + 0xf8))(ppvVar21);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)((long)*ppvVar21 + 0x18))(ppvVar21,puVar23,0,8);
    }
    else {
      FUN_00c48fe8(ppvVar21,puVar23,0,8);
    }
  }
  *(undefined4 *)(local_78 + -0x60) = 0;
  lVar22 = param_3 - param_2;
  puVar23 = (ulong *)(ulong)(param_6 & 1);
  *(long *)(local_78 + -0x58) = param_2;
  *(long *)(local_78 + -0x50) = param_2;
  *(long *)(local_78 + -0x48) = param_3;
  lVar12 = *(long *)(local_78 + -0x40);
  lVar13 = *(long *)(local_78 + -0x38) - lVar12 >> 3;
  uVar14 = lVar13 * -0x5555555555555555;
  uVar11 = (ulong)*(uint *)(param_1 + 0x1c);
  if (uVar14 < uVar11) {
    FUN_00e40f58((long *)(local_78 + -0x40),uVar11 + lVar13 * 0x5555555555555555,&local_f8);
  }
  else if (uVar11 < uVar14) {
    *(ulong *)(local_78 + -0x38) = lVar12 + uVar11 * 0x18;
  }
  lVar12 = local_78;
  lVar13 = *(long *)(local_78 + -0x28);
  pvVar3 = *(void **)(local_78 + -0x20);
  uVar11 = (ulong)*(uint *)(param_1 + 0x20);
  uVar14 = (long)pvVar3 - lVar13 >> 4;
  if (uVar14 < uVar11) {
    uVar11 = uVar11 - uVar14;
    if ((ulong)(*(long *)(local_78 + -0x18) - (long)pvVar3 >> 4) < uVar11) {
      lVar4 = FUN_028be054((long *)(local_78 + -0x28));
      __src = *(ulong ***)(lVar12 + -0x28);
      lVar13 = *(long *)(lVar12 + -0x20);
      lVar10 = lVar13 - (long)__src;
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = FUN_028be098(lVar4);
        __src = *(ulong ***)(lVar12 + -0x28);
        lVar13 = *(long *)(lVar12 + -0x20);
      }
      pvVar3 = (void *)(lVar5 + (lVar10 >> 4) * 0x10);
      memset(pvVar3,0,uVar11 * 0x10);
      sVar9 = lVar13 - (long)__src;
      if (0 < (long)sVar9) {
        memcpy((void *)((long)pvVar3 - sVar9),__src,sVar9);
      }
      *(void **)(lVar12 + -0x28) = (void *)((long)pvVar3 - sVar9);
      *(void **)(lVar12 + -0x20) = (void *)((long)pvVar3 + uVar11 * 0x10);
      *(long *)(lVar12 + -0x18) = lVar5 + lVar4 * 0x10;
      if (__src != (ulong **)0x0) {
        ppvVar21 = *(void ***)(lVar7 + 0x30);
        if (ppvVar21 == (void **)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          ppvVar21 = DAT_04859430;
          *(void ***)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)((long)*ppvVar21 + 0xf8))(ppvVar21);
        if ((uVar11 & 1) != 0) goto LAB_00e40d6c;
        goto LAB_00e40c8c;
      }
    }
    else {
      pvVar8 = pvVar3;
      if (uVar11 != 0) {
        pvVar8 = (void *)((long)pvVar3 + uVar11 * 0x10);
        memset(pvVar3,0,uVar11 * 0x10);
      }
      *(void **)(lVar12 + -0x20) = pvVar8;
    }
  }
  else if (uVar14 != uVar11) {
    *(ulong *)(local_78 + -0x20) = lVar13 + uVar11 * 0x10;
  }
LAB_00e40400:
  *(ushort **)(local_78 + -0x10) = puVar17;
  __src = &local_138;
  ppvVar21 = &local_120;
  puVar17 = &switchD_00e404a8::switchdataD_03d68c02;
  *(uint *)(local_78 + -8) = param_5;
  uVar19 = 1;
  local_168 = 0;
  bVar1 = false;
  *(char *)(local_78 + -4) = (char)puVar23;
  do {
    lVar12 = local_78;
    if (((uVar19 & 0xfff) == 0) && ((int)lVar22 <= (int)(uVar19 >> 0xc))) goto LAB_00e40d68;
    puVar23 = (ulong *)(local_78 + -0x60);
    plVar20 = (long *)(local_78 + -0x10);
    plVar6 = (long *)*plVar20;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,puVar23);
    }
    switch(*(undefined4 *)puVar23) {
    case 0xfffffc18:
      if (((param_5 >> 5 & 1) != 0) && (*(long *)(lVar12 + -0x50) == param_2))
      goto switchD_00e404a8_caseD_fffffc1f;
      if ((param_5 >> 0xc & 1) == 0) {
        lVar13 = *(long *)(lVar12 + -0x50);
      }
      else {
        lVar13 = *(long *)(lVar12 + -0x50);
        if (lVar13 != param_3) goto switchD_00e404a8_caseD_fffffc1f;
      }
      lVar13 = lVar13 - *(long *)(lVar12 + -0x58);
      if ((local_168 < lVar13) || ((bool)(bVar1 ^ 1))) {
        local_e0 = *puVar23;
        uStack_d8 = *(undefined8 *)(lVar12 + -0x58);
        local_d0 = *(undefined8 *)(lVar12 + -0x50);
        uStack_c8 = *(undefined8 *)(lVar12 + -0x48);
        if (&local_e0 != puVar23) {
          FUN_028ace78(&local_c0,*(undefined8 *)(lVar12 + -0x40),*(undefined8 *)(lVar12 + -0x38));
          FUN_028ad18c(&local_a8,*(undefined8 *)(lVar12 + -0x28),*(undefined8 *)(lVar12 + -0x20));
        }
        uStack_88 = (undefined5)((ulong)*(undefined8 *)(lVar12 + -0xb) >> 0x18);
        uStack_90 = (undefined5)*plVar20;
        local_8b = (undefined3)((ulong)*plVar20 >> 0x28);
        local_168 = lVar13;
      }
      if (local_168 == lVar22) {
        FUN_028be280(&local_80,local_80);
        bVar1 = true;
        local_168 = lVar22;
      }
      else {
        FUN_028be280(&local_80,local_78 + -0x60);
        bVar1 = true;
      }
      break;
    default:
      goto switchD_00e404a8_caseD_fffffc19;
    case 0xfffffc1d:
    case 0xfffffc1e:
    case 0xfffffc21:
      break;
    case 0xfffffc1f:
switchD_00e404a8_caseD_fffffc1f:
      FUN_028be280(&local_80,local_78 + -0x60);
      break;
    case 0xfffffc20:
      local_158 = *puVar23;
      uStack_150 = *(undefined8 *)(lVar12 + -0x58);
      local_148 = *(undefined8 *)(lVar12 + -0x50);
      uStack_140 = *(undefined8 *)(lVar12 + -0x48);
      local_138 = (ulong *)0x0;
      local_130 = (ulong *)0x0;
      local_128 = (ulong *)0x0;
      lVar13 = *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40);
      if (lVar13 != 0) {
        lVar13 = lVar13 >> 3;
        uVar11 = lVar13 * -0x5555555555555555;
        if (0xaaaaaaaaaaaaaaa < uVar11) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        __dest = (ulong *)FUN_028be17c(uVar11);
        local_128 = __dest + lVar13;
        sVar9 = *(long *)(lVar12 + -0x38) - (long)*(void **)(lVar12 + -0x40);
        local_138 = __dest;
        if (0 < (long)sVar9) {
          local_130 = __dest;
          memcpy(__dest,*(void **)(lVar12 + -0x40),sVar9);
          __dest = __dest + (sVar9 / 0x18) * 3;
        }
        local_130 = __dest;
      }
      local_118 = (void *)0x0;
      local_110 = (void *)0x0;
      local_120 = (void *)0x0;
      lVar13 = *(long *)(lVar12 + -0x20) - *(long *)(lVar12 + -0x28);
      if (lVar13 != 0) {
        uVar11 = lVar13 >> 4;
        if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        pvVar3 = (void *)FUN_028be098(uVar11);
        local_110 = (void *)((long)pvVar3 + uVar11 * 0x10);
        sVar9 = *(long *)(lVar12 + -0x20) - (long)*(void **)(lVar12 + -0x28);
        local_120 = pvVar3;
        if (0 < (long)sVar9) {
          local_118 = pvVar3;
          memcpy(pvVar3,*(void **)(lVar12 + -0x28),sVar9);
          pvVar3 = (void *)((long)pvVar3 + sVar9);
        }
        local_118 = pvVar3;
      }
      plStack_108 = (long *)*plVar20;
      (**(code **)(*(long *)*plVar20 + 0x18))((long *)*plVar20,1,puVar23);
      (**(code **)(*plStack_108 + 0x18))(plStack_108,0,&local_158);
      FUN_028be26c(&local_80,&local_158);
      pvVar3 = local_120;
      if (local_120 != (void *)0x0) {
        local_118 = local_120;
        ppvVar24 = *(void ***)(lVar7 + 0x30);
        if (ppvVar24 == (void **)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          ppvVar24 = DAT_04859430;
          *(void ***)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)((long)*ppvVar24 + 0xf8))(ppvVar24);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)((long)*ppvVar24 + 0x18))(ppvVar24,pvVar3,0,8);
        }
        else {
          FUN_00c48fe8(ppvVar24,pvVar3,0,8);
        }
      }
      puVar23 = local_138;
      if (local_138 != (ulong *)0x0) {
        local_130 = local_138;
        ppvVar24 = *(void ***)(lVar7 + 0x30);
        if (ppvVar24 == (void **)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          ppvVar24 = DAT_04859430;
          *(void ***)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar11 = (**(code **)((long)*ppvVar24 + 0xf8))(ppvVar24);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)((long)*ppvVar24 + 0x18))(ppvVar24,puVar23,0,8);
        }
        else {
          FUN_00c48fe8(ppvVar24,puVar23,0,8);
        }
      }
    }
    uVar19 = uVar19 + 1;
    if (local_80 == local_78) {
      if (bVar1) {
        *(long *)*param_4 = param_2;
        *(long *)(*param_4 + 8) = param_2 + local_168;
        *(undefined1 *)(*param_4 + 0x10) = 1;
        if (local_b8 != local_c0) {
          uVar11 = 0;
          uVar14 = 1;
          do {
            puVar15 = (undefined8 *)(local_c0 + uVar11 * 0x18);
            puVar16 = (undefined8 *)(*param_4 + uVar14 * 0x18);
            *puVar16 = *puVar15;
            puVar16[1] = puVar15[1];
            *(undefined1 *)(puVar16 + 2) = *(undefined1 *)(puVar15 + 2);
            bVar1 = uVar14 < (ulong)((local_b8 - local_c0 >> 3) * -0x5555555555555555);
            uVar11 = uVar14;
            uVar14 = (ulong)((int)uVar14 + 1);
          } while (bVar1);
        }
        uVar18 = 1;
      }
      else {
        uVar18 = 0;
      }
      goto LAB_00e407a0;
    }
  } while( true );
switchD_00e404a8_caseD_fffffc19:
  FUN_028be260();
LAB_00e40d68:
  FUN_028be170();
LAB_00e40d6c:
  lVar12 = FUN_00c4e600();
  if (*(int *)(lVar12 + 0x12c8) < 1) {
LAB_00e40c8c:
    (**(code **)((long)*ppvVar21 + 0x18))(ppvVar21,__src,0,8);
  }
  else {
    FUN_00c48fe8(ppvVar21,__src,0,8);
  }
  goto LAB_00e40400;
}


