/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f6ca04; name: FUN_02f6ca04
 */


void FUN_02f6ca04(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 *param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  int **ppiVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint **ppuVar19;
  undefined8 *puVar20;
  int *piVar21;
  uint *puVar22;
  undefined8 *local_220;
  ulong local_218;
  ulong local_208;
  int *local_1f8;
  int *local_1f0;
  ulong *local_1e8;
  ulong *local_1e0;
  uint local_1d4;
  long local_1d0;
  ulong local_1c8;
  uint *local_1c0;
  ulong *local_1b8;
  uint local_1b0;
  uint local_1ac;
  long local_1a8;
  undefined8 local_1a0;
  ulong *local_198;
  undefined8 local_190;
  ulong *local_188;
  int local_180;
  ulong local_17c;
  undefined8 local_174;
  uint *local_168;
  ulong *local_160;
  uint local_158;
  uint local_154;
  long local_150;
  undefined8 local_148;
  ulong *local_140;
  ulong *local_138;
  ulong *local_130;
  int local_128;
  ulong local_124;
  ulong local_11c;
  uint *local_110;
  short local_108;
  undefined2 local_106;
  uint local_104;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  uint local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  uint local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98 [2];
  undefined8 *local_88;
  uint *local_80;
  uint local_78;
  int local_74;
  ushort local_70 [8];
  
  uVar15 = (ulong)local_190;
  puVar6 = PTR_PTR_047d1a50;
  lVar9 = *(long *)(param_1 + 8);
  local_a8 = 0;
  local_74 = 0;
  local_88 = *(undefined8 **)(param_1 + 0x4e0);
  local_80 = (uint *)0x0;
  local_a0 = 0x8000000000000000;
  local_98[0] = *param_2;
  puVar12 = (uint *)*param_5;
  local_148 = (ulong *)((long)puVar12 + (ulong)*(ushort *)(param_5 + 1) + 0x20);
  local_168 = puVar12;
  uVar13 = *(int *)((long)param_5 + 0xc) - (uint)*(ushort *)((long)param_5 + 10);
  local_158 = uVar13;
  uVar16 = (uint)*(ushort *)((long)param_5 + 10);
  do {
    local_160 = local_148 + 2;
    local_154 = uVar16 - 1;
    if (uVar16 - 1 == 0 || (int)uVar16 < 1) {
      if (uVar13 == 0) {
        puVar12 = (uint *)0x0;
        local_168 = (uint *)0x0;
        local_160 = (ulong *)0x0;
      }
      else {
        puVar12 = *(uint **)(puVar12 + 2);
        local_168 = puVar12;
        if (puVar12 != (uint *)0x0) {
          uVar16 = *puVar12 & 0xffff;
          if ((int)uVar13 <= (int)(*puVar12 & 0xffff)) {
            uVar16 = uVar13;
          }
          if (0 < (int)uVar16) {
            uVar13 = uVar13 - uVar16;
            local_158 = uVar13;
            local_154 = uVar16;
            local_160 = (ulong *)(puVar12 + 8);
            goto LAB_02f6cb00;
          }
        }
        local_160 = (ulong *)0x0;
      }
    }
LAB_02f6cb00:
    if ((uint)local_148[1] != 0) break;
    local_148 = local_160;
    uVar16 = local_154;
  } while( true );
  local_138 = (ulong *)CONCAT44((int)((ulong)local_138 >> 0x20),(uint)local_148[1] - 1);
  local_140 = local_160;
  local_1f8 = &local_180;
  local_1f0 = &local_128;
  local_1d4 = *(uint *)((long)local_148 + 4);
  local_190 = (ulong *)((ulong)local_190 & 0xffffffff00000000);
  local_1a0 = (ulong *)0x0;
  local_198 = (ulong *)0x0;
  local_220 = (undefined8 *)param_5[2];
  if (local_220 == (undefined8 *)0x0) {
    puVar10 = (ulong *)0x0;
    local_220 = param_5;
    goto LAB_02f6cc3c;
  }
  local_190._4_4_ = SUB84(uVar15,4);
  if (*(int *)((long)local_220 + 0xc) == 0) {
LAB_02f6cc0c:
    local_1b8 = (ulong *)0x0;
    local_1a0 = (ulong *)0x0;
  }
  else {
    puVar12 = (uint *)*local_220;
    local_1a0 = (ulong *)((long)puVar12 + (ulong)*(ushort *)(local_220 + 1) + 0x20);
    local_1c0 = puVar12;
    uVar3 = *(ushort *)((long)local_220 + 10);
    uVar13 = *(int *)((long)local_220 + 0xc) - (uint)uVar3;
    local_1b0 = uVar13;
    local_1ac = (uint)uVar3;
    if (uVar3 == 0) goto LAB_02f6cc0c;
    puVar10 = local_1a0;
    uVar16 = (uint)uVar3;
    do {
      local_1b8 = puVar10 + 2;
      local_1ac = uVar16 - 1;
      if (uVar16 - 1 == 0 || (int)uVar16 < 1) {
        if (uVar13 == 0) {
          puVar12 = (uint *)0x0;
          local_1c0 = (uint *)0x0;
          local_1b8 = (ulong *)0x0;
        }
        else {
          puVar12 = *(uint **)(puVar12 + 2);
          local_1c0 = puVar12;
          if (puVar12 != (uint *)0x0) {
            uVar16 = *puVar12 & 0xffff;
            if ((int)uVar13 <= (int)(*puVar12 & 0xffff)) {
              uVar16 = uVar13;
            }
            if (0 < (int)uVar16) {
              uVar13 = uVar13 - uVar16;
              local_1b0 = uVar13;
              local_1ac = uVar16;
              local_1b8 = (ulong *)(puVar12 + 8);
              goto LAB_02f6cbf4;
            }
          }
          local_1b8 = (ulong *)0x0;
        }
      }
LAB_02f6cbf4:
      if ((uint)puVar10[1] != 0) {
        local_190 = (ulong *)CONCAT44(local_190._4_4_,(uint)puVar10[1] - 1);
        local_198 = local_1b8;
        local_1a0 = puVar10;
        goto LAB_02f6cc3c;
      }
      local_1a0 = local_1b8;
      puVar10 = local_1b8;
      uVar16 = local_1ac;
    } while (local_1b8 != (ulong *)0x0);
  }
  puVar10 = (ulong *)0x0;
  local_190 = (ulong *)((ulong)local_190._4_4_ << 0x20);
  local_198 = (ulong *)0x0;
  local_1b8 = local_1a0;
LAB_02f6cc3c:
  local_1c8 = 0;
  local_1e8 = (ulong *)0x0;
  local_1e0 = (ulong *)0x0;
  local_1d0 = param_4;
  if (puVar10 == (ulong *)0x0) goto LAB_02f6cc64;
  do {
    bVar7 = false;
LAB_02f6cd6c:
    lVar14 = local_1d0;
    if ((local_1e0 != local_148) && (local_148 != (ulong *)0x0)) {
      local_208 = *local_148;
      local_1e0 = local_148;
    }
    puVar18 = &local_148;
    if (local_1e8 == puVar10) {
LAB_02f6cdb0:
      bVar7 = puVar10 != (ulong *)0x0;
      if ((puVar10 == (ulong *)0x0) || (local_148 == (ulong *)0x0)) {
        if ((puVar10 == (ulong *)0x0) || (local_148 != (ulong *)0x0)) goto LAB_02f6ce04;
        ppuVar19 = &local_1c0;
        puVar18 = &local_1a0;
      }
      else {
        ppuVar19 = &local_168;
        if ((local_218 & 0xffffff00ffffff) <= (local_208 & 0xffffff00ffffff)) {
          puVar18 = &local_1a0;
          ppuVar19 = &local_1c0;
        }
      }
    }
    else {
      if (!bVar7) {
        local_218 = *puVar10;
        local_1e8 = puVar10;
        goto LAB_02f6cdb0;
      }
      bVar7 = false;
LAB_02f6ce04:
      if ((local_148 == (ulong *)0x0) || (bVar7)) {
        if ((int)local_a0 != 0) {
          FUN_02f6c5c0(param_1,param_2,local_1d4,&local_a8,local_98,param_6,local_1c8 & 0xffff);
        }
        uVar15 = local_a0;
        uVar11 = (ulong)local_a0._4_4_;
        local_a0 = (ulong)local_a0._4_4_ << 0x20;
        if ((-1 < (long)uVar15) && (local_a8 != 0)) {
          plVar8 = (long *)(puVar6 + 0x20);
          (**(code **)(*plVar8 + 0x20))(plVar8,local_a8,uVar11 << 4);
        }
        local_130 = (ulong *)0x0;
        iVar2 = *(int *)((long)param_5 + 0xc);
        if (iVar2 == 0) {
          local_160 = (ulong *)0x0;
        }
        else {
          local_140 = *(ulong **)(param_1 + 0x4e0);
          *(undefined1 *)(lVar14 + 0xc) = 1;
          local_168 = (uint *)*param_5;
          local_160 = (ulong *)((long)local_168 + (ulong)*(ushort *)(param_5 + 1) + 0x20);
          uVar3 = *(ushort *)((long)param_5 + 10);
          local_158 = iVar2 - (uint)uVar3;
          local_154 = (uint)uVar3;
          if (uVar3 == 0) {
            local_160 = (ulong *)0x0;
          }
          uVar13 = 0;
          if (local_168 != (uint *)0x0) {
            uVar13 = (uint)uVar3;
          }
          local_150 = lVar14;
          local_148 = (ulong *)CONCAT44(local_148._4_4_,uVar13);
        }
        local_138 = local_160;
        puVar12 = local_168;
        uVar13 = local_154;
        puVar10 = local_140;
        goto joined_r0x02f6d194;
      }
      ppuVar19 = &local_168;
    }
    puVar12 = (uint *)*puVar18;
    uVar13 = puVar12[1];
    if (uVar13 == local_1d4) {
      uVar13 = local_1d4;
      uVar16 = local_1d4;
    }
    else if ((int)local_a0 == 0) {
      uVar16 = uVar13;
    }
    else {
      FUN_02f6c5c0(param_1,param_2,local_1d4,&local_a8,local_98,param_6,local_1c8 & 0xffff);
      local_a0 = local_a0 & 0xffffffff00000000;
      local_1c8 = 0;
      uVar16 = puVar12[1];
    }
    local_f8 = *(long *)(lVar9 + 0x38);
    local_d0 = local_f8 + (ulong)(uVar16 & 0xffffff) * 0xc0;
    lVar14 = *(long *)(lVar9 + 0x150);
    local_c8 = lVar14 + (ulong)*(uint *)(local_d0 + 0x80) * 0x80;
    local_f8 = local_f8 + ((ulong)*puVar12 & 0xffffff) * 0xc0;
    local_f0 = lVar14 + (ulong)*(uint *)(local_f8 + 0x80) * 0x80;
    uVar3 = (ushort)puVar12[3];
    if (((uVar3 & 0x300) != 0) && ((uVar3 & 0x90) == 0)) {
      local_110 = *ppuVar19;
      local_104 = puVar12[2];
      local_108 = ((short)*(undefined4 *)(ppuVar19 + 1) - (short)local_110) + -0x20;
      uVar16 = local_104;
      if ((int)*(uint *)((long)ppuVar19 + 0x14) <= (int)local_104) {
        uVar16 = *(uint *)((long)ppuVar19 + 0x14);
      }
      local_106 = (undefined2)uVar16;
      if ((uVar3 >> 8 & 1) == 0) {
        if ((uVar3 >> 9 & 1) != 0) {
          lVar14 = 0x13a8;
          goto LAB_02f6cf20;
        }
        plVar8 = (long *)0x0;
      }
      else {
        lVar14 = 0x13a0;
LAB_02f6cf20:
        plVar8 = *(long **)(*(long *)(param_1 + 0x40) + lVar14);
      }
      local_70[0] = uVar3;
      (**(code **)(*plVar8 + 0x10))(plVar8,param_1,param_2,local_70,&local_d0,&local_f8,&local_110);
    }
    local_1c8 = (ulong)((uint)uVar3 | (uint)local_1c8);
    uVar16 = puVar12[2];
    local_1d4 = uVar13;
    if (0 < (int)uVar16) {
      do {
        puVar22 = ppuVar19[5];
        if ((*(char *)((long)puVar12 + 0xe) == '\0') &&
           ((((puVar12[3] & 0x90) == 0 || ((byte)((byte)puVar22[0x24] | 2) == 3)) ||
            ((*(byte *)(*(long *)(puVar22 + 0x26) + 0x2c) >> 6 & 1) != 0)))) {
          local_c0 = *(undefined8 *)(puVar22 + 0x2a);
          local_b8 = puVar22[0x28];
          local_b0 = *(long *)(local_d0 + 0x78);
          if (*(char *)(local_b0 + 0x18) == '\x15') {
            plVar8 = (long *)(local_b0 + ((ulong)(local_b8 >> 0x1a) & 0x38) + 0x48);
            lVar14 = *plVar8;
            local_b0 = 0;
            if (lVar14 != 0) {
              local_b0 = lVar14 + (long)plVar8;
            }
          }
          local_e8 = *(undefined8 *)(puVar22 + 0x2c);
          local_e0 = puVar22[0x29];
          local_d8 = *(long *)(local_f8 + 0x78);
          if (*(char *)(local_d8 + 0x18) == '\x15') {
            plVar8 = (long *)(local_d8 + ((ulong)(local_e0 >> 0x1a) & 0x38) + 0x48);
            lVar14 = *plVar8;
            local_d8 = 0;
            if (lVar14 != 0) {
              local_d8 = lVar14 + (long)plVar8;
            }
          }
          FUN_02f6c2b0(param_1,param_2,puVar22,&local_d0,&local_f8,0,local_98,param_6);
        }
        else {
          lVar14 = (long)(int)local_a0;
          if ((int)(local_a0._4_4_ & 0x7fffffff) <= (int)local_a0) {
            FUN_02f25e2c(&local_a8,puVar6 + 0x20,lVar14 + 1);
          }
          puVar18 = (undefined8 *)(local_a8 + (long)(int)local_a0 * 0x10);
          local_a0 = CONCAT44(local_a0._4_4_,(int)(lVar14 + 1));
          *puVar18 = puVar12;
          puVar18[1] = puVar22;
        }
        FUN_02f25c60(ppuVar19);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    puVar10 = local_1a0;
  } while (local_1a0 != (ulong *)0x0);
LAB_02f6cc64:
  puVar18 = local_220 + 2;
  puVar17 = (undefined8 *)*puVar18;
  if (puVar17 != (undefined8 *)0x0) {
    do {
      if (*(int *)((long)puVar17 + 0xc) == 0) {
LAB_02f6cd24:
        local_1b8 = (ulong *)0x0;
        local_1a0 = (ulong *)0x0;
      }
      else {
        puVar12 = (uint *)*puVar17;
        local_1a0 = (ulong *)((long)puVar12 + (ulong)*(ushort *)(puVar17 + 1) + 0x20);
        local_1c0 = puVar12;
        uVar3 = *(ushort *)((long)puVar17 + 10);
        uVar13 = *(int *)((long)puVar17 + 0xc) - (uint)uVar3;
        local_1b0 = uVar13;
        local_1ac = (uint)uVar3;
        if (uVar3 == 0) goto LAB_02f6cd24;
        puVar10 = local_1a0;
        uVar16 = (uint)uVar3;
        do {
          local_1b8 = puVar10 + 2;
          local_1ac = uVar16 - 1;
          if (uVar16 - 1 == 0 || (int)uVar16 < 1) {
            if (uVar13 == 0) {
              puVar12 = (uint *)0x0;
              local_1c0 = (uint *)0x0;
              local_1b8 = (ulong *)0x0;
            }
            else {
              puVar12 = *(uint **)(puVar12 + 2);
              local_1c0 = puVar12;
              if (puVar12 != (uint *)0x0) {
                uVar16 = *puVar12 & 0xffff;
                if ((int)uVar13 <= (int)(*puVar12 & 0xffff)) {
                  uVar16 = uVar13;
                }
                if (0 < (int)uVar16) {
                  uVar13 = uVar13 - uVar16;
                  local_1b0 = uVar13;
                  local_1ac = uVar16;
                  local_1b8 = (ulong *)(puVar12 + 8);
                  goto LAB_02f6cd0c;
                }
              }
              local_1b8 = (ulong *)0x0;
            }
          }
LAB_02f6cd0c:
          if ((uint)puVar10[1] != 0) {
            local_190 = (ulong *)CONCAT44(local_190._4_4_,(uint)puVar10[1] - 1);
            local_198 = local_1b8;
            local_220 = (undefined8 *)*puVar18;
            bVar7 = false;
            local_1a0 = puVar10;
            goto LAB_02f6cd6c;
          }
          local_1a0 = local_1b8;
          puVar10 = local_1b8;
          uVar16 = local_1ac;
        } while (local_1b8 != (ulong *)0x0);
      }
      local_190 = (ulong *)((ulong)local_190._4_4_ << 0x20);
      local_198 = (ulong *)0x0;
      local_220 = (undefined8 *)*puVar18;
      puVar18 = local_220 + 2;
      puVar17 = (undefined8 *)*puVar18;
    } while (puVar17 != (undefined8 *)0x0);
    local_1b8 = local_1a0;
  }
  puVar10 = (ulong *)0x0;
  bVar7 = true;
  goto LAB_02f6cd6c;
joined_r0x02f6d194:
  local_168 = puVar12;
  local_160 = local_138;
  local_154 = uVar13;
  local_140 = puVar10;
  if (local_138 == (ulong *)0x0) goto LAB_02f6d2ec;
  local_128 = (uint)local_138[1] - 1;
  local_124 = *local_138;
  local_11c = local_138[1];
  local_154 = uVar13 - 1;
  if ((int)uVar13 < 2) {
    uVar13 = (uint)local_148;
    if (local_158 == 0) {
      local_168 = (uint *)0x0;
      local_160 = (ulong *)0x0;
    }
    else {
      local_168 = *(uint **)(puVar12 + 2);
      if (local_168 != (uint *)0x0) {
        uVar16 = *local_168 & 0xffff;
        if ((int)local_158 <= (int)(*local_168 & 0xffff)) {
          uVar16 = local_158;
        }
        if (0 < (int)uVar16) {
          local_158 = local_158 - uVar16;
          local_154 = uVar16;
          local_160 = (ulong *)(local_168 + 8);
          Hint_Prefetch(*(long *)(local_168 + 2),0,0,0);
          Hint_Prefetch(*(long *)(local_168 + 2) + 0x40,0,0,0);
          Hint_Prefetch(local_168 + 0x20,0,0,0);
          Hint_Prefetch(local_168 + 0x30,0,0,0);
          goto LAB_02f6d244;
        }
      }
      local_160 = (ulong *)0x0;
    }
LAB_02f6d244:
    local_148._4_4_ = (undefined4)((ulong)local_148 >> 0x20);
    local_148 = (ulong *)CONCAT44(local_148._4_4_,local_154);
    if (uVar13 == (*puVar12 & 0xffff)) {
      *(undefined8 *)(*(long *)(local_150 + 0x10) + (long)(int)puVar12[1] * 8) = 0;
      *(undefined1 *)(local_150 + 0xc) = 1;
      uVar13 = (uint)puVar10[0xb];
      uVar15 = puVar10[1];
      *(uint **)(uVar15 + (long)(int)uVar13 * 8) = puVar12;
      *(uint *)(puVar10 + 0xb) = uVar13 + 1;
      if ((int)*(uint *)((long)puVar10 + 0x5c) <= (int)(uVar13 + 1)) {
        (**(code **)(*(long *)*puVar10 + 0x28))
                  ((long *)*puVar10,uVar15 + (long)(int)(uVar13 - 5) * 8,6);
        *(uint *)(puVar10 + 0xb) = uVar13 - 5;
      }
    }
    else {
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
        if (bVar7) {
          *puVar12 = *puVar12 - uVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    local_160 = local_138 + 2;
  }
  if ((int)local_11c != 0) {
    if (local_138 != (ulong *)0x0) {
      local_130 = local_160;
      goto LAB_02f6d2f4;
    }
    goto LAB_02f6d2ec;
  }
  local_138 = local_160;
  puVar12 = local_168;
  uVar13 = local_154;
  puVar10 = local_140;
  goto joined_r0x02f6d194;
LAB_02f6d2ec:
  local_128 = 0;
  local_130 = (ulong *)0x0;
LAB_02f6d2f4:
  local_180 = 0;
  local_190 = (ulong *)0x0;
  local_188 = (ulong *)0x0;
  puVar18 = (undefined8 *)param_5[2];
  if (puVar18 == (undefined8 *)0x0) {
    puVar10 = (ulong *)0x0;
  }
  else {
    iVar2 = *(int *)((long)puVar18 + 0xc);
    if (iVar2 == 0) {
      local_1b8 = (ulong *)0x0;
    }
    else {
      local_198 = *(ulong **)(param_1 + 0x4e0);
      *(undefined1 *)(lVar14 + 0xc) = 1;
      local_1c0 = (uint *)*puVar18;
      local_1b8 = (ulong *)((long)local_1c0 + (ulong)*(ushort *)(puVar18 + 1) + 0x20);
      uVar3 = *(ushort *)((long)puVar18 + 10);
      local_1b0 = iVar2 - (uint)uVar3;
      local_1ac = (uint)uVar3;
      if (uVar3 == 0) {
        local_1b8 = (ulong *)0x0;
      }
      uVar13 = 0;
      if (local_1c0 != (uint *)0x0) {
        uVar13 = (uint)uVar3;
      }
      local_1a8 = lVar14;
      local_1a0 = (ulong *)CONCAT44(local_1a0._4_4_,uVar13);
    }
    local_190 = local_1b8;
    puVar12 = local_1c0;
    uVar13 = local_1ac;
    puVar10 = local_198;
    while( true ) {
      local_1c0 = puVar12;
      local_1b8 = local_190;
      local_1ac = uVar13;
      local_198 = puVar10;
      if (local_190 == (ulong *)0x0) break;
      local_180 = (uint)local_190[1] - 1;
      local_17c = *local_190;
      local_174 = local_190[1];
      local_1ac = uVar13 - 1;
      if ((int)uVar13 < 2) {
        uVar13 = (uint)local_1a0;
        if (local_1b0 == 0) {
          local_1c0 = (uint *)0x0;
          local_1b8 = (ulong *)0x0;
        }
        else {
          local_1c0 = *(uint **)(puVar12 + 2);
          if (local_1c0 != (uint *)0x0) {
            uVar16 = *local_1c0 & 0xffff;
            if ((int)local_1b0 <= (int)(*local_1c0 & 0xffff)) {
              uVar16 = local_1b0;
            }
            if (0 < (int)uVar16) {
              local_1b0 = local_1b0 - uVar16;
              local_1ac = uVar16;
              local_1b8 = (ulong *)(local_1c0 + 8);
              Hint_Prefetch(*(long *)(local_1c0 + 2),0,0,0);
              Hint_Prefetch(*(long *)(local_1c0 + 2) + 0x40,0,0,0);
              Hint_Prefetch(local_1c0 + 0x20,0,0,0);
              Hint_Prefetch(local_1c0 + 0x30,0,0,0);
              goto LAB_02f6d420;
            }
          }
          local_1b8 = (ulong *)0x0;
        }
LAB_02f6d420:
        local_1a0._4_4_ = (undefined4)((ulong)local_1a0 >> 0x20);
        local_1a0 = (ulong *)CONCAT44(local_1a0._4_4_,local_1ac);
        if (uVar13 == (*puVar12 & 0xffff)) {
          *(undefined8 *)(*(long *)(local_1a8 + 0x10) + (long)(int)puVar12[1] * 8) = 0;
          *(undefined1 *)(local_1a8 + 0xc) = 1;
          uVar13 = (uint)puVar10[0xb];
          uVar15 = puVar10[1];
          *(uint **)(uVar15 + (long)(int)uVar13 * 8) = puVar12;
          *(uint *)(puVar10 + 0xb) = uVar13 + 1;
          if ((int)*(uint *)((long)puVar10 + 0x5c) <= (int)(uVar13 + 1)) {
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,uVar15 + (long)(int)(uVar13 - 5) * 8,6);
            *(uint *)(puVar10 + 0xb) = uVar13 - 5;
          }
        }
        else {
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
            if (bVar7) {
              *puVar12 = *puVar12 - uVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_1b8 = local_190 + 2;
      }
      if ((int)local_174 != 0) {
        if (local_190 != (ulong *)0x0) {
          local_188 = local_1b8;
          puVar10 = local_190;
          goto LAB_02f6d4d4;
        }
        break;
      }
      local_190 = local_1b8;
      puVar12 = local_1c0;
      uVar13 = local_1ac;
      puVar10 = local_198;
    }
    local_180 = 0;
    local_188 = (ulong *)0x0;
    puVar10 = (ulong *)0x0;
LAB_02f6d4d4:
    param_5 = (undefined8 *)param_5[2];
  }
joined_r0x02f6d4e8:
  do {
    if (puVar10 == (ulong *)0x0) {
      while( true ) {
        puVar18 = local_88;
        puVar20 = param_5 + 2;
        puVar17 = (undefined8 *)*puVar20;
        if (puVar17 == (undefined8 *)0x0) break;
        iVar2 = *(int *)((long)puVar17 + 0xc);
        if (iVar2 == 0) {
          local_1b8 = (ulong *)0x0;
        }
        else {
          local_198 = *(ulong **)(param_1 + 0x4e0);
          *(undefined1 *)(lVar14 + 0xc) = 1;
          local_1c0 = (uint *)*puVar17;
          local_1b8 = (ulong *)((long)local_1c0 + (ulong)*(ushort *)(puVar17 + 1) + 0x20);
          uVar3 = *(ushort *)((long)puVar17 + 10);
          local_1b0 = iVar2 - (uint)uVar3;
          local_1ac = (uint)uVar3;
          if (uVar3 == 0) {
            local_1b8 = (ulong *)0x0;
          }
          uVar13 = 0;
          if (local_1c0 != (uint *)0x0) {
            uVar13 = (uint)uVar3;
          }
          local_1a8 = lVar14;
          local_1a0 = (ulong *)CONCAT44(local_1a0._4_4_,uVar13);
        }
        do {
          puVar10 = local_198;
          uVar13 = local_1ac;
          puVar12 = local_1c0;
          local_190 = local_1b8;
          if (local_1b8 == (ulong *)0x0) goto LAB_02f6d64c;
          local_180 = (uint)local_1b8[1] - 1;
          local_17c = *local_1b8;
          local_174 = local_1b8[1];
          local_1ac = local_1ac - 1;
          if ((int)uVar13 < 2) {
            uVar13 = (uint)local_1a0;
            if (local_1b0 == 0) {
              local_1c0 = (uint *)0x0;
              local_1b8 = (ulong *)0x0;
            }
            else {
              local_1c0 = *(uint **)(local_1c0 + 2);
              if (local_1c0 != (uint *)0x0) {
                uVar16 = *local_1c0 & 0xffff;
                if ((int)local_1b0 <= (int)(*local_1c0 & 0xffff)) {
                  uVar16 = local_1b0;
                }
                if (0 < (int)uVar16) {
                  local_1b0 = local_1b0 - uVar16;
                  local_1ac = uVar16;
                  local_1b8 = (ulong *)(local_1c0 + 8);
                  Hint_Prefetch(*(long *)(local_1c0 + 2),0,0,0);
                  Hint_Prefetch(*(long *)(local_1c0 + 2) + 0x40,0,0,0);
                  Hint_Prefetch(local_1c0 + 0x20,0,0,0);
                  Hint_Prefetch(local_1c0 + 0x30,0,0,0);
                  goto LAB_02f6d768;
                }
              }
              local_1b8 = (ulong *)0x0;
            }
LAB_02f6d768:
            local_1a0 = (ulong *)CONCAT44(local_1a0._4_4_,local_1ac);
            if (uVar13 == (*puVar12 & 0xffff)) {
              *(undefined8 *)(*(long *)(local_1a8 + 0x10) + (long)(int)puVar12[1] * 8) = 0;
              *(undefined1 *)(local_1a8 + 0xc) = 1;
              uVar13 = (uint)local_198[0xb];
              uVar15 = local_198[1];
              *(uint **)(uVar15 + (long)(int)uVar13 * 8) = puVar12;
              *(uint *)(local_198 + 0xb) = uVar13 + 1;
              if ((int)*(uint *)((long)local_198 + 0x5c) <= (int)(uVar13 + 1)) {
                (**(code **)(*(long *)*local_198 + 0x28))
                          ((long *)*local_198,uVar15 + (long)(int)(uVar13 - 5) * 8,6);
                *(uint *)(puVar10 + 0xb) = uVar13 - 5;
              }
            }
            else {
              do {
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar12,0x10);
                if (bVar7) {
                  *puVar12 = *puVar12 - uVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          else {
            local_1b8 = local_1b8 + 2;
          }
        } while ((int)local_174 == 0);
        if (local_190 != (ulong *)0x0) {
          local_188 = local_1b8;
          param_5 = (undefined8 *)*puVar20;
          goto LAB_02f6d4fc;
        }
LAB_02f6d64c:
        local_180 = 0;
        local_188 = (ulong *)0x0;
        param_5 = (undefined8 *)*puVar20;
      }
      if (local_138 == (ulong *)0x0) {
        if ((local_80 != (uint *)0x0) && (local_98[0] != 0)) {
          if (local_78 == (*local_80 & 0xffff)) {
            *(undefined8 *)(*(long *)(local_98[0] + 0x10) + (long)(int)local_80[1] * 8) = 0;
            *(undefined1 *)(local_98[0] + 0xc) = 1;
            iVar2 = *(int *)(local_88 + 0xb);
            lVar9 = local_88[1];
            *(uint **)(lVar9 + (long)iVar2 * 8) = local_80;
            *(int *)(local_88 + 0xb) = iVar2 + 1;
            if (*(int *)((long)local_88 + 0x5c) <= iVar2 + 1) {
              (**(code **)(*(long *)*local_88 + 0x28))
                        ((long *)*local_88,lVar9 + (long)(iVar2 + -5) * 8,6);
              *(int *)(puVar18 + 0xb) = iVar2 + -5;
            }
          }
          else {
            do {
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(local_80,0x10);
              if (bVar7) {
                *local_80 = *local_80 - local_78;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        if ((local_74 != 0) && (*(char *)(local_98[0] + 0xc) == '\0')) {
          piVar21 = (int *)(local_98[0] + 8);
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar7) {
              *piVar21 = *piVar21 - local_74;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        return;
      }
      ppuVar19 = &local_168;
      piVar21 = local_1f0;
    }
    else {
LAB_02f6d4fc:
      if (local_138 == (ulong *)0x0) {
        ppuVar19 = &local_1c0;
        piVar21 = local_1f8;
      }
      else {
        ppiVar5 = &local_1f0;
        ppuVar19 = &local_168;
        if ((local_17c & 0xffffff00ffffff) <= (local_124 & 0xffffff00ffffff)) {
          ppiVar5 = &local_1f8;
          ppuVar19 = &local_1c0;
        }
        piVar21 = *ppiVar5;
      }
    }
    if (*piVar21 != 0) {
      *piVar21 = *piVar21 + -1;
      iVar2 = *(int *)((long)ppuVar19 + 0x14);
      if (*(char *)((long)ppuVar19 + 0x52) == '\0') {
        *(int *)((long)ppuVar19 + 0x14) = iVar2 + -1;
        if (1 < iVar2) {
          puVar12 = ppuVar19[1] + 0x40;
          goto LAB_02f6d5a4;
        }
LAB_02f6d5ac:
        puVar12 = (uint *)FUN_031c37e8(ppuVar19);
      }
      else {
        *(int *)((long)ppuVar19 + 0x14) = iVar2 + -1;
        if (iVar2 < 2) goto LAB_02f6d5ac;
        puVar12 = ppuVar19[1] + 4;
LAB_02f6d5a4:
        ppuVar19[1] = puVar12;
      }
      ppuVar19[7] = puVar12;
      lVar14 = local_1d0;
      puVar10 = local_190;
      goto joined_r0x02f6d4e8;
    }
    iVar2 = *(int *)((long)ppuVar19 + 0x14);
    *(int *)((long)ppuVar19 + 0x14) = iVar2 + -1;
    if (*(char *)((long)ppuVar19 + 0x52) == '\0') {
      if (1 < iVar2) {
        puVar12 = ppuVar19[1] + 0x40;
        goto LAB_02f6d5c4;
      }
LAB_02f6d5cc:
      FUN_031c37e8(ppuVar19);
    }
    else {
      if (iVar2 < 2) goto LAB_02f6d5cc;
      puVar12 = ppuVar19[1] + 4;
LAB_02f6d5c4:
      ppuVar19[1] = puVar12;
    }
    puVar12 = ppuVar19[1];
    do {
      ppuVar19[6] = puVar12;
      if (puVar12 == (uint *)0x0) {
        *piVar21 = 0;
        ppuVar19[7] = (uint *)0x0;
        lVar14 = local_1d0;
        puVar10 = local_190;
        break;
      }
      uVar1 = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)((long)ppuVar19 + 0x44) = *(undefined8 *)puVar12;
      *(undefined8 *)((long)ppuVar19 + 0x4c) = uVar1;
      *piVar21 = puVar12[2] - 1;
      iVar2 = *(int *)((long)ppuVar19 + 0x14);
      *(int *)((long)ppuVar19 + 0x14) = iVar2 + -1;
      if (iVar2 < 2) {
        FUN_031c37e8(ppuVar19);
        puVar12 = ppuVar19[1];
      }
      else {
        puVar12 = puVar12 + 4;
        ppuVar19[1] = puVar12;
      }
      ppuVar19[7] = puVar12;
      lVar14 = local_1d0;
      puVar10 = local_190;
    } while (*(int *)((long)ppuVar19 + 0x4c) == 0);
  } while( true );
}


