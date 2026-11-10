/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ba42a8; name: FUN_00ba42a8
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00ba42a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  string *psVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 uVar14;
  long extraout_x1;
  long extraout_x1_00;
  double dVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte bVar20;
  string *psVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  undefined8 uVar25;
  byte *local_2d8;
  byte *local_2d0;
  undefined8 local_2c8;
  char local_2c0 [103];
  undefined1 local_259;
  ulong local_258 [3];
  undefined4 local_240 [2];
  char *local_238;
  undefined4 local_230;
  char local_228 [24];
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined4 local_178;
  long local_170;
  undefined **local_150;
  ulong local_148;
  ulong local_140;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_f0;
  ulong local_e8;
  byte *local_e0;
  undefined ***local_c0;
  undefined ***local_b8;
  undefined7 local_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined **local_90;
  undefined8 local_88;
  ulong local_80;
  ulong local_78 [3];
  undefined2 local_48;
  undefined1 local_46;
  
  uVar1 = *(uint *)((long)param_2 + 0x3c);
  uVar24 = (ulong)uVar1;
  switch(*(undefined4 *)(&DAT_03d5c718 + uVar24 * 4)) {
  case 1:
    lVar12 = param_1[2];
    if ((*(uint *)(lVar12 + 0x10) >> 2 & 1) == 0) {
      if ((*(uint *)(lVar12 + 0x10) >> 3 & 1) == 0) {
        psVar10 = (string *)param_2[1];
        pcVar8 = "Value must be integer for int32 option \"";
        break;
      }
      uVar9 = *(ulong *)(lVar12 + 0x40);
      if (-0x80000001 < (long)uVar9) goto LAB_00ba490c;
    }
    else {
      uVar9 = *(ulong *)(lVar12 + 0x38);
      if (uVar9 >> 0x1f == 0) {
LAB_00ba490c:
        FUN_00ba6214(*(undefined4 *)(param_2 + 7),uVar9,uVar24,param_3);
        return 1;
      }
    }
    psVar10 = (string *)param_2[1];
    pcVar8 = "Value out of range for int32 option \"";
    break;
  case 2:
    lVar12 = param_1[2];
    if ((*(uint *)(lVar12 + 0x10) >> 2 & 1) == 0) {
      if ((*(uint *)(lVar12 + 0x10) >> 3 & 1) != 0) {
        uVar14 = *(undefined4 *)(param_2 + 7);
        lVar12 = *(long *)(lVar12 + 0x40);
        goto LAB_00ba4928;
      }
      psVar10 = (string *)param_2[1];
      pcVar8 = "Value must be integer for int64 option \"";
    }
    else {
      lVar12 = *(long *)(lVar12 + 0x38);
      if (-1 < lVar12) {
        uVar14 = *(undefined4 *)(param_2 + 7);
LAB_00ba4928:
        FUN_00ba6304(uVar14,lVar12,uVar24,param_3);
        return 1;
      }
      psVar10 = (string *)param_2[1];
      pcVar8 = "Value out of range for int64 option \"";
    }
    break;
  case 3:
    if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) == 0) {
      psVar10 = (string *)param_2[1];
      pcVar8 = "Value must be non-negative integer for uint32 option \"";
    }
    else {
      dVar15 = *(double *)(param_1[2] + 0x38);
      if ((ulong)dVar15 >> 0x20 == 0) {
        uVar14 = *(undefined4 *)(param_2 + 7);
        if (uVar1 == 7) goto LAB_00ba4a90;
        if (uVar1 != 0xd) {
          local_80 = CONCAT44(local_80._4_4_,0x1861);
          goto LAB_00ba48b8;
        }
        goto LAB_00ba4fbc;
      }
      psVar10 = (string *)*param_2;
      pcVar8 = "Value out of range for uint32 option \"";
    }
    break;
  case 4:
    if ((*(byte *)(param_1[2] + 0x10) >> 2 & 1) != 0) {
      uVar14 = *(undefined4 *)(param_2 + 7);
      dVar15 = *(double *)(param_1[2] + 0x38);
      if (uVar1 == 6) goto LAB_00ba4a70;
      if (uVar1 != 4) {
        local_80 = CONCAT44(local_80._4_4_,0x1872);
LAB_00ba48b8:
        local_78[2] = 0;
        local_78[1] = 0;
        local_78[0] = 0;
        local_88 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
        ;
        local_90 = (undefined **)CONCAT44(local_90._4_4_,3);
        std::string::append((char *)local_78);
        snprintf((char *)&local_2d8,0x80,"%d",uVar24);
        local_259 = 0;
        std::string::append((char *)local_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
        return 1;
      }
LAB_00ba4fbc:
      FUN_00c001d0(param_3,uVar14,dVar15);
switchD_00ba4304_default:
      return 1;
    }
    psVar10 = (string *)param_2[1];
    pcVar8 = "Value must be non-negative integer for uint64 option \"";
    break;
  case 5:
    lVar12 = param_1[2];
    uVar1 = *(uint *)(lVar12 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          psVar10 = (string *)param_2[1];
          pcVar8 = "Value must be number for double option \"";
          break;
        }
        dVar15 = (double)*(long *)(lVar12 + 0x40);
      }
      else {
        dVar15 = (double)NEON_ucvtf(*(undefined8 *)(lVar12 + 0x38));
      }
    }
    else {
      dVar15 = *(double *)(lVar12 + 0x48);
    }
    uVar14 = *(undefined4 *)(param_2 + 7);
LAB_00ba4a70:
    FUN_00c00848(param_3,uVar14,dVar15);
    return 1;
  case 6:
    lVar12 = param_1[2];
    uVar1 = *(uint *)(lVar12 + 0x10);
    if ((uVar1 >> 4 & 1) == 0) {
      if ((uVar1 >> 2 & 1) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          psVar10 = (string *)param_2[1];
          pcVar8 = "Value must be number for float option \"";
          break;
        }
        dVar15 = (double)(ulong)(uint)(float)*(long *)(lVar12 + 0x40);
      }
      else {
        dVar15 = (double)(ulong)(uint)(float)*(ulong *)(lVar12 + 0x38);
      }
    }
    else {
      dVar15 = (double)(ulong)(uint)(float)*(double *)(lVar12 + 0x48);
    }
    uVar14 = *(undefined4 *)(param_2 + 7);
LAB_00ba4a90:
    FUN_00c00508(param_3,uVar14,dVar15);
    return 1;
  case 7:
    if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) != 0) {
      pbVar17 = *(byte **)(param_1[2] + 0x30);
      bVar2 = *pbVar17;
      uVar18 = *(ulong *)(pbVar17 + 8);
      uVar9 = (ulong)(bVar2 >> 1);
      uVar24 = uVar9;
      if ((bVar2 & 1) != 0) {
        uVar24 = uVar18;
      }
      if (uVar24 == 4) {
        iVar6 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,0x3c38de7);
        if (iVar6 != 0) {
          pbVar17 = *(byte **)(param_1[2] + 0x30);
          bVar2 = *pbVar17;
          uVar18 = *(ulong *)(pbVar17 + 8);
          uVar9 = (ulong)(bVar2 >> 1);
          goto LAB_00ba480c;
        }
        dVar15 = 4.94065645841247e-324;
      }
      else {
LAB_00ba480c:
        if ((bVar2 & 1) != 0) {
          uVar9 = uVar18;
        }
        if ((uVar9 != 5) ||
           (iVar6 = std::string::compare((ulong)pbVar17,0,(char *)0xffffffffffffffff,0x3c00ba2),
           iVar6 != 0)) {
          psVar10 = (string *)param_2[1];
          pcVar8 = "Value must be \"true\" or \"false\" for boolean option \"";
          break;
        }
        dVar15 = 0.0;
      }
      uVar14 = *(undefined4 *)(param_2 + 7);
      goto LAB_00ba4fbc;
    }
    psVar10 = (string *)param_2[1];
    pcVar8 = "Value must be identifier for boolean option \"";
    break;
  case 8:
    if ((*(byte *)(param_1[2] + 0x10) >> 1 & 1) != 0) {
      puVar11 = (undefined8 *)param_2[0xe];
      pbVar17 = *(byte **)(param_1[2] + 0x30);
      lVar12 = *(long *)(puVar11[2] + 0x10);
      if (DAT_0483a688 != 2) {
        local_2c8 = local_2c8 & 0xffffffffffffff00;
        local_2d8 = PTR_DAT_047daba0 + 0x10;
        local_2d0 = &LAB_00ba6670;
        if (DAT_0483a688 != 2) {
          do {
            lVar13 = DAT_0483a688;
            if (DAT_0483a688 != 0) break;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
            if (bVar5) {
              DAT_0483a688 = 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar13 == 0) {
            FUN_00bb162c(&local_2d8);
            DAT_0483a688 = 2;
          }
          else {
            while (lVar13 == 1) {
              sched_yield();
              lVar13 = DAT_0483a688;
            }
          }
        }
      }
      if (lVar12 == DAT_0483a678) {
        iVar6 = FUN_00b7cb3c(*(undefined8 *)(puVar11[2] + 0x98),puVar11,pbVar17,5);
        if (iVar6 != 0) {
          lVar12 = extraout_x1;
          goto LAB_00ba4fb0;
        }
      }
      else {
        std::string::string((string *)&local_2d8,(string *)puVar11[1]);
        bVar2 = (byte)local_2d8._0_1_ >> 1;
        if (((ulong)local_2d8 & 1) != 0) {
          bVar2 = (byte)local_2d0;
        }
        bVar20 = *(byte *)*puVar11;
        if ((bVar20 & 1) == 0) {
          bVar20 = bVar20 >> 1;
        }
        else {
          bVar20 = (byte)*(undefined8 *)((byte *)*puVar11 + 8);
        }
        std::string::resize((ulong)&local_2d8,bVar2 - bVar20);
        pbVar16 = *(byte **)(pbVar17 + 0x10);
        if ((*pbVar17 & 1) == 0) {
          pbVar16 = pbVar17 + 1;
        }
        std::string::append((char *)&local_2d8,(ulong)pbVar16);
        iVar6 = FUN_00bab644((undefined8 *)*param_1,*(undefined8 *)*param_1,&local_2d8);
        if (iVar6 == 5) {
          lVar12 = extraout_x1_00;
          if (*(undefined8 **)(extraout_x1_00 + 0x18) == puVar11) goto LAB_00ba4fa0;
          std::operator+("Enum type \"",(string *)puVar11[1]);
          puVar7 = (ulong *)std::string::append((char *)&local_180);
          local_148 = puVar7[1];
          local_140 = puVar7[2];
          local_150 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          pbVar16 = pbVar17 + 1;
          if ((*pbVar17 & 1) != 0) {
            pbVar16 = *(byte **)(pbVar17 + 0x10);
          }
          puVar7 = (ulong *)std::string::append((char *)&local_150,(ulong)pbVar16);
          local_118 = puVar7[1];
          local_110 = puVar7[2];
          local_120 = *puVar7;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7 = (ulong *)std::string::append((char *)&local_120);
          local_e8 = puVar7[1];
          local_e0 = (byte *)puVar7[2];
          local_f0 = *puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          pbVar19 = (byte *)param_2[1];
          pbVar16 = *(byte **)(pbVar19 + 0x10);
          if ((*pbVar19 & 1) == 0) {
            pbVar16 = pbVar19 + 1;
          }
          puVar7 = (ulong *)std::string::append((char *)&local_f0,(ulong)pbVar16);
          local_b8 = (undefined ***)puVar7[1];
          local_c0 = (undefined ***)*puVar7;
          local_b0 = (undefined7)puVar7[2];
          uStack_a9 = (undefined1)(puVar7[2] >> 0x38);
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7 = (ulong *)std::string::append((char *)&local_c0);
          local_88 = (char *)puVar7[1];
          local_80 = puVar7[2];
          local_90 = (undefined **)*puVar7;
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          FUN_00b89f94(*param_1,param_1[1] + 0x18,param_1[2],8,&local_90);
          uVar24 = local_80;
          if ((((ulong)local_90 & 1) != 0) && (local_80 != 0)) {
            lVar12 = tpidr_el0;
            plVar22 = *(long **)(lVar12 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,uVar24,0,8);
            }
          }
          if ((((ulong)local_c0 & 1) != 0) && (lVar12 = CONCAT17(uStack_a9,local_b0), lVar12 != 0))
          {
            lVar13 = tpidr_el0;
            plVar22 = *(long **)(lVar13 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar13 + 0x30) = DAT_04859430;
            }
            uVar24 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar24 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,lVar12,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,lVar12,0,8);
            }
          }
          pbVar16 = local_e0;
          if (((local_f0 & 1) != 0) && (local_e0 != (byte *)0x0)) {
            lVar12 = tpidr_el0;
            plVar22 = *(long **)(lVar12 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar24 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,pbVar16,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,pbVar16,0,8);
            }
          }
          uVar24 = local_110;
          if (((local_120 & 1) != 0) && (local_110 != 0)) {
            lVar12 = tpidr_el0;
            plVar22 = *(long **)(lVar12 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,uVar24,0,8);
            }
          }
          uVar24 = local_140;
          if ((((ulong)local_150 & 1) != 0) && (local_140 != 0)) {
            lVar12 = tpidr_el0;
            plVar22 = *(long **)(lVar12 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,uVar24,0,8);
            }
          }
          if ((((byte)local_180 & 1) != 0) && (local_170 != 0)) {
            lVar12 = tpidr_el0;
            plVar22 = *(long **)(lVar12 + 0x30);
            if (plVar22 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar22 = DAT_04859430;
              *(long **)(lVar12 + 0x30) = DAT_04859430;
            }
            uVar24 = (**(code **)(*plVar22 + 0xf8))(plVar22);
            if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
              (**(code **)(*plVar22 + 0x18))(plVar22,local_170,0,8);
            }
            else {
              FUN_00c48fe8(plVar22,local_170,0,8);
            }
          }
          bVar5 = false;
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
LAB_00ba4fa0:
          bVar5 = true;
        }
        uVar24 = local_2c8;
        if ((((ulong)local_2d8 & 1) != 0) && (local_2c8 != 0)) {
          lVar13 = tpidr_el0;
          plVar22 = *(long **)(lVar13 + 0x30);
          if (plVar22 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar22 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
          if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
          }
          else {
            FUN_00c48fe8(plVar22,uVar24,0,8);
          }
        }
        if (!bVar5) {
          return 0;
        }
LAB_00ba4fb0:
        if (lVar12 != 0) {
          uVar14 = *(undefined4 *)(param_2 + 7);
          dVar15 = (double)(long)*(int *)(lVar12 + 0x10);
          goto LAB_00ba4fbc;
        }
      }
      std::operator+("Enum type \"",*(string **)(param_2[0xe] + 8));
      puVar7 = (ulong *)std::string::append((char *)&local_150);
      local_118 = puVar7[1];
      local_110 = puVar7[2];
      local_120 = *puVar7;
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      pbVar16 = *(byte **)(pbVar17 + 0x10);
      if ((*pbVar17 & 1) == 0) {
        pbVar16 = pbVar17 + 1;
      }
      puVar7 = (ulong *)std::string::append((char *)&local_120,(ulong)pbVar16);
      local_e8 = puVar7[1];
      local_e0 = (byte *)puVar7[2];
      local_f0 = *puVar7;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7 = (ulong *)std::string::append((char *)&local_f0);
      local_b8 = (undefined ***)puVar7[1];
      local_c0 = (undefined ***)*puVar7;
      local_b0 = (undefined7)puVar7[2];
      uStack_a9 = (undefined1)(puVar7[2] >> 0x38);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      pbVar16 = (byte *)param_2[1];
      pbVar17 = *(byte **)(pbVar16 + 0x10);
      if ((*pbVar16 & 1) == 0) {
        pbVar17 = pbVar16 + 1;
      }
      puVar7 = (ulong *)std::string::append((char *)&local_c0,(ulong)pbVar17);
      local_88 = (char *)puVar7[1];
      local_80 = puVar7[2];
      goto LAB_00ba50b8;
    }
    psVar10 = (string *)param_2[1];
    pcVar8 = "Value must be identifier for enum-valued option \"";
    break;
  case 9:
    if ((*(byte *)(param_1[2] + 0x10) >> 5 & 1) != 0) {
      psVar21 = *(string **)(param_1[2] + 0x50);
      psVar10 = (string *)FUN_00c00b88(param_3,*(undefined4 *)(param_2 + 7));
      std::string::operator=(psVar10,psVar21);
      return 1;
    }
    psVar10 = (string *)param_2[1];
    pcVar8 = "Value must be quoted string for string option \"";
    break;
  case 10:
    if ((*(byte *)(param_1[2] + 0x10) >> 6 & 1) != 0) {
      uVar25 = param_2[0xd];
      FUN_00bb1344(param_1 + 7);
      plVar22 = (long *)FUN_00c312f0(param_1 + 3,uVar25);
      FUN_00bb14b8(param_1 + 7);
      plVar22 = (long *)(**(code **)(*plVar22 + 0x18))(plVar22);
      if (plVar22 == (long *)0x0) {
        local_228[0x10] = '\0';
        local_228[0x11] = '\0';
        local_228[0x12] = '\0';
        local_228[0x13] = '\0';
        local_228[0x14] = '\0';
        local_228[0x15] = '\0';
        local_228[0x16] = '\0';
        local_228[0x17] = '\0';
        local_240[0] = 3;
        local_230 = 0x180c;
        local_238 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.cc"
        ;
        local_228[0] = '\0';
        local_228[1] = '\0';
        local_228[2] = '\0';
        local_228[3] = '\0';
        local_228[4] = '\0';
        local_228[5] = '\0';
        local_228[6] = '\0';
        local_228[7] = '\0';
        local_228[8] = '\0';
        local_228[9] = '\0';
        local_228[10] = '\0';
        local_228[0xb] = '\0';
        local_228[0xc] = '\0';
        local_228[0xd] = '\0';
        local_228[0xe] = '\0';
        local_228[0xf] = '\0';
        std::string::append(local_228);
        std::string::append(local_228);
        local_48 = 0;
        local_46 = 0;
        local_258[2] = 0;
        local_258[0] = 0;
        local_258[1] = 0;
        if (*(char *)((long)param_2 + 0x44) == '\0') {
          uVar25 = 0;
        }
        else {
          pbVar17 = *(byte **)(param_2[10] + 8);
          local_2d8 = *(byte **)(pbVar17 + 0x10);
          if ((*pbVar17 & 1) == 0) {
            local_2d8 = pbVar17 + 1;
          }
          local_88 = (char *)CONCAT44(local_88._4_4_,0xffffffff);
          local_b8 = (undefined ***)CONCAT44(local_b8._4_4_,0xffffffff);
          local_e8 = CONCAT44(local_e8._4_4_,0xffffffff);
          local_118 = CONCAT44(local_118._4_4_,0xffffffff);
          local_148 = CONCAT44(local_148._4_4_,0xffffffff);
          local_178 = 0xffffffff;
          local_1a8 = 0xffffffff;
          local_1d8 = 0xffffffff;
          local_208 = 0xffffffff;
          local_90 = (undefined **)0x0;
          local_c0 = (undefined ***)0x0;
          local_f0 = 0;
          local_120 = 0;
          local_150 = (undefined **)0x0;
          local_180 = 0;
          local_1b0 = 0;
          local_1e0 = 0;
          local_210 = 0;
          uVar1 = (uint)(*pbVar17 >> 1);
          if ((*pbVar17 & 1) != 0) {
            uVar1 = (uint)*(undefined8 *)(pbVar17 + 8);
          }
          local_2d0 = (byte *)CONCAT44(local_2d0._4_4_,uVar1);
          FUN_00c2ce10(local_258,"extend .$0 {\n",&local_2d8,&local_90,&local_c0,&local_f0,
                       &local_120,&local_150,&local_180,&local_1b0,&local_1e0,&local_210);
          uVar25 = 1;
        }
        FUN_00b85714(param_2,uVar25,0,local_258,&local_48);
        if (*(char *)((long)param_2 + 0x44) != '\0') {
          std::string::append((char *)local_258);
        }
        uVar24 = (ulong)local_258 | 1;
        if ((local_258[0] & 1) != 0) {
          uVar24 = local_258[2];
        }
        std::string::append(local_228,uVar24);
        FUN_00bb0e90(local_240);
        uVar24 = local_258[2];
        if (((local_258[0] & 1) != 0) && (local_258[2] != 0)) {
          lVar12 = tpidr_el0;
          plVar23 = *(long **)(lVar12 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,uVar24,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,uVar24,0,8);
          }
        }
        FUN_00bb0d74(local_240);
      }
      puVar4 = PTR_DAT_047dacc8;
      local_80 = 0;
      local_78[0] = 0;
      local_90 = &PTR_LAB_0455a3c8;
      local_88 = (char *)0x0;
      local_c0 = &local_90;
      local_b8 = &local_150;
      local_150 = &PTR_LAB_0455a3f8;
      local_148 = *param_1;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_a9 = 0;
      local_2d8 = PTR_DAT_047dacc8 + 0x10;
      pbVar17 = *(byte **)(param_1[2] + 0x58);
      local_2d0 = *(byte **)(pbVar17 + 0x10);
      bVar5 = (*pbVar17 & 1) == 0;
      if (bVar5) {
        local_2d0 = pbVar17 + 1;
      }
      local_2c0[0] = '\0';
      local_2c0[1] = '\0';
      local_2c0[2] = '\0';
      local_2c0[3] = '\0';
      local_2c0[4] = '\0';
      local_2c0[5] = '\0';
      local_2c0[6] = '\0';
      local_2c0[7] = '\0';
      uVar1 = (uint)(*pbVar17 >> 1);
      if (!bVar5) {
        uVar1 = *(uint *)(pbVar17 + 8);
      }
      local_2c8 = CONCAT44(uVar1,uVar1);
      uVar24 = FUN_00c33c00(&local_c0,&local_2d8,plVar22);
      if ((uVar24 & 1) == 0) {
        std::operator+("Error while parsing option value for \"",(string *)*param_2);
        puVar7 = (ulong *)std::string::append((char *)&local_120);
        local_e8 = puVar7[1];
        local_e0 = (byte *)puVar7[2];
        local_f0 = *puVar7;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *puVar7 = 0;
        uVar24 = local_78[0];
        if (((ulong)local_88 & 1) == 0) {
          uVar24 = (long)&local_88 + 1;
        }
        puVar11 = (undefined8 *)std::string::append((char *)&local_f0,uVar24);
        local_2d0 = (byte *)puVar11[1];
        local_2c8 = puVar11[2];
        local_2d8 = (byte *)*puVar11;
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = 0;
        FUN_00b89f94(*param_1,param_1[1] + 0x18,param_1[2],8,&local_2d8);
        lVar12 = local_2c8;
        if ((((ulong)local_2d8 & 1) != 0) && (local_2c8 != 0)) {
          lVar13 = tpidr_el0;
          plVar23 = *(long **)(lVar13 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar13 + 0x30) = DAT_04859430;
          }
          uVar24 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar24 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,lVar12,0,8);
          }
        }
        pbVar17 = local_e0;
        if (((local_f0 & 1) != 0) && (local_e0 != (byte *)0x0)) {
          lVar12 = tpidr_el0;
          plVar23 = *(long **)(lVar12 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar24 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,pbVar17,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,pbVar17,0,8);
          }
        }
        if (((local_120 & 1) != 0) && (local_110 != 0)) {
          lVar12 = tpidr_el0;
          plVar23 = *(long **)(lVar12 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar24 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,local_110,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,local_110,0,8);
          }
        }
        bVar5 = false;
        goto LAB_00ba4d38;
      }
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = (byte *)0x0;
      FUN_00c11da8(plVar22,&local_f0);
      if (*(int *)((long)param_2 + 0x3c) == 10) {
LAB_00ba4ce8:
        uVar25 = FUN_00c00f38(param_3,*(undefined4 *)(param_2 + 7));
        bVar5 = (local_f0 & 1) != 0;
        local_2d8 = puVar4 + 0x10;
        local_2c0[0] = '\0';
        local_2c0[1] = '\0';
        local_2c0[2] = '\0';
        local_2c0[3] = '\0';
        local_2c0[4] = '\0';
        local_2c0[5] = '\0';
        local_2c0[6] = '\0';
        local_2c0[7] = '\0';
        local_2d0 = (byte *)((ulong)&local_f0 | 1);
        if (bVar5) {
          local_2d0 = local_e0;
        }
        uVar1 = (uint)((byte)local_f0._0_1_ >> 1);
        if (bVar5) {
          uVar1 = (uint)local_e8;
        }
        local_2c8 = CONCAT44(uVar1,uVar1);
        FUN_00c012e4(uVar25,&local_2d8);
      }
      else {
        if (*(int *)((long)param_2 + 0x3c) != 0xb) {
          local_2d8 = (byte *)CONCAT44(local_2d8._4_4_,3);
          local_2c0[0x10] = '\0';
          local_2c0[0x11] = '\0';
          local_2c0[0x12] = '\0';
          local_2c0[0x13] = '\0';
          local_2c0[0x14] = '\0';
          local_2c0[0x15] = '\0';
          local_2c0[0x16] = '\0';
          local_2c0[0x17] = '\0';
          local_2c8 = CONCAT44(local_2c8._4_4_,0x1820);
          local_2d0 = (byte *)0x3c35325;
          local_2c0[0] = '\0';
          local_2c0[1] = '\0';
          local_2c0[2] = '\0';
          local_2c0[3] = '\0';
          local_2c0[4] = '\0';
          local_2c0[5] = '\0';
          local_2c0[6] = '\0';
          local_2c0[7] = '\0';
          local_2c0[8] = '\0';
          local_2c0[9] = '\0';
          local_2c0[10] = '\0';
          local_2c0[0xb] = '\0';
          local_2c0[0xc] = '\0';
          local_2c0[0xd] = '\0';
          local_2c0[0xe] = '\0';
          local_2c0[0xf] = '\0';
          std::string::append(local_2c0);
          FUN_00bb0e90(&local_2d8);
          FUN_00bb0d74(&local_2d8);
          goto LAB_00ba4ce8;
        }
        psVar10 = (string *)FUN_00c00b88(param_3,*(undefined4 *)(param_2 + 7));
        std::string::operator=(psVar10,(string *)&local_f0);
      }
      pbVar17 = local_e0;
      if (((local_f0 & 1) != 0) && (local_e0 != (byte *)0x0)) {
        lVar12 = tpidr_el0;
        plVar23 = *(long **)(lVar12 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar24 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,pbVar17,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,pbVar17,0,8);
        }
      }
      bVar5 = true;
LAB_00ba4d38:
      uVar24 = local_78[0];
      local_90 = &PTR_LAB_0455a3c8;
      if ((((ulong)local_88 & 1) != 0) && (local_78[0] != 0)) {
        lVar12 = tpidr_el0;
        plVar23 = *(long **)(lVar12 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
        }
        uVar9 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,uVar24,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,uVar24,0,8);
        }
      }
      if (plVar22 != (long *)0x0) {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
      if (!bVar5) {
        return 0;
      }
      return 1;
    }
    std::operator+("Option \"",(string *)param_2[1]);
    puVar7 = (ulong *)std::string::append((char *)&local_150);
    local_118 = puVar7[1];
    local_110 = puVar7[2];
    local_120 = *puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar16 = (byte *)*param_2;
    pbVar17 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar17 = pbVar16 + 1;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_120,(ulong)pbVar17);
    local_e8 = puVar7[1];
    local_e0 = (byte *)puVar7[2];
    local_f0 = *puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_f0);
    local_b8 = (undefined ***)puVar7[1];
    local_c0 = (undefined ***)*puVar7;
    local_b0 = (undefined7)puVar7[2];
    uStack_a9 = (undefined1)(puVar7[2] >> 0x38);
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    pbVar16 = (byte *)*param_2;
    pbVar17 = *(byte **)(pbVar16 + 0x10);
    if ((*pbVar16 & 1) == 0) {
      pbVar17 = pbVar16 + 1;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_c0,(ulong)pbVar17);
    local_88 = (char *)puVar7[1];
    local_80 = puVar7[2];
LAB_00ba50b8:
    local_90 = (undefined **)*puVar7;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_90);
    local_2d0 = (byte *)puVar7[1];
    local_2c8 = puVar7[2];
    local_2d8 = (byte *)*puVar7;
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_00b89f94(*param_1,param_1[1] + 0x18,param_1[2],8,&local_2d8);
    uVar24 = local_2c8;
    if ((((ulong)local_2d8 & 1) != 0) && (local_2c8 != 0)) {
      lVar12 = tpidr_el0;
      plVar22 = *(long **)(lVar12 + 0x30);
      if (plVar22 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar22 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar22,uVar24,0,8);
      }
    }
    uVar24 = local_80;
    if ((((ulong)local_90 & 1) != 0) && (local_80 != 0)) {
      lVar12 = tpidr_el0;
      plVar22 = *(long **)(lVar12 + 0x30);
      if (plVar22 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar22 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar22,uVar24,0,8);
      }
    }
    if ((((ulong)local_c0 & 1) != 0) && (lVar12 = CONCAT17(uStack_a9,local_b0), lVar12 != 0)) {
      lVar13 = tpidr_el0;
      plVar22 = *(long **)(lVar13 + 0x30);
      if (plVar22 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar22 = DAT_04859430;
        *(long **)(lVar13 + 0x30) = DAT_04859430;
      }
      uVar24 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar24 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,lVar12,0,8);
      }
      else {
        FUN_00c48fe8(plVar22,lVar12,0,8);
      }
    }
    pbVar17 = local_e0;
    if (((local_f0 & 1) != 0) && (local_e0 != (byte *)0x0)) {
      lVar12 = tpidr_el0;
      plVar22 = *(long **)(lVar12 + 0x30);
      if (plVar22 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar22 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar24 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar24 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,pbVar17,0,8);
      }
      else {
        FUN_00c48fe8(plVar22,pbVar17,0,8);
      }
    }
    uVar24 = local_110;
    if (((local_120 & 1) != 0) && (local_110 != 0)) {
      lVar12 = tpidr_el0;
      plVar22 = *(long **)(lVar12 + 0x30);
      if (plVar22 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar22 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
      }
      else {
        FUN_00c48fe8(plVar22,uVar24,0,8);
      }
    }
    if (((ulong)local_150 & 1) == 0) {
      return 0;
    }
    uVar24 = local_140;
    if (local_140 == 0) {
      return 0;
    }
    goto LAB_00ba4a10;
  default:
    goto switchD_00ba4304_default;
  }
  std::operator+(pcVar8,psVar10);
  puVar7 = (ulong *)std::string::append((char *)&local_90);
  local_2d0 = (byte *)puVar7[1];
  local_2c8 = puVar7[2];
  local_2d8 = (byte *)*puVar7;
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_00b89f94(*param_1,param_1[1] + 0x18,param_1[2],8,&local_2d8);
  uVar24 = local_2c8;
  if ((((ulong)local_2d8 & 1) != 0) && (local_2c8 != 0)) {
    lVar12 = tpidr_el0;
    plVar22 = *(long **)(lVar12 + 0x30);
    if (plVar22 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar22 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
    if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
    }
    else {
      FUN_00c48fe8(plVar22,uVar24,0,8);
    }
  }
  if ((((ulong)local_90 & 1) != 0) && (uVar24 = local_80, local_80 != 0)) {
LAB_00ba4a10:
    lVar12 = tpidr_el0;
    plVar22 = *(long **)(lVar12 + 0x30);
    if (plVar22 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar22 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    uVar9 = (**(code **)(*plVar22 + 0xf8))(plVar22);
    if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar22 + 0x18))(plVar22,uVar24,0,8);
    }
    else {
      FUN_00c48fe8(plVar22,uVar24,0,8);
    }
  }
  return 0;
}


