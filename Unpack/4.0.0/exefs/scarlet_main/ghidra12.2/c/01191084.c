/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01191084; name: FUN_01191084
 */


void FUN_01191084(long param_1,int *param_2,long *param_3)

{
  char *pcVar1;
  uint *puVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ushort *puVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  ulong uVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  int *piVar24;
  undefined4 uVar25;
  uint *puVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  undefined8 uVar30;
  ulong local_e0;
  undefined8 local_c8;
  undefined8 *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  char *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar27 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar27 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_a0 = *(undefined1 **)PTR_DAT_047d3e30;
    local_98 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_90 = *(long **)(PTR_DAT_047d3e30 + 0x10);
    local_88 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
  }
  else {
    puVar26 = (uint *)((long)param_2 + uVar27);
    uVar28 = (ulong)*puVar26;
    pcVar1 = (char *)((long)puVar26 + uVar28 + 4);
    puVar22 = &DAT_cbf29ce484222645;
    local_90 = (long *)strlen(pcVar1);
    bVar4 = *(byte *)((long)puVar26 + uVar28 + 4);
    if (bVar4 != 0) {
      pbVar18 = (byte *)((long)param_2 + uVar28 + uVar27 + 5);
      do {
        puVar22 = (undefined1 *)(((ulong)puVar22 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar18;
        pbVar18 = pbVar18 + 1;
      } while (bVar4 != 0);
    }
    local_88 = (long *)0x0;
    local_a0 = puVar22;
    local_98 = pcVar1;
  }
  puVar15 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar15 < 7) {
    uVar21 = 0;
LAB_01191164:
    uVar25 = 0;
  }
  else {
    if ((ulong)puVar15[3] == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined4 *)((long)param_2 + (ulong)puVar15[3]);
    }
    if ((*puVar15 < 9) || ((ulong)puVar15[4] == 0)) goto LAB_01191164;
    uVar25 = *(undefined4 *)((long)param_2 + (ulong)puVar15[4]);
  }
  FUN_00daf940(param_1,&local_a0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar21;
  *(undefined4 *)(param_1 + 0x4c) = uVar25;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar25;
  *(undefined8 *)(param_1 + 0x28) = 0x666666666666666;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x20) = param_3;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  puVar15 = (ushort *)((long)param_2 - (long)*param_2);
  uVar6 = *puVar15;
  if (uVar6 < 0xb) {
    return;
  }
  if ((ulong)puVar15[5] == 0) {
    return;
  }
  cVar5 = *(char *)((long)param_2 + (ulong)puVar15[5]);
  if (cVar5 == '\0') {
    return;
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,cVar5);
  local_98 = (char *)0x0;
  local_90 = (long *)0x0;
  if (cVar5 == '\x03') {
    if ((uVar6 < 0xd) || ((ulong)puVar15[6] == 0)) {
      piVar24 = (int *)0x0;
    }
    else {
      puVar26 = (uint *)((long)param_2 + (ulong)puVar15[6]);
      piVar24 = (int *)((long)puVar26 + (ulong)*puVar26);
    }
    puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x80,8);
    if (puVar10 == (undefined8 *)0x0) {
      param_3 = (long *)0x0;
      uVar23 = 0;
      uVar30 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_01191be0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar10 = &PTR_FUN_04607388;
      if (*(ushort *)((long)piVar24 - (long)*piVar24) < 5) {
        local_c0 = (undefined8 *)0x0;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
        local_c0 = (undefined8 *)0x0;
        if (uVar27 != 0) {
          puVar26 = (uint *)((long)piVar24 + uVar27);
          local_c0 = (undefined8 *)((long)puVar26 + (ulong)*puVar26);
        }
      }
      FUN_00ea0a7c(puVar10 + 1,&local_c0);
      plVar29 = puVar10 + 2;
      *plVar29 = 0;
      puVar10[3] = 0;
      puVar10[4] = param_3;
      puVar10[5] = 0x1fffffffffffffff;
      puVar10[6] = 0;
      *(undefined4 *)(puVar10 + 7) = 0;
      plVar19 = puVar10 + 8;
      *plVar19 = 0;
      puVar10[0xb] = 0;
      *(undefined4 *)(puVar10 + 0xc) = 0;
      puVar10[0xd] = 0;
      puVar10[9] = param_3;
      puVar10[10] = 0x1fffffffffffffff;
      *(undefined4 *)(puVar10 + 0xe) = 0x3f800000;
      *(undefined1 *)(puVar10 + 0xf) = 1;
      puVar2 = (uint *)((long)piVar24 + (ulong)*(ushort *)((long)piVar24 + (6 - (long)*piVar24)));
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
      puVar26 = puVar2 + 1;
      uVar27 = (ulong)*puVar2;
      if (uVar27 != 0) {
        puVar2 = puVar26 + uVar27;
        do {
          piVar24 = (int *)((long)puVar26 + (ulong)*puVar26);
          puVar15 = (ushort *)((long)piVar24 - (long)*piVar24);
          if (*puVar15 < 7) {
            uVar21 = 0;
            iVar9 = 0;
            if (4 < *puVar15) goto LAB_01191364;
          }
          else {
            if ((ulong)puVar15[3] == 0) {
              uVar21 = 0;
            }
            else {
              uVar21 = *(undefined4 *)((long)piVar24 + (ulong)puVar15[3]);
            }
LAB_01191364:
            if ((ulong)puVar15[2] == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)((long)piVar24 + (ulong)puVar15[2]);
            }
          }
          uVar28 = puVar10[3];
          uVar27 = (ulong)iVar9;
          if (uVar28 == 0) {
LAB_01191384:
            plVar12 = (long *)(**(code **)(*(long *)puVar10[9] + 0x10))((long *)puVar10[9],0x18,4);
            if (plVar12 == (long *)0x0) {
              (**(code **)(*(long *)puVar10[9] + 0xe8))();
            }
            uVar30 = puVar10[9];
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar13 == 0) {
              *(int *)(plVar12 + 2) = iVar9;
              *(undefined4 *)((long)plVar12 + 0x14) = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01191be0;
              *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar30;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              *(int *)(plVar12 + 2) = iVar9;
              *(undefined4 *)((long)plVar12 + 0x14) = 0;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            *plVar12 = 0;
            plVar12[1] = uVar27;
            if ((uVar28 == 0) ||
               (uVar20 = local_e0,
               *(float *)(puVar10 + 0xe) * (float)uVar28 < (float)(puVar10[0xd] + 1))) {
              uVar28 = (ulong)(uVar28 < 3 || (uVar28 & uVar28 - 1) != 0) | uVar28 << 1;
              uVar20 = (ulong)((float)(puVar10[0xd] + 1) / *(float *)(puVar10 + 0xe));
              if (uVar20 <= uVar28) {
                uVar20 = uVar28;
              }
              if (uVar20 - 1 == 0) {
                uVar20 = 2;
              }
              else if ((uVar20 & uVar20 - 1) != 0) {
                uVar20 = std::__next_prime(uVar20);
              }
              uVar28 = puVar10[3];
              if (uVar28 < uVar20) {
                uVar14 = uVar20;
LAB_01191484:
                FUN_01191be4(plVar29,uVar14);
              }
              else if (uVar20 < uVar28) {
                uVar14 = (ulong)((float)(ulong)puVar10[0xd] / *(float *)(puVar10 + 0xe));
                if ((uVar28 < 3) ||
                   (uVar17 = uVar28 - (uVar28 >> 1 & 0x5555555555555555),
                   uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333),
                   1 < (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar14 = std::__next_prime(uVar14);
                }
                else if (1 < uVar14) {
                  uVar14 = 1L << (-LZCOUNT(uVar14 - 1) & 0x3fU);
                }
                if (uVar14 <= uVar20) {
                  uVar14 = uVar20;
                }
                if (uVar14 < uVar28) goto LAB_01191484;
              }
              uVar28 = puVar10[3];
              if ((uVar28 & uVar28 - 1) == 0) {
                uVar20 = uVar28 - 1 & uVar27;
              }
              else if (uVar27 < uVar28) {
                uVar20 = uVar27;
              }
              else {
                uVar20 = 0;
                if (uVar28 != 0) {
                  uVar20 = uVar27 / uVar28;
                }
                uVar20 = uVar27 - uVar20 * uVar28;
              }
            }
            plVar16 = *(long **)(*plVar29 + uVar20 * 8);
            if (plVar16 == (long *)0x0) {
              *plVar12 = *plVar19;
              *plVar19 = (long)plVar12;
              *(long **)(*plVar29 + uVar20 * 8) = plVar19;
              if (*plVar12 != 0) {
                uVar27 = *(ulong *)(*plVar12 + 8);
                if ((uVar28 & uVar28 - 1) == 0) {
                  uVar27 = uVar27 & uVar28 - 1;
                }
                else if (uVar28 <= uVar27) {
                  uVar20 = 0;
                  if (uVar28 != 0) {
                    uVar20 = uVar27 / uVar28;
                  }
                  uVar27 = uVar27 - uVar20 * uVar28;
                }
                plVar16 = (long *)(*plVar29 + uVar27 * 8);
                goto LAB_011914e8;
              }
            }
            else {
              *plVar12 = *plVar16;
LAB_011914e8:
              *plVar16 = (long)plVar12;
            }
            puVar10[0xd] = puVar10[0xd] + 1;
          }
          else {
            uVar20 = uVar28 - 1;
            if ((uVar28 & uVar20) == 0) {
              local_e0 = uVar20 & uVar27;
              plVar12 = *(long **)(*plVar29 + local_e0 * 8);
              if (plVar12 == (long *)0x0) goto LAB_01191384;
              do {
                plVar12 = (long *)*plVar12;
                if ((plVar12 == (long *)0x0) ||
                   (plVar12[1] != uVar27 && (plVar12[1] & uVar20) != local_e0)) goto LAB_01191384;
              } while ((int)plVar12[2] != iVar9);
            }
            else {
              local_e0 = uVar27;
              if (uVar28 <= uVar27) {
                uVar20 = 0;
                if (uVar28 != 0) {
                  uVar20 = uVar27 / uVar28;
                }
                local_e0 = uVar27 - uVar20 * uVar28;
              }
              plVar12 = *(long **)(*plVar29 + local_e0 * 8);
              if (plVar12 == (long *)0x0) goto LAB_01191384;
              do {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_01191384;
                uVar20 = plVar12[1];
                if (uVar20 != uVar27) {
                  if (uVar28 <= uVar20) {
                    uVar14 = 0;
                    if (uVar28 != 0) {
                      uVar14 = uVar20 / uVar28;
                    }
                    uVar20 = uVar20 - uVar14 * uVar28;
                  }
                  if (uVar20 != local_e0) goto LAB_01191384;
                }
              } while ((int)plVar12[2] != iVar9);
            }
          }
          puVar26 = puVar26 + 1;
          *(undefined4 *)((long)plVar12 + 0x14) = uVar21;
        } while (puVar26 != puVar2);
      }
      uVar30 = 0x80;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
LAB_01191630:
      uVar23 = 8;
    }
  }
  else {
    if (cVar5 != '\x02') {
      if (cVar5 == '\x01') {
        local_c8 = FUN_01191f20(param_2);
        FUN_01191f70(&local_c0,param_3,&local_c8);
        pcVar1 = local_98;
        local_98 = (char *)local_c0;
        local_c0 = (undefined8 *)0x0;
        if (pcVar1 != (char *)0x0) {
          FUN_00c4e5a0(auStack_78,0);
          (*(code *)**(undefined8 **)pcVar1)(pcVar1);
          uVar30 = local_80;
          plVar29 = local_88;
          plVar19 = local_90;
          uVar27 = (**(code **)(*local_90 + 0xf8))(local_90);
          if (((uVar27 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,pcVar1,plVar29,uVar30);
          }
          else {
            FUN_00c48fe8(plVar19,pcVar1,plVar29,uVar30);
          }
          FUN_00c4e70c(auStack_78);
        }
        local_90 = local_b8;
        local_88 = (long *)uStack_b0;
        local_80 = local_a8;
      }
      goto LAB_01191648;
    }
    if ((uVar6 < 0xd) || ((ulong)puVar15[6] == 0)) {
      piVar24 = (int *)0x0;
    }
    else {
      puVar26 = (uint *)((long)param_2 + (ulong)puVar15[6]);
      piVar24 = (int *)((long)puVar26 + (ulong)*puVar26);
    }
    puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3,0x18,8);
    if (puVar10 != (undefined8 *)0x0) {
      if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar11 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_01191be0;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = param_3;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar10 = &PTR_LAB_04607368;
      if (*(ushort *)((long)piVar24 - (long)*piVar24) < 5) {
        local_c0 = (undefined8 *)0x0;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2];
        local_c0 = (undefined8 *)0x0;
        if (uVar27 != 0) {
          puVar26 = (uint *)((long)piVar24 + uVar27);
          local_c0 = (undefined8 *)((long)puVar26 + (ulong)*puVar26);
        }
      }
      FUN_00ea0a7c(puVar10 + 1,&local_c0);
      if (*(ushort *)((long)piVar24 - (long)*piVar24) < 7) {
        local_c0 = (undefined8 *)0x0;
      }
      else {
        uVar27 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[3];
        local_c0 = (undefined8 *)0x0;
        if (uVar27 != 0) {
          puVar26 = (uint *)((long)piVar24 + uVar27);
          local_c0 = (undefined8 *)((long)puVar26 + (ulong)*puVar26);
        }
      }
      FUN_00ea0a7c(puVar10 + 2,&local_c0);
      uVar30 = 0x18;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      goto LAB_01191630;
    }
    uVar23 = 0;
    uVar30 = 0;
    param_3 = (long *)0x0;
  }
  pcVar1 = local_98;
  bVar3 = local_98 != (char *)0x0;
  local_98 = (char *)puVar10;
  if (bVar3) {
    FUN_00c4e5a0(&local_c0,0);
    (*(code *)**(undefined8 **)pcVar1)(pcVar1);
    uVar7 = local_80;
    plVar29 = local_88;
    plVar19 = local_90;
    uVar27 = (**(code **)(*local_90 + 0xf8))(local_90);
    if (((uVar27 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,pcVar1,plVar29,uVar7);
    }
    else {
      FUN_00c48fe8(plVar19,pcVar1,plVar29,uVar7);
    }
    FUN_00c4e70c(&local_c0);
  }
  local_90 = param_3;
  local_88 = (long *)uVar30;
  local_80 = uVar23;
LAB_01191648:
  FUN_0118f120(param_1 + 8,&local_a0);
  pcVar1 = local_98;
  local_98 = (char *)0x0;
  if (pcVar1 != (char *)0x0) {
    FUN_00c4e5a0(&local_c0,0);
    (*(code *)**(undefined8 **)pcVar1)(pcVar1);
    uVar30 = local_80;
    plVar29 = local_88;
    plVar19 = local_90;
    uVar27 = (**(code **)(*local_90 + 0xf8))(local_90);
    if (((uVar27 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar19 + 0x18))(plVar19,pcVar1,plVar29,uVar30);
    }
    else {
      FUN_00c48fe8(plVar19,pcVar1,plVar29,uVar30);
    }
    FUN_00c4e70c(&local_c0);
  }
  return;
}


