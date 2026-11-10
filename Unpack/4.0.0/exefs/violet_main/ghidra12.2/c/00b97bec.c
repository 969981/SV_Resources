/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b97bec; name: FUN_00b97bec
 */


void FUN_00b97bec(string *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  void *pvVar14;
  long lVar15;
  byte bVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  byte bVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  string *psVar24;
  long lVar25;
  long *plVar26;
  void *__src;
  long lVar27;
  string *psVar28;
  long lVar29;
  void *pvVar30;
  long *plVar31;
  size_t sVar32;
  long lVar33;
  byte local_138 [16];
  long local_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  byte local_d8;
  undefined5 uStack_d7;
  undefined2 uStack_d2;
  undefined6 uStack_d0;
  undefined2 uStack_ca;
  long local_c8;
  undefined8 *local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  undefined1 *local_98;
  string local_90 [16];
  long local_80;
  void *local_78;
  long *plStack_70;
  
  lVar15 = param_3;
  if (param_3 == 0) {
    lVar15 = *(long *)(param_1 + 0x50);
  }
  pbVar7 = (byte *)FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar15 + 8));
  if ((*pbVar7 & 1) == 0) {
    if (*pbVar7 >> 1 == 0) goto LAB_00b97c6c;
  }
  else if (*(long *)(pbVar7 + 8) == 0) goto LAB_00b97c6c;
  std::string::append((ulong)pbVar7,'\x01');
LAB_00b97c6c:
  pbVar17 = *(byte **)(param_2 + 0x18);
  pbVar20 = *(byte **)(pbVar17 + 0x10);
  if ((*pbVar17 & 1) == 0) {
    pbVar20 = pbVar17 + 1;
  }
  std::string::append((char *)pbVar7,(ulong)pbVar20);
  FUN_00b8c44c(param_1,*(undefined8 *)(param_2 + 0x18),pbVar7,param_2);
  uVar8 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 0x18));
  *param_4 = uVar8;
  param_4[1] = pbVar7;
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  *(undefined2 *)(param_4 + 5) = 0;
  param_4[2] = uVar8;
  param_4[3] = param_3;
  iVar6 = *(int *)(param_2 + 0x28);
  if (iVar6 == 0) {
    FUN_00b8a120(param_1,pbVar7,param_2,0,"Enums must contain at least one value.");
    iVar6 = *(int *)(param_2 + 0x28);
  }
  *(int *)((long)param_4 + 0x2c) = iVar6;
  lVar9 = FUN_00b7a704(*(undefined8 *)(param_1 + 8),*(int *)(param_2 + 0x28) * 0x28);
  param_4[6] = lVar9;
  lVar15 = tpidr_el0;
  if (0 < *(int *)(param_2 + 0x28)) {
    lVar27 = 1;
    puVar22 = (undefined8 *)((ulong)&local_a8 | 2);
    lVar33 = 0;
    puVar1 = PTR_DAT_047dac40 + 0x10;
    while( true ) {
      puVar2 = (undefined8 *)(lVar9 + lVar33);
      lVar29 = *(long *)(*(long *)(param_2 + 0x30) + lVar27 * 8);
      uVar8 = FUN_00b7a414(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar29 + 0x18));
      *puVar2 = uVar8;
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(lVar29 + 0x28);
      puVar2[3] = param_4;
      pbVar7 = (byte *)FUN_00b7a414(*(undefined8 *)(param_1 + 8),param_4[1]);
      if ((*pbVar7 & 1) == 0) {
        bVar16 = *pbVar7 >> 1;
      }
      else {
        bVar16 = (byte)*(undefined8 *)(pbVar7 + 8);
      }
      bVar21 = *(byte *)*param_4;
      if ((bVar21 & 1) == 0) {
        bVar21 = bVar21 >> 1;
      }
      else {
        bVar21 = (byte)*(undefined8 *)((byte *)*param_4 + 8);
      }
      std::string::resize((ulong)pbVar7,bVar16 - bVar21);
      pbVar17 = (byte *)*puVar2;
      pbVar20 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar20 = pbVar17 + 1;
      }
      std::string::append((char *)pbVar7,(ulong)pbVar20);
      puVar2[1] = pbVar7;
      FUN_00b8c44c(param_1,*(undefined8 *)(lVar29 + 0x18),pbVar7,lVar29);
      if ((*(byte *)(lVar29 + 0x10) >> 2 & 1) == 0) {
        puVar2[4] = 0;
      }
      else {
        pvVar30 = *(void **)(lVar29 + 0x20);
        if (pvVar30 == (void *)0x0) {
          pvVar30 = *(void **)(*(long *)PTR_DAT_047dacb0 + 0x20);
        }
        psVar24 = (string *)puVar2[1];
        lVar19 = *(long *)(param_1 + 8);
        plVar26 = *(long **)(lVar15 + 0x30);
        if (plVar26 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar26 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        plVar26 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x58,8);
        plVar26[2] = 0;
        plVar26[3] = 0;
        plVar26[4] = 0;
        plVar26[9] = 0;
        *(undefined1 *)(plVar26 + 10) = 0;
        plVar26[5] = 0;
        plVar26[6] = 0;
        *plVar26 = (long)puVar1;
        plVar26[1] = (long)(plVar26 + 2);
        plVar26[7] = 0;
        plVar26[8] = 0;
        puVar12 = *(undefined8 **)(lVar19 + 0xb0);
        if (puVar12 < *(undefined8 **)(lVar19 + 0xb8)) {
          *puVar12 = plVar26;
          *(undefined8 **)(lVar19 + 0xb0) = puVar12 + 1;
        }
        else {
          __src = *(void **)(lVar19 + 0xa8);
          sVar32 = (long)puVar12 - (long)__src;
          lVar25 = (long)sVar32 >> 3;
          uVar10 = lVar25 + 1;
          if (uVar10 >> 0x3d != 0) goto LAB_00b99538;
          lVar18 = (long)*(undefined8 **)(lVar19 + 0xb8) - (long)__src;
          uVar11 = lVar18 >> 2;
          if (uVar10 <= uVar11) {
            uVar10 = uVar11;
          }
          if (0xffffffffffffffe < (ulong)(lVar18 >> 3)) {
            uVar10 = 0x1fffffffffffffff;
          }
          if (uVar10 == 0) {
            pvVar14 = (void *)0x0;
          }
          else {
            psVar28 = param_1;
            if (uVar10 >> 0x3d != 0) goto LAB_00b9953c;
            plVar31 = *(long **)(lVar15 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            pvVar14 = (void *)(**(code **)(*plVar31 + 0x10))(plVar31,uVar10 << 3,8);
          }
          puVar12 = (undefined8 *)((long)pvVar14 + lVar25 * 8);
          *puVar12 = plVar26;
          if (0 < (long)sVar32) {
            memcpy(pvVar14,__src,sVar32);
          }
          *(void **)(lVar19 + 0xa8) = pvVar14;
          *(undefined8 **)(lVar19 + 0xb0) = puVar12 + 1;
          *(void **)(lVar19 + 0xb8) = (void *)((long)pvVar14 + uVar10 * 8);
          if (__src != (void *)0x0) {
            plVar31 = *(long **)(lVar15 + 0x30);
            if (plVar31 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar31 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar31 + 0xf8))(plVar31);
            if (((uVar10 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar31 + 0x18))(plVar31,__src,0,8);
            }
            else {
              FUN_00c48fe8(plVar31,__src,0,8);
            }
          }
        }
        local_a0 = 0;
        local_98 = (undefined1 *)0x0;
        local_a8 = 0;
        uVar10 = FUN_00c11da8(pvVar30,&local_a8);
        if ((uVar10 & 1) == 0) {
          if ((local_a8 & 1) == 0) {
            local_a8 = local_a8 & 0xffffffffffff0000;
          }
          else {
            *local_98 = 0;
            local_a0 = 0;
          }
        }
        FUN_00c10f68(plVar26,&local_a8);
        puVar3 = local_98;
        if (((local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
          plVar31 = *(long **)(lVar15 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar10 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,puVar3,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,puVar3,0,8);
          }
        }
        puVar2[4] = plVar26;
        if (0 < (int)plVar26[8]) {
          std::string::string((string *)&local_a8,psVar24);
          std::string::string(local_90,psVar24);
          local_78 = pvVar30;
          plStack_70 = plVar26;
          FUN_00bae78c(param_1 + 0x18,&local_a8);
          lVar19 = local_80;
          if ((((byte)local_90[0] & 1) != 0) && (local_80 != 0)) {
            plVar26 = *(long **)(lVar15 + 0x30);
            if (plVar26 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar26 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
            if (((uVar10 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar19,0,8);
            }
            else {
              FUN_00c48fe8(plVar26,lVar19,0,8);
            }
          }
          puVar3 = local_98;
          if (((local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
            plVar26 = *(long **)(lVar15 + 0x30);
            if (plVar26 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar26 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
            if (((uVar10 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar26 + 0x18))(plVar26,puVar3,0,8);
            }
            else {
              FUN_00c48fe8(plVar26,puVar3,0,8);
            }
          }
        }
      }
      uVar10 = FUN_00b9a504(param_1,puVar2[1],param_4[3],*(undefined8 *)(lVar9 + lVar33),lVar29,5,
                            puVar2);
      uVar11 = FUN_00b9ce58(*(undefined8 *)(param_1 + 0x58),param_4,*(undefined8 *)(lVar9 + lVar33),
                            5,puVar2);
      if (((uVar10 & 1) == 0) && ((uVar11 & 1) != 0)) {
        local_a0 = 0;
        local_98 = (undefined1 *)0x0;
        local_a8 = 0;
        lVar19 = param_4[3];
        if (lVar19 == 0) {
          lVar19 = *(long *)(param_1 + 0x50);
        }
        std::string::operator=((string *)&local_a8,*(string **)(lVar19 + 8));
        uVar10 = local_a8 >> 1 & 0x7f;
        if ((local_a8 & 1) != 0) {
          uVar10 = local_a0;
        }
        if (uVar10 == 0) {
          std::string::assign((char *)&local_a8);
        }
        else {
          std::operator+("\"",(string *)&local_a8);
          puVar12 = (undefined8 *)std::string::append((char *)&local_c0);
          puVar5 = local_98;
          uVar8 = *(undefined8 *)((long)puVar12 + 2);
          puVar3 = (undefined1 *)puVar12[2];
          uVar4 = *(undefined2 *)puVar12;
          uStack_d0 = (undefined6)((ulong)puVar12[1] >> 0x10);
          local_d8 = (byte)uVar8;
          uStack_d7 = (undefined5)((ulong)uVar8 >> 8);
          uStack_d2 = (undefined2)((ulong)uVar8 >> 0x30);
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
          if (((local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
            plVar26 = *(long **)(lVar15 + 0x30);
            if (plVar26 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar26 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
            if (((uVar10 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar26 + 0x18))(plVar26,puVar5,0,8);
            }
            else {
              FUN_00c48fe8(plVar26,puVar5,0,8);
            }
          }
          uVar10 = local_b0;
          local_a8 = CONCAT62(local_a8._2_6_,uVar4);
          *(ulong *)((long)puVar22 + 6) = CONCAT62(uStack_d0,uStack_d2);
          *puVar22 = CONCAT26(uStack_d2,CONCAT51(uStack_d7,local_d8));
          local_98 = puVar3;
          if ((((ulong)local_c0 & 1) != 0) && (local_b0 != 0)) {
            plVar26 = *(long **)(lVar15 + 0x30);
            if (plVar26 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar26 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar11 = (**(code **)(*plVar26 + 0xf8))(plVar26);
            if (((uVar11 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar26 + 0x18))(plVar26,uVar10,0,8);
            }
            else {
              FUN_00c48fe8(plVar26,uVar10,0,8);
            }
          }
        }
        uVar8 = puVar2[1];
        std::operator+("Note that enum values use C++ scoping rules, meaning that enum values are siblings of their type, not children of it.  Therefore, \""
                       ,*(string **)(lVar9 + lVar33));
        puVar13 = (ulong *)std::string::append((char *)local_138);
        uStack_118 = puVar13[1];
        local_110 = puVar13[2];
        local_120 = *puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        puVar3 = (undefined1 *)((ulong)&local_a8 | 1);
        if ((local_a8 & 1) != 0) {
          puVar3 = local_98;
        }
        puVar13 = (ulong *)std::string::append((char *)&local_120,(ulong)puVar3);
        uStack_100 = puVar13[1];
        local_f8 = puVar13[2];
        local_108 = *puVar13;
        *puVar13 = 0;
        puVar13[1] = 0;
        puVar13[2] = 0;
        puVar13 = (ulong *)std::string::append((char *)&local_108);
        uStack_e8 = puVar13[1];
        local_e0 = puVar13[2];
        local_f0 = *puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        pbVar20 = (byte *)*param_4;
        pbVar7 = *(byte **)(pbVar20 + 0x10);
        if ((*pbVar20 & 1) == 0) {
          pbVar7 = pbVar20 + 1;
        }
        puVar12 = (undefined8 *)std::string::append((char *)&local_f0,(ulong)pbVar7);
        local_c8 = puVar12[2];
        uVar23 = *puVar12;
        local_d8 = (byte)uVar23;
        uStack_d7 = (undefined5)((ulong)uVar23 >> 8);
        uStack_d2 = (undefined2)((ulong)uVar23 >> 0x30);
        uStack_d0 = (undefined6)puVar12[1];
        uStack_ca = (undefined2)((ulong)puVar12[1] >> 0x30);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar13 = (ulong *)std::string::append((char *)&local_d8);
        uStack_b8 = puVar13[1];
        local_b0 = puVar13[2];
        local_c0 = (undefined8 *)*puVar13;
        puVar13[1] = 0;
        puVar13[2] = 0;
        *puVar13 = 0;
        FUN_00b89f94(param_1,uVar8,lVar29,0,&local_c0);
        uVar10 = local_b0;
        if ((((ulong)local_c0 & 1) != 0) && (local_b0 != 0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,uVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,uVar10,0,8);
          }
        }
        lVar9 = local_c8;
        if (((local_d8 & 1) != 0) && (local_c8 != 0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar10 & 1) == 0) || (lVar29 = FUN_00c4e600(), *(int *)(lVar29 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,lVar9,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,lVar9,0,8);
          }
        }
        uVar10 = local_e0;
        if (((local_f0 & 1) != 0) && (local_e0 != 0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,uVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,uVar10,0,8);
          }
        }
        uVar10 = local_f8;
        if (((local_108 & 1) != 0) && (local_f8 != 0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,uVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,uVar10,0,8);
          }
        }
        uVar10 = local_110;
        if (((local_120 & 1) != 0) && (local_110 != 0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar11 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar11 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,uVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,uVar10,0,8);
          }
        }
        lVar9 = local_128;
        if (((local_138[0] & 1) != 0) && (local_128 != 0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar10 & 1) == 0) || (lVar29 = FUN_00c4e600(), *(int *)(lVar29 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,lVar9,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,lVar9,0,8);
          }
        }
        puVar3 = local_98;
        if (((local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
          plVar26 = *(long **)(lVar15 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,puVar3,0,8);
          }
          else {
            FUN_00c48fe8(plVar26,puVar3,0,8);
          }
        }
      }
      local_a8 = puVar2[3];
      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(puVar2 + 2));
      local_c0 = puVar2;
      FUN_00b7a090(*(long *)(param_1 + 0x58) + 0xa0,&local_a8,&local_c0);
      if (*(int *)(param_2 + 0x28) <= lVar27) break;
      lVar9 = param_4[6];
      lVar33 = lVar33 + 0x28;
      lVar27 = lVar27 + 1;
    }
  }
  if ((*(byte *)(param_2 + 0x10) >> 2 & 1) == 0) {
    param_4[4] = 0;
  }
  else {
    __src = *(void **)(param_2 + 0x38);
    if (__src == (void *)0x0) {
      __src = *(void **)(*(long *)PTR_DAT_047dacb8 + 0x38);
    }
    psVar28 = (string *)param_4[1];
    lVar25 = *(long *)(param_1 + 8);
    plVar26 = *(long **)(lVar15 + 0x30);
    if (plVar26 == (long *)0x0) {
      if ((DAT_04859438 & 1) == 0) goto LAB_00b99540;
      goto LAB_00b993fc;
    }
    while( true ) {
      plVar26 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x58,8);
      puVar1 = PTR_DAT_047dac50 + 0x10;
      plVar26[2] = 0;
      plVar26[3] = 0;
      plVar26[4] = 0;
      plVar26[9] = 0;
      *plVar26 = (long)puVar1;
      plVar26[1] = (long)(plVar26 + 2);
      *(undefined2 *)(plVar26 + 10) = 0;
      plVar26[5] = 0;
      plVar26[6] = 0;
      plVar26[7] = 0;
      plVar26[8] = 0;
      puVar22 = *(undefined8 **)(lVar25 + 0xb0);
      if (puVar22 < *(undefined8 **)(lVar25 + 0xb8)) break;
      pvVar30 = *(void **)(lVar25 + 0xa8);
      sVar32 = (long)puVar22 - (long)pvVar30;
      uVar10 = ((long)sVar32 >> 3) + 1;
      if (uVar10 >> 0x3d != 0) {
LAB_00b99538:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar9 = (long)*(undefined8 **)(lVar25 + 0xb8) - (long)pvVar30;
      uVar11 = lVar9 >> 2;
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      if (0xffffffffffffffe < (ulong)(lVar9 >> 3)) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar14 = (void *)0x0;
LAB_00b990f8:
        puVar22 = (undefined8 *)((long)pvVar14 + ((long)sVar32 >> 3) * 8);
        *puVar22 = plVar26;
        if (0 < (long)sVar32) {
          memcpy(pvVar14,pvVar30,sVar32);
        }
        *(void **)(lVar25 + 0xa8) = pvVar14;
        *(undefined8 **)(lVar25 + 0xb0) = puVar22 + 1;
        *(void **)(lVar25 + 0xb8) = (void *)((long)pvVar14 + uVar10 * 8);
        if (pvVar30 != (void *)0x0) {
          plVar31 = *(long **)(lVar15 + 0x30);
          if (plVar31 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar31 = DAT_04859430;
            *(long **)(lVar15 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar31 + 0xf8))(plVar31);
          if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar31 + 0x18))(plVar31,pvVar30,0,8);
          }
          else {
            FUN_00c48fe8(plVar31,pvVar30,0,8);
          }
        }
        goto LAB_00b99178;
      }
      if (uVar10 >> 0x3d == 0) {
        plVar31 = *(long **)(lVar15 + 0x30);
        if (plVar31 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar31 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        pvVar14 = (void *)(**(code **)(*plVar31 + 0x10))(plVar31,uVar10 << 3,8);
        goto LAB_00b990f8;
      }
LAB_00b9953c:
      FUN_01f6e360();
LAB_00b99540:
      iVar6 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar6 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00b993fc:
      plVar26 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    *puVar22 = plVar26;
    *(undefined8 **)(lVar25 + 0xb0) = puVar22 + 1;
LAB_00b99178:
    local_a8 = 0;
    local_a0 = 0;
    local_98 = (undefined1 *)0x0;
    uVar10 = FUN_00c11da8(__src,&local_a8);
    if ((uVar10 & 1) == 0) {
      if ((local_a8 & 1) == 0) {
        local_a8 = local_a8 & 0xffffffffffff0000;
      }
      else {
        *local_98 = 0;
        local_a0 = 0;
      }
    }
    FUN_00c10f68(plVar26,&local_a8);
    puVar3 = local_98;
    if (((local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
      plVar31 = *(long **)(lVar15 + 0x30);
      if (plVar31 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar31 = DAT_04859430;
        *(long **)(lVar15 + 0x30) = DAT_04859430;
      }
      uVar10 = (**(code **)(*plVar31 + 0xf8))(plVar31);
      if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar31 + 0x18))(plVar31,puVar3,0,8);
      }
      else {
        FUN_00c48fe8(plVar31,puVar3,0,8);
      }
    }
    param_4[4] = plVar26;
    if (0 < (int)plVar26[8]) {
      std::string::string((string *)&local_a8,psVar28);
      std::string::string(local_90,psVar28);
      local_78 = __src;
      plStack_70 = plVar26;
      FUN_00bae78c(param_1 + 0x18,&local_a8);
      if ((((byte)local_90[0] & 1) != 0) && (local_80 != 0)) {
        plVar26 = *(long **)(lVar15 + 0x30);
        if (plVar26 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar26 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar10 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,local_80,0,8);
        }
        else {
          FUN_00c48fe8(plVar26,local_80,0,8);
        }
      }
      puVar3 = local_98;
      if (((local_a8 & 1) != 0) && (local_98 != (undefined1 *)0x0)) {
        plVar26 = *(long **)(lVar15 + 0x30);
        if (plVar26 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar26 = DAT_04859430;
          *(long **)(lVar15 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,puVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar26,puVar3,0,8);
        }
      }
    }
  }
  FUN_00b9a504(param_1,param_4[1],param_3,*param_4,param_2,4,param_4);
  return;
}


