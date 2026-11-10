/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c35e7c; name: FUN_00c35e7c
 */


void FUN_00c35e7c(long param_1,undefined8 *param_2,long param_3)

{
  ulong *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  long lVar4;
  undefined2 *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long *plVar15;
  byte *pbVar16;
  void *pvVar17;
  ulong uVar18;
  undefined2 *puVar19;
  ulong *puVar20;
  byte *pbVar21;
  void *pvVar22;
  long lVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong *local_c0;
  byte *local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 local_a8;
  ulong local_90;
  byte *local_88;
  void *local_80;
  byte local_78 [8];
  ulong local_70;
  ulong local_68;
  
  uVar18 = (ulong)local_78 | 1;
  pvVar17 = (void *)((ulong)&local_90 | 1);
  puVar19 = (undefined2 *)((ulong)&local_c0 | 1);
  lVar4 = tpidr_el0;
  lVar23 = 0;
  puVar1 = (ulong *)(PTR_DAT_047dacc8 + 0x10);
  do {
    plVar15 = (long *)*param_2;
    if (plVar15 == (long *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = (int)((ulong)(plVar15[1] - *plVar15) >> 4);
    }
    if (iVar7 <= lVar23) {
      return;
    }
    puVar2 = (undefined4 *)(*plVar15 + lVar23 * 0x10);
    FUN_00c0ff30(local_78,*puVar2);
    pvVar22 = pvVar17;
    switch(puVar2[1]) {
    case 0:
      uVar8 = uVar18;
      uVar10 = (ulong)(local_78[0] >> 1);
      if ((local_78[0] & 1) != 0) {
        uVar8 = local_68;
        uVar10 = local_70;
      }
      if (uVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar25 = 0;
        lVar11 = 0;
        do {
          if (*(char *)(uVar8 + uVar25) == '\n') {
            FUN_02a007d0(param_3,uVar8 + lVar11,(uVar25 + 1) - lVar11);
            *(undefined1 *)(param_3 + 0x14) = 1;
            lVar11 = uVar25 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar10);
      }
      FUN_02a007d0(param_3,uVar8 + lVar11,uVar10 - lVar11);
      FUN_02a007d0(param_3,&DAT_03c4d655,2);
      uVar14 = FUN_00c0fe20(*(undefined8 *)(puVar2 + 2),&local_c0);
      FUN_028a8014(&local_90,&local_c0,uVar14);
      pbVar21 = (byte *)(local_90 >> 1 & 0x7f);
      if ((local_90 & 1) != 0) {
        pvVar22 = local_80;
        pbVar21 = local_88;
      }
      if (pbVar21 == (byte *)0x0) {
LAB_00c365c8:
        pbVar16 = (byte *)0x0;
      }
      else {
        pbVar24 = (byte *)0x0;
        pbVar16 = (byte *)0x0;
        do {
          if (*(byte *)((long)pvVar22 + (long)pbVar24) == 10) {
            FUN_02a007d0(param_3,(byte *)((long)pvVar22 + (long)pbVar16),
                         (long)(pbVar24 + 1) - (long)pbVar16);
            *(undefined1 *)(param_3 + 0x14) = 1;
            pbVar16 = pbVar24 + 1;
          }
          pbVar24 = pbVar24 + 1;
        } while (pbVar24 != pbVar21);
      }
      break;
    case 1:
      uVar8 = uVar18;
      uVar10 = (ulong)(local_78[0] >> 1);
      if ((local_78[0] & 1) != 0) {
        uVar8 = local_68;
        uVar10 = local_70;
      }
      if (uVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar25 = 0;
        lVar11 = 0;
        do {
          if (*(char *)(uVar8 + uVar25) == '\n') {
            FUN_02a007d0(param_3,uVar8 + lVar11,(uVar25 + 1) - lVar11);
            *(undefined1 *)(param_3 + 0x14) = 1;
            lVar11 = uVar25 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar10);
      }
      FUN_02a007d0(param_3,uVar8 + lVar11,uVar10 - lVar11);
      FUN_02a007d0(param_3,&DAT_03c69279,4);
      uVar8 = (ulong)(uint)puVar2[2];
      uVar10 = uVar8 | 0x10000000;
      puVar20 = &local_90;
      do {
        uVar25 = uVar8 & 0xf;
        uVar8 = uVar8 >> 4;
        uVar10 = uVar10 >> 4;
        puVar20 = (ulong *)((long)puVar20 + -1);
        *(char *)puVar20 = "0123456789abcdef"[uVar25];
      } while (uVar10 != 0);
      pbVar21 = (byte *)((long)&local_90 + -(long)puVar20);
      local_c0 = puVar20;
      local_b8 = pbVar21;
      if ((byte *)0xffffffffffffffef < pbVar21) {
LAB_00c36b08:
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pbVar21 < (byte *)0x17) {
        local_90 = CONCAT71(local_90._1_7_,(char)((int)pbVar21 << 1));
        pvVar9 = pvVar17;
        if (pbVar21 != (byte *)0x0) goto LAB_00c36550;
      }
      else {
        plVar15 = *(long **)(lVar4 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar15 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        pvVar9 = (void *)(**(code **)(*plVar15 + 0x10))
                                   (plVar15,(ulong)(local_78 + -(long)puVar20 + -8) &
                                            0xfffffffffffffff0,8);
        local_90 = (ulong)(local_78 + -(long)puVar20 + -8) & 0xfffffffffffffff0 | 1;
        local_88 = pbVar21;
        local_80 = pvVar9;
LAB_00c36550:
        memcpy(pvVar9,puVar20,(size_t)pbVar21);
      }
      *(byte *)((long)pvVar9 + (long)pbVar21) = 0;
      pbVar21 = (byte *)(local_90 >> 1 & 0x7f);
      if ((local_90 & 1) != 0) {
        pvVar22 = local_80;
        pbVar21 = local_88;
      }
      if (pbVar21 == (byte *)0x0) goto LAB_00c365c8;
      pbVar24 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
      do {
        if (*(byte *)((long)pvVar22 + (long)pbVar24) == 10) {
          FUN_02a007d0(param_3,(byte *)((long)pvVar22 + (long)pbVar16),
                       (long)(pbVar24 + 1) - (long)pbVar16);
          *(undefined1 *)(param_3 + 0x14) = 1;
          pbVar16 = pbVar24 + 1;
        }
        pbVar24 = pbVar24 + 1;
      } while (pbVar24 != pbVar21);
      break;
    case 2:
      uVar8 = uVar18;
      uVar10 = (ulong)(local_78[0] >> 1);
      if ((local_78[0] & 1) != 0) {
        uVar8 = local_68;
        uVar10 = local_70;
      }
      if (uVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar25 = 0;
        lVar11 = 0;
        do {
          if (*(char *)(uVar8 + uVar25) == '\n') {
            FUN_02a007d0(param_3,uVar8 + lVar11,(uVar25 + 1) - lVar11);
            *(undefined1 *)(param_3 + 0x14) = 1;
            lVar11 = uVar25 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar10);
      }
      FUN_02a007d0(param_3,uVar8 + lVar11,uVar10 - lVar11);
      FUN_02a007d0(param_3,&DAT_03c69279,4);
      uVar8 = *(ulong *)(puVar2 + 2);
      uVar10 = uVar8 | 0x1000000000000000;
      puVar20 = &local_90;
      do {
        uVar25 = uVar8 & 0xf;
        uVar8 = uVar8 >> 4;
        uVar10 = uVar10 >> 4;
        puVar20 = (ulong *)((long)puVar20 + -1);
        *(char *)puVar20 = "0123456789abcdef"[uVar25];
      } while (uVar10 != 0);
      pbVar21 = (byte *)((long)&local_90 + -(long)puVar20);
      local_c0 = puVar20;
      local_b8 = pbVar21;
      if ((byte *)0xffffffffffffffef < pbVar21) goto LAB_00c36b08;
      if (pbVar21 < (byte *)0x17) {
        local_90 = CONCAT71(local_90._1_7_,(char)((int)pbVar21 << 1));
        pvVar9 = pvVar17;
        if (pbVar21 != (byte *)0x0) goto LAB_00c36264;
      }
      else {
        plVar15 = *(long **)(lVar4 + 0x30);
        if (plVar15 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar15 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        pvVar9 = (void *)(**(code **)(*plVar15 + 0x10))
                                   (plVar15,(ulong)(local_78 + -(long)puVar20 + -8) &
                                            0xfffffffffffffff0,8);
        local_90 = (ulong)(local_78 + -(long)puVar20 + -8) & 0xfffffffffffffff0 | 1;
        local_88 = pbVar21;
        local_80 = pvVar9;
LAB_00c36264:
        memcpy(pvVar9,puVar20,(size_t)pbVar21);
      }
      *(byte *)((long)pvVar9 + (long)pbVar21) = 0;
      pbVar21 = (byte *)(local_90 >> 1 & 0x7f);
      if ((local_90 & 1) != 0) {
        pvVar22 = local_80;
        pbVar21 = local_88;
      }
      if (pbVar21 == (byte *)0x0) goto LAB_00c365c8;
      pbVar24 = (byte *)0x0;
      pbVar16 = (byte *)0x0;
      do {
        if (*(byte *)((long)pvVar22 + (long)pbVar24) == 10) {
          FUN_02a007d0(param_3,(byte *)((long)pvVar22 + (long)pbVar16),
                       (long)(pbVar24 + 1) - (long)pbVar16);
          *(undefined1 *)(param_3 + 0x14) = 1;
          pbVar16 = pbVar24 + 1;
        }
        pbVar24 = pbVar24 + 1;
      } while (pbVar24 != pbVar21);
      break;
    case 3:
      uVar8 = uVar18;
      uVar10 = (ulong)(local_78[0] >> 1);
      if ((local_78[0] & 1) != 0) {
        uVar8 = local_68;
        uVar10 = local_70;
      }
      if (uVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar25 = 0;
        lVar11 = 0;
        do {
          if (*(char *)(uVar8 + uVar25) == '\n') {
            FUN_02a007d0(param_3,uVar8 + lVar11,(uVar25 + 1) - lVar11);
            *(undefined1 *)(param_3 + 0x14) = 1;
            lVar11 = uVar25 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar10);
      }
      FUN_02a007d0(param_3,uVar8 + lVar11,uVar10 - lVar11);
      pbVar21 = *(byte **)(puVar2 + 2);
      local_90 = 0;
      bVar3 = *pbVar21;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 != 0) goto LAB_00c36314;
LAB_00c3636c:
        puVar20 = local_c0;
        local_c0 = (ulong *)CONCAT71(local_c0._1_7_,6);
        puVar6 = local_c0;
        *(undefined1 *)(puVar19 + 1) = 0x22;
        *puVar19 = 0x203a;
        local_c0._5_3_ = SUB83(puVar20,5);
        local_c0._0_5_ = (uint5)(uint)puVar6;
        uVar8 = *(ulong *)(pbVar21 + 8);
        pbVar16 = *(byte **)(pbVar21 + 0x10);
        if ((*pbVar21 & 1) == 0) {
          pbVar16 = pbVar21 + 1;
          uVar8 = (ulong)(*pbVar21 >> 1);
        }
        FUN_00c0fad0(pbVar16,uVar8,&local_c0);
        std::string::append((char *)&local_c0);
        pbVar21 = (byte *)((ulong)local_c0 >> 1 & 0x7f);
        puVar5 = puVar19;
        if (((ulong)local_c0 & 1) != 0) {
          pbVar21 = local_b8;
          puVar5 = (undefined2 *)CONCAT44(uStack_ac,local_b0);
        }
        if (pbVar21 == (byte *)0x0) {
          pbVar16 = (byte *)0x0;
        }
        else {
          pbVar24 = (byte *)0x0;
          pbVar16 = (byte *)0x0;
          do {
            if (*(byte *)((long)puVar5 + (long)pbVar24) == 10) {
              FUN_02a007d0(param_3,(byte *)((long)puVar5 + (long)pbVar16),
                           (long)(pbVar24 + 1) - (long)pbVar16);
              *(undefined1 *)(param_3 + 0x14) = 1;
              pbVar16 = pbVar24 + 1;
            }
            pbVar24 = pbVar24 + 1;
          } while (pbVar24 != pbVar21);
        }
        FUN_02a007d0(param_3,(byte *)((long)puVar5 + (long)pbVar16),(long)pbVar21 - (long)pbVar16);
        if ((((ulong)local_c0 & 1) != 0) && (lVar11 = CONCAT44(uStack_ac,local_b0), lVar11 != 0)) {
          plVar15 = *(long **)(lVar4 + 0x30);
          if (plVar15 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar15 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar8 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar15,lVar11,0,8);
          }
        }
      }
      else {
        if (*(long *)(pbVar21 + 8) == 0) goto LAB_00c3636c;
LAB_00c36314:
        local_b8 = *(byte **)(pbVar21 + 0x10);
        local_b0 = (uint)(bVar3 >> 1);
        local_a8 = 0;
        if ((bVar3 & 1) == 0) {
          local_b8 = pbVar21 + 1;
        }
        else {
          local_b0 = *(uint *)(pbVar21 + 8);
        }
        local_c0 = puVar1;
        uStack_ac = local_b0;
        uVar8 = FUN_00c012e4(&local_90,&local_c0);
        if ((uVar8 & 1) == 0) goto LAB_00c3636c;
        if (*(char *)(param_1 + 4) == '\0') {
          FUN_02a007d0(param_3,&DAT_03c4f2e4,3);
          *(undefined1 *)(param_3 + 0x14) = 1;
          std::string::append((char *)(param_3 + 0x18));
        }
        else {
          FUN_02a007d0(param_3,&DAT_03c5c1fc,3);
        }
        FUN_00c35e7c(param_1,&local_90,param_3);
        if (*(char *)(param_1 + 4) == '\0') {
          FUN_00c36b10(param_3);
          FUN_02a007d0(param_3,&DAT_03c33d7b,2);
          *(undefined1 *)(param_3 + 0x14) = 1;
        }
        else {
          FUN_02a007d0(param_3,&DAT_03c17d9f,2);
        }
      }
      if (local_90 != 0) {
        FUN_00bfee44(&local_90);
      }
      goto switchD_00c35f50_default;
    case 4:
      uVar8 = uVar18;
      uVar10 = (ulong)(local_78[0] >> 1);
      if ((local_78[0] & 1) != 0) {
        uVar8 = local_68;
        uVar10 = local_70;
      }
      if (uVar10 == 0) {
        lVar11 = 0;
      }
      else {
        uVar25 = 0;
        lVar11 = 0;
        do {
          if (*(char *)(uVar8 + uVar25) == '\n') {
            FUN_02a007d0(param_3,uVar8 + lVar11,(uVar25 + 1) - lVar11);
            *(undefined1 *)(param_3 + 0x14) = 1;
            lVar11 = uVar25 + 1;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar10);
      }
      FUN_02a007d0(param_3,uVar8 + lVar11,uVar10 - lVar11);
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_02a007d0(param_3,&DAT_03c4f2e4,3);
        *(undefined1 *)(param_3 + 0x14) = 1;
        std::string::append((char *)(param_3 + 0x18));
      }
      else {
        FUN_02a007d0(param_3,&DAT_03c5c1fc,3);
      }
      FUN_00c35e7c(param_1,*(undefined8 *)(puVar2 + 2),param_3);
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_00c36b10(param_3);
        puVar13 = &DAT_03c33d7b;
        uVar14 = 2;
        goto LAB_00c36614;
      }
      puVar13 = &DAT_03c17d9f;
      uVar14 = 2;
      goto LAB_00c365fc;
    default:
      goto switchD_00c35f50_default;
    }
    FUN_02a007d0(param_3,(byte *)((long)pvVar22 + (long)pbVar16),(long)pbVar21 - (long)pbVar16);
    pvVar22 = local_80;
    if (((local_90 & 1) != 0) && (local_80 != (void *)0x0)) {
      plVar15 = *(long **)(lVar4 + 0x30);
      if (plVar15 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar15 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,pvVar22,0,8);
      }
      else {
        FUN_00c48fe8(plVar15,pvVar22,0,8);
      }
    }
    if (*(char *)(param_1 + 4) == '\0') {
      puVar13 = &DAT_03c67c74;
      uVar14 = 1;
LAB_00c36614:
      FUN_02a007d0(param_3,puVar13,uVar14);
      *(undefined1 *)(param_3 + 0x14) = 1;
    }
    else {
      puVar13 = &DAT_03bf391f;
      uVar14 = 1;
LAB_00c365fc:
      FUN_02a007d0(param_3,puVar13,uVar14);
    }
switchD_00c35f50_default:
    uVar8 = local_68;
    if (((local_78[0] & 1) != 0) && (local_68 != 0)) {
      plVar15 = *(long **)(lVar4 + 0x30);
      if (plVar15 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar15 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,uVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar15,uVar8,0,8);
      }
    }
    lVar23 = lVar23 + 1;
  } while( true );
}


