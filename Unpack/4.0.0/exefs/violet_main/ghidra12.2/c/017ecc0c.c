/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017ecc0c; name: FUN_017ecc0c
 */


void FUN_017ecc0c(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  float fVar20;
  int local_19c;
  long *local_190;
  long *local_170;
  undefined8 *local_168;
  ulong local_160;
  long *local_158;
  long local_150;
  long lStack_148;
  long local_140;
  undefined1 auStack_138 [24];
  long *local_120 [3];
  undefined1 auStack_108 [8];
  long *local_100;
  undefined1 auStack_c8 [64];
  char *local_88;
  char *local_80;
  long local_78;
  long *local_70;
  
  uVar15 = *(undefined8 *)(param_1 + 8);
  local_88 = 
  "world/data/field/landscape_attribute/field_landscape_tag_table/field_landscape_tag_table_array.bin"
  ;
  FUN_00e52f24(local_120,&local_88);
  FUN_00dc5c18(param_1 + 0x28,0,local_120,0,uVar15);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120[0] != (long *)0x0) {
    (**(code **)(*local_120[0] + 0x20))();
  }
  local_88 = 
  "world/data/field/landscape_attribute/field_landscape_tag_table/field_landscape_tag_table_array.bfbs"
  ;
  FUN_00e52f24(local_120,&local_88);
  FUN_00dc5c18(param_1 + 0x68,0,local_120,0,uVar15);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120[0] != (long *)0x0) {
    (**(code **)(*local_120[0] + 0x20))();
  }
  local_88 = 
  "world/data/field/landscape_attribute/field_terrain_layer_table/field_terrain_layer_table_array.bin"
  ;
  FUN_00e52f24(local_120,&local_88);
  FUN_00dc5c18(param_1 + 0xa8,0,local_120,0,uVar15);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120[0] != (long *)0x0) {
    (**(code **)(*local_120[0] + 0x20))();
  }
  local_88 = 
  "world/data/field/landscape_attribute/field_terrain_layer_table/field_terrain_layer_table_array.bfbs"
  ;
  FUN_00e52f24(local_120,&local_88);
  FUN_00dc5c18(param_1 + 0xe8,0,local_120,0,uVar15);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120[0] != (long *)0x0) {
    (**(code **)(*local_120[0] + 0x20))();
  }
  plVar1 = (long *)(param_1 + 0x128);
  FUN_017ee020(plVar1);
  plVar2 = (long *)(param_1 + 400);
  FUN_017ee0d4();
  FUN_00fb9e50(local_120,param_1 + 0x28,param_1 + 0x68);
  FUN_00fb4dd0(auStack_138,local_120);
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  local_70 = (long *)0x0;
  piVar6 = (int *)FUN_00efa07c(auStack_138,&local_88);
  if (piVar6 == (int *)0x0) {
    iVar16 = 0;
  }
  else {
    iVar16 = *piVar6;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (iVar16 != 0) {
    iVar14 = 0;
    puVar3 = (undefined8 *)(param_1 + 0x160);
    plVar18 = (long *)(param_1 + 0x158);
    do {
      local_70 = (long *)0x0;
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      local_78 = 6;
      FUN_00e90ee0(&local_150,auStack_138,&local_88,iVar14);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_158 = (long *)0x0;
      local_170 = (long *)0x27366b26c0d28d33;
      local_168 = (undefined8 *)&DAT_03c85400;
      local_160 = 3;
      FUN_00cee868(&local_88,&local_150,&local_170);
      if (local_158 != (long *)0x0) {
        (**(code **)(*local_158 + 0x20))();
      }
      plVar7 = (long *)(**(code **)(*(long *)*puVar3 + 0x10))((long *)*puVar3,0x48,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*(long *)*puVar3 + 0xe8))();
      }
      local_160 = local_160 & 0xffffffffffffff00;
      uVar15 = *puVar3;
      local_170 = plVar7;
      local_168 = puVar3;
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 != 0) {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_017ed988:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      }
      plVar7[2] = (long)local_88;
      plVar7[3] = (long)local_80;
      plVar7[4] = local_78;
      plVar7[5] = (long)local_70;
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x18))();
      }
      plVar17 = local_170;
      plVar7[7] = lStack_148;
      plVar7[8] = local_140;
      plVar7[6] = local_150;
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      local_160 = CONCAT71(local_160._1_7_,1);
      uVar9 = local_170[2];
      *local_170 = 0;
      local_170[1] = uVar9;
      uVar13 = *(ulong *)(param_1 + 0x130);
      if (uVar13 == 0) {
LAB_017ecf90:
        fVar20 = (float)(*(long *)(param_1 + 0x180) + 1);
        if ((uVar13 == 0) || (*(float *)(param_1 + 0x188) * (float)uVar13 < fVar20)) {
          uVar9 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
          uVar10 = (ulong)(fVar20 / *(float *)(param_1 + 0x188));
          if (uVar10 <= uVar9) {
            uVar10 = uVar9;
          }
          if (uVar10 - 1 == 0) {
            uVar10 = 2;
          }
          else if ((uVar10 & uVar10 - 1) != 0) {
            uVar10 = std::__next_prime(uVar10);
            uVar13 = *(ulong *)(param_1 + 0x130);
          }
          if (uVar13 < uVar10) {
            uVar9 = uVar10;
LAB_017ed0e4:
            FUN_017edcd4(plVar1,uVar9);
          }
          else if (uVar10 < uVar13) {
            uVar9 = (ulong)((float)*(ulong *)(param_1 + 0x180) / *(float *)(param_1 + 0x188));
            if ((uVar13 < 3) ||
               (uVar11 = uVar13 - (uVar13 >> 1 & 0x5555555555555555),
               uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
               1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
              uVar9 = std::__next_prime(uVar9);
            }
            else if (1 < uVar9) {
              uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
            }
            if (uVar9 <= uVar10) {
              uVar9 = uVar10;
            }
            if (uVar9 < uVar13) goto LAB_017ed0e4;
          }
          uVar13 = *(ulong *)(param_1 + 0x130);
          uVar9 = plVar17[1];
        }
        uVar10 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          uVar9 = uVar13 - 1 & uVar9;
        }
        else if (uVar13 <= uVar9) {
          uVar11 = 0;
          if (uVar13 != 0) {
            uVar11 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar11 * uVar13;
        }
        plVar7 = *(long **)(*plVar1 + uVar9 * 8);
        if (plVar7 == (long *)0x0) {
          *plVar17 = *plVar18;
          *plVar18 = (long)plVar17;
          *(long **)(*plVar1 + uVar9 * 8) = plVar18;
          if (*plVar17 != 0) {
            uVar9 = *(ulong *)(*plVar17 + 8);
            if (uVar10 < 2) {
              uVar9 = uVar9 & uVar13 - 1;
            }
            else if (uVar13 <= uVar9) {
              uVar10 = 0;
              if (uVar13 != 0) {
                uVar10 = uVar9 / uVar13;
              }
              uVar9 = uVar9 - uVar10 * uVar13;
            }
            plVar7 = (long *)(*plVar1 + uVar9 * 8);
            goto LAB_017ed010;
          }
        }
        else {
          *plVar17 = *plVar7;
LAB_017ed010:
          *plVar7 = (long)plVar17;
        }
        *(long *)(param_1 + 0x180) = *(long *)(param_1 + 0x180) + 1;
        local_170 = (long *)0x0;
      }
      else {
        uVar10 = uVar13 - 1;
        if ((uVar13 & uVar10) == 0) {
          plVar7 = *(long **)(*plVar1 + (uVar10 & uVar9) * 8);
          if (plVar7 == (long *)0x0) goto LAB_017ecf90;
          do {
            plVar7 = (long *)*plVar7;
            if ((plVar7 == (long *)0x0) || ((plVar7[1] & uVar10) != (uVar10 & uVar9)))
            goto LAB_017ecf90;
          } while (plVar7[2] != uVar9);
        }
        else {
          uVar10 = uVar9;
          if (uVar13 <= uVar9) {
            uVar10 = 0;
            if (uVar13 != 0) {
              uVar10 = uVar9 / uVar13;
            }
            uVar10 = uVar9 - uVar10 * uVar13;
          }
          plVar7 = *(long **)(*plVar1 + uVar10 * 8);
          if (plVar7 == (long *)0x0) goto LAB_017ecf90;
          do {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_017ecf90;
            uVar11 = plVar7[1];
            if (uVar13 <= uVar11) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar4 * uVar13;
            }
            if (uVar11 != uVar10) goto LAB_017ecf90;
          } while (plVar7[2] != uVar9);
        }
        local_170 = (long *)0x0;
        if (plVar17 != (long *)0x0) {
          FUN_017ee188(&local_168,plVar17);
        }
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar16);
  }
  FUN_00db239c(auStack_c8);
  FUN_00db239c(auStack_108);
  FUN_00fb9e50(local_120,param_1 + 0xa8,param_1 + 0xe8);
  FUN_00fb4dd0(auStack_138,local_120);
  local_70 = (long *)0x0;
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  piVar6 = (int *)FUN_00efa07c(auStack_138,&local_88);
  if (piVar6 == (int *)0x0) {
    local_19c = 0;
  }
  else {
    local_19c = *piVar6;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_19c != 0) {
    iVar16 = 0;
    plVar1 = (long *)(param_1 + 0x1c0);
    do {
      local_70 = (long *)0x0;
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      local_78 = 6;
      FUN_00e90ee0(&local_150,auStack_138,&local_88,iVar16);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (char *)0x68d23bb3399f48d5;
      local_80 = "LayerName";
      local_78 = 9;
      FUN_00cee868(&local_170,&local_150,&local_88);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_88 = (char *)0xff8f4b5e6204ca59;
      local_80 = "AttrKey";
      local_78 = 7;
      local_70 = (long *)0x0;
      piVar6 = (int *)FUN_00d27b5c(&local_150,&local_88);
      if (((piVar6 == (int *)0x0) || (*(ushort *)((long)piVar6 - (long)*piVar6) < 7)) ||
         (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar9 == 0)) {
        iVar14 = 0;
      }
      else {
        iVar14 = *(int *)((long)piVar6 + uVar9);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      for (plVar18 = *(long **)(param_1 + 0x158); plVar18 != (long *)0x0; plVar18 = (long *)*plVar18
          ) {
        local_88 = (char *)0xff8f4b5e6204ca59;
        local_80 = "AttrKey";
        local_78 = 7;
        local_70 = (long *)0x0;
        piVar6 = (int *)FUN_00d27b5c(plVar18 + 6,&local_88);
        if (((piVar6 == (int *)0x0) || (*(ushort *)((long)piVar6 - (long)*piVar6) < 7)) ||
           (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar9 == 0)) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((long)piVar6 + uVar9);
        }
        if (local_70 != (long *)0x0) {
          (**(code **)(*local_70 + 0x20))();
        }
        plVar7 = local_170;
        if (iVar5 == iVar14) {
          plVar17 = *(long **)(param_1 + 0x198);
          if (plVar17 == (long *)0x0) {
LAB_017ed358:
            plVar19 = (long *)(**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))
                                        (*(long **)(param_1 + 0x1c8),0x38,8);
            if (plVar19 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x1c8) + 0xe8))();
            }
            uVar15 = *(undefined8 *)(param_1 + 0x1c8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar8 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_017ed988;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            plVar19[2] = (long)local_170;
            plVar19[3] = (long)local_168;
            plVar19[4] = local_160;
            plVar19[5] = (long)local_158;
            if (local_158 != (long *)0x0) {
              (**(code **)(*local_158 + 0x18))();
            }
            plVar19[6] = 0;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            *plVar19 = 0;
            plVar19[1] = (long)plVar7;
            fVar20 = (float)(*(long *)(param_1 + 0x1e8) + 1);
            if ((plVar17 == (long *)0x0) ||
               (plVar12 = local_190, *(float *)(param_1 + 0x1f0) * (float)plVar17 < fVar20)) {
              uVar9 = (ulong)(plVar17 < (long *)0x3 || ((ulong)plVar17 & (long)plVar17 - 1U) != 0) |
                      (long)plVar17 << 1;
              uVar13 = (ulong)(fVar20 / *(float *)(param_1 + 0x1f0));
              if (uVar13 <= uVar9) {
                uVar13 = uVar9;
              }
              if (uVar13 - 1 == 0) {
                uVar13 = 2;
              }
              else if ((uVar13 & uVar13 - 1) != 0) {
                uVar13 = std::__next_prime(uVar13);
              }
              uVar9 = *(ulong *)(param_1 + 0x198);
              if (uVar9 < uVar13) {
                uVar10 = uVar13;
LAB_017ed5a8:
                FUN_017ed98c(plVar2,uVar10);
              }
              else if (uVar13 < uVar9) {
                uVar10 = (ulong)((float)*(ulong *)(param_1 + 0x1e8) / *(float *)(param_1 + 0x1f0));
                if ((uVar9 < 3) ||
                   (uVar11 = uVar9 - (uVar9 >> 1 & 0x5555555555555555),
                   uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333),
                   1 < (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
                  uVar10 = std::__next_prime(uVar10);
                }
                else if (1 < uVar10) {
                  uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
                }
                if (uVar10 <= uVar13) {
                  uVar10 = uVar13;
                }
                if (uVar10 < uVar9) goto LAB_017ed5a8;
              }
              plVar17 = *(long **)(param_1 + 0x198);
              if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
                plVar12 = (long *)((long)plVar17 - 1U & (ulong)plVar7);
              }
              else if (plVar7 < plVar17) {
                plVar12 = plVar7;
              }
              else {
                uVar9 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar9 = (ulong)plVar7 / (ulong)plVar17;
                }
                plVar12 = (long *)((long)plVar7 - uVar9 * (long)plVar17);
              }
            }
            plVar7 = *(long **)(*plVar2 + (long)plVar12 * 8);
            if (plVar7 == (long *)0x0) {
              *plVar19 = *plVar1;
              *plVar1 = (long)plVar19;
              *(long **)(*plVar2 + (long)plVar12 * 8) = plVar1;
              if (*plVar19 != 0) {
                plVar7 = *(long **)(*plVar19 + 8);
                if (((ulong)plVar17 & (long)plVar17 - 1U) == 0) {
                  plVar7 = (long *)((ulong)plVar7 & (long)plVar17 - 1U);
                }
                else if (plVar17 <= plVar7) {
                  uVar9 = 0;
                  if (plVar17 != (long *)0x0) {
                    uVar9 = (ulong)plVar7 / (ulong)plVar17;
                  }
                  plVar7 = (long *)((long)plVar7 - uVar9 * (long)plVar17);
                }
                plVar7 = (long *)(*plVar2 + (long)plVar7 * 8);
                goto LAB_017ed47c;
              }
            }
            else {
              *plVar19 = *plVar7;
LAB_017ed47c:
              *plVar7 = (long)plVar19;
            }
            *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 1;
          }
          else {
            uVar9 = (long)plVar17 - 1;
            if (((ulong)plVar17 & uVar9) == 0) {
              local_190 = (long *)(uVar9 & (ulong)local_170);
              plVar19 = *(long **)(*plVar2 + (long)local_190 * 8);
              if (plVar19 == (long *)0x0) goto LAB_017ed358;
              do {
                plVar19 = (long *)*plVar19;
                if ((plVar19 == (long *)0x0) ||
                   ((long *)plVar19[1] != local_170 &&
                    (long *)((ulong)plVar19[1] & uVar9) != local_190)) goto LAB_017ed358;
              } while ((long *)plVar19[2] != local_170);
            }
            else {
              local_190 = local_170;
              if (plVar17 <= local_170) {
                uVar9 = 0;
                if (plVar17 != (long *)0x0) {
                  uVar9 = (ulong)local_170 / (ulong)plVar17;
                }
                local_190 = (long *)((long)local_170 - uVar9 * (long)plVar17);
              }
              plVar19 = *(long **)(*plVar2 + (long)local_190 * 8);
              if (plVar19 == (long *)0x0) goto LAB_017ed358;
              do {
                plVar19 = (long *)*plVar19;
                if (plVar19 == (long *)0x0) goto LAB_017ed358;
                plVar12 = (long *)plVar19[1];
                if (plVar12 != local_170) {
                  if (plVar17 <= plVar12) {
                    uVar9 = 0;
                    if (plVar17 != (long *)0x0) {
                      uVar9 = (ulong)plVar12 / (ulong)plVar17;
                    }
                    plVar12 = (long *)((long)plVar12 - uVar9 * (long)plVar17);
                  }
                  if (plVar12 != local_190) goto LAB_017ed358;
                }
              } while ((long *)plVar19[2] != local_170);
            }
          }
          plVar19[6] = (long)(plVar18 + 6);
        }
      }
      if (local_158 != (long *)0x0) {
        (**(code **)(*local_158 + 0x20))();
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != local_19c);
  }
  FUN_00db239c(auStack_c8);
  FUN_00db239c(auStack_108);
  return;
}


