/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c312f0; name: FUN_00c312f0
 */


undefined8 * FUN_00c312f0(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  undefined8 uVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  ulong uVar32;
  ulong unaff_x24;
  undefined8 *puVar33;
  uint uVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined *local_90;
  char *local_88;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar26 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    if (DAT_0483a688 != 2) {
      local_80 = local_80 & 0xffffff00;
      local_90 = PTR_DAT_047daba0 + 0x10;
      local_88 = &LAB_00ba6670;
      if (DAT_0483a688 != 2) {
        do {
          lVar17 = DAT_0483a688;
          if (DAT_0483a688 != 0) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
          if (bVar6) {
            DAT_0483a688 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar17 == 0) {
          FUN_00bb162c(&local_90);
          DAT_0483a688 = 2;
        }
        else {
          while (lVar17 == 1) {
            sched_yield();
            lVar17 = DAT_0483a688;
          }
        }
      }
    }
    if (lVar26 == DAT_0483a678) {
      if (DAT_0483a9d8 != 2) {
        local_80 = local_80 & 0xffffff00;
        local_90 = PTR_DAT_047daba0 + 0x10;
        local_88 = &LAB_00bf7390;
        if (DAT_0483a9d8 != 2) {
          do {
            lVar26 = DAT_0483a9d8;
            if (DAT_0483a9d8 != 0) break;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(0x483a9d8,0x10);
            if (bVar6) {
              DAT_0483a9d8 = 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar26 == 0) {
            FUN_00bb162c(&local_90);
            DAT_0483a9d8 = 2;
          }
          else {
            while (lVar26 == 1) {
              sched_yield();
              lVar26 = DAT_0483a9d8;
            }
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00c3205c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar35 = (undefined8 *)(**(code **)(*DAT_0483a9e0 + 0x10))(DAT_0483a9e0,param_2);
      return puVar35;
    }
  }
  plVar29 = *(long **)(param_1 + 0x18);
  uVar32 = plVar29[1];
  lVar26 = tpidr_el0;
  if (uVar32 != 0) {
    uVar14 = uVar32 - 1;
    if ((uVar32 & uVar14) == 0) {
      unaff_x24 = uVar14 & param_2;
      plVar31 = *(long **)(*plVar29 + unaff_x24 * 8);
      if (plVar31 != (long *)0x0) {
        do {
          plVar31 = (long *)*plVar31;
          if ((plVar31 == (long *)0x0) ||
             (plVar31[1] != param_2 && (plVar31[1] & uVar14) != unaff_x24)) goto LAB_00c3149c;
        } while (plVar31[2] != param_2);
        goto LAB_00c31740;
      }
    }
    else {
      unaff_x24 = param_2;
      if (uVar32 <= param_2) {
        uVar14 = 0;
        if (uVar32 != 0) {
          uVar14 = param_2 / uVar32;
        }
        unaff_x24 = param_2 - uVar14 * uVar32;
      }
      plVar31 = *(long **)(*plVar29 + unaff_x24 * 8);
      if (plVar31 != (long *)0x0) {
        do {
          plVar31 = (long *)*plVar31;
          if (plVar31 == (long *)0x0) goto LAB_00c3149c;
          uVar14 = plVar31[1];
          if (uVar14 != param_2) {
            if (uVar32 <= uVar14) {
              uVar9 = 0;
              if (uVar32 != 0) {
                uVar9 = uVar14 / uVar32;
              }
              uVar14 = uVar14 - uVar9 * uVar32;
            }
            if (uVar14 != unaff_x24) goto LAB_00c3149c;
          }
        } while (plVar31[2] != param_2);
        goto LAB_00c31740;
      }
    }
  }
LAB_00c3149c:
  plVar31 = *(long **)(lVar26 + 0x30);
  if (plVar31 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar31 = DAT_04859430;
    *(long **)(lVar26 + 0x30) = DAT_04859430;
  }
  plVar31 = (long *)(**(code **)(*plVar31 + 0x10))(plVar31,0x20,8);
  plVar31[2] = param_2;
  plVar31[3] = 0;
  *plVar31 = 0;
  plVar31[1] = param_2;
  if ((uVar32 == 0) || (*(float *)(plVar29 + 4) * (float)uVar32 < (float)(plVar29[3] + 1))) {
    uVar32 = (ulong)(uVar32 < 3 || (uVar32 & uVar32 - 1) != 0) | uVar32 << 1;
    uVar14 = (ulong)((float)(plVar29[3] + 1) / *(float *)(plVar29 + 4));
    if (uVar14 <= uVar32) {
      uVar14 = uVar32;
    }
    if (uVar14 - 1 == 0) {
      uVar14 = 2;
    }
    else if ((uVar14 & uVar14 - 1) != 0) {
      uVar14 = std::__next_prime(uVar14);
    }
    uVar32 = plVar29[1];
    if (uVar32 < uVar14) {
      uVar9 = uVar14;
LAB_00c315f8:
      FUN_00c3374c(plVar29,uVar9);
    }
    else if (uVar14 < uVar32) {
      uVar9 = (ulong)((float)(ulong)plVar29[3] / *(float *)(plVar29 + 4));
      if ((uVar32 < 3) ||
         (uVar15 = uVar32 - (uVar32 >> 1 & 0x5555555555555555),
         uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333),
         1 < (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar9 = std::__next_prime(uVar9);
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar9 <= uVar14) {
        uVar9 = uVar14;
      }
      if (uVar9 < uVar32) goto LAB_00c315f8;
    }
    uVar32 = plVar29[1];
    if ((uVar32 & uVar32 - 1) == 0) {
      unaff_x24 = uVar32 - 1 & param_2;
    }
    else if (param_2 < uVar32) {
      unaff_x24 = param_2;
    }
    else {
      uVar14 = 0;
      if (uVar32 != 0) {
        uVar14 = param_2 / uVar32;
      }
      unaff_x24 = param_2 - uVar14 * uVar32;
    }
  }
  lVar17 = *plVar29;
  plVar16 = *(long **)(lVar17 + unaff_x24 * 8);
  if (plVar16 == (long *)0x0) {
    plVar16 = plVar29 + 2;
    *plVar31 = *plVar16;
    *plVar16 = (long)plVar31;
    *(long **)(lVar17 + unaff_x24 * 8) = plVar16;
    if (*plVar31 != 0) {
      uVar14 = *(ulong *)(*plVar31 + 8);
      if ((uVar32 & uVar32 - 1) == 0) {
        uVar14 = uVar14 & uVar32 - 1;
      }
      else if (uVar32 <= uVar14) {
        uVar9 = 0;
        if (uVar32 != 0) {
          uVar9 = uVar14 / uVar32;
        }
        uVar14 = uVar14 - uVar9 * uVar32;
      }
      plVar16 = (long *)(*plVar29 + uVar14 * 8);
      goto LAB_00c31730;
    }
  }
  else {
    *plVar31 = *plVar16;
LAB_00c31730:
    *plVar16 = (long)plVar31;
  }
  plVar29[3] = plVar29[3] + 1;
LAB_00c31740:
  if (plVar31[3] == 0) {
    plVar29 = *(long **)(lVar26 + 0x30);
    if (plVar29 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar29 = DAT_04859430;
      *(long **)(lVar26 + 0x30) = DAT_04859430;
    }
    puVar10 = (uint *)(**(code **)(*plVar29 + 0x10))(plVar29,0x50,8);
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar27 = puVar10 + 0xc;
    puVar27[0] = 0;
    puVar27[1] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    plVar31[3] = (long)puVar10;
    *(ulong *)(puVar10 + 10) = param_2;
    lVar17 = *(long *)(param_1 + 8);
    if (lVar17 == 0) {
      lVar17 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    }
    *(long *)(puVar10 + 6) = param_1;
    *(long *)(puVar10 + 8) = lVar17;
    uVar32 = (long)*(int *)(param_2 + 0x38) + (long)*(int *)(param_2 + 0x2c);
    uVar14 = uVar32 * 4;
    if (uVar32 >> 0x3e != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    pvVar11 = operator_new__(uVar14);
    pvVar12 = *(void **)(puVar10 + 0xc);
    if (pvVar12 != pvVar11) {
      if (pvVar12 != (void *)0x0) {
        operator_delete__(pvVar12);
      }
      *(void **)puVar27 = pvVar11;
    }
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x7c) == 3) {
      puVar10[1] = 0xffffffff;
      uVar34 = 0x18;
    }
    else {
      puVar10[1] = 0x18;
      iVar8 = *(int *)(param_2 + 0x2c) + 0x1f;
      iVar7 = *(int *)(param_2 + 0x2c) + 0x3e;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      iVar8 = (iVar7 >> 5) * 4;
      uVar18 = iVar8 + 0x1f;
      uVar34 = iVar8 + 0x26;
      if (-1 < (int)uVar18) {
        uVar34 = uVar18;
      }
      uVar34 = uVar34 & 0xfffffff8;
    }
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x7c) == 3) {
      puVar10[5] = uVar34;
      uVar18 = uVar34 + 0xf;
      if (-1 < (int)(uVar34 + 8)) {
        uVar18 = uVar34 + 8;
      }
      uVar34 = uVar18 & 0xfffffff8;
    }
    else {
      puVar10[5] = 0xffffffff;
    }
    if (0 < *(int *)(param_2 + 0x38)) {
      puVar10[2] = uVar34;
      iVar8 = uVar34 + *(int *)(param_2 + 0x38) * 4;
      uVar18 = iVar8 + 7;
      uVar34 = iVar8 + 0xe;
      if (-1 < (int)uVar18) {
        uVar34 = uVar18;
      }
      uVar34 = uVar34 & 0xfffffff8;
    }
    if (*(int *)(param_2 + 0x68) < 1) {
      puVar10[4] = 0xffffffff;
    }
    else {
      puVar10[4] = uVar34;
      uVar18 = uVar34 + 0x2e;
      if (-1 < (int)(uVar34 + 0x27)) {
        uVar18 = uVar34 + 0x27;
      }
      uVar34 = uVar18 & 0xfffffff8;
    }
    iVar8 = *(int *)(param_2 + 0x2c);
    if (0 < iVar8) {
      lVar36 = 0;
      lVar17 = 0;
      puVar21 = PTR_DAT_047dad58;
      do {
        lVar30 = *(long *)(param_2 + 0x30) + lVar36;
        if (*(long *)(lVar30 + 0x58) == 0) {
          uVar18 = *(uint *)(puVar21 + (ulong)*(uint *)(lVar30 + 0x3c) * 4);
          if (*(int *)(lVar30 + 0x40) == 3) {
            if (uVar18 - 1 < 8) {
              iVar7 = 0x10;
            }
            else {
              if (uVar18 != 9) {
                if (uVar18 != 10) goto LAB_00c319ec;
                if (*(uint *)(lVar30 + 0x3c) == 0xb) {
                  iVar7 = 0x18;
                  if (*(char *)(*(long *)(*(long *)(lVar30 + 0x68) + 0x20) + 0x53) != '\0') {
                    iVar7 = 0x58;
                  }
                  goto LAB_00c319a8;
                }
              }
              iVar7 = 0x18;
            }
LAB_00c319a8:
            iVar19 = 8;
          }
          else if (uVar18 < 0xb) {
            uVar1 = 1 << (ulong)(uVar18 & 0x1f);
            if ((uVar1 & 0x634) != 0) {
              iVar7 = 8;
              goto LAB_00c319a8;
            }
            if ((uVar1 & 0x14a) == 0) {
              if (uVar18 != 7) goto LAB_00c319ec;
              iVar7 = 1;
              iVar19 = 1;
            }
            else {
              iVar7 = 4;
              iVar19 = 4;
            }
          }
          else {
LAB_00c319ec:
            local_90 = (undefined *)CONCAT44(local_90._4_4_,2);
            local_88 = 
            "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/dynamic_message.cc"
            ;
            local_80 = 0xa2;
            local_70 = 0;
            local_68 = 0;
            local_78 = 0;
            std::string::append((char *)&local_78);
            FUN_00bb0e90(&local_90);
            FUN_00bb0d74(&local_90);
            iVar7 = 0;
            iVar19 = 0;
            iVar8 = *(int *)(param_2 + 0x2c);
            puVar21 = PTR_DAT_047dad58;
          }
          iVar4 = 0;
          if (iVar19 != 0) {
            iVar4 = (int)(uVar34 + iVar19 + -1) / iVar19;
          }
          uVar34 = iVar4 * iVar19 + iVar7;
          *(int *)((long)pvVar11 + lVar17 * 4) = iVar4 * iVar19;
        }
        lVar17 = lVar17 + 1;
        lVar36 = lVar36 + 0x90;
      } while (lVar17 < iVar8);
    }
    iVar7 = *(int *)(param_2 + 0x38);
    uVar18 = uVar34 + 0xe;
    if (-1 < (int)(uVar34 + 7)) {
      uVar18 = uVar34 + 7;
    }
    uVar18 = uVar18 & 0xfffffff8;
    if (0 < iVar7) {
      *(uint *)((long)pvVar11 + (long)iVar8 * 4) = uVar18;
      uVar34 = uVar18 + 0x16;
      if (-1 < (int)(uVar18 + 0xf)) {
        uVar34 = uVar18 + 0xf;
      }
      uVar18 = uVar34 & 0xfffffff8;
      if (iVar7 != 1) {
        puVar27 = (uint *)((long)pvVar11 + (long)iVar8 * 4);
        if (iVar7 < 3) {
          iVar7 = 2;
        }
        iVar7 = iVar7 + -1;
        do {
          puVar27 = puVar27 + 1;
          *puVar27 = uVar18;
          uVar34 = uVar18 + 0x16;
          if (-1 < (int)(uVar18 + 0xf)) {
            uVar34 = uVar18 + 0xf;
          }
          iVar7 = iVar7 + -1;
          uVar18 = uVar34 & 0xfffffff8;
        } while (iVar7 != 0);
      }
    }
    puVar10[3] = uVar18;
    uVar34 = uVar18 + 0x16;
    if (-1 < (int)(uVar18 + 0xf)) {
      uVar34 = uVar18 + 0xf;
    }
    uVar34 = uVar34 & 0xfffffff8;
    *puVar10 = uVar34;
    plVar29 = *(long **)(lVar26 + 0x30);
    if (plVar29 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar29 = DAT_04859430;
      *(long **)(lVar26 + 0x30) = DAT_04859430;
    }
    puVar35 = (undefined8 *)(**(code **)(*plVar29 + 0x10))(plVar29,(long)(int)uVar34,8);
    memset(puVar35,0,(long)(int)uVar34);
    *(undefined8 **)(puVar10 + 0x10) = puVar35;
    *puVar35 = &PTR_FUN_0455c750;
    puVar35[1] = puVar10;
    *(undefined4 *)(puVar35 + 2) = 0;
    FUN_00c310e8(puVar35);
    if (*(int *)(param_2 + 0x38) < 1) {
      plVar29 = *(long **)(lVar26 + 0x30);
      if (plVar29 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar29 = DAT_04859430;
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      plVar29 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x58,8);
      lVar26 = *(long *)(puVar10 + 10);
      lVar17 = *(long *)(puVar10 + 0xc);
      puVar21 = PTR_DAT_047dada0 + 0x10;
      uVar18 = puVar10[3];
      uVar1 = puVar10[4];
      lVar36 = *(long *)(puVar10 + 8);
      uVar34 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[5];
      plVar29[2] = *(long *)(puVar10 + 0x10);
      *plVar29 = (long)puVar21;
      plVar29[1] = lVar26;
      plVar29[4] = lVar17;
      *(uint *)(plVar29 + 5) = uVar2;
      *(uint *)(plVar29 + 6) = uVar18;
      *(uint *)((long)plVar29 + 0x34) = uVar1;
      *(undefined4 *)(plVar29 + 7) = 0xffffffff;
      *(uint *)((long)plVar29 + 0x3c) = uVar3;
      *(uint *)(plVar29 + 8) = uVar34;
      if (lVar36 == 0) {
        if (DAT_0483a688 != 2) {
          local_80 = local_80 & 0xffffff00;
          local_90 = PTR_DAT_047daba0 + 0x10;
          local_88 = &LAB_00ba6670;
          if (DAT_0483a688 != 2) {
            do {
              lVar26 = DAT_0483a688;
              if (DAT_0483a688 != 0) break;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
              if (bVar6) {
                DAT_0483a688 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if (lVar26 == 0) {
              FUN_00bb162c(&local_90);
              DAT_0483a688 = 2;
            }
            else {
              while (lVar26 == 1) {
                sched_yield();
                lVar26 = DAT_0483a688;
              }
            }
          }
        }
        lVar36 = DAT_0483a678;
      }
      plVar29[9] = lVar36;
      plVar29[10] = param_1;
      plVar31 = *(long **)(puVar10 + 0xe);
      if (plVar31 != plVar29) {
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 8))();
        }
        *(long **)(puVar10 + 0xe) = plVar29;
      }
    }
    else {
      lVar17 = 0;
      lVar36 = *(long *)(param_2 + 0x40);
      iVar8 = 0;
      puVar21 = PTR_DAT_047dad58;
      do {
        if (0 < *(int *)(lVar36 + lVar17 * 0x30 + 0x1c)) {
          lVar30 = 0;
          do {
            lVar36 = *(long *)(*(long *)(lVar36 + lVar17 * 0x30 + 0x20) + lVar30 * 8);
            if (*(int *)(puVar21 + (ulong)*(uint *)(lVar36 + 0x3c) * 4) - 1U < 10) {
              iVar7 = *(int *)(&DAT_03d5ee8c +
                              (long)(int)(*(int *)(puVar21 + (ulong)*(uint *)(lVar36 + 0x3c) * 4) -
                                         1U) * 4);
            }
            else {
              local_90 = (undefined *)CONCAT44(local_90._4_4_,2);
              local_88 = 
              "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/dynamic_message.cc"
              ;
              local_80 = 0xc0;
              local_78 = 0;
              local_70 = 0;
              local_68 = 0;
              std::string::append((char *)&local_78);
              FUN_00bb0e90(&local_90);
              FUN_00bb0d74(&local_90);
              iVar7 = 0;
              puVar21 = PTR_DAT_047dad58;
            }
            iVar19 = 0;
            if (iVar7 != 0) {
              iVar19 = (iVar8 + iVar7 + -1) / iVar7;
            }
            if (*(char *)(lVar36 + 0x44) == '\0') {
              plVar29 = (long *)(*(long *)(lVar36 + 0x50) + 0x30);
            }
            else if (*(long *)(lVar36 + 0x60) == 0) {
              plVar29 = (long *)(*(long *)(lVar36 + 0x30) + 0x88);
            }
            else {
              plVar29 = (long *)(*(long *)(lVar36 + 0x60) + 0x80);
            }
            uVar18 = (int)((ulong)(lVar36 - *plVar29) >> 4) * 0x38e38e39;
            iVar8 = iVar19 * iVar7 + iVar7;
            *(int *)((long)pvVar11 +
                    (-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar18 << 2)) =
                 iVar19 * iVar7;
            lVar36 = *(long *)(param_2 + 0x40);
            lVar30 = lVar30 + 1;
          } while (lVar30 < *(int *)(lVar36 + lVar17 * 0x30 + 0x1c));
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_2 + 0x38));
      plVar29 = *(long **)(lVar26 + 0x30);
      if (plVar29 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar29 = DAT_04859430;
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      lVar17 = (**(code **)(*plVar29 + 0x10))(plVar29,(long)iVar8,8);
      *(long *)(puVar10 + 0x12) = lVar17;
      puVar21 = PTR_DAT_047dad58;
      lVar36 = *(long *)(puVar10 + 10);
      iVar8 = *(int *)(lVar36 + 0x38);
      if (0 < iVar8) {
        lVar20 = *(long *)(puVar10 + 0xc);
        lVar30 = 0;
        lVar24 = *(long *)(lVar36 + 0x40);
        do {
          if (0 < *(int *)(lVar24 + lVar30 * 0x30 + 0x1c)) {
            lVar22 = 0;
            do {
              lVar24 = *(long *)(*(long *)(lVar24 + lVar30 * 0x30 + 0x20) + lVar22 * 8);
              if (*(char *)(lVar24 + 0x44) == '\0') {
                plVar29 = (long *)(*(long *)(lVar24 + 0x50) + 0x30);
              }
              else if (*(long *)(lVar24 + 0x60) == 0) {
                plVar29 = (long *)(*(long *)(lVar24 + 0x30) + 0x88);
              }
              else {
                plVar29 = (long *)(*(long *)(lVar24 + 0x60) + 0x80);
              }
              if (9 < *(int *)(puVar21 + (ulong)*(uint *)(lVar24 + 0x3c) * 4) - 1U)
              goto LAB_00c31dd0;
              uVar18 = (int)((ulong)(lVar24 - *plVar29) >> 4) * 0x38e38e39;
              lVar25 = (long)*(int *)(lVar20 + (-(ulong)(uVar18 >> 0x1f) & 0xfffffffc00000000 |
                                               (ulong)uVar18 << 2));
              switch(*(int *)(puVar21 + (ulong)*(uint *)(lVar24 + 0x3c) * 4)) {
              default:
                uVar23 = *(undefined4 *)(lVar24 + 0x88);
                goto LAB_00c31db0;
              case 7:
                *(undefined1 *)(lVar17 + lVar25) = *(undefined1 *)(lVar24 + 0x88);
                break;
              case 8:
                uVar23 = *(undefined4 *)(*(long *)(lVar24 + 0x88) + 0x10);
LAB_00c31db0:
                *(undefined4 *)(lVar17 + lVar25) = uVar23;
                break;
              case 9:
                *(undefined8 *)(lVar17 + lVar25) = 0;
              case 2:
              case 4:
              case 5:
                *(undefined8 *)(lVar17 + lVar25) = *(undefined8 *)(lVar24 + 0x88);
                break;
              case 10:
                *(undefined8 *)(lVar17 + lVar25) = 0;
              }
LAB_00c31dd0:
              lVar24 = *(long *)(lVar36 + 0x40);
              lVar22 = lVar22 + 1;
            } while (lVar22 < *(int *)(lVar24 + lVar30 * 0x30 + 0x1c));
            iVar8 = *(int *)(lVar36 + 0x38);
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < iVar8);
      }
      plVar29 = *(long **)(lVar26 + 0x30);
      if (plVar29 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar29 = DAT_04859430;
        *(long **)(lVar26 + 0x30) = DAT_04859430;
      }
      plVar29 = (long *)(**(code **)(*plVar29 + 0x10))(plVar29,0x58,8);
      lVar26 = *(long *)(puVar10 + 10);
      lVar20 = *(long *)(puVar10 + 1);
      uVar18 = puVar10[3];
      uVar34 = puVar10[4];
      puVar21 = PTR_DAT_047dada0 + 0x10;
      lVar17 = *(long *)(puVar10 + 0x10);
      lVar36 = *(long *)(puVar10 + 0x12);
      uVar1 = puVar10[5];
      lVar30 = *(long *)(puVar10 + 8);
      uVar2 = *puVar10;
      plVar29[4] = *(long *)(puVar10 + 0xc);
      plVar29[5] = lVar20;
      *plVar29 = (long)puVar21;
      plVar29[1] = lVar26;
      *(uint *)(plVar29 + 6) = uVar18;
      *(uint *)((long)plVar29 + 0x34) = uVar34;
      plVar29[2] = lVar17;
      plVar29[3] = lVar36;
      *(undefined4 *)(plVar29 + 7) = 0xffffffff;
      *(uint *)((long)plVar29 + 0x3c) = uVar1;
      *(uint *)(plVar29 + 8) = uVar2;
      if (lVar30 == 0) {
        if (DAT_0483a688 != 2) {
          local_80 = local_80 & 0xffffff00;
          local_90 = PTR_DAT_047daba0 + 0x10;
          local_88 = &LAB_00ba6670;
          if (DAT_0483a688 != 2) {
            do {
              lVar26 = DAT_0483a688;
              if (DAT_0483a688 != 0) break;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
              if (bVar6) {
                DAT_0483a688 = 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            DataMemoryBarrier(2,3);
            if (lVar26 == 0) {
              FUN_00bb162c(&local_90);
              DAT_0483a688 = 2;
            }
            else {
              while (lVar26 == 1) {
                sched_yield();
                lVar26 = DAT_0483a688;
              }
            }
          }
        }
        lVar30 = DAT_0483a678;
      }
      plVar29[9] = lVar30;
      plVar29[10] = param_1;
      plVar31 = *(long **)(puVar10 + 0xe);
      if (plVar31 != plVar29) {
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 8))();
        }
        *(long **)(puVar10 + 0xe) = plVar29;
      }
    }
    lVar26 = puVar35[1];
    if (*(undefined8 **)(lVar26 + 0x40) != puVar35 &&
        *(undefined8 **)(lVar26 + 0x40) != (undefined8 *)0x0) {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,3);
      local_88 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/dynamic_message.cc"
      ;
      local_80 = 0x218;
      local_68 = 0;
      local_78 = 0;
      local_70 = 0;
      std::string::append((char *)&local_78);
      FUN_00bb0e90(&local_90);
      FUN_00bb0d74(&local_90);
      lVar26 = puVar35[1];
    }
    lVar17 = *(long *)(lVar26 + 0x28);
    iVar8 = *(int *)(lVar17 + 0x2c);
    if (0 < iVar8) {
      uVar28 = *(undefined8 *)(lVar26 + 0x18);
      lVar30 = 0;
      lVar36 = 0;
      do {
        lVar20 = *(long *)(lVar17 + 0x30) + lVar30;
        iVar7 = *(int *)(*(long *)(lVar26 + 0x30) + lVar36 * 4);
        puVar33 = puVar35;
        if (*(long *)(lVar20 + 0x58) != 0) {
          puVar33 = *(undefined8 **)(lVar26 + 0x48);
        }
        if (((*(uint *)(lVar20 + 0x3c) & 0xfffffffe) == 10) && (*(int *)(lVar20 + 0x40) != 3)) {
          uVar13 = FUN_00c312f0(uVar28,*(undefined8 *)(lVar20 + 0x68));
          *(undefined8 *)((long)puVar33 + (long)iVar7) = uVar13;
          iVar8 = *(int *)(lVar17 + 0x2c);
          lVar26 = puVar35[1];
        }
        lVar36 = lVar36 + 1;
        lVar30 = lVar30 + 0x90;
      } while (lVar36 < iVar8);
    }
    if (*(int *)(lVar26 + 0x14) != -1) {
      *(undefined1 *)((long)puVar35 + (long)*(int *)(lVar26 + 0x14)) = 1;
    }
  }
  else {
    puVar35 = *(undefined8 **)(plVar31[3] + 0x40);
  }
  return puVar35;
}


