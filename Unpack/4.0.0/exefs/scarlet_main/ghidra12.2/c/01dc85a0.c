/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc85a0; name: FUN_01dc85a0
 */


undefined4
FUN_01dc85a0(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,uint param_7,
            uint param_8,int param_9,byte param_10)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int local_ac;
  uint local_80;
  uint local_74;
  char local_70 [4];
  int local_6c;
  uint local_68;
  
  puVar7 = PTR_DAT_047d6008;
  puVar6 = PTR_DAT_047d6000;
  puVar5 = PTR_DAT_047d5ff8;
  uVar25 = 0xc;
  if ((((param_5 == 3) || (param_2 == 3)) || (param_8 == 0)) || (param_9 == 0)) goto LAB_01dc8650;
  if (param_2 == 0) {
    local_80 = param_4 / 6;
    uVar10 = param_4 % 6;
  }
  else {
    uVar10 = 0;
    local_80 = param_4;
    if (1 < param_2 - 1U) {
      local_80 = 0;
    }
  }
  if (param_5 == 0) {
    uVar22 = param_7 / 6;
    uVar11 = param_7 % 6;
    if (((param_8 + uVar11) - 1 < 6) && ((param_9 + param_7 / 6) - 1 < 5)) {
LAB_01dc86b8:
      if (param_2 == 0) {
        iVar13 = 0;
        uVar26 = param_4;
        do {
          uVar27 = uVar26;
          uVar28 = param_8;
          do {
            if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
              FUN_00100190(&LAB_00b1a5bc,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(puVar5);
            }
            lVar15 = *(long *)puVar6;
            *(long *)puVar7 = lVar15;
            if (lVar15 == 0) {
              local_70[0] = '\0';
            }
            else {
              FUN_01a2fe88(local_70);
              if (((local_70[0] != '\0') && (local_6c == param_3)) && (uVar27 == local_68))
              goto LAB_01dc8e4c;
            }
            uVar28 = uVar28 - 1;
            uVar27 = uVar27 + 1;
          } while (uVar28 != 0);
          iVar13 = iVar13 + 1;
          uVar26 = uVar26 + 6;
        } while (iVar13 != param_9);
      }
      if (((param_2 == 1) && (param_5 != 1)) && (param_4 < param_9 + param_4)) {
        uVar25 = 0xd;
        iVar13 = param_9;
        uVar26 = param_4;
        do {
          lVar15 = FUN_010f26f8(param_1,1,param_3,uVar26);
          if ((lVar15 != 0) && (uVar16 = FUN_01dc7280(lVar15,lVar15), (uVar16 & 1) != 0))
          goto LAB_01dc8650;
          uVar26 = uVar26 + 1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if ((param_10 & 1) == 0) {
        if (param_5 == 0) {
          if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar13 != 0)) {
            FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d5ff8);
          }
          lVar15 = *(long *)PTR_DAT_047d6000;
          *(long *)PTR_DAT_047d6008 = lVar15;
          if (lVar15 == 0) {
            local_70[0] = '\0';
LAB_01dc8ed4:
            iVar13 = param_3;
            uVar10 = param_4;
            local_ac = param_6;
            local_74 = param_7;
            if (param_2 != 1) goto LAB_01dc8f10;
            goto LAB_01dc8f04;
          }
          FUN_01a2fe88(local_70);
          if (((local_70[0] == '\0') || (local_6c != param_6)) || (local_68 != param_7))
          goto LAB_01dc8ed4;
LAB_01dc8e4c:
          uVar25 = 6;
          goto LAB_01dc8650;
        }
        if ((param_2 != 0) || (param_5 != 1)) goto LAB_01dc8f10;
        lVar15 = FUN_010f26f8(param_1,1,param_6,param_7);
        iVar13 = param_6;
        uVar10 = param_7;
        local_ac = param_3;
        local_74 = param_4;
        if ((lVar15 != 0) && (uVar16 = FUN_01dc7280(lVar15,lVar15), (uVar16 & 1) != 0)) {
          uVar25 = 0xd;
          goto LAB_01dc8650;
        }
LAB_01dc8f04:
        if ((uVar10 & 0xff) == 0xff) goto LAB_01dc8f10;
        iVar12 = (int)(char)local_ac;
        uVar22 = (uint)(char)local_74;
        lVar15 = FUN_010f26f8(param_1,0,iVar12,uVar22);
        if (lVar15 != 0) {
          uVar16 = FUN_01dc7ce0(*(undefined8 *)(param_1 + 0x40),iVar12,uVar22);
          if ((uVar16 & 1) != 0) {
LAB_01dc8f58:
            uVar25 = 7;
            goto LAB_01dc8650;
          }
          if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar14 != 0)) {
            FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d5ff8);
          }
          lVar17 = *(long *)PTR_DAT_047d6000;
          *(long *)PTR_DAT_047d6008 = lVar17;
          if (lVar17 == 0) {
            local_70[0] = '\0';
          }
          else {
            FUN_01a2fe88(local_70);
            if (((local_70[0] != '\0') && (local_6c == iVar12)) && (local_68 == uVar22))
            goto LAB_01dc8e4c;
          }
          uVar16 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
          if (((uVar16 & 1) == 0) &&
             ((*(ushort *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
            if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
              uVar22 = FUN_00f13ef0(lVar15);
              uVar22 = uVar22 & 0xffff;
            }
            else {
              uVar22 = FUN_00ddf348();
            }
            if (uVar22 != 0) goto LAB_01dc8f10;
          }
        }
        if (*(char *)(*(long *)(param_1 + 0x30) + 0x90) != '\0') {
          uVar22 = 0;
          uVar25 = 1;
          do {
            if ((((int)(char)uVar10 != uVar22) &&
                (lVar15 = FUN_010f26f8(param_1,1,(int)(char)iVar13,uVar22), lVar15 != 0)) &&
               ((uVar16 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70)), (uVar16 & 1) == 0 &&
                ((*(ushort *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)))) {
              if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
                uVar11 = FUN_00f13ef0(lVar15);
                uVar11 = uVar11 & 0xffff;
              }
              else {
                uVar11 = FUN_00ddf348();
              }
              if (uVar11 != 0) goto LAB_01dc8f10;
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 < *(byte *)(*(long *)(param_1 + 0x30) + 0x90));
          goto LAB_01dc8650;
        }
      }
      else {
        iVar12 = 0;
        iVar13 = 0;
        uVar26 = 0;
        do {
          iVar14 = iVar13 + local_80;
          if (1 < param_2 - 1U) {
            iVar14 = 0;
          }
          uVar27 = 0;
          do {
            iVar2 = uVar10 + local_80 * 6 + iVar12 + uVar27;
            if (param_2 != 0) {
              iVar2 = iVar14;
            }
            lVar15 = FUN_010f26f8(param_1,param_2,param_3,iVar2);
            uVar28 = iVar12 + uVar27;
            uVar27 = uVar27 + 1;
            uVar23 = 0;
            if (lVar15 != 0) {
              uVar23 = 1 << (ulong)(uVar28 & 0x1f);
            }
            uVar26 = uVar23 | uVar26;
          } while (param_8 != uVar27);
          iVar13 = iVar13 + 1;
          iVar12 = iVar12 + 6;
        } while (iVar13 != param_9);
        if (param_5 == 0) {
          uVar27 = 0;
          uVar28 = 0;
          do {
            lVar15 = FUN_010f26f8(param_1,0,param_6,uVar27);
            uVar23 = 0;
            if (lVar15 != 0) {
              uVar23 = 1 << (ulong)(uVar27 & 0x1f);
            }
            uVar27 = uVar27 + 1;
            uVar28 = uVar23 | uVar28;
          } while (uVar27 != 0x1e);
        }
        else {
          lVar15 = FUN_010f26f8(param_1,param_5,param_6,0);
          lVar17 = FUN_010f26f8(param_1,param_5,param_6,1);
          lVar18 = FUN_010f26f8(param_1,param_5,param_6,2);
          lVar19 = FUN_010f26f8(param_1,param_5,param_6,3);
          lVar20 = FUN_010f26f8(param_1,param_5,param_6,4);
          lVar21 = FUN_010f26f8(param_1,param_5,param_6,5);
          uVar28 = (uint)(lVar15 != 0) | (uint)(lVar17 != 0) << 6 | (uint)(lVar18 != 0) << 0xc |
                   (uint)(lVar19 != 0) << 0x12 | (uint)(lVar20 != 0) << 0x18 |
                   (uint)(lVar21 != 0) << 0x1e;
        }
        puVar7 = PTR_DAT_047d6008;
        puVar6 = PTR_DAT_047d6000;
        puVar5 = PTR_DAT_047d5ff8;
        if ((param_2 == param_5) && (param_3 == param_6)) {
          iVar13 = 0;
          uVar27 = 1;
          do {
            iVar12 = iVar13 + local_80;
            iVar14 = iVar13 * 6;
            if (param_8 == 1) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              uVar24 = uVar27;
              do {
                uVar1 = uVar10 + local_80 * 6 + uVar24;
                uVar3 = uVar24 & 0x1f;
                uVar4 = uVar24 - 1;
                uVar23 = uVar23 + 2;
                uVar24 = uVar24 + 2;
                uVar28 = -(uVar26 >> (ulong)uVar3 & 1) & 1 << (ulong)(uVar1 & 0x1f) ^
                         -(uVar26 >> (ulong)(uVar4 & 0x1f) & 1) & 1 << (ulong)(uVar1 - 1 & 0x1f) ^
                         uVar28;
              } while ((param_8 & 0xfffffffe) != uVar23);
            }
            iVar13 = iVar13 + 1;
            if ((param_8 & 1) != 0) {
              uVar28 = -(uVar26 >> (ulong)(uVar23 + iVar14 & 0x1f) & 1) &
                       1 << (ulong)(uVar10 + iVar12 * 6 + uVar23 & 0x1f) ^ uVar28;
            }
            uVar27 = uVar27 + 6;
          } while (iVar13 != param_9);
        }
        uVar27 = 0;
        iVar13 = 0;
        do {
          uVar24 = param_8;
          uVar23 = uVar27;
          do {
            if (((uVar26 >> (ulong)(uVar23 & 0x1f) & 1) != 0) &&
               ((uVar28 >> (ulong)(uVar11 + uVar22 * 6 + uVar23 & 0x1f) & 1) != 0)) {
              uVar25 = 2;
              goto LAB_01dc8650;
            }
            uVar23 = uVar23 + 1;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
          iVar13 = iVar13 + 1;
          uVar27 = uVar27 + 6;
        } while (iVar13 != param_9);
        if ((param_2 == 0) && (param_5 == 1)) {
          iVar13 = 0;
          uVar10 = uVar10 + local_80 * 6;
          do {
            uVar22 = uVar10;
            uVar11 = param_8;
            do {
              lVar15 = FUN_010f26f8(param_1,0,param_3,uVar22);
              if (lVar15 != 0) {
                uVar16 = FUN_01dc7ce0(*(undefined8 *)(param_1 + 0x40),param_3,uVar22);
                if ((uVar16 & 1) != 0) goto LAB_01dc8f58;
                if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
                  FUN_00100190(&LAB_00b1a5bc,puVar6,&PTR_LOOP_04483000);
                  __cxa_guard_release(puVar5);
                }
                lVar15 = *(long *)puVar6;
                *(long *)puVar7 = lVar15;
                if (lVar15 == 0) {
                  local_70[0] = '\0';
                }
                else {
                  FUN_01a2fe88(local_70);
                  if (((local_70[0] != '\0') && (local_6c == param_3)) && (uVar22 == local_68))
                  goto LAB_01dc8e4c;
                }
              }
              uVar22 = uVar22 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            iVar13 = iVar13 + 1;
            uVar10 = uVar10 + 6;
          } while (iVar13 != param_9);
        }
        if ((param_2 != 1) || (param_5 != 0)) {
LAB_01dc8f10:
          uVar25 = 0;
          goto LAB_01dc8650;
        }
        uVar10 = param_9 + param_4;
        lVar15 = FUN_010f26f8(param_1,1,param_3,0);
        bVar8 = 0;
        if ((param_4 != 0 || uVar10 == 0) && (lVar15 != 0)) {
          if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
            uVar22 = FUN_00f13ef0(lVar15);
            uVar22 = uVar22 & 0xffff;
          }
          else {
            uVar22 = FUN_00ddf348();
          }
          if (uVar22 == 0) {
            bVar8 = 0;
          }
          else {
            bVar8 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
            bVar8 = (*(byte *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) & 4) == 0 &
                    (bVar8 ^ 0xff);
          }
        }
        lVar15 = FUN_010f26f8(param_1,1,param_3,1);
        if ((1 < param_4 || uVar10 < 2) && (lVar15 != 0)) {
          if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
            uVar22 = FUN_00f13ef0(lVar15);
            uVar22 = uVar22 & 0xffff;
          }
          else {
            uVar22 = FUN_00ddf348();
          }
          if (uVar22 != 0) {
            bVar9 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
            bVar8 = bVar8 | (*(byte *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) & 4) == 0 &
                            (bVar9 ^ 0xff);
          }
        }
        lVar15 = FUN_010f26f8(param_1,1,param_3,2);
        if ((2 < param_4 || uVar10 < 3) && (lVar15 != 0)) {
          if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
            uVar22 = FUN_00f13ef0(lVar15);
            uVar22 = uVar22 & 0xffff;
          }
          else {
            uVar22 = FUN_00ddf348();
          }
          if (uVar22 != 0) {
            bVar9 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
            bVar8 = bVar8 | (*(byte *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) & 4) == 0 &
                            (bVar9 ^ 0xff);
          }
        }
        lVar15 = FUN_010f26f8(param_1,1,param_3,3);
        if ((3 < param_4 || uVar10 < 4) && (lVar15 != 0)) {
          if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
            uVar22 = FUN_00f13ef0(lVar15);
            uVar22 = uVar22 & 0xffff;
          }
          else {
            uVar22 = FUN_00ddf348();
          }
          if (uVar22 != 0) {
            bVar9 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
            bVar8 = bVar8 | (*(byte *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) & 4) == 0 &
                            (bVar9 ^ 0xff);
          }
        }
        lVar15 = FUN_010f26f8(param_1,1,param_3,4);
        if ((4 < param_4 || uVar10 < 5) && (lVar15 != 0)) {
          if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
            uVar22 = FUN_00f13ef0(lVar15);
            uVar22 = uVar22 & 0xffff;
          }
          else {
            uVar22 = FUN_00ddf348();
          }
          if (uVar22 != 0) {
            bVar9 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
            bVar8 = bVar8 | (*(byte *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) & 4) == 0 &
                            (bVar9 ^ 0xff);
          }
        }
        lVar15 = FUN_010f26f8(param_1,1,param_3,5);
        if ((param_4 < 6 && 5 < uVar10) || (lVar15 == 0)) {
LAB_01dc904c:
          if (bVar8 != 0) goto LAB_01dc8f10;
        }
        else {
          if (*(long *)(*(long *)(lVar15 + 0x70) + 8) == 0) {
            uVar10 = FUN_00f13ef0(lVar15);
            uVar10 = uVar10 & 0xffff;
          }
          else {
            uVar10 = FUN_00ddf348();
          }
          if (uVar10 == 0) goto LAB_01dc904c;
          bVar9 = FUN_00cf4cfc(*(undefined8 *)(lVar15 + 0x70));
          if (bVar8 != 0 ||
              ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x70) + 0x10) + 4) & 4) == 0 & (bVar9 ^ 0xff)
              ) != 0) goto LAB_01dc8f10;
        }
      }
      uVar25 = 1;
      goto LAB_01dc8650;
    }
  }
  else if (param_8 < 2) {
    uVar22 = param_7;
    if (1 < param_5 - 1U) {
      uVar22 = 0;
    }
    if ((param_9 + param_7) - 1 < 6) {
      uVar11 = 0;
      goto LAB_01dc86b8;
    }
  }
  uVar25 = 3;
LAB_01dc8650:
  *(undefined4 *)(param_1 + 0x1c0) = uVar25;
  return uVar25;
}


