/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b9fce0; name: FUN_00b9fce0
 */


undefined1  [16] FUN_00b9fce0(long *param_1,string *param_2,undefined8 param_3,int param_4)

{
  string sVar1;
  string sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  string *psVar18;
  ulong uVar19;
  string *psVar20;
  long lVar21;
  long *plVar22;
  size_t sVar23;
  string *__src;
  void *pvVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  string local_78;
  undefined7 uStack_77;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  
  auVar25 = FUN_00ba0e0c();
  uVar19 = auVar25._8_8_;
  uVar17 = auVar25._0_8_ >> 0x20;
  if (auVar25._0_4_ != 0) goto LAB_00b9fe50;
  if (*(char *)(*param_1 + 0x29) != '\0') {
    sVar1 = *param_2;
    psVar18 = *(string **)(param_2 + 0x10);
    if (((byte)sVar1 & 1) == 0) {
      uVar19 = (ulong)((byte)sVar1 >> 1);
      if ((byte)sVar1 >> 1 != 0) {
        bVar5 = false;
        psVar20 = param_2;
        do {
          psVar20 = psVar20 + 1;
          sVar2 = *psVar20;
          if ((byte)sVar2 < 0x61) {
            if ((byte)sVar2 < 0x41) {
              if (0x2f < (byte)sVar2) {
                if ((byte)sVar2 < 0x3a) goto LAB_00b9fd5c;
                goto LAB_00b9fe44;
              }
              if ((bool)(bVar5 | sVar2 != (string)0x2e)) goto LAB_00b9fe44;
              bVar5 = true;
            }
            else {
              bVar5 = false;
              if ((0x5a < (byte)sVar2) && (sVar2 != (string)0x5f)) goto LAB_00b9fe44;
            }
          }
          else {
            if (0x7a < (byte)sVar2) goto LAB_00b9fe44;
LAB_00b9fd5c:
            bVar5 = false;
          }
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
LAB_00b9fe40:
        if (!bVar5) {
          if (((byte)sVar1 & 1) == 0) {
            psVar18 = param_2 + 1;
          }
          lVar21 = param_1[1];
          if (*psVar18 == (string)0x2e) {
            std::string::string(&local_78,param_2,1,0xffffffffffffffff,(allocator *)param_2);
            psVar18 = (string *)FUN_00b7a414(lVar21,&local_78);
            if ((((byte)local_78 & 1) != 0) &&
               (lVar21 = CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)), lVar21 != 0)) {
              lVar16 = tpidr_el0;
              plVar22 = *(long **)(lVar16 + 0x30);
              if (plVar22 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar22 = DAT_04859430;
                *(long **)(lVar16 + 0x30) = DAT_04859430;
              }
              uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
              if (((uVar19 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,0,8);
              }
              else {
                FUN_00c48fe8(plVar22,lVar21,0,8);
              }
            }
          }
          else {
            psVar18 = (string *)FUN_00b7a414(lVar21,param_2);
          }
          uVar19 = std::string::rfind((char)psVar18,0x2e);
          puVar8 = PTR_DAT_047daba0;
          puVar7 = PTR_DAT_047dab98;
          if (uVar19 == 0xffffffffffffffff) {
            if (*(long *)PTR_DAT_047dab98 != 2) {
              local_78 = SUB81(PTR_DAT_047daba0 + 0x10,0);
              uStack_77 = (undefined7)((ulong)(PTR_DAT_047daba0 + 0x10) >> 8);
              local_70 = (char)PTR_LAB_047daba8;
              uStack_6f = (undefined7)((ulong)PTR_LAB_047daba8 >> 8);
              local_68 = 0;
              if (*(long *)PTR_DAT_047dab98 != 2) {
                do {
                  lVar21 = *(long *)puVar7;
                  if (lVar21 != 0) break;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
                  if (bVar5) {
                    *(undefined8 *)puVar7 = 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                puVar7 = PTR_DAT_047dab98;
                DataMemoryBarrier(2,3);
                if (lVar21 == 0) {
                  (**(code **)(puVar8 + 0x20))(&local_78);
                  *(undefined8 *)PTR_DAT_047dab98 = 2;
                }
                else {
                  while (lVar21 == 1) {
                    sched_yield();
                    lVar21 = *(long *)puVar7;
                  }
                }
              }
            }
            pbVar10 = *(byte **)PTR_DAT_047dabb0;
            psVar20 = psVar18;
          }
          else {
            lVar21 = param_1[1];
            std::string::string(&local_78,psVar18,0,uVar19,(allocator *)psVar18);
            pbVar10 = (byte *)FUN_00b7a414(lVar21,&local_78);
            if ((((byte)local_78 & 1) != 0) &&
               (lVar21 = CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)), lVar21 != 0)) {
              lVar16 = tpidr_el0;
              plVar22 = *(long **)(lVar16 + 0x30);
              if (plVar22 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar22 = DAT_04859430;
                *(long **)(lVar16 + 0x30) = DAT_04859430;
              }
              uVar17 = (**(code **)(*plVar22 + 0xf8))(plVar22);
              if (((uVar17 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,0,8);
              }
              else {
                FUN_00c48fe8(plVar22,lVar21,0,8);
              }
            }
            lVar21 = param_1[1];
            std::string::string(&local_78,psVar18,uVar19 + 1,0xffffffffffffffff,(allocator *)psVar18
                               );
            psVar20 = (string *)FUN_00b7a414(lVar21,&local_78);
            if ((((byte)local_78 & 1) != 0) &&
               (lVar21 = CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)), lVar21 != 0)) {
              lVar16 = tpidr_el0;
              plVar22 = *(long **)(lVar16 + 0x30);
              if (plVar22 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar22 = DAT_04859430;
                *(long **)(lVar16 + 0x30) = DAT_04859430;
              }
              uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
              if (((uVar19 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,0,8);
              }
              else {
                FUN_00c48fe8(plVar22,lVar21,0,8);
              }
            }
          }
          local_70 = 0;
          uStack_6f = 0;
          local_68 = 0;
          uStack_67 = 0;
          uStack_65 = 0;
          local_78 = (string)0x0;
          uStack_77 = 0;
          if (((byte)*psVar18 & 1) == 0) {
            sVar23 = (size_t)((byte)*psVar18 >> 1);
            __src = psVar18 + 1;
          }
          else {
            sVar23 = *(size_t *)(psVar18 + 8);
            __src = *(string **)(psVar18 + 0x10);
          }
          if (0xffffffffffffffef < sVar23 + 0x12) goto LAB_00ba0824;
          if (sVar23 + 0x12 < 0x17) {
            local_78 = SUB41((int)sVar23 << 1,0);
            pvVar24 = (void *)((ulong)&local_78 | 1);
            if (sVar23 != 0) goto LAB_00ba015c;
          }
          else {
            uVar19 = sVar23 + 0x22 & 0xfffffffffffffff0;
            lVar21 = tpidr_el0;
            plVar22 = *(long **)(lVar21 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar21 + 0x30) = DAT_04859430;
            }
            pvVar24 = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,uVar19,8);
            local_78 = (string)((byte)uVar19 | 1);
            uStack_77 = (undefined7)(uVar19 >> 8);
            local_70 = (char)sVar23;
            uStack_6f = (undefined7)(sVar23 >> 8);
            local_68 = (char)pvVar24;
            uStack_67 = (undefined2)((ulong)pvVar24 >> 8);
            uStack_65 = (undefined5)((ulong)pvVar24 >> 0x18);
LAB_00ba015c:
            memcpy(pvVar24,__src,sVar23);
          }
          *(undefined1 *)((long)pvVar24 + sVar23) = 0;
          std::string::append((char *)&local_78,0x3c41991);
          lVar21 = FUN_00b8b554(param_1,&local_78);
          if ((((byte)local_78 & 1) != 0) &&
             (lVar16 = CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)), lVar16 != 0)) {
            lVar15 = tpidr_el0;
            plVar22 = *(long **)(lVar15 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar15 + 0x30) = DAT_04859430;
            }
            uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar19 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar16,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,lVar16,0,8);
            }
          }
          *(byte **)(lVar21 + 8) = pbVar10;
          if (param_4 != 1) {
            *(undefined4 *)(lVar21 + 0x48) = 1;
            puVar11 = (undefined8 *)FUN_00b7a704(param_1[1],0xa8);
            *(undefined8 **)(lVar21 + 0x50) = puVar11;
            memset(puVar11 + 3,0,0x90);
            *puVar11 = psVar20;
            puVar11[1] = psVar18;
            puVar11[2] = lVar21;
            puVar7 = PTR_DAT_047dac30;
            lVar21 = *(long *)PTR_DAT_047dac30;
            if (lVar21 == 0) {
              FUN_00bb5d70();
              lVar21 = *(long *)puVar7;
            }
            puVar11[4] = lVar21;
            *(undefined1 *)(puVar11 + 5) = 1;
            psVar18 = param_2 + 1;
            if (((byte)*param_2 & 1) != 0) {
              psVar18 = *(string **)(param_2 + 0x10);
            }
            *(bool *)((long)puVar11 + 0x29) = *psVar18 != (string)0x2e;
            if (param_4 == 2) {
              *(undefined4 *)(puVar11 + 0xd) = 1;
              puVar14 = (undefined4 *)FUN_00b7a704(param_1[1],8);
              puVar11[0xe] = puVar14;
              *puVar14 = 1;
              *(undefined4 *)(puVar11[0xe] + 4) = 0x20000000;
            }
            uVar17 = 0;
            auVar25._8_8_ = puVar11;
            auVar25._0_8_ = 1;
            goto LAB_00b9fe50;
          }
          *(undefined4 *)(lVar21 + 0x58) = 1;
          puVar11 = (undefined8 *)FUN_00b7a704(param_1[1],0x38);
          *(undefined8 **)(lVar21 + 0x60) = puVar11;
          puVar11[6] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          *puVar11 = psVar20;
          puVar11[1] = psVar18;
          puVar7 = PTR_DAT_047dac48;
          puVar11[2] = lVar21;
          puVar11[3] = 0;
          lVar21 = *(long *)puVar7;
          if (lVar21 == 0) {
            FUN_00bb5d70();
            lVar21 = *(long *)puVar7;
          }
          puVar11[4] = lVar21;
          *(undefined1 *)(puVar11 + 5) = 1;
          psVar18 = param_2 + 1;
          if (((byte)*param_2 & 1) != 0) {
            psVar18 = *(string **)(param_2 + 0x10);
          }
          sVar1 = *psVar18;
          *(undefined4 *)((long)puVar11 + 0x2c) = 1;
          *(bool *)((long)puVar11 + 0x29) = sVar1 != (string)0x2e;
          puVar12 = (undefined8 *)FUN_00b7a704(param_1[1],0x28);
          puVar11[6] = puVar12;
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[4] = 0;
          puVar12[2] = 0;
          puVar12[3] = 0;
          local_78 = (string)0x22;
          uStack_6f = s_PLACEHOLDER_VALUE_03bfbd90._8_7_;
          local_68 = s_PLACEHOLDER_VALUE_03bfbd90[0xf];
          uStack_77 = s_PLACEHOLDER_VALUE_03bfbd90._0_7_;
          local_70 = s_PLACEHOLDER_VALUE_03bfbd90[7];
          uStack_67 = 0x45;
          uVar13 = FUN_00b7a414(param_1[1],&local_78);
          *puVar12 = uVar13;
          if ((((byte)local_78 & 1) != 0) &&
             (lVar21 = CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)), lVar21 != 0)) {
            lVar16 = tpidr_el0;
            plVar22 = *(long **)(lVar16 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar16 + 0x30) = DAT_04859430;
            }
            uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar19 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,lVar21,0,8);
            }
          }
          bVar3 = *pbVar10;
          if ((bVar3 & 1) == 0) {
            if (bVar3 < 2) goto LAB_00ba038c;
            lVar21 = param_1[1];
            sVar23 = (size_t)(bVar3 >> 1);
            pbVar10 = pbVar10 + 1;
LAB_00ba0364:
            uStack_65 = 0;
            uStack_67 = 0;
            local_68 = '\0';
            uStack_6f = 0;
            local_70 = '\0';
            uStack_77 = 0;
            local_78 = (string)0x0;
            if (0xffffffffffffffef < sVar23 + 0x12) {
LAB_00ba0824:
              uStack_65 = 0;
              uStack_67 = 0;
              local_68 = 0;
              uStack_6f = 0;
              local_70 = 0;
              uStack_77 = 0;
              local_78 = (string)0x0;
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (sVar23 + 0x12 < 0x17) {
              local_78 = SUB41((int)sVar23 << 1,0);
              pvVar24 = (void *)((ulong)&local_78 | 1);
            }
            else {
              uVar19 = sVar23 + 0x22 & 0xfffffffffffffff0;
              lVar16 = tpidr_el0;
              plVar22 = *(long **)(lVar16 + 0x30);
              if (plVar22 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar22 = DAT_04859430;
                *(long **)(lVar16 + 0x30) = DAT_04859430;
              }
              pvVar24 = (void *)(**(code **)(*plVar22 + 0x10))(plVar22,uVar19,8);
              local_78 = (string)((byte)uVar19 | 1);
              uStack_77 = (undefined7)(uVar19 >> 8);
              local_70 = (char)sVar23;
              uStack_6f = (undefined7)(sVar23 >> 8);
              local_68 = (char)pvVar24;
              uStack_67 = (undefined2)((ulong)pvVar24 >> 8);
              uStack_65 = (undefined5)((ulong)pvVar24 >> 0x18);
            }
            memcpy(pvVar24,pbVar10,sVar23);
            *(undefined1 *)((long)pvVar24 + sVar23) = 0;
            std::string::append((char *)&local_78,0x3c33c6f);
            uVar13 = FUN_00b7a414(lVar21,&local_78);
            puVar12[1] = uVar13;
            if ((((byte)local_78 & 1) != 0) &&
               (lVar21 = CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)), lVar21 != 0)) {
              lVar16 = tpidr_el0;
              plVar22 = *(long **)(lVar16 + 0x30);
              if (plVar22 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar22 = DAT_04859430;
                *(long **)(lVar16 + 0x30) = DAT_04859430;
              }
              uVar19 = (**(code **)(*plVar22 + 0xf8))(plVar22);
              if (((uVar19 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                (**(code **)(*plVar22 + 0x18))(plVar22,lVar21,0,8);
              }
              else {
                FUN_00c48fe8(plVar22,lVar21,0,8);
              }
            }
          }
          else {
            sVar23 = *(size_t *)(pbVar10 + 8);
            if (sVar23 != 0) {
              lVar21 = param_1[1];
              pbVar10 = *(byte **)(pbVar10 + 0x10);
              goto LAB_00ba0364;
            }
LAB_00ba038c:
            puVar12[1] = *puVar12;
          }
          *(undefined4 *)(puVar12 + 2) = 0;
          puVar12[3] = puVar11;
          puVar7 = PTR_DAT_047dabe8;
          lVar21 = *(long *)PTR_DAT_047dabe8;
          if (lVar21 == 0) {
            FUN_00bb5d70();
            lVar21 = *(long *)puVar7;
          }
          uVar17 = 0;
          puVar12[4] = lVar21;
          auVar25._8_8_ = puVar11;
          auVar25._0_8_ = 4;
          goto LAB_00b9fe50;
        }
      }
    }
    else {
      lVar21 = *(long *)(param_2 + 8);
      if (lVar21 != 0) {
        bVar5 = false;
        psVar20 = psVar18;
        do {
          sVar2 = *psVar20;
          if ((byte)sVar2 < 0x61) {
            if ((byte)sVar2 < 0x41) {
              if (0x2f < (byte)sVar2) {
                if ((byte)sVar2 < 0x3a) goto LAB_00b9fde0;
                goto LAB_00b9fe44;
              }
              if (bVar5 || sVar2 != (string)0x2e) goto LAB_00b9fe44;
              bVar5 = true;
            }
            else {
              bVar5 = false;
              if ((0x5a < (byte)sVar2) && (sVar2 != (string)0x5f)) goto LAB_00b9fe44;
            }
          }
          else {
            if (0x7a < (byte)sVar2) goto LAB_00b9fe44;
LAB_00b9fde0:
            bVar5 = false;
          }
          lVar21 = lVar21 + -1;
          psVar20 = psVar20 + 1;
        } while (lVar21 != 0);
        goto LAB_00b9fe40;
      }
    }
LAB_00b9fe44:
    uVar19 = 0;
    uVar17 = 0;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar19;
  auVar25 = auVar6 << 0x40;
LAB_00b9fe50:
  auVar26._8_8_ = auVar25._8_8_;
  auVar26._0_8_ = auVar25._0_8_ & 0xffffffff | uVar17 << 0x20;
  return auVar26;
}


