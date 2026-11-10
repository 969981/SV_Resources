/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b9965c; name: FUN_00b9965c
 */


void FUN_00b9965c(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined8 *****pppppuVar9;
  long lVar10;
  long lVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 ***pppuVar15;
  undefined8 *****pppppuVar16;
  long *plVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****local_b0;
  undefined8 ****ppppuStack_a8;
  long local_a0;
  undefined8 ****local_98;
  undefined8 ****local_90;
  undefined8 ****local_88;
  undefined8 ***local_80;
  undefined8 *****local_78;
  undefined8 *****local_70;
  long local_68;
  
  local_70 = (undefined8 *****)0x0;
  local_68 = 0;
  lVar2 = tpidr_el0;
  local_78 = &local_70;
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar11 = 0;
    do {
      lVar10 = *(long *)(param_2 + 0x50);
      pppuVar15 = (undefined8 ***)(lVar10 + lVar11 * 0xa8);
      std::string::string((string *)&local_98,(string *)*pppuVar15);
      pppppuVar16 = &local_70;
      local_80 = pppuVar15;
      if (local_70 != (undefined8 *****)0x0) {
        pppppuVar18 = local_70;
        do {
          bVar1 = *(byte *)(pppppuVar18 + 4);
          ppppuStack_a8 = pppppuVar18[5];
          local_b0 = pppppuVar18[6];
          if ((bVar1 & 1) == 0) {
            local_b0 = (undefined8 ****)((long)pppppuVar18 + 0x21);
            ppppuStack_a8 = (undefined8 ****)(ulong)(bVar1 >> 1);
          }
          iVar4 = FUN_028a8144(&local_98,&local_b0);
          if (iVar4 < 0) {
            pppppuVar9 = (undefined8 *****)*pppppuVar18;
            pppppuVar16 = pppppuVar18;
            if (pppppuVar9 == (undefined8 *****)0x0) {
              goto LAB_00b9976c;
            }
          }
          else {
            ppppuStack_a8 = (undefined8 ****)((ulong)local_98 >> 1 & 0x7f);
            local_b0 = (undefined8 ****)((ulong)&local_98 | 1);
            if (((ulong)local_98 & 1) != 0) {
              ppppuStack_a8 = local_90;
              local_b0 = local_88;
            }
            iVar4 = FUN_028a8144(pppppuVar18 + 4,&local_b0);
            if (-1 < iVar4) goto LAB_00b9976c;
            pppppuVar16 = pppppuVar18 + 1;
            pppppuVar9 = (undefined8 *****)*pppppuVar16;
            if (pppppuVar9 == (undefined8 *****)0x0) goto LAB_00b9976c;
          }
          pppppuVar18 = pppppuVar9;
        } while( true );
      }
      pppppuVar18 = &local_70;
LAB_00b9976c:
      ppppuVar12 = *pppppuVar16;
      if (ppppuVar12 == (undefined8 ****)0x0) {
        plVar17 = *(long **)(lVar2 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        ppppuVar12 = (undefined8 ****)(**(code **)(*plVar17 + 0x10))(plVar17,0x40,8);
        ppppuVar12[5] = local_90;
        ppppuVar12[6] = local_88;
        ppppuVar12[4] = local_98;
        local_98 = (undefined8 ****)0x0;
        local_90 = (undefined8 ****)0x0;
        local_88 = (undefined8 ****)0x0;
        ppppuVar12[7] = local_80;
        *ppppuVar12 = (undefined8 ***)0x0;
        ppppuVar12[1] = (undefined8 ***)0x0;
        ppppuVar12[2] = pppppuVar18;
        *pppppuVar16 = ppppuVar12;
        if ((undefined8 *****)*local_78 == (undefined8 *****)0x0) {
          ppppuVar8 = ppppuVar12;
        }
        else {
          ppppuVar8 = *pppppuVar16;
          local_78 = (undefined8 *****)*local_78;
        }
        FUN_010108e0(local_70,ppppuVar8);
        bVar3 = false;
        local_68 = local_68 + 1;
      }
      else {
        bVar3 = true;
      }
      ppppuVar8 = local_88;
      if ((((ulong)local_98 & 1) != 0) && (local_88 != (undefined8 ****)0x0)) {
        plVar17 = *(long **)(lVar2 + 0x30);
        if (plVar17 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar17 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,ppppuVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar17,ppppuVar8,0,8);
        }
      }
      if ((bVar3) &&
         ((*(char *)((long)ppppuVar12[7][4] + 0x53) != '\0' ||
          (*(char *)(*(long *)(lVar10 + lVar11 * 0xa8 + 0x20) + 0x53) != '\0')))) {
        uVar13 = *(undefined8 *)(param_2 + 8);
        std::operator+("Expanded map entry type ",(string *)*pppuVar15);
        puVar5 = (undefined8 *)std::string::append((char *)&local_b0);
        local_90 = (undefined8 ****)puVar5[1];
        local_88 = (undefined8 ****)puVar5[2];
        local_98 = (undefined8 ****)*puVar5;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        FUN_00b89f94(param_1,uVar13,param_3,0,&local_98);
        ppppuVar12 = local_88;
        if ((((ulong)local_98 & 1) != 0) && (local_88 != (undefined8 ****)0x0)) {
          plVar17 = *(long **)(lVar2 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,ppppuVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar17,ppppuVar12,0,8);
          }
        }
        lVar10 = local_a0;
        if ((((ulong)local_b0 & 1) != 0) && (local_a0 != 0)) {
          plVar17 = *(long **)(lVar2 + 0x30);
          if (plVar17 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar17 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,0,8);
          }
          else {
            FUN_00c48fe8(plVar17,lVar10,0,8);
          }
        }
      }
      FUN_00b9965c(param_1,*(long *)(param_2 + 0x50) + lVar11 * 0xa8,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar11 * 8 + 8));
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x48));
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar11 = 0;
    do {
      if (local_70 != (undefined8 *****)0x0) {
        pbVar14 = *(byte **)(*(long *)(param_2 + 0x30) + lVar11 * 0x90);
        pppppuVar16 = &local_70;
        pppppuVar18 = local_70;
        do {
          local_90 = (undefined8 ****)(ulong)(*pbVar14 >> 1);
          local_98 = (undefined8 ****)(pbVar14 + 1);
          if ((*pbVar14 & 1) != 0) {
            local_90 = *(undefined8 *****)(pbVar14 + 8);
            local_98 = *(undefined8 *****)(pbVar14 + 0x10);
          }
          iVar4 = FUN_028a8144(pppppuVar18 + 4,&local_98);
          if (iVar4 >= 0) {
            pppppuVar16 = pppppuVar18;
          }
          pppppuVar18 = (undefined8 *****)pppppuVar18[iVar4 < 0];
        } while (pppppuVar18 != (undefined8 *****)0x0);
        if ((undefined8 ******)pppppuVar16 != &local_70) {
          local_90 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar16 + 4) >> 1);
          local_98 = (undefined8 ****)((long)pppppuVar16 + 0x21);
          if ((*(byte *)(pppppuVar16 + 4) & 1) != 0) {
            local_90 = pppppuVar16[5];
            local_98 = pppppuVar16[6];
          }
          iVar4 = FUN_028a8144(pbVar14,&local_98);
          if ((-1 < iVar4) && (*(char *)((long)pppppuVar16[7][4] + 0x53) != '\0')) {
            uVar13 = *(undefined8 *)(param_2 + 8);
            std::operator+("Expanded map entry type ",(string *)*pppppuVar16[7]);
            puVar5 = (undefined8 *)std::string::append((char *)&local_b0);
            local_90 = (undefined8 ****)puVar5[1];
            local_88 = (undefined8 ****)puVar5[2];
            local_98 = (undefined8 ****)*puVar5;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            FUN_00b89f94(param_1,uVar13,param_3,0,&local_98);
            ppppuVar12 = local_88;
            if ((((ulong)local_98 & 1) != 0) && (local_88 != (undefined8 ****)0x0)) {
              plVar17 = *(long **)(lVar2 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,ppppuVar12,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,ppppuVar12,0,8);
              }
            }
            lVar10 = local_a0;
            if ((((ulong)local_b0 & 1) != 0) && (local_a0 != 0)) {
              plVar17 = *(long **)(lVar2 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,lVar10,0,8);
              }
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar11 = 0;
    do {
      if (local_70 != (undefined8 *****)0x0) {
        pbVar14 = *(byte **)(*(long *)(param_2 + 0x60) + lVar11 * 0x38);
        pppppuVar16 = &local_70;
        pppppuVar18 = local_70;
        do {
          local_90 = (undefined8 ****)(ulong)(*pbVar14 >> 1);
          local_98 = (undefined8 ****)(pbVar14 + 1);
          if ((*pbVar14 & 1) != 0) {
            local_90 = *(undefined8 *****)(pbVar14 + 8);
            local_98 = *(undefined8 *****)(pbVar14 + 0x10);
          }
          iVar4 = FUN_028a8144(pppppuVar18 + 4,&local_98);
          if (iVar4 >= 0) {
            pppppuVar16 = pppppuVar18;
          }
          pppppuVar18 = (undefined8 *****)pppppuVar18[iVar4 < 0];
        } while (pppppuVar18 != (undefined8 *****)0x0);
        if ((undefined8 ******)pppppuVar16 != &local_70) {
          local_90 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar16 + 4) >> 1);
          local_98 = (undefined8 ****)((long)pppppuVar16 + 0x21);
          if ((*(byte *)(pppppuVar16 + 4) & 1) != 0) {
            local_90 = pppppuVar16[5];
            local_98 = pppppuVar16[6];
          }
          iVar4 = FUN_028a8144(pbVar14,&local_98);
          if ((-1 < iVar4) && (*(char *)((long)pppppuVar16[7][4] + 0x53) != '\0')) {
            uVar13 = *(undefined8 *)(param_2 + 8);
            std::operator+("Expanded map entry type ",(string *)*pppppuVar16[7]);
            puVar5 = (undefined8 *)std::string::append((char *)&local_b0);
            local_90 = (undefined8 ****)puVar5[1];
            local_88 = (undefined8 ****)puVar5[2];
            local_98 = (undefined8 ****)*puVar5;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            FUN_00b89f94(param_1,uVar13,param_3,0,&local_98);
            ppppuVar12 = local_88;
            if ((((ulong)local_98 & 1) != 0) && (local_88 != (undefined8 ****)0x0)) {
              plVar17 = *(long **)(lVar2 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,ppppuVar12,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,ppppuVar12,0,8);
              }
            }
            lVar10 = local_a0;
            if ((((ulong)local_b0 & 1) != 0) && (local_a0 != 0)) {
              plVar17 = *(long **)(lVar2 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,lVar10,0,8);
              }
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar11 = 0;
    do {
      if (local_70 != (undefined8 *****)0x0) {
        pbVar14 = *(byte **)(*(long *)(param_2 + 0x40) + lVar11 * 0x30);
        pppppuVar16 = &local_70;
        pppppuVar18 = local_70;
        do {
          local_90 = (undefined8 ****)(ulong)(*pbVar14 >> 1);
          local_98 = (undefined8 ****)(pbVar14 + 1);
          if ((*pbVar14 & 1) != 0) {
            local_90 = *(undefined8 *****)(pbVar14 + 8);
            local_98 = *(undefined8 *****)(pbVar14 + 0x10);
          }
          iVar4 = FUN_028a8144(pppppuVar18 + 4,&local_98);
          if (iVar4 >= 0) {
            pppppuVar16 = pppppuVar18;
          }
          pppppuVar18 = (undefined8 *****)pppppuVar18[iVar4 < 0];
        } while (pppppuVar18 != (undefined8 *****)0x0);
        if ((undefined8 ******)pppppuVar16 != &local_70) {
          local_90 = (undefined8 ****)(ulong)(*(byte *)(pppppuVar16 + 4) >> 1);
          local_98 = (undefined8 ****)((long)pppppuVar16 + 0x21);
          if ((*(byte *)(pppppuVar16 + 4) & 1) != 0) {
            local_90 = pppppuVar16[5];
            local_98 = pppppuVar16[6];
          }
          iVar4 = FUN_028a8144(pbVar14,&local_98);
          if ((-1 < iVar4) && (*(char *)((long)pppppuVar16[7][4] + 0x53) != '\0')) {
            uVar13 = *(undefined8 *)(param_2 + 8);
            std::operator+("Expanded map entry type ",(string *)*pppppuVar16[7]);
            puVar5 = (undefined8 *)std::string::append((char *)&local_b0);
            local_90 = (undefined8 ****)puVar5[1];
            local_88 = (undefined8 ****)puVar5[2];
            local_98 = (undefined8 ****)*puVar5;
            puVar5[1] = 0;
            puVar5[2] = 0;
            *puVar5 = 0;
            FUN_00b89f94(param_1,uVar13,param_3,0,&local_98);
            ppppuVar12 = local_88;
            if ((((ulong)local_98 & 1) != 0) && (local_88 != (undefined8 ****)0x0)) {
              plVar17 = *(long **)(lVar2 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar6 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,ppppuVar12,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,ppppuVar12,0,8);
              }
            }
            lVar10 = local_a0;
            if ((((ulong)local_b0 & 1) != 0) && (local_a0 != 0)) {
              plVar17 = *(long **)(lVar2 + 0x30);
              if (plVar17 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar17 = DAT_04859430;
                *(long **)(lVar2 + 0x30) = DAT_04859430;
              }
              uVar6 = (**(code **)(*plVar17 + 0xf8))(plVar17);
              if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,0,8);
              }
              else {
                FUN_00c48fe8(plVar17,lVar10,0,8);
              }
            }
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(param_2 + 0x38));
  }
  FUN_00baf46c(local_70);
  return;
}


