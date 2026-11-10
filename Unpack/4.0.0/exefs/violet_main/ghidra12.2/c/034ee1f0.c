/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ee1f0; name: FUN_034ee1f0
 */


void FUN_034ee1f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  long local_98 [2];
  undefined8 *local_88;
  long local_80 [2];
  undefined8 *local_70;
  long local_68;
  
  lVar11 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    lVar11 = *(long *)(param_1 + 8) + -0x18;
  }
  if (((*(byte *)(lVar11 + 0x1b0) >> 6 & 1) != 0) ||
     (lVar8 = (**(code **)(**(long **)(lVar11 + 0x188) + 0x110))(), puVar6 = PTR_DAT_047e6cb8,
     lVar8 == 0)) {
    lVar8 = *(long *)(PTR_DAT_047e6f80 + 0x10);
    while( true ) {
      if (lVar8 == 0) {
        return;
      }
      if (*(char *)(lVar8 + 0x46d) != '\0') break;
      lVar8 = *(long *)(lVar8 + 0x20);
    }
    puVar13 = *(undefined8 **)(lVar11 + 0x28);
    if (puVar13 != (undefined8 *)0x0) {
      uVar9 = *(uint *)(puVar13 + 0x10);
      if (uVar9 < 2) {
        *(uint *)(puVar13 + 0x10) = uVar9 + 1;
        if ((uVar9 != 0) && (*(char *)((long)puVar13 + 0x84) != '\0')) {
          FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,puVar13);
        }
      }
      else {
        *(uint *)(puVar13 + 0x10) = uVar9 + 1;
      }
    }
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = puVar13;
    FUN_034eddd0(&local_b0,param_1,0);
    puVar13 = local_a0;
    if (local_a0 == (undefined8 *)0x0) {
      return;
    }
    iVar4 = *(int *)(local_a0 + 0x10);
    uVar9 = iVar4 - 1;
    *(uint *)(local_a0 + 0x10) = uVar9;
    if (iVar4 == 0 || uVar9 == 0) {
      if (uVar9 != 0) {
        return;
      }
    }
    else {
      if (1 < uVar9) {
        return;
      }
      if (*(char *)((long)local_a0 + 0x84) == '\0') goto LAB_034ee778;
    }
    lVar11 = local_a0[5];
    if (lVar11 != 0) {
      uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
      uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
      local_80[0] = lVar11;
      FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
      uVar9 = *(uint *)(puVar13 + 0x10);
    }
LAB_034ee778:
    if (uVar9 == 0) {
      (**(code **)*puVar13)(puVar13);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar13);
      return;
    }
    return;
  }
  puVar13 = *(undefined8 **)(lVar11 + 0x28);
  if ((*(byte *)(lVar11 + 0x128) >> 3 & 1) != 0) {
    plVar14 = (long *)puVar13[6];
    if ((plVar14 == (long *)0x0) && (plVar14 = *(long **)PTR_DAT_047e6cb8, plVar14 == (long *)0x0))
    {
      plVar14 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
      *plVar14 = (long)(PTR_DAT_047e6e40 + 0x10);
      plVar14[1] = 0;
      puVar1 = PTR_DAT_047e6958;
      lVar11 = *(long *)(PTR_DAT_047e6958 + 8);
      plVar14[2] = 0;
      plVar14[3] = lVar11;
      plVar16 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar16 = (long *)(lVar11 + 0x10);
      }
      *plVar16 = (long)plVar14;
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
      *(long **)puVar6 = plVar14;
      *(undefined2 *)(plVar14 + 0x1c) = 0x101;
    }
    puVar7 = PTR_DAT_047e6cb8;
    puVar1 = PTR_DAT_047e6958;
    puVar6 = PTR_DAT_047e2fd0;
    if ((char)plVar14[0x1c] == '\0') {
      puVar2 = PTR_DAT_047e6e40 + 0x10;
      plVar14 = *(long **)PTR_DAT_047e6cb8;
      puVar3 = PTR_DAT_047e6e48 + 0x10;
      do {
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)(**(code **)(puVar6 + 0x10))(4,0xf0);
          *plVar14 = (long)puVar2;
          plVar14[1] = 0;
          lVar11 = *(long *)(puVar1 + 8);
          plVar14[2] = 0;
          plVar14[3] = lVar11;
          plVar16 = (long *)(puVar1 + 0x10);
          if (*(long *)(puVar1 + 0x10) != 0) {
            plVar16 = (long *)(lVar11 + 0x10);
          }
          *plVar16 = (long)plVar14;
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
          *(long **)puVar7 = plVar14;
          *(undefined2 *)(plVar14 + 0x1c) = 0x101;
        }
      } while ((char)plVar14[0x1c] == '\0');
    }
    puVar6 = PTR_DAT_047e6cc0;
    if ((int)plVar14[0xd] == 0) {
      return;
    }
    plVar16 = (long *)plVar14[0xc];
    do {
      lVar10 = *plVar16;
      for (lVar11 = *(long *)(param_1 + 0x28); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x20)) {
        if (*(long *)(*(long *)(lVar11 + 0x198) + 0x60) == lVar8) {
          lVar12 = *(long *)(*(long *)(lVar11 + 0x198) + 0x70);
          if (lVar12 == 0) {
            lVar12 = -1;
          }
          else {
            lVar12 = *(long *)(lVar12 + 0x78);
          }
          if (lVar12 == lVar10) goto LAB_034ee5c8;
        }
      }
      uVar9 = *(uint *)(*(long *)puVar6 + 0x38);
      if (uVar9 != 0) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = (uint)lVar10 / uVar9;
        }
        for (plVar15 = *(long **)(*(long *)(*(long *)puVar6 + 0x30) +
                                 (ulong)((uint)lVar10 - uVar5 * uVar9) * 8); plVar15 != (long *)0x0;
            plVar15 = (long *)*plVar15) {
          if (plVar15[1] == lVar10) {
            lVar11 = plVar15[2];
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
            puVar13 = (undefined8 *)plVar15[2];
            goto LAB_034ee4a8;
          }
        }
      }
      puVar13 = (undefined8 *)0x0;
LAB_034ee4a8:
      if (DAT_048b0810 != 0) {
        lVar11 = (ulong)DAT_048b0810 << 3;
        plVar15 = DAT_048b0808;
        do {
          lVar10 = *plVar15;
          if ((((*(long *)(lVar10 + 0x60) == lVar8) && (*(long *)(lVar10 + 0x68) == 0)) &&
              (*(undefined8 **)(lVar10 + 0x70) == puVar13)) &&
             ((*(long *)(lVar10 + 8) == 0 ||
              (*(char *)(*(long *)(*(long *)(lVar10 + 8) + 0x10) + 0x84) != '\0')))) {
            if (puVar13 == (undefined8 *)0x0) goto LAB_034ee5b8;
            iVar4 = *(int *)(puVar13 + 0x10);
            uVar9 = iVar4 - 1;
            *(uint *)(puVar13 + 0x10) = uVar9;
            if (iVar4 == 0 || uVar9 == 0) {
              if (uVar9 != 0) goto LAB_034ee5b8;
LAB_034ee650:
              lVar11 = puVar13[5];
              if (lVar11 != 0) {
                uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
                uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
                local_80[0] = lVar11;
                FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
                uVar9 = *(uint *)(puVar13 + 0x10);
              }
            }
            else {
              if (1 < uVar9) goto LAB_034ee5b8;
              if (*(char *)((long)puVar13 + 0x84) != '\0') goto LAB_034ee650;
            }
            if (uVar9 == 0) {
              (**(code **)*puVar13)(puVar13);
              (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar13);
            }
            goto LAB_034ee5b8;
          }
          plVar15 = plVar15 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
      local_80[1] = 0;
      local_80[0] = lVar8;
      local_70 = puVar13;
      lVar10 = FUN_034eeb10(local_80);
      puVar13 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        iVar4 = *(int *)(local_70 + 0x10);
        uVar9 = iVar4 - 1;
        *(uint *)(local_70 + 0x10) = uVar9;
        if (iVar4 == 0 || uVar9 == 0) {
          if (uVar9 == 0) {
LAB_034ee540:
            lVar11 = local_70[5];
            if (lVar11 != 0) {
              uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
              uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
              local_68 = lVar11;
              FUN_034c6294(&DAT_048b02b8,&local_68,uVar9 ^ uVar9 >> 0x10);
              uVar9 = *(uint *)(puVar13 + 0x10);
            }
            goto LAB_034ee584;
          }
        }
        else if (uVar9 < 2) {
          if (*(char *)((long)local_70 + 0x84) != '\0') goto LAB_034ee540;
LAB_034ee584:
          if (uVar9 == 0) {
            (**(code **)*puVar13)(puVar13);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar13);
          }
        }
        local_70 = (undefined8 *)0x0;
      }
      if (lVar10 != 0) {
LAB_034ee5b8:
        FUN_035000f0(param_1,lVar10,0);
      }
LAB_034ee5c8:
      plVar16 = plVar16 + 1;
      if (plVar16 == (long *)(plVar14[0xc] + (ulong)*(uint *)(plVar14 + 0xd) * 8)) {
        return;
      }
    } while( true );
  }
  if (puVar13 != (undefined8 *)0x0) {
    uVar9 = *(uint *)(puVar13 + 0x10);
    if (uVar9 < 2) {
      *(uint *)(puVar13 + 0x10) = uVar9 + 1;
      if ((uVar9 != 0) && (*(char *)((long)puVar13 + 0x84) != '\0')) {
        FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0,puVar13);
      }
    }
    else {
      *(uint *)(puVar13 + 0x10) = uVar9 + 1;
    }
  }
  local_98[1] = 0;
  local_98[0] = lVar8;
  local_88 = puVar13;
  FUN_034eddd0(local_98,param_1,0);
  puVar13 = local_88;
  if (local_88 == (undefined8 *)0x0) {
    return;
  }
  iVar4 = *(int *)(local_88 + 0x10);
  uVar9 = iVar4 - 1;
  *(uint *)(local_88 + 0x10) = uVar9;
  if (iVar4 == 0 || uVar9 == 0) {
    if (uVar9 != 0) {
      return;
    }
  }
  else {
    if (1 < uVar9) {
      return;
    }
    if (*(char *)((long)local_88 + 0x84) == '\0') goto LAB_034ee860;
  }
  lVar11 = local_88[5];
  if (lVar11 != 0) {
    uVar9 = ((uint)lVar11 ^ (uint)lVar11 >> 0x10) * -0x7a143595;
    uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
    local_80[0] = lVar11;
    FUN_034c6294(&DAT_048b02b8,local_80,uVar9 ^ uVar9 >> 0x10);
    uVar9 = *(uint *)(puVar13 + 0x10);
  }
LAB_034ee860:
  if (uVar9 == 0) {
    (**(code **)*puVar13)(puVar13);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar13);
  }
  return;
}


