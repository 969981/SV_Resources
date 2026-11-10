/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b83d88; name: FUN_00b83d88
 */


void FUN_00b83d88(undefined8 *param_1,int param_2,byte *param_3,char *param_4,ulong param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long ***ppplVar8;
  size_t sVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long ****pppplVar22;
  int *piVar23;
  char *pcVar24;
  long *plVar25;
  long ***ppplVar26;
  ulong local_310 [2];
  char *local_300;
  long ****local_2f8;
  long ****local_2f0;
  long local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  char *local_190;
  undefined4 local_188;
  char local_17b;
  char local_17a [26];
  byte *local_160;
  uint local_158;
  byte local_14b [27];
  char *local_130;
  char *local_128;
  undefined8 local_120;
  byte local_100 [8];
  undefined1 auStack_f8 [16];
  byte local_e8 [16];
  long local_d8;
  byte local_d0 [8];
  ulong local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  undefined2 local_a0;
  char local_9e;
  string local_98 [16];
  long local_88;
  string local_80 [8];
  uint local_78;
  char *local_70;
  
  if (*(char *)(param_1[4] + 0x53) == '\0') {
    std::string::__init((ulong)local_80,(char)(param_2 << 1));
    iVar6 = param_2 + 1;
    memset(local_e8,0,0x48);
    local_9e = param_4[2];
    local_a0 = *(undefined2 *)param_4;
    std::string::string(local_98,local_80);
    lVar11 = tpidr_el0;
    if (*param_4 == '\0') {
      bVar4 = 0;
    }
    else {
      local_130 = (char *)0x0;
      local_128 = (char *)0x0;
      local_120 = 0;
      FUN_00b88e54(param_1,&local_130);
      bVar4 = FUN_00b884b8(param_1[2],&local_130,auStack_f8);
      pcVar24 = local_130;
      if (local_130 != (char *)0x0) {
        local_128 = local_130;
        plVar25 = *(long **)(lVar11 + 0x30);
        if (plVar25 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar25 = DAT_04859430;
          *(long **)(lVar11 + 0x30) = DAT_04859430;
        }
        uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
        if (((uVar7 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
          (**(code **)(*plVar25 + 0x18))(plVar25,pcVar24,0,8);
        }
        else {
          FUN_00c48fe8(plVar25,pcVar24,0,8);
        }
      }
    }
    local_100[0] = bVar4 & 1;
    FUN_00b81e5c(local_100,param_3);
    if ((param_5 & 1) != 0) {
      local_130 = (char *)((ulong)local_80 | 1);
      uVar1 = (uint)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar1 = (uint)_local_78;
        local_130 = local_70;
      }
      local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
      pbVar13 = (byte *)*param_1;
      local_160 = *(byte **)(pbVar13 + 0x10);
      if ((*pbVar13 & 1) == 0) {
        local_160 = pbVar13 + 1;
      }
      local_188 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_218 = 0xffffffff;
      local_248 = 0xffffffff;
      local_278 = 0xffffffff;
      local_2a8 = 0xffffffff;
      local_2d8 = 0xffffffff;
      local_190 = (char *)0x0;
      local_1c0 = 0;
      local_1f0 = 0;
      local_220 = 0;
      local_250 = 0;
      local_280 = 0;
      local_2b0 = 0;
      local_2e0 = 0;
      local_158 = (uint)(*pbVar13 >> 1);
      if ((*pbVar13 & 1) != 0) {
        local_158 = (uint)*(undefined8 *)(pbVar13 + 8);
      }
      FUN_00c2ce10(param_3,"$0message $1",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
    }
    std::string::append((char *)param_3);
    FUN_00b82160(iVar6,param_1[4],param_3);
    local_2f0 = (long ****)0x0;
    local_2e8 = 0;
    iVar5 = *(int *)((long)param_1 + 0x2c);
    local_2f8 = (long ****)&local_2f0;
    if (0 < iVar5) {
      lVar21 = 0;
      do {
        if (*(int *)(param_1[6] + lVar21 * 0x90 + 0x3c) == 10) {
          ppplVar26 = *(long ****)(param_1[6] + lVar21 * 0x90 + 0x68);
          pppplVar18 = (long ****)&local_2f0;
          if (local_2f0 != (long ****)0x0) {
            pppplVar22 = local_2f0;
            do {
              if (ppplVar26 < pppplVar22[4]) {
                pppplVar17 = (long ****)*pppplVar22;
                pppplVar18 = pppplVar22;
                if (pppplVar17 == (long ****)0x0) {
                  goto LAB_00b8405c;
                }
              }
              else {
                if (ppplVar26 <= pppplVar22[4]) goto LAB_00b8405c;
                pppplVar18 = pppplVar22 + 1;
                pppplVar17 = (long ****)*pppplVar18;
                if (pppplVar17 == (long ****)0x0) goto LAB_00b8405c;
              }
              pppplVar22 = pppplVar17;
            } while( true );
          }
          pppplVar22 = (long ****)&local_2f0;
LAB_00b8405c:
          if (*pppplVar18 == (long ***)0x0) {
            plVar25 = *(long **)(lVar11 + 0x30);
            if (plVar25 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar25 = DAT_04859430;
              *(long **)(lVar11 + 0x30) = DAT_04859430;
            }
            ppplVar8 = (long ***)(**(code **)(*plVar25 + 0x10))(plVar25,0x28,8);
            ppplVar8[4] = (long **)ppplVar26;
            ppplVar8[2] = (long **)pppplVar22;
            *ppplVar8 = (long **)0x0;
            ppplVar8[1] = (long **)0x0;
            *pppplVar18 = ppplVar8;
            if ((long ****)*local_2f8 != (long ****)0x0) {
              ppplVar8 = *pppplVar18;
              local_2f8 = (long ****)*local_2f8;
            }
            FUN_010108e0(local_2f0,ppplVar8);
            local_2e8 = local_2e8 + 1;
            iVar5 = *(int *)((long)param_1 + 0x2c);
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar5);
    }
    iVar5 = *(int *)(param_1 + 0xf);
    if (0 < iVar5) {
      lVar21 = 0;
      do {
        if (*(int *)(param_1[0x10] + lVar21 * 0x90 + 0x3c) == 10) {
          ppplVar26 = *(long ****)(param_1[0x10] + lVar21 * 0x90 + 0x68);
          pppplVar18 = (long ****)&local_2f0;
          if (local_2f0 != (long ****)0x0) {
            pppplVar22 = local_2f0;
            do {
              if (ppplVar26 < pppplVar22[4]) {
                pppplVar17 = (long ****)*pppplVar22;
                pppplVar18 = pppplVar22;
                if (pppplVar17 == (long ****)0x0) {
                  goto LAB_00b841d8;
                }
              }
              else {
                if (ppplVar26 <= pppplVar22[4]) goto LAB_00b841d8;
                pppplVar18 = pppplVar22 + 1;
                pppplVar17 = (long ****)*pppplVar18;
                if (pppplVar17 == (long ****)0x0) goto LAB_00b841d8;
              }
              pppplVar22 = pppplVar17;
            } while( true );
          }
          pppplVar22 = (long ****)&local_2f0;
LAB_00b841d8:
          if (*pppplVar18 == (long ***)0x0) {
            plVar25 = *(long **)(lVar11 + 0x30);
            if (plVar25 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar25 = DAT_04859430;
              *(long **)(lVar11 + 0x30) = DAT_04859430;
            }
            ppplVar8 = (long ***)(**(code **)(*plVar25 + 0x10))(plVar25,0x28,8);
            ppplVar8[4] = (long **)ppplVar26;
            ppplVar8[2] = (long **)pppplVar22;
            *ppplVar8 = (long **)0x0;
            ppplVar8[1] = (long **)0x0;
            *pppplVar18 = ppplVar8;
            if ((long ****)*local_2f8 != (long ****)0x0) {
              ppplVar8 = *pppplVar18;
              local_2f8 = (long ****)*local_2f8;
            }
            FUN_010108e0(local_2f0,ppplVar8);
            local_2e8 = local_2e8 + 1;
            iVar5 = *(int *)(param_1 + 0xf);
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar5);
    }
    iVar5 = *(int *)(param_1 + 9);
    if (0 < iVar5) {
      lVar21 = 0;
      do {
        ppplVar26 = (long ***)(param_1[10] + lVar21 * 0xa8);
        for (pppplVar18 = local_2f0; pppplVar18 != (long ****)0x0;
            pppplVar18 = (long ****)*pppplVar18) {
          if (pppplVar18[4] <= ppplVar26) {
            if (ppplVar26 <= pppplVar18[4]) goto LAB_00b84328;
            pppplVar18 = pppplVar18 + 1;
          }
        }
        FUN_00b83d88(ppplVar26,iVar6,param_3,param_4,1);
        iVar5 = *(int *)(param_1 + 9);
LAB_00b84328:
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar5);
    }
    if (0 < *(int *)(param_1 + 0xb)) {
      lVar20 = 0;
      lVar21 = 0;
      do {
        FUN_00b823e4(param_1[0xc] + lVar20,iVar6,param_3,param_4);
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x38;
      } while (lVar21 < *(int *)(param_1 + 0xb));
    }
    if (0 < *(int *)((long)param_1 + 0x2c)) {
      lVar21 = 0;
      lVar20 = 0x58;
      do {
        plVar25 = (long *)(param_1[6] + lVar20) + -0xb;
        lVar14 = *(long *)(param_1[6] + lVar20);
        if (lVar14 == 0) {
          FUN_00b85714(plVar25,iVar6,0,param_3,param_4);
        }
        else if (plVar25 == (long *)**(undefined8 **)(lVar14 + 0x20)) {
          FUN_00b87628(lVar14,iVar6,param_3,param_4);
        }
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x90;
      } while (lVar21 < *(int *)((long)param_1 + 0x2c));
    }
    if (0 < *(int *)(param_1 + 0xd)) {
      lVar21 = 0;
      do {
        uVar1 = (uint)((byte)local_80[0] >> 1);
        local_130 = (char *)((ulong)local_80 | 1);
        if (((byte)local_80[0] & 1) != 0) {
          uVar1 = (uint)_local_78;
          local_130 = local_70;
        }
        local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
        iVar6 = *(int *)(param_1[0xe] + lVar21 * 8);
        local_14b[2] = 0;
        if (iVar6 < 0) {
          if (iVar6 < -9) {
            iVar6 = iVar6 + 10;
            cVar2 = ((char)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (char)(iVar6 >> 0x1f)) *
                    '\n' - (char)iVar6;
            iVar6 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
            pbVar13 = local_14b;
            iVar6 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) + 1;
            do {
              local_160 = pbVar13 + -1;
              *pbVar13 = (char)iVar6 + (char)(iVar6 / 10) * -10 + 0x30;
              bVar3 = 9 < iVar6;
              pbVar13 = local_160;
              iVar6 = iVar6 / 10;
            } while (bVar3);
          }
          else {
            cVar2 = -(char)iVar6;
            local_160 = local_14b;
          }
          local_14b[1] = cVar2 + '0';
          *local_160 = 0x2d;
        }
        else {
          local_160 = local_14b + 2;
          do {
            local_160 = local_160 + -1;
            *local_160 = (char)iVar6 + (char)(iVar6 / 10) * -10 + 0x30;
            bVar3 = 9 < iVar6;
            iVar6 = iVar6 / 10;
          } while (bVar3);
        }
        sVar9 = strlen((char *)local_160);
        iVar6 = *(int *)(param_1[0xe] + lVar21 * 8 + 4);
        local_17a[1] = 0;
        if (iVar6 < 1) {
          if (iVar6 < -8) {
            iVar6 = iVar6 + 9;
            cVar2 = ((char)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (char)(iVar6 >> 0x1f)) *
                    '\n' - (char)iVar6;
            iVar6 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
            pcVar24 = &local_17b;
            iVar6 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) + 1;
            do {
              local_190 = pcVar24 + -1;
              *pcVar24 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
              bVar3 = 9 < iVar6;
              pcVar24 = local_190;
              iVar6 = iVar6 / 10;
            } while (bVar3);
          }
          else {
            cVar2 = -(char)(iVar6 + -1);
            local_190 = &local_17b;
          }
          local_17a[0] = cVar2 + '0';
          *local_190 = '-';
        }
        else {
          local_190 = local_17a + 1;
          iVar6 = iVar6 + -1;
          do {
            local_190 = local_190 + -1;
            *local_190 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
            bVar3 = 9 < iVar6;
            iVar6 = iVar6 / 10;
          } while (bVar3);
        }
        local_158 = (uint)sVar9;
        sVar9 = strlen(local_190);
        local_188 = (undefined4)sVar9;
        local_1c0 = 0;
        local_1b8 = 0xffffffff;
        local_1f0 = 0;
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
        local_280 = 0;
        local_278 = 0xffffffff;
        local_2b0 = 0;
        local_2a8 = 0xffffffff;
        local_2e0 = 0;
        local_2d8 = 0xffffffff;
        FUN_00c2ce10(param_3,"$0  extensions $1 to $2;\n",&local_130,&local_160,&local_190,
                     &local_1c0,&local_1f0,&local_220,&local_250,&local_280,&local_2b0,&local_2e0);
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(param_1 + 0xd));
    }
    if (0 < *(int *)(param_1 + 0xf)) {
      pcVar24 = (char *)((ulong)local_80 | 1);
      lVar21 = 0;
      lVar14 = 0;
      lVar20 = 0x50;
      do {
        lVar15 = param_1[0x10];
        lVar19 = *(long *)(lVar15 + lVar20);
        if (lVar19 != lVar14) {
          if (lVar21 != 0) {
            local_130 = pcVar24;
            uVar1 = (uint)((byte)local_80[0] >> 1);
            if (((byte)local_80[0] & 1) != 0) {
              local_130 = local_70;
              uVar1 = local_78;
            }
            local_160 = (byte *)0x0;
            local_158 = 0xffffffff;
            local_190 = (char *)0x0;
            local_188 = 0xffffffff;
            local_1c0 = 0;
            local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
            local_1b8 = 0xffffffff;
            local_1f0 = 0;
            local_1e8 = 0xffffffff;
            local_220 = 0;
            local_218 = 0xffffffff;
            local_250 = 0;
            local_248 = 0xffffffff;
            local_280 = 0;
            local_278 = 0xffffffff;
            local_2b0 = 0;
            local_2a8 = 0xffffffff;
            local_2e0 = 0;
            local_2d8 = 0xffffffff;
            FUN_00c2ce10(param_3,"$0  }\n",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                         &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
            lVar19 = *(long *)(param_1[0x10] + lVar20);
          }
          uVar1 = (uint)((byte)local_80[0] >> 1);
          local_130 = pcVar24;
          if (((byte)local_80[0] & 1) != 0) {
            uVar1 = (uint)_local_78;
            local_130 = local_70;
          }
          local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
          pbVar13 = *(byte **)(lVar19 + 8);
          local_160 = *(byte **)(pbVar13 + 0x10);
          if ((*pbVar13 & 1) == 0) {
            local_160 = pbVar13 + 1;
          }
          local_190 = (char *)0x0;
          local_188 = 0xffffffff;
          local_1c0 = 0;
          local_1b8 = 0xffffffff;
          local_1f0 = 0;
          local_1e8 = 0xffffffff;
          local_220 = 0;
          local_218 = 0xffffffff;
          local_250 = 0;
          local_248 = 0xffffffff;
          local_280 = 0;
          local_278 = 0xffffffff;
          local_2b0 = 0;
          local_2a8 = 0xffffffff;
          local_2e0 = 0;
          local_2d8 = 0xffffffff;
          local_158 = (uint)(*pbVar13 >> 1);
          if ((*pbVar13 & 1) != 0) {
            local_158 = (uint)*(undefined8 *)(pbVar13 + 8);
          }
          FUN_00c2ce10(param_3,"$0  extend .$1 {\n",&local_130,&local_160,&local_190,&local_1c0,
                       &local_1f0,&local_220,&local_250,&local_280,&local_2b0,&local_2e0);
          lVar15 = param_1[0x10];
          lVar14 = lVar19;
        }
        FUN_00b85714(lVar15 + lVar20 + -0x50,param_2 + 2,0,param_3,param_4);
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0x90;
      } while (lVar21 < *(int *)(param_1 + 0xf));
      if (0 < *(int *)(param_1 + 0xf)) {
        uVar1 = (uint)((byte)local_80[0] >> 1);
        local_130 = pcVar24;
        if (((byte)local_80[0] & 1) != 0) {
          uVar1 = (uint)_local_78;
          local_130 = local_70;
        }
        local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
        local_160 = (byte *)0x0;
        local_158 = 0xffffffff;
        local_190 = (char *)0x0;
        local_188 = 0xffffffff;
        local_1c0 = 0;
        local_1b8 = 0xffffffff;
        local_1f0 = 0;
        local_1e8 = 0xffffffff;
        local_220 = 0;
        local_218 = 0xffffffff;
        local_250 = 0;
        local_248 = 0xffffffff;
        local_280 = 0;
        local_278 = 0xffffffff;
        local_2b0 = 0;
        local_2a8 = 0xffffffff;
        local_2e0 = 0;
        local_2d8 = 0xffffffff;
        FUN_00c2ce10(param_3,"$0  }\n",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                     &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      }
    }
    if (0 < *(int *)(param_1 + 0x11)) {
      local_160 = (byte *)0x0;
      local_190 = (char *)0x0;
      uVar1 = (uint)((byte)local_80[0] >> 1);
      local_130 = (char *)((ulong)local_80 | 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar1 = (uint)_local_78;
        local_130 = local_70;
      }
      local_1c0 = 0;
      local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
      local_158 = 0xffffffff;
      local_188 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
      local_280 = 0;
      local_278 = 0xffffffff;
      local_2b0 = 0;
      local_2a8 = 0xffffffff;
      local_2e0 = 0;
      local_2d8 = 0xffffffff;
      FUN_00c2ce10(param_3,"$0  reserved ",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      if (0 < *(int *)(param_1 + 0x11)) {
        pcVar24 = (char *)((long)&local_120 + 5);
        lVar21 = 0;
        do {
          piVar23 = (int *)(param_1[0x12] + lVar21 * 8 + 4);
          iVar6 = *(int *)(param_1[0x12] + lVar21 * 8);
          local_130 = pcVar24;
          if (*piVar23 == iVar6 + 1) {
            local_120 = local_120 & 0xffffffffffffff;
            if (iVar6 < 0) {
              if (iVar6 < -9) {
                iVar6 = iVar6 + 10;
                cVar2 = ((char)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (char)(iVar6 >> 0x1f))
                        * '\n' - (char)iVar6;
                iVar6 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
                pcVar12 = pcVar24;
                iVar6 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) + 1;
                do {
                  local_130 = pcVar12 + -1;
                  *pcVar12 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
                  bVar3 = 9 < iVar6;
                  pcVar12 = local_130;
                  iVar6 = iVar6 / 10;
                } while (bVar3);
              }
              else {
                cVar2 = -(char)iVar6;
              }
              local_120 = (ulong)CONCAT16(cVar2 + '0',(undefined6)local_120);
              *local_130 = '-';
            }
            else {
              local_130 = (char *)((long)&local_120 + 7);
              do {
                local_130 = local_130 + -1;
                *local_130 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
                bVar3 = 9 < iVar6;
                iVar6 = iVar6 / 10;
              } while (bVar3);
            }
            sVar9 = strlen(local_130);
            local_160 = (byte *)0x0;
            local_128 = (char *)CONCAT44(local_128._4_4_,(int)sVar9);
            local_158 = 0xffffffff;
            pcVar12 = "$0, ";
          }
          else {
            local_120 = local_120 & 0xffffffffffffff;
            if (iVar6 < 0) {
              if (iVar6 < -9) {
                iVar6 = iVar6 + 10;
                cVar2 = ((char)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (char)(iVar6 >> 0x1f))
                        * '\n' - (char)iVar6;
                iVar6 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
                pcVar12 = pcVar24;
                iVar6 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) + 1;
                do {
                  local_130 = pcVar12 + -1;
                  *pcVar12 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
                  bVar3 = 9 < iVar6;
                  pcVar12 = local_130;
                  iVar6 = iVar6 / 10;
                } while (bVar3);
              }
              else {
                cVar2 = -(char)iVar6;
              }
              local_120 = (ulong)CONCAT16(cVar2 + '0',(undefined6)local_120);
              *local_130 = '-';
            }
            else {
              local_130 = (char *)((long)&local_120 + 7);
              do {
                local_130 = local_130 + -1;
                *local_130 = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
                bVar3 = 9 < iVar6;
                iVar6 = iVar6 / 10;
              } while (bVar3);
            }
            sVar9 = strlen(local_130);
            local_128 = (char *)CONCAT44(local_128._4_4_,(int)sVar9);
            iVar6 = *piVar23;
            local_14b[2] = 0;
            if (iVar6 < 1) {
              if (iVar6 < -8) {
                iVar6 = iVar6 + 9;
                cVar2 = ((char)((ulong)((long)iVar6 * 0x66666667) >> 0x22) - (char)(iVar6 >> 0x1f))
                        * '\n' - (char)iVar6;
                iVar6 = (int)((ulong)((long)iVar6 * -0x66666667) >> 0x20);
                pbVar13 = local_14b;
                iVar6 = ((iVar6 >> 2) - (iVar6 >> 0x1f)) + 1;
                do {
                  local_160 = pbVar13 + -1;
                  *pbVar13 = (char)iVar6 + (char)(iVar6 / 10) * -10 + 0x30;
                  bVar3 = 9 < iVar6;
                  pbVar13 = local_160;
                  iVar6 = iVar6 / 10;
                } while (bVar3);
              }
              else {
                cVar2 = -(char)(iVar6 + -1);
                local_160 = local_14b;
              }
              local_14b[1] = cVar2 + '0';
              *local_160 = 0x2d;
            }
            else {
              local_160 = local_14b + 2;
              iVar6 = iVar6 + -1;
              do {
                local_160 = local_160 + -1;
                *local_160 = (char)iVar6 + (char)(iVar6 / 10) * -10 + 0x30;
                bVar3 = 9 < iVar6;
                iVar6 = iVar6 / 10;
              } while (bVar3);
            }
            sVar9 = strlen((char *)local_160);
            local_158 = (uint)sVar9;
            pcVar12 = "$0 to $1, ";
          }
          local_188 = 0xffffffff;
          local_190 = (char *)0x0;
          local_1c0 = 0;
          local_1b8 = 0xffffffff;
          local_1f0 = 0;
          local_1e8 = 0xffffffff;
          local_220 = 0;
          local_218 = 0xffffffff;
          local_250 = 0;
          local_248 = 0xffffffff;
          local_280 = 0;
          local_278 = 0xffffffff;
          local_2b0 = 0;
          local_2a8 = 0xffffffff;
          local_2e0 = 0;
          local_2d8 = 0xffffffff;
          FUN_00c2ce10(param_3,pcVar12,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                       &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(param_1 + 0x11));
      }
      if ((*param_3 & 1) == 0) {
        uVar7 = (ulong)(*param_3 >> 1);
      }
      else {
        uVar7 = *(ulong *)(param_3 + 8);
      }
      std::string::replace((ulong)param_3,uVar7 - 2,(char *)0x2);
    }
    if (*(int *)(param_1 + 0x13) < 1) {
      pcVar24 = (char *)((ulong)local_80 | 1);
    }
    else {
      pcVar24 = (char *)((ulong)local_80 | 1);
      local_160 = (byte *)0x0;
      local_190 = (char *)0x0;
      local_130 = pcVar24;
      uVar1 = (uint)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        local_130 = local_70;
        uVar1 = local_78;
      }
      local_1c0 = 0;
      local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
      local_158 = 0xffffffff;
      local_188 = 0xffffffff;
      local_1b8 = 0xffffffff;
      local_1f0 = 0;
      local_1e8 = 0xffffffff;
      local_220 = 0;
      local_218 = 0xffffffff;
      local_250 = 0;
      local_248 = 0xffffffff;
      local_280 = 0;
      local_278 = 0xffffffff;
      local_2b0 = 0;
      local_2a8 = 0xffffffff;
      local_2e0 = 0;
      local_2d8 = 0xffffffff;
      FUN_00c2ce10(param_3,"$0  reserved ",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                   &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
      if (0 < *(int *)(param_1 + 0x13)) {
        lVar21 = 0;
        do {
          pbVar16 = *(byte **)(param_1[0x14] + lVar21 * 8);
          local_310[0] = 0;
          local_310[1] = 0;
          local_300 = (char *)0x0;
          pbVar13 = *(byte **)(pbVar16 + 0x10);
          bVar3 = (*pbVar16 & 1) == 0;
          if (bVar3) {
            pbVar13 = pbVar16 + 1;
          }
          uVar7 = (ulong)(*pbVar16 >> 1);
          if (!bVar3) {
            uVar7 = *(ulong *)(pbVar16 + 8);
          }
          FUN_00c0fad0(pbVar13,uVar7,local_310);
          local_130 = (char *)((ulong)local_310 | 1);
          uVar1 = (uint)((byte)local_310[0] >> 1);
          if ((local_310[0] & 1) != 0) {
            local_130 = local_300;
            uVar1 = (uint)local_310[1];
          }
          local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
          local_160 = (byte *)0x0;
          local_158 = 0xffffffff;
          local_190 = (char *)0x0;
          local_188 = 0xffffffff;
          local_1c0 = 0;
          local_1b8 = 0xffffffff;
          local_1f0 = 0;
          local_1e8 = 0xffffffff;
          local_220 = 0;
          local_218 = 0xffffffff;
          local_250 = 0;
          local_248 = 0xffffffff;
          local_280 = 0;
          local_278 = 0xffffffff;
          local_2b0 = 0;
          local_2a8 = 0xffffffff;
          local_2e0 = 0;
          local_2d8 = 0xffffffff;
          FUN_00c2ce10(param_3,"\"$0\", ",&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                       &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
          pcVar12 = local_300;
          if (((local_310[0] & 1) != 0) && (local_300 != (char *)0x0)) {
            plVar25 = *(long **)(lVar11 + 0x30);
            if (plVar25 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar25 = DAT_04859430;
              *(long **)(lVar11 + 0x30) = DAT_04859430;
            }
            uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
            if (((uVar7 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
              (**(code **)(*plVar25 + 0x18))(plVar25,pcVar12,0,8);
            }
            else {
              FUN_00c48fe8(plVar25,pcVar12,0,8);
            }
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(param_1 + 0x13));
      }
      if ((*param_3 & 1) == 0) {
        uVar7 = (ulong)(*param_3 >> 1);
      }
      else {
        uVar7 = *(ulong *)(param_3 + 8);
      }
      std::string::replace((ulong)param_3,uVar7 - 2,(char *)0x2);
    }
    uVar1 = (uint)((byte)local_80[0] >> 1);
    local_130 = pcVar24;
    if (((byte)local_80[0] & 1) != 0) {
      uVar1 = local_78;
      local_130 = local_70;
    }
    local_158 = 0xffffffff;
    local_188 = 0xffffffff;
    local_128 = (char *)CONCAT44(local_128._4_4_,uVar1);
    local_1b8 = 0xffffffff;
    local_1e8 = 0xffffffff;
    local_218 = 0xffffffff;
    local_248 = 0xffffffff;
    local_278 = 0xffffffff;
    local_2a8 = 0xffffffff;
    local_2d8 = 0xffffffff;
    local_160 = (byte *)0x0;
    local_190 = (char *)0x0;
    local_1c0 = 0;
    local_1f0 = 0;
    local_220 = 0;
    local_250 = 0;
    local_280 = 0;
    local_2b0 = 0;
    local_2e0 = 0;
    FUN_00c2ce10(param_3,&DAT_03c207eb,&local_130,&local_160,&local_190,&local_1c0,&local_1f0,
                 &local_220,&local_250,&local_280,&local_2b0,&local_2e0);
    if (local_100[0] != 0) {
      uVar7 = (ulong)(local_d0[0] >> 1);
      if ((local_d0[0] & 1) != 0) {
        uVar7 = local_c8;
      }
      if (uVar7 != 0) {
        FUN_00ba926c(&local_130,local_100,local_d0);
        uVar7 = (ulong)&local_130 | 1;
        if (((ulong)local_130 & 1) != 0) {
          uVar7 = local_120;
        }
        std::string::append((char *)param_3,uVar7);
        uVar7 = local_120;
        if ((((ulong)local_130 & 1) != 0) && (local_120 != 0)) {
          plVar25 = *(long **)(lVar11 + 0x30);
          if (plVar25 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar25 = DAT_04859430;
            *(long **)(lVar11 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar10 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,uVar7,0,8);
          }
          else {
            FUN_00c48fe8(plVar25,uVar7,0,8);
          }
        }
      }
    }
    FUN_00bae454(local_2f0);
    if ((((byte)local_98[0] & 1) != 0) && (local_88 != 0)) {
      plVar25 = *(long **)(lVar11 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_88,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_88,0,8);
      }
    }
    FUN_01f6e5a0(auStack_b8);
    if (((local_d0[0] & 1) != 0) && (local_c0 != 0)) {
      plVar25 = *(long **)(lVar11 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_c0,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_c0,0,8);
      }
    }
    if (((local_e8[0] & 1) != 0) && (local_d8 != 0)) {
      plVar25 = *(long **)(lVar11 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_d8,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_d8,0,8);
      }
    }
    if ((((byte)local_80[0] & 1) != 0) && (local_70 != (char *)0x0)) {
      plVar25 = *(long **)(lVar11 + 0x30);
      if (plVar25 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar25 = DAT_04859430;
        *(long **)(lVar11 + 0x30) = DAT_04859430;
      }
      uVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      if (((uVar7 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar25 + 0x18))(plVar25,local_70,0,8);
      }
      else {
        FUN_00c48fe8(plVar25,local_70,0,8);
      }
    }
  }
  return;
}


