/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00110cb0; name: FUN_00110cb0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00110cb0(long param_1,uint *param_2,int param_3,int param_4,int param_5,undefined8 param_6,
            long param_7,uint param_8,int param_9)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  undefined2 *puVar15;
  uint *puVar16;
  long *plVar17;
  byte bVar18;
  uint uVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined1 *puVar29;
  long lVar30;
  ulong uVar31;
  undefined1 auStack_210 [8];
  undefined1 *local_208;
  undefined1 *local_200;
  long *local_1f8;
  long local_1f0;
  int local_1e4;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  uint local_1c0;
  uint local_1bc;
  long local_1b8;
  uint local_1b0;
  uint local_1ac;
  ulong local_1a8;
  long local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  uint local_188;
  int local_184;
  ulong local_180;
  undefined1 *local_178;
  ulong local_170;
  undefined1 *local_168;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [16];
  long local_120 [2];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  uint local_90 [2];
  uint *local_88;
  uint local_80;
  uint *local_78;
  undefined8 local_70;
  
  uVar13 = *param_2;
  uVar9 = 0;
  if (((uVar13 >> 0xd & 1) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    uVar19 = *(uint *)(param_1 + 0xb4);
    uVar23 = *(uint *)(param_1 + 0xb8);
    uVar28 = uVar23 + 0x1f >> 5;
    uVar8 = uVar19 >> 5;
    local_170 = (ulong)uVar8;
    local_1c8 = auStack_210 + -((ulong)((uVar19 >> 5) << 6 | 0xf) + 0xf & 0xfffffffffffffff1);
    local_1d0 = local_1c8 + ((ulong)uVar19 & 0xffffffe0);
    local_1d8 = local_1c8 + -((ulong)(uVar8 * 4 + 0x1e) & 0x3ffffff0);
    local_1e0 = local_1d8 + local_170 * 2;
    local_1a0 = param_1;
    local_184 = param_4;
    local_160 = param_5;
    local_70 = param_6;
    if (param_8 == 0) {
      uVar22 = *(uint *)(param_7 + 0xc);
      *(uint *)(param_1 + 0xbc) = (uVar13 & 0xff) << 3;
      *(uint *)(param_1 + 0xc0) = (uVar13 & 0x20000) >> 0xf;
      lVar24 = 0;
      piVar21 = (int *)(param_1 + 0xdc);
      if ((uVar13 >> 0x11 & 1) == 0) {
        do {
          iVar11 = *(int *)((long)&DAT_03cb5610 + lVar24);
          iVar2 = *(int *)((long)&DAT_03cb5568 + lVar24);
          lVar24 = lVar24 + 4;
          piVar21[-5] = iVar2;
          piVar21[-4] = uVar19 * 2 - iVar11;
          piVar21[-1] = iVar2;
          *piVar21 = uVar23 * 2 - iVar11;
          piVar21 = piVar21 + 2;
        } while (lVar24 != 8);
      }
      else {
        do {
          iVar11 = *(int *)((long)&DAT_03cb5460 + lVar24);
          iVar2 = *(int *)((long)&DAT_03cb5610 + lVar24);
          lVar24 = lVar24 + 4;
          piVar21[-5] = iVar11;
          piVar21[-4] = (iVar11 + uVar19 * 2) - iVar2;
          piVar21[-1] = iVar11;
          *piVar21 = (iVar11 + uVar23 * 2) - iVar2;
          piVar21 = piVar21 + 2;
        } while (lVar24 != 8);
      }
      uVar19 = *(uint *)(param_7 + 4) << 2;
      if (*(uint *)(param_7 + 4) < 3) {
        uVar19 = 8;
      }
      local_88 = (uint *)((long)param_2 + (ulong)uVar19);
      local_80 = 0;
      local_90[0] = 0;
      local_78 = local_88;
      if ((uVar13 >> 0xf & 1) == 0) {
        if ((uVar13 >> 0x10 & 1) == 0) {
          memset(*(void **)(param_1 + 0x98),0,(ulong)(uVar23 >> 3) + 7 >> 3);
        }
        else {
          FUN_00112fa0(*(void **)(param_1 + 0x98),0,local_90,(uVar23 >> 3) - 1);
        }
      }
      if ((uVar13 >> 0xe & 1) == 0) {
        uVar19 = *(uint *)(local_1a0 + 0xb4) >> 3;
        if ((uVar13 >> 0x10 & 1) == 0) {
          memset(*(void **)(local_1a0 + 0x90),0,(ulong)uVar19 + 7 >> 3);
        }
        else {
          FUN_00112fa0(*(void **)(local_1a0 + 0x90),0,local_90,uVar19 - 1);
        }
      }
      if ((uVar13 >> 0xf & 1) == 0) {
        *(uint *)(local_1a0 + 0xc0) = *(uint *)(local_1a0 + 0xc0) | 2;
      }
      if ((uVar13 >> 0xe & 1) == 0) {
        *(uint *)(local_1a0 + 0xc0) = *(uint *)(local_1a0 + 0xc0) | 1;
      }
      if ((uVar13 >> 0x12 & 1) != 0) {
        *(uint *)(local_1a0 + 0xc0) = *(uint *)(local_1a0 + 0xc0) | 8;
      }
      if ((uVar13 >> 0x13 & 1) != 0) {
        *(uint *)(local_1a0 + 0xc0) = *(uint *)(local_1a0 + 0xc0) | 0x10;
        *(uint *)(local_1a0 + 0xc4) = uVar13 >> 0x18;
      }
      puVar29 = *(undefined1 **)(local_1a0 + 0x88);
      memset(puVar29,0,(ulong)(uVar28 + 7 >> 3));
      *puVar29 = 1;
      if (*(int *)(param_7 + 4) == 0) {
        local_1bc = 0;
      }
      else {
        uVar31 = 0;
        do {
          uVar19 = *(uint *)(param_7 + 0xc + uVar31 * 4);
          uVar31 = uVar31 + 1;
          uVar25 = (ulong)(uVar19 >> 8);
          *(byte *)(*(long *)(local_1a0 + 0x88) + uVar25) =
               *(byte *)(*(long *)(local_1a0 + 0x88) + uVar25) |
               (byte)(1 << (ulong)(uVar19 >> 5 & 7));
        } while (uVar31 < *(uint *)(param_7 + 4));
        local_1bc = 0;
      }
    }
    else {
      local_1bc = *(uint *)(param_7 + 0xc + (ulong)(param_8 - 1) * 4);
      uVar22 = *(uint *)(param_7 + 0xc + (ulong)param_8 * 4);
      local_88 = (uint *)((long)param_2 + (ulong)param_2[param_8]);
      local_80 = 0;
      local_90[0] = 0;
      local_78 = local_88;
    }
    local_1b8 = (ulong)(uVar28 * uVar8) << 2;
    local_190 = auStack_110;
    local_198 = auStack_f0;
    local_188 = (uint)(param_3 == 0) | (uVar13 & 0x80000) >> 0x13;
    local_200 = auStack_d0;
    local_208 = auStack_b0;
    local_168 = local_1c8;
    local_178 = local_1d0;
    local_1f8 = local_120;
    puVar27 = local_1d8;
    puVar29 = local_1e0;
    local_1f0 = param_7;
    local_180 = (ulong)uVar13;
    do {
      local_1c0 = local_1bc;
      uVar19 = (local_1bc >> 5) * (int)local_170;
      uVar31 = (ulong)uVar19;
      uVar13 = (uVar22 + 0x1f >> 5) * (int)local_170 - uVar19;
      lVar24 = 0;
      local_1a8 = (ulong)param_8;
      lVar10 = local_1a0;
      plVar17 = local_1f8;
      local_1e4 = param_9;
      local_1bc = uVar22;
      do {
        lVar20 = lVar10 + lVar24 * 8;
        iVar11 = 4;
        if (1 < (int)lVar24 - 1U) {
          iVar11 = 0x10;
        }
        lVar14 = *(long *)(lVar20 + 8);
        plVar17[-2] = lVar14;
        if (lVar14 != 0) {
          lVar30 = *(long *)(lVar20 + 0x30);
          lVar20 = *(long *)(lVar20 + 0x58);
          plVar17[1] = lVar30;
          lVar10 = lVar30 + local_1b8 + (ulong)((iVar11 * 0x88 | 4U) * uVar19);
          plVar17[-1] = lVar30;
          *plVar17 = lVar10;
          iVar2 = 0;
          if ((int)local_1a8 != 0) {
            iVar2 = (int)lVar10 - (int)lVar30;
          }
          *(int *)(lVar20 + local_1a8 * 8) = iVar2;
          memset((void *)(lVar14 + (ulong)(iVar11 * uVar19) * 2),0,(ulong)(iVar11 * uVar13) << 1);
          memset((void *)(lVar30 + uVar31 * 4),0,(ulong)uVar13 << 2);
          lVar10 = local_1a0;
        }
        lVar24 = lVar24 + 1;
        plVar17 = plVar17 + 4;
      } while (lVar24 != 5);
      memset((void *)(*(long *)(lVar10 + 0x80) + (ulong)(uVar19 * 4) * 4),0,(ulong)(uVar13 * 4) << 2
            );
      uVar13 = local_1c0;
      if (local_1c0 < local_1bc) {
LAB_001111c8:
        local_150 = 0;
        local_14c = 0;
        local_148 = 0;
        local_13c = 0;
        local_138 = 0;
        local_134 = 0;
        local_158 = 0;
        local_154 = 0;
        local_144 = 0;
        local_140 = 0;
        local_15c = 0x10302;
        if (uVar13 == local_1c0) {
          uVar7 = 0x10;
          *puVar27 = 0x10;
          uVar19 = 0x2008;
        }
        else {
          *puVar27 = *puVar29;
          uVar7 = puVar29[1];
          uVar19 = 0x2000;
        }
        puVar27[1] = uVar7;
        uVar25 = 0;
        uVar28 = uVar19 | 0x20;
        uVar23 = (int)uVar31 << 2;
        puVar26 = local_168 + 4;
        local_1b0 = uVar13;
        local_1ac = uVar28;
        do {
          uVar13 = uVar28;
          if (uVar25 != 0) {
            uVar13 = uVar19;
          }
          if (local_160 == 0) {
            uVar8 = FUN_001133c0(local_90,&local_15c);
            if (uVar8 < 4) {
              switch(uVar8) {
              case 0:
                goto switchD_00111404_caseD_0;
              case 1:
                puVar1 = (undefined4 *)(local_168 + uVar25 * 0x20);
                *puVar1 = 0;
                *(undefined8 *)(puVar1 + 1) = 0;
                *(undefined8 *)(puVar1 + 3) = 0;
                *(undefined8 *)(puVar1 + 5) = 0;
                puVar1[7] = 0;
                break;
              case 2:
                FUN_00113cd0(local_90,local_168 + uVar25 * 0x20,local_178 + uVar25 * 0x20,uVar13);
                lVar24 = 0;
                puVar15 = (undefined2 *)(*(long *)(local_1a0 + 0x80) + (ulong)uVar23 * 4 + 2);
                do {
                  puVar1 = (undefined4 *)(puVar26 + lVar24);
                  lVar24 = lVar24 + 8;
                  puVar15[-1] = (short)puVar1[-1];
                  *puVar15 = (short)*puVar1;
                  puVar15 = puVar15 + 2;
                } while (lVar24 != 0x20);
                break;
              case 3:
                FUN_00113cd0(local_90,local_168 + uVar25 * 0x20,local_178 + uVar25 * 0x20,uVar13);
                lVar24 = 0;
                puVar15 = (undefined2 *)(*(long *)(local_1a0 + 0x80) + (ulong)uVar23 * 4 + 2);
                do {
                  puVar1 = (undefined4 *)(puVar26 + lVar24);
                  lVar24 = lVar24 + 8;
                  puVar15[-1] = (short)puVar1[-1];
                  *puVar15 = (short)*puVar1;
                  puVar15 = puVar15 + 2;
                } while (lVar24 != 0x20);
                uVar12 = uVar25 << 1 | 1;
                uVar7 = FUN_001134b0(local_90,puVar27[uVar12]);
                puVar27[uVar12] = uVar7;
                FUN_0011f020(local_130,uVar31,local_90,local_180,uVar7,&local_148);
                uVar12 = local_180;
                if (local_80 == 0) {
                  puVar16 = local_88 + 1;
                  uVar8 = *local_88;
                  local_90[0] = uVar8 >> 1;
                  local_80 = 0x1f;
                  local_88 = puVar16;
                  if ((uVar8 & 1) != 0) goto LAB_00111584;
LAB_0011154c:
                  local_158 = 0;
                  local_154 = 0;
                }
                else {
                  uVar22 = local_90[0] >> 1;
                  local_80 = local_80 - 1;
                  uVar8 = local_90[0] & 1;
                  local_90[0] = uVar22;
                  if (uVar8 == 0) goto LAB_0011154c;
LAB_00111584:
                  FUN_0011f0f0(local_190,uVar31,local_90,local_180 & 0xffffffff,uVar7,&local_154);
                  uVar28 = local_1ac;
                  FUN_0011f0f0(local_198,uVar31,local_90,uVar12 & 0xffffffff,uVar7,&local_158);
                }
                if ((local_188 & 1) == 0) {
                  FUN_0011f020(local_200,uVar31,local_90,local_180,uVar7,&local_14c);
                }
                if (local_184 != 0) {
                  FUN_0011f020(local_208,uVar31,local_90,local_180,uVar7,&local_150);
                }
              }
            }
          }
          else {
switchD_00111404_caseD_0:
            uVar7 = FUN_001134b0(local_90,puVar27[uVar25 * 2]);
            puVar27[uVar25 * 2] = uVar7;
            FUN_0011eee0(local_130,uVar31,local_90,local_180,uVar7,&local_134);
            FUN_0011ef80(local_190,uVar31,local_90,uVar7,&local_140);
            FUN_0011ef80(local_198,uVar31,local_90,uVar7,&local_144);
            if ((local_188 & 1) == 0) {
              FUN_0011eee0(local_200,uVar31,local_90,local_180,uVar7,&local_138);
            }
            if (local_184 != 0) {
              FUN_0011eee0(local_208,uVar31,local_90,local_180,uVar7,&local_13c);
            }
            if (local_160 == 0) {
              FUN_001139d0(uVar13,local_168 + uVar25 * 0x20,local_178 + uVar25 * 0x20);
            }
          }
          uVar25 = uVar25 + 1;
          uVar31 = (ulong)((int)uVar31 + 1);
          if (local_170 <= uVar25) goto LAB_00111160;
          uVar12 = uVar25 * 2;
          lVar24 = uVar12 - 2;
          if ((uVar13 >> 3 & 1) == 0) {
            bVar3 = puVar29[lVar24];
            bVar4 = puVar29[uVar12];
            bVar18 = bVar3;
            if (bVar4 <= bVar3) {
              bVar18 = bVar4;
              bVar4 = bVar3;
            }
            bVar3 = puVar27[lVar24];
            if ((byte)puVar27[lVar24] <= bVar18) {
              bVar3 = bVar18;
            }
            bVar5 = puVar29[uVar12 - 1];
            if (bVar3 <= bVar4) {
              bVar4 = bVar3;
            }
            bVar18 = puVar29[uVar12 | 1];
            bVar3 = bVar5;
            if (bVar18 <= bVar5) {
              bVar3 = bVar18;
              bVar18 = bVar5;
            }
            bVar5 = puVar27[uVar12 - 1];
            if ((byte)puVar27[uVar12 - 1] <= bVar3) {
              bVar5 = bVar3;
            }
            puVar27[uVar12] = bVar4;
            if (bVar5 <= bVar18) {
              bVar18 = bVar5;
            }
          }
          else {
            puVar27[uVar12] = puVar27[lVar24];
            bVar18 = (puVar27 + uVar12)[-1];
          }
          puVar27[uVar12 | 1] = bVar18;
          puVar26 = puVar26 + 0x20;
          uVar23 = uVar23 + 4;
        } while( true );
      }
LAB_001116bc:
      lVar24 = 0;
      plVar17 = local_1f8;
      do {
        if (*(long *)(local_1a0 + lVar24 + 8) != 0) {
          piVar21 = (int *)(*(long *)(local_1a0 + lVar24 + 0x58) + local_1a8 * 8);
          piVar21[1] = ((int)*plVar17 - (int)plVar17[-1]) - *piVar21;
        }
        lVar24 = lVar24 + 8;
        plVar17 = plVar17 + 4;
      } while (lVar24 != 0x28);
      param_8 = (int)local_1a8 + 1;
      uVar22 = *(uint *)(local_1f0 + (ulong)param_8 * 4 + 0xc);
      if ((local_80 & 0x1f) != 0) {
        local_80 = 0;
        local_90[0] = 0;
      }
      param_9 = local_1e4 + -1;
    } while (param_9 != 0);
    uVar9 = 1;
    *(undefined4 *)(local_1a0 + 0xe8) = 1;
  }
  return uVar9;
LAB_00111160:
  bVar6 = local_168 != local_1c8;
  local_178 = local_1c8;
  local_168 = local_1d0;
  puVar29 = local_1d8;
  puVar27 = local_1e0;
  if (bVar6) {
    local_178 = local_1d0;
    local_168 = local_1c8;
    puVar29 = local_1e0;
    puVar27 = local_1d8;
  }
  uVar13 = local_1b0 + 0x20;
  if (local_1bc <= uVar13) goto LAB_001116bc;
  goto LAB_001111c8;
}


