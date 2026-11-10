/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f49448; name: FUN_02f49448
 */


void FUN_02f49448(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined4 uVar23;
  long local_e8;
  long local_e0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  iVar17 = *(int *)(param_1 + 0x40);
  if (1 < iVar17) {
    FUN_02f4a4d0(*(undefined8 *)(param_1 + 0x38),0,iVar17 + -1);
    iVar17 = *(int *)(param_1 + 0x40);
  }
  if (iVar17 != 0) {
    plVar11 = *(long **)(param_1 + 0x38);
    lVar8 = tpidr_el0;
    plVar1 = plVar11 + iVar17;
    puVar2 = PTR_DAT_047d19b0 + 0x200;
    do {
      lVar20 = *plVar11;
      uVar15 = (ulong)*(uint *)(lVar20 + 0x20) & 0x7fffffff;
      if ((int)uVar15 != 0) {
        lVar9 = *(long *)(lVar8 + 0x1000b8);
        if (lVar9 == 0) {
          lVar9 = FUN_00e5d3b4();
          *(long *)(lVar8 + 0x1000b8) = lVar9;
        }
        local_e0 = *(long *)(*(long *)(lVar9 + 0x3d0) + 0x10);
        if (*(long *)(local_e0 + 8) == 0) {
          local_e8 = uVar15 * 8;
          local_c0 = local_e8;
          if (local_e0 == 0) goto LAB_02f49594;
          local_90 = (long *)(local_e8 + 0x3fU & 0x7ffffffc0);
          if (*(long **)(local_e0 + 0x28) < local_90) {
LAB_02f49540:
            local_c8 = FUN_031cf3b4(local_e0,&local_90);
          }
          else {
            local_c8 = *(long *)(local_e0 + 0x38);
            if (*(ulong *)(local_e0 + 0x40) < (ulong)((long)local_90 + local_c8)) goto LAB_02f49540;
            *(long *)(local_e0 + 0x38) = (long)local_90 + local_c8;
          }
        }
        else {
          local_c0 = uVar15 << 3;
LAB_02f49594:
          local_e8 = local_c0;
          local_c8 = (**(code **)PTR_DAT_047d1a08)(1,&local_c0,0x40);
          local_e0 = 0;
        }
        uVar4 = *(uint *)(lVar20 + 0x18);
        if (0 < (int)uVar4) {
          lVar9 = *(long *)(lVar20 + 0x10);
          uVar18 = 0;
          do {
            if (*(int *)(lVar9 + uVar18 * 4) != -1) {
              if ((int)uVar18 < (int)uVar4) {
                lVar16 = 0;
                goto LAB_02f495f8;
              }
              break;
            }
            uVar18 = uVar18 + 1;
          } while (uVar4 != uVar18);
        }
LAB_02f49854:
        local_90 = *(long **)(lVar20 + 8);
        if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
          plVar12 = local_90 + 2;
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = *plVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_02f499dc(param_2 + 0x758,param_2,&local_90,*(undefined1 *)(lVar20 + 0x28),local_c8,
                     uVar15);
        *(undefined1 *)(lVar20 + 0x28) = 0;
        if ((local_90 != (long *)0x0) && (local_90[1] != 0)) {
          plVar12 = local_90 + 2;
          do {
            lVar20 = *plVar12;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 + -1 == 0) {
            (**(code **)(*local_90 + 0x18))();
          }
        }
        if (local_e0 == 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_c8,local_e8);
        }
        else {
          uVar15 = local_e8 + 0x3fU & 0x7ffffffc0;
          if ((*(ulong *)(local_e0 + 0x28) < uVar15) ||
             (*(long *)(local_e0 + 0x38) != uVar15 + local_c8)) {
            if (local_c8 != 0) {
              if (*(ulong *)(local_e0 + 0x28) < uVar15 + 0x40) {
                *(int *)(*(long *)(local_e0 + 0x30) + 0x20) =
                     *(int *)(*(long *)(local_e0 + 0x30) + 0x20) + -1;
                (**(code **)(**(long **)(local_e0 + 0x10) + 0x18))
                          (*(long **)(local_e0 + 0x10),local_c8 - *(int *)(local_c8 + -4),
                           uVar15 + 0x44);
              }
              else {
                if (*(long *)(local_e0 + 0x38) == uVar15 + local_c8) {
                  *(long *)(local_e0 + 0x38) = local_c8;
                  goto LAB_02f4999c;
                }
                FUN_031cf778(local_e0,local_c8);
              }
            }
          }
          else {
            *(long *)(local_e0 + 0x38) = local_c8;
            if (*(long *)(local_e0 + 0x48) == local_c8) {
LAB_02f4999c:
              FUN_031cf578(local_e0);
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
LAB_02f495f8:
  iVar17 = (int)uVar18;
  uVar21 = (ulong)*(uint *)(lVar9 + (long)iVar17 * 4);
  uVar18 = uVar21 & 0xffffff;
  lVar9 = *(long *)(param_2 + 0x38);
  lVar22 = lVar9 + uVar18 * 0xc0;
  *(undefined8 *)(local_c8 + lVar16 * 8) = *(undefined8 *)(lVar22 + 0xb0);
  plVar12 = (long *)(lVar22 + 0x60);
  local_c0 = *plVar12;
  local_b8 = *(undefined8 *)(lVar22 + 0x68);
  uStack_b0 = *(undefined8 *)(lVar22 + 0x70);
  if ((*(byte *)(lVar20 + 0x28) & 1) != 0) {
    if ((*(byte *)(lVar9 + uVar18 * 0xc0 + 0x54) >> 1 & 1) == 0) {
      FUN_02f34ee0(param_2,lVar22,0,1,0);
    }
    else {
      lVar13 = lVar9 + uVar18 * 0xc0;
      lVar10 = *(long *)(param_2 + 0x150);
      uVar4 = *(uint *)(lVar13 + 0x80);
      (**(code **)(*(long *)PTR_DAT_047d19f0 +
                   (ulong)*(byte *)(*(long *)(lVar13 + 0x78) + 0x18) * 0x200 + 0x18))
                (*(long *)(lVar13 + 0x78),puVar2,&local_90);
      local_a0 = CONCAT44(*(undefined4 *)(lVar22 + 0x1c),*(undefined4 *)(lVar13 + 0xc));
      uStack_98 = (ulong)*(uint *)(lVar22 + 0x2c);
      (**(code **)(*(long *)PTR_DAT_047d19f0 +
                   (ulong)*(byte *)(*(long *)(lVar13 + 0x78) + 0x18) * 0x200 + 0x28))
                (*(long *)(lVar13 + 0x78),&local_a0,&local_a8);
      *(short *)(lVar13 + 0x94) = (short)((ulong)local_a8 >> 0x10) + 1;
      FUN_02fed500(param_2,uVar21,lVar10 + (ulong)uVar4 * 0x80,1);
    }
    lVar10 = lVar9 + uVar18 * 0xc0;
    *(ushort *)(lVar10 + 0x58) = *(ushort *)(lVar10 + 0x58) | 0x100;
  }
  uVar14 = (ulong)iVar17;
  puVar19 = (uint *)(lVar9 + uVar18 * 0xc0 + 0x54);
  if (((*(byte *)puVar19 >> 1 & 1) != 0) && ((*(byte *)(lVar20 + 0x28) >> 3 & 1) != 0)) {
    FUN_02f33670(param_2,*(undefined4 *)(lVar9 + uVar18 * 0xc0 + 0x80));
  }
  lVar16 = lVar16 + 1;
  if ((*(byte *)(lVar9 + uVar18 * 0xc0 + 0x88) & 1) != 0) {
    if ((*(byte *)(lVar20 + 0x28) >> 2 & 1) == 0) {
      if ((*(byte *)(lVar20 + 0x28) >> 1 & 1) == 0) {
        uVar4 = *puVar19;
        if ((uVar4 & 9) == 0) {
          FUN_02f35f08(param_2,uVar21,0);
          uVar4 = *puVar19;
        }
        if ((uVar4 & 1) != 0) {
          uStack_78 = *(undefined8 *)(lVar22 + 0x68);
          lStack_80 = *plVar12;
          uVar23 = (undefined4)((ulong)uStack_78 >> 0x20);
          local_90 = *(long **)(lVar9 + uVar18 * 0xc0 + 0x70);
          uStack_88 = CONCAT44(uVar23,uVar23);
          FUN_02f3705c(param_2,&local_90,uVar21);
        }
      }
      else {
        FUN_02ff33a4(param_2,uVar21);
      }
    }
    else {
      FUN_02f36720(param_2,uVar21,0);
      FUN_0300ebf8(*(undefined8 *)(param_2 + 0x498),lVar22,&local_c0,plVar12);
    }
  }
  iVar7 = *(int *)(lVar20 + 0x18) + -1;
  iVar3 = iVar7;
  if (iVar7 <= iVar17) {
    iVar3 = iVar17;
  }
  uVar18 = (ulong)(iVar3 + 1);
  uVar21 = uVar14;
  if ((long)uVar14 <= (long)iVar7) {
    uVar21 = (long)iVar7;
  }
  do {
    if (uVar21 == uVar14) goto LAB_02f49844;
    lVar9 = uVar14 * 4;
    uVar14 = uVar14 + 1;
  } while (*(int *)(*(long *)(lVar20 + 0x10) + lVar9 + 4) == -1);
  uVar18 = uVar14 & 0xffffffff;
LAB_02f49844:
  if (*(int *)(lVar20 + 0x18) <= (int)uVar18) goto LAB_02f49854;
  lVar9 = *(long *)(lVar20 + 0x10);
  goto LAB_02f495f8;
}


