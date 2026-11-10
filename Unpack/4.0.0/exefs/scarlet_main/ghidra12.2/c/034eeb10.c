/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034eeb10; name: FUN_034eeb10
 */


long FUN_034eeb10(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long local_d0 [3];
  undefined8 *local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 *local_a0;
  long local_98;
  long lStack_90;
  undefined8 *local_88;
  long local_80 [2];
  undefined8 *local_70;
  long local_68;
  
  local_d0[1] = *param_1;
  if ((local_d0[1] != 0) && (*(long **)(local_d0[1] + 0xa0) != (long *)0x0)) {
    lVar8 = (**(code **)(**(long **)(local_d0[1] + 0xa0) + 0x110))();
    if (lVar8 != 0) {
      puVar12 = (undefined8 *)param_1[2];
      if (puVar12 != (undefined8 *)0x0) {
        uVar9 = *(uint *)(puVar12 + 0x10);
        if (uVar9 < 2) {
          *(uint *)(puVar12 + 0x10) = uVar9 + 1;
          if ((uVar9 != 0) && (*(char *)((long)puVar12 + 0x84) != '\0')) {
            FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,puVar12);
          }
        }
        else {
          *(uint *)(puVar12 + 0x10) = uVar9 + 1;
        }
      }
      puVar5 = PTR_DAT_047e6cb8;
      if ((*(byte *)(*param_1 + 0xdc) >> 3 & 1) == 0) {
        if (DAT_048b0810 != 0) {
          lVar11 = (ulong)DAT_048b0810 << 3;
          plVar14 = DAT_048b0808;
          do {
            lVar13 = *plVar14;
            if ((((*(long *)(lVar13 + 0x60) == lVar8) && (*(long *)(lVar13 + 0x68) == 0)) &&
                (*(undefined8 **)(lVar13 + 0x70) == puVar12)) &&
               ((*(long *)(lVar13 + 8) == 0 ||
                (*(char *)(*(long *)(*(long *)(lVar13 + 8) + 0x10) + 0x84) != '\0')))) {
              if (puVar12 == (undefined8 *)0x0) goto LAB_034ef1c0;
              iVar7 = *(int *)(puVar12 + 0x10);
              uVar9 = iVar7 - 1;
              *(uint *)(puVar12 + 0x10) = uVar9;
              if (iVar7 == 0 || uVar9 == 0) {
                if (uVar9 != 0) goto LAB_034ef1c0;
LAB_034ef580:
                lVar8 = puVar12[5];
                if (lVar8 != 0) {
                  uVar9 = ((uint)lVar8 ^ (uint)lVar8 >> 0x10) * -0x7a143595;
                  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                  local_80[0] = lVar8;
                  FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
                  uVar9 = *(uint *)(puVar12 + 0x10);
                }
              }
              else {
                if (1 < uVar9) goto LAB_034ef1c0;
                if (*(char *)((long)puVar12 + 0x84) != '\0') goto LAB_034ef580;
              }
              if (uVar9 == 0) {
                (**(code **)*puVar12)(puVar12);
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar12);
              }
              goto LAB_034ef1c0;
            }
            plVar14 = plVar14 + 1;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
        local_80[1] = 0;
        local_80[0] = lVar8;
        local_70 = puVar12;
        lVar13 = FUN_034eeb10(local_80);
        puVar12 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          iVar7 = *(int *)(local_70 + 0x10);
          uVar9 = iVar7 - 1;
          *(uint *)(local_70 + 0x10) = uVar9;
          if (iVar7 == 0 || uVar9 == 0) {
            if (uVar9 == 0) {
LAB_034ef148:
              lVar8 = local_70[5];
              if (lVar8 != 0) {
                uVar9 = ((uint)lVar8 ^ (uint)lVar8 >> 0x10) * -0x7a143595;
                uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                local_68 = lVar8;
                FUN_034c6294(&DAT_048b02b8,&local_68,uVar9 ^ uVar9 >> 0x10);
                uVar9 = *(uint *)(puVar12 + 0x10);
              }
              goto LAB_034ef18c;
            }
          }
          else if (uVar9 < 2) {
            if (*(char *)((long)local_70 + 0x84) != '\0') goto LAB_034ef148;
LAB_034ef18c:
            if (uVar9 == 0) {
              (**(code **)*puVar12)(puVar12);
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar12);
            }
          }
          local_70 = (undefined8 *)0x0;
        }
        if (lVar13 == 0) {
          return 0;
        }
LAB_034ef1c0:
        local_b0 = *param_1;
        lStack_a8 = param_1[1];
        local_a0 = (undefined8 *)param_1[2];
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        lVar8 = FUN_034ef5f4(&local_b0,lVar13);
        puVar12 = local_a0;
        if (local_a0 == (undefined8 *)0x0) {
          return lVar8;
        }
        iVar7 = *(int *)(local_a0 + 0x10);
        uVar9 = iVar7 - 1;
        *(uint *)(local_a0 + 0x10) = uVar9;
        if (iVar7 == 0 || uVar9 == 0) {
          if (uVar9 != 0) {
            return lVar8;
          }
        }
        else {
          if (1 < uVar9) {
            return lVar8;
          }
          if (*(char *)((long)local_a0 + 0x84) == '\0') goto LAB_034ef2c4;
        }
        lVar11 = local_a0[5];
        if (lVar11 != 0) {
          uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
          uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
          local_80[0] = lVar11;
          FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
          uVar9 = *(uint *)(puVar12 + 0x10);
        }
LAB_034ef2c4:
        if (uVar9 == 0) {
          (**(code **)*puVar12)(puVar12);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar12);
          return lVar8;
        }
        return lVar8;
      }
      lVar11 = param_1[2];
      if (lVar11 == 0) {
LAB_034ef3d8:
        lVar8 = 0;
      }
      else {
        plVar14 = *(long **)(lVar11 + 0x30);
        local_d0[0] = lVar11;
        if ((plVar14 == (long *)0x0) &&
           (plVar14 = *(long **)PTR_DAT_047e6cb8, plVar14 == (long *)0x0)) {
          plVar14 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
          *plVar14 = (long)(PTR_DAT_047e6e40 + 0x10);
          plVar14[1] = 0;
          puVar1 = PTR_DAT_047e6958;
          lVar11 = *(long *)(PTR_DAT_047e6958 + 8);
          plVar14[2] = 0;
          plVar14[3] = lVar11;
          plVar15 = (long *)(puVar1 + 0x10);
          if (*(long *)(puVar1 + 0x10) != 0) {
            plVar15 = (long *)(lVar11 + 0x10);
          }
          *plVar15 = (long)plVar14;
          *(long **)(puVar1 + 8) = plVar14;
          *(int *)puVar1 = *(int *)puVar1 + 1;
          puVar1 = PTR_DAT_047e6e48 + 0x10;
          plVar14[8] = 0;
          plVar14[9] = 0;
          plVar14[0xc] = 0;
          plVar14[0xd] = 0;
          *plVar14 = (long)puVar1;
          plVar14[0x12] = 0;
          plVar14[0x13] = 0;
          plVar14[0x16] = 0;
          plVar14[0x17] = 0;
          plVar14[0x1a] = 0;
          plVar14[0x1b] = 0;
          *(long **)puVar5 = plVar14;
          *(undefined2 *)(plVar14 + 0x1c) = 0x101;
        }
        puVar6 = PTR_DAT_047e6cb8;
        puVar1 = PTR_DAT_047e6958;
        puVar5 = PTR_DAT_047e2fd0;
        if ((char)plVar14[0x1c] == '\0') {
          puVar2 = PTR_DAT_047e6e40 + 0x10;
          plVar14 = *(long **)PTR_DAT_047e6cb8;
          puVar3 = PTR_DAT_047e6e48 + 0x10;
          do {
            if (plVar14 == (long *)0x0) {
              plVar14 = (long *)(**(code **)(puVar5 + 0x10))(4,0xf0);
              *plVar14 = (long)puVar2;
              plVar14[1] = 0;
              lVar11 = *(long *)(puVar1 + 8);
              plVar14[2] = 0;
              plVar14[3] = lVar11;
              plVar15 = (long *)(puVar1 + 0x10);
              if (*(long *)(puVar1 + 0x10) != 0) {
                plVar15 = (long *)(lVar11 + 0x10);
              }
              *plVar15 = (long)plVar14;
              *(long **)(puVar1 + 8) = plVar14;
              *(int *)puVar1 = *(int *)puVar1 + 1;
              *plVar14 = (long)puVar3;
              plVar14[8] = 0;
              plVar14[9] = 0;
              plVar14[0xc] = 0;
              plVar14[0xd] = 0;
              plVar14[0x12] = 0;
              plVar14[0x13] = 0;
              plVar14[0x16] = 0;
              plVar14[0x17] = 0;
              plVar14[0x1a] = 0;
              plVar14[0x1b] = 0;
              *(long **)puVar6 = plVar14;
              *(undefined2 *)(plVar14 + 0x1c) = 0x101;
            }
          } while ((char)plVar14[0x1c] == '\0');
        }
        lVar11 = local_d0[0];
        puVar5 = PTR_DAT_047e2fd0;
        if (*(uint *)(plVar14 + 0xd) == 0) goto LAB_034ef3d8;
        if (*(long *)(local_d0[0] + 0x28) == 0) {
          plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x58);
          if (plVar15 != (long *)0x0) {
            *plVar15 = (long)(PTR_DAT_047e72c0 + 0x10);
            plVar15[1] = 0;
            puVar1 = PTR_DAT_047e6f98;
            lVar13 = *(long *)(PTR_DAT_047e6f98 + 8);
            plVar15[2] = 0;
            plVar15[3] = lVar13;
            plVar16 = (long *)(puVar1 + 0x10);
            if (*(long *)(puVar1 + 0x10) != 0) {
              plVar16 = (long *)(lVar13 + 0x10);
            }
            *plVar16 = (long)plVar15;
            *(long **)(puVar1 + 8) = plVar15;
            *(int *)puVar1 = *(int *)puVar1 + 1;
            puVar1 = PTR_DAT_047e72c8;
            plVar15[6] = 0;
            plVar15[4] = 0;
            plVar15[5] = 0;
            *(undefined2 *)(plVar15 + 7) = 0;
            plVar15[8] = 0;
            plVar15[9] = 0;
            *plVar15 = (long)(puVar1 + 0x10);
            *(byte *)((long)plVar15 + 0x3a) = *(byte *)((long)plVar15 + 0x3a) & 0xf8;
            *(undefined4 *)(plVar15 + 10) = 0x3f800000;
            *(byte *)((long)plVar15 + 0x54) = *(byte *)((long)plVar15 + 0x54) | 1;
            *(long **)(lVar11 + 0x28) = plVar15;
            plVar15[1] = lVar11;
            iVar7 = (**(code **)(*plVar15 + 0x10))(plVar15,*(undefined8 *)(lVar11 + 0x78));
            if (iVar7 != 1) {
              (**(code **)*plVar15)(plVar15);
              (**(code **)(puVar5 + 0x30))(4,plVar15);
              lVar8 = 0;
              *(undefined8 *)(lVar11 + 0x28) = 0;
              goto LAB_034ef3dc;
            }
            puVar18 = (undefined8 *)
                      ((long)local_d0 - ((ulong)*(uint *)(plVar14 + 0xd) * 8 + 0xf & 0xffffffff0));
            if (*(uint *)(plVar14 + 0xd) != 0) goto LAB_034eeedc;
          }
          goto LAB_034ef3d8;
        }
        puVar18 = (undefined8 *)
                  ((long)local_d0 - ((ulong)*(uint *)(plVar14 + 0xd) * 8 + 0xf & 0xffffffff0));
LAB_034eeedc:
        plVar15 = (long *)plVar14[0xc];
        uVar19 = 0;
        do {
          uVar9 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
          if (uVar9 != 0) {
            uVar4 = 0;
            uVar10 = (uint)*plVar15;
            if (uVar9 != 0) {
              uVar4 = uVar10 / uVar9;
            }
            for (plVar16 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                                     (ulong)(uVar10 - uVar4 * uVar9) * 8); plVar16 != (long *)0x0;
                plVar16 = (long *)*plVar16) {
              if (plVar16[1] == *plVar15) {
                lVar11 = plVar16[2];
                uVar9 = *(uint *)(lVar11 + 0x80);
                if (uVar9 < 2) {
                  *(uint *)(lVar11 + 0x80) = uVar9 + 1;
                  if (uVar9 != 0 && *(char *)(lVar11 + 0x84) != '\0') {
                    FUN_034c60b0();
                  }
                }
                else {
                  *(uint *)(lVar11 + 0x80) = uVar9 + 1;
                }
                puVar17 = (undefined8 *)plVar16[2];
                goto LAB_034eef2c;
              }
            }
          }
          puVar17 = (undefined8 *)0x0;
LAB_034eef2c:
          if (DAT_048b0810 != 0) {
            lVar11 = (ulong)DAT_048b0810 << 3;
            plVar16 = DAT_048b0808;
            do {
              lVar13 = *plVar16;
              if ((((*(long *)(lVar13 + 0x60) == lVar8) && (*(long *)(lVar13 + 0x68) == 0)) &&
                  (*(undefined8 **)(lVar13 + 0x70) == puVar17)) &&
                 ((*(long *)(lVar13 + 8) == 0 ||
                  (*(char *)(*(long *)(*(long *)(lVar13 + 8) + 0x10) + 0x84) != '\0')))) {
                if (puVar17 == (undefined8 *)0x0) goto LAB_034ef040;
                iVar7 = *(int *)(puVar17 + 0x10);
                uVar9 = iVar7 - 1;
                *(uint *)(puVar17 + 0x10) = uVar9;
                if (iVar7 == 0 || uVar9 == 0) {
                  if (uVar9 != 0) goto LAB_034ef040;
LAB_034ef0d0:
                  lVar11 = puVar17[5];
                  if (lVar11 != 0) {
                    uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
                    uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                    local_80[0] = lVar11;
                    FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
                    uVar9 = *(uint *)(puVar17 + 0x10);
                  }
                }
                else {
                  if (1 < uVar9) goto LAB_034ef040;
                  if (*(char *)((long)puVar17 + 0x84) != '\0') goto LAB_034ef0d0;
                }
                if (uVar9 == 0) {
                  (**(code **)*puVar17)(puVar17);
                  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar17);
                }
                goto LAB_034ef040;
              }
              plVar16 = plVar16 + 1;
              lVar11 = lVar11 + -8;
            } while (lVar11 != 0);
          }
          local_80[1] = 0;
          local_80[0] = lVar8;
          local_70 = puVar17;
          lVar13 = FUN_034eeb10(local_80);
          puVar17 = local_70;
          if (local_70 != (undefined8 *)0x0) {
            iVar7 = *(int *)(local_70 + 0x10);
            uVar9 = iVar7 - 1;
            *(uint *)(local_70 + 0x10) = uVar9;
            if (iVar7 == 0 || uVar9 == 0) {
              if (uVar9 == 0) {
LAB_034eefc8:
                lVar11 = local_70[5];
                if (lVar11 != 0) {
                  uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
                  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                  local_68 = lVar11;
                  FUN_034c6294(&DAT_048b02b8,&local_68,uVar9 ^ uVar9 >> 0x10);
                  uVar9 = *(uint *)(puVar17 + 0x10);
                }
                goto LAB_034ef00c;
              }
            }
            else if (uVar9 < 2) {
              if (*(char *)((long)local_70 + 0x84) != '\0') goto LAB_034eefc8;
LAB_034ef00c:
              if (uVar9 == 0) {
                (**(code **)*puVar17)(puVar17);
                (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar17);
              }
            }
            local_70 = (undefined8 *)0x0;
          }
          if (lVar13 != 0) {
LAB_034ef040:
            puVar18[uVar19] = lVar13;
            uVar19 = (ulong)((int)uVar19 + 1);
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != (long *)(plVar14[0xc] + (ulong)*(uint *)(plVar14 + 0xd) * 8));
        if ((uint)uVar19 == 0) goto LAB_034ef3d8;
        local_98 = *param_1;
        lStack_90 = param_1[1];
        local_88 = (undefined8 *)param_1[2];
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        lVar8 = FUN_034ef5f4(&local_98,*puVar18);
        puVar17 = local_88;
        if (local_88 != (undefined8 *)0x0) {
          iVar7 = *(int *)(local_88 + 0x10);
          uVar9 = iVar7 - 1;
          *(uint *)(local_88 + 0x10) = uVar9;
          if (iVar7 == 0 || uVar9 == 0) {
            if (uVar9 == 0) {
LAB_034ef4a8:
              lVar11 = local_88[5];
              if (lVar11 != 0) {
                uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
                uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                local_80[0] = lVar11;
                FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
                uVar9 = *(uint *)(puVar17 + 0x10);
              }
              goto LAB_034ef4ec;
            }
          }
          else if (uVar9 < 2) {
            if (*(char *)((long)local_88 + 0x84) != '\0') goto LAB_034ef4a8;
LAB_034ef4ec:
            if (uVar9 == 0) {
              (**(code **)*puVar17)(puVar17);
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar17);
            }
          }
          local_88 = (undefined8 *)0x0;
        }
        if ((lVar8 != 0) && (1 < (uint)uVar19)) {
          lVar11 = uVar19 - 1;
          do {
            puVar18 = puVar18 + 1;
            FUN_035000f0(lVar8,*puVar18,0);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
LAB_034ef3dc:
      if (puVar12 == (undefined8 *)0x0) {
        return lVar8;
      }
      iVar7 = *(int *)(puVar12 + 0x10);
      uVar9 = iVar7 - 1;
      *(uint *)(puVar12 + 0x10) = uVar9;
      if (iVar7 == 0 || uVar9 == 0) {
        if (uVar9 != 0) {
          return lVar8;
        }
      }
      else {
        if (1 < uVar9) {
          return lVar8;
        }
        if (*(char *)((long)puVar12 + 0x84) == '\0') goto LAB_034ef44c;
      }
      lVar11 = puVar12[5];
      if (lVar11 != 0) {
        uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
        uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
        local_80[0] = lVar11;
        FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
        uVar9 = *(uint *)(puVar12 + 0x10);
      }
LAB_034ef44c:
      if (uVar9 == 0) {
        (**(code **)*puVar12)(puVar12);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar12);
        return lVar8;
      }
      return lVar8;
    }
    local_d0[1] = *param_1;
  }
  local_d0[2] = param_1[1];
  local_b8 = (undefined8 *)param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar8 = FUN_034ef5f4(local_d0 + 1,0);
  puVar12 = local_b8;
  if (local_b8 == (undefined8 *)0x0) {
    return lVar8;
  }
  iVar7 = *(int *)(local_b8 + 0x10);
  uVar9 = iVar7 - 1;
  *(uint *)(local_b8 + 0x10) = uVar9;
  if (iVar7 == 0 || uVar9 == 0) {
    if (uVar9 != 0) {
      return lVar8;
    }
  }
  else {
    if (1 < uVar9) {
      return lVar8;
    }
    if (*(char *)((long)local_b8 + 0x84) == '\0') goto LAB_034eec18;
  }
  lVar11 = local_b8[5];
  if (lVar11 != 0) {
    uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
    uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
    local_80[0] = lVar11;
    FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
    uVar9 = *(uint *)(puVar12 + 0x10);
  }
LAB_034eec18:
  if (uVar9 == 0) {
    (**(code **)*puVar12)(puVar12);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar12);
  }
  return lVar8;
}


