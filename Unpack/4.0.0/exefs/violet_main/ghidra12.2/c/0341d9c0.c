/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341d9c0; name: FUN_0341d9c0
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_0341d9c0(long param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long local_90 [2];
  undefined1 *local_80;
  ulong local_78;
  undefined1 auStack_64 [4];
  
  puVar10 = (undefined8 *)PTR_DAT_047e6cc0;
  plVar16 = (long *)(param_1 + 0x68);
  lVar7 = *plVar16;
  if (lVar7 != 0) {
    uVar8 = *(uint *)(lVar7 + 0x80);
    if (uVar8 < 2) {
      *(uint *)(lVar7 + 0x80) = uVar8 + 1;
      if ((uVar8 != 0) && (*(char *)(lVar7 + 0x84) != '\0')) {
        FUN_034c60b0(*(undefined8 *)PTR_DAT_047e6cc0);
      }
    }
    else {
      *(uint *)(lVar7 + 0x80) = uVar8 + 1;
    }
    return (undefined8 *)*plVar16;
  }
  lVar7 = *(long *)PTR_DAT_047e6cc0;
  uVar8 = *(uint *)(lVar7 + 0x38);
  uVar9 = (uint)param_2;
  if (uVar8 != 0) {
    uVar4 = 0;
    if (uVar8 != 0) {
      uVar4 = uVar9 / uVar8;
    }
    for (plVar11 = *(long **)(*(long *)(lVar7 + 0x30) + (ulong)(uVar9 - uVar4 * uVar8) * 8);
        plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if (plVar11[1] == param_2) {
        lVar7 = plVar11[2];
        uVar8 = *(uint *)(lVar7 + 0x80);
        if (uVar8 < 2) {
          *(uint *)(lVar7 + 0x80) = uVar8 + 1;
          if (uVar8 != 0 && *(char *)(lVar7 + 0x84) != '\0') {
            FUN_034c60b0();
          }
        }
        else {
          *(uint *)(lVar7 + 0x80) = uVar8 + 1;
        }
        puVar13 = (undefined8 *)plVar11[2];
        if (puVar13 != (undefined8 *)0x0) goto LAB_0341dbdc;
        lVar7 = *puVar10;
        break;
      }
    }
  }
  FUN_034c584c(lVar7,param_2,0);
  lVar7 = *puVar10;
  uVar8 = *(uint *)(lVar7 + 0x38);
  if (uVar8 == 0) {
    return (undefined8 *)0x0;
  }
  uVar4 = 0;
  if (uVar8 != 0) {
    uVar4 = uVar9 / uVar8;
  }
  plVar11 = *(long **)(*(long *)(lVar7 + 0x30) + (ulong)(uVar9 - uVar4 * uVar8) * 8);
  if (plVar11 != (long *)0x0) {
    do {
      if (plVar11[1] == param_2) {
        lVar12 = *(long *)(plVar11[2] + 0x28);
        if (lVar12 != 0) {
          if (*(short *)(lVar12 + 0x38) != 0) {
            if (*(long *)(lVar12 + 0x20) == 0) {
LAB_0341e24c:
              memcpy(*(void **)(lVar12 + 0x20),(void *)0x0,0x24);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(undefined2 *)(lVar12 + 0x38) = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
            *(undefined8 *)(lVar12 + 0x20) = 0;
            if (*(short *)(lVar12 + 0x38) != 0) goto LAB_0341e24c;
          }
          *(byte *)(lVar12 + 0x3a) = *(byte *)(lVar12 + 0x3a) & 0xf8 | 2;
          *(byte *)(lVar12 + 0x54) = *(byte *)(lVar12 + 0x54) | 1;
          lVar7 = *puVar10;
          uVar8 = *(uint *)(lVar7 + 0x38);
        }
        break;
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
    if (uVar8 == 0) {
      return (undefined8 *)0x0;
    }
  }
  uVar4 = 0;
  if (uVar8 != 0) {
    uVar4 = uVar9 / uVar8;
  }
  plVar11 = *(long **)(*(long *)(lVar7 + 0x30) + (ulong)(uVar9 - uVar4 * uVar8) * 8);
  if (plVar11 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  while (plVar11[1] != param_2) {
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  lVar7 = plVar11[2];
  uVar8 = *(uint *)(lVar7 + 0x80);
  if (uVar8 < 2) {
    *(uint *)(lVar7 + 0x80) = uVar8 + 1;
    if (uVar8 != 0 && *(char *)(lVar7 + 0x84) != '\0') {
      FUN_034c60b0();
    }
  }
  else {
    *(uint *)(lVar7 + 0x80) = uVar8 + 1;
  }
  puVar13 = (undefined8 *)plVar11[2];
  if (puVar13 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
LAB_0341dbdc:
  puVar5 = PTR_DAT_047e2fd0;
  uVar8 = *(uint *)(*puVar10 + 0x38);
  if (uVar8 != 0) {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = (uint)param_4 / uVar8;
    }
    plVar11 = *(long **)(*(long *)(*puVar10 + 0x30) + (ulong)((uint)param_4 - uVar9 * uVar8) * 8);
    if (plVar11 != (long *)0x0) {
LAB_0341dbfc:
      if (plVar11[1] != param_4) goto code_r0x0341dc08;
      plVar11 = (long *)puVar13[6];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
        if (plVar11 == (long *)0x0) goto LAB_0341de30;
        *plVar11 = (long)(PTR_DAT_047e6e40 + 0x10);
        plVar11[1] = 0;
        puVar1 = PTR_DAT_047e6958;
        lVar7 = *(long *)(PTR_DAT_047e6958 + 8);
        plVar11[2] = 0;
        plVar11[3] = lVar7;
        plVar14 = (long *)(puVar1 + 0x10);
        if (*(long *)(puVar1 + 0x10) != 0) {
          plVar14 = (long *)(lVar7 + 0x10);
        }
        *plVar14 = (long)plVar11;
        *(long **)(puVar1 + 8) = plVar11;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = PTR_DAT_047e6e48;
        *(undefined2 *)(plVar11 + 0x1c) = 0;
        plVar11[8] = 0;
        plVar11[9] = 0;
        plVar11[0xc] = 0;
        plVar11[0xd] = 0;
        *plVar11 = (long)(puVar1 + 0x10);
        plVar11[0x12] = 0;
        plVar11[0x13] = 0;
        plVar11[0x16] = 0;
        plVar11[0x17] = 0;
        plVar11[0x1a] = 0;
        plVar11[0x1b] = 0;
        puVar13[6] = plVar11;
        plVar11[1] = (long)puVar13;
        iVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar13[0xf]);
        if (iVar6 != 1) {
          (**(code **)*plVar11)(plVar11);
          (**(code **)(puVar5 + 0x30))(4,plVar11);
          puVar13[6] = 0;
          goto LAB_0341de30;
        }
      }
      puVar5 = PTR_DAT_047e6958;
      if ((char)plVar11[0x1c] == '\0') {
        puVar1 = PTR_DAT_047e6e40 + 0x10;
        plVar11 = *(long **)PTR_DAT_047e6cb8;
        puVar2 = PTR_DAT_047e6e48 + 0x10;
        do {
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
            *plVar11 = (long)puVar1;
            plVar11[1] = 0;
            lVar7 = *(long *)(puVar5 + 8);
            plVar11[2] = 0;
            plVar11[3] = lVar7;
            plVar14 = (long *)(puVar5 + 0x10);
            if (*(long *)(puVar5 + 0x10) != 0) {
              plVar14 = (long *)(lVar7 + 0x10);
            }
            *plVar14 = (long)plVar11;
            *(long **)(puVar5 + 8) = plVar11;
            *(int *)puVar5 = *(int *)puVar5 + 1;
            *plVar11 = (long)puVar2;
            plVar11[8] = 0;
            plVar11[9] = 0;
            plVar11[0xc] = 0;
            plVar11[0xd] = 0;
            plVar11[0x12] = 0;
            plVar11[0x13] = 0;
            plVar11[0x16] = 0;
            plVar11[0x17] = 0;
            plVar11[0x1a] = 0;
            plVar11[0x1b] = 0;
            *(long **)PTR_DAT_047e6cb8 = plVar11;
            *(undefined2 *)(plVar11 + 0x1c) = 0x101;
          }
        } while ((char)plVar11[0x1c] == '\0');
      }
      puVar10 = (undefined8 *)PTR_DAT_047e6cc0;
      if (((int)plVar11[0xd] != 1) || (*(long *)plVar11[0xc] != param_4)) {
        local_80 = (undefined1 *)0x0;
        local_78 = 0;
        FUN_03411c9c(local_90,param_4,auStack_64);
        FUN_034c66e4(*puVar10,puVar13[0xf],local_90,0);
        if (local_80 != (undefined1 *)0x0) {
          local_78 = local_78 & 0xffffffff00000000;
          if (local_90 != (long *)local_80) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
          }
          local_80 = (undefined1 *)0x0;
          local_78 = local_78 & 0xffffffff;
        }
      }
    }
  }
LAB_0341de30:
  puVar5 = PTR_DAT_047e2fd0;
  plVar11 = (long *)puVar13[0xe];
  if ((plVar11 == (long *)0x0) &&
     (plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x30), plVar11 != (long *)0x0)) {
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)&PTR_LAB_047bf538;
    plVar11[1] = 0;
    puVar1 = PTR_DAT_047e6d00;
    lVar7 = *(long *)(PTR_DAT_047e6d00 + 8);
    plVar11[2] = 0;
    plVar11[3] = lVar7;
    plVar14 = (long *)(puVar1 + 0x10);
    if (*(long *)(puVar1 + 0x10) != 0) {
      plVar14 = (long *)(lVar7 + 0x10);
    }
    *plVar14 = (long)plVar11;
    *(long **)(puVar1 + 8) = plVar11;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar1 = PTR_DAT_047e6e50;
    plVar11[4] = 0;
    *(undefined4 *)(plVar11 + 5) = 0;
    *(undefined1 *)((long)plVar11 + 0x2c) = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    puVar13[0xe] = plVar11;
    plVar11[1] = (long)puVar13;
    iVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar13[0xf]);
    if (iVar6 != 1) {
      (**(code **)*plVar11)(plVar11);
      (**(code **)(puVar5 + 0x30))(4,plVar11);
      plVar11 = (long *)0x0;
      puVar13[0xe] = 0;
    }
  }
  puVar5 = PTR_DAT_047e2fd0;
  plVar14 = (long *)puVar13[8];
  if ((plVar14 == (long *)0x0) &&
     (plVar14 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x90), puVar1 = PTR_DAT_047e6d58,
     plVar14 != (long *)0x0)) {
    *plVar14 = (long)(PTR_DAT_047e6d50 + 0x10);
    plVar14[1] = 0;
    lVar7 = *(long *)(puVar1 + 8);
    plVar14[2] = 0;
    plVar14[3] = lVar7;
    plVar15 = (long *)(puVar1 + 0x10);
    if (*(long *)(puVar1 + 0x10) != 0) {
      plVar15 = (long *)(lVar7 + 0x10);
    }
    *plVar15 = (long)plVar14;
    *(long **)(puVar1 + 8) = plVar14;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    puVar1 = PTR_DAT_047e6d60;
    plVar14[6] = 0;
    plVar14[4] = 0;
    plVar14[5] = 0;
    *(undefined4 *)(plVar14 + 7) = 0;
    *(undefined8 *)((long)plVar14 + 0x74) = 0;
    *(undefined8 *)((long)plVar14 + 0x7c) = 0;
    *(undefined8 *)((long)plVar14 + 0x44) = 0;
    *(undefined8 *)((long)plVar14 + 0x54) = 0;
    *(undefined1 *)(plVar14 + 0x11) = 1;
    *(undefined8 *)((long)plVar14 + 100) = 0x3f80000000000000;
    *(undefined8 *)((long)plVar14 + 0x6c) = 0x3f80000000000000;
    *plVar14 = (long)(puVar1 + 0x10);
    *(undefined4 *)((long)plVar14 + 0x84) = 0x3f800000;
    *(undefined8 *)((long)plVar14 + 0x3c) = 0x3f800000;
    *(undefined8 *)((long)plVar14 + 0x4c) = 0x3f800000;
    *(undefined8 *)((long)plVar14 + 0x5c) = 0x3f800000;
    puVar13[8] = plVar14;
    plVar14[1] = (long)puVar13;
    iVar6 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar13[0xf]);
    if (iVar6 != 1) {
      (**(code **)*plVar14)(plVar14);
      (**(code **)(puVar5 + 0x30))(4,plVar14);
      plVar14 = (long *)0x0;
      puVar13[8] = 0;
    }
  }
  puVar5 = PTR_DAT_047e2fd0;
  plVar15 = (long *)puVar13[7];
  if (plVar15 == (long *)0x0) {
    plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x48);
    if (plVar15 != (long *)0x0) {
      *plVar15 = (long)&PTR_LAB_047bf560;
      plVar15[7] = 0;
      plVar15[8] = 0;
      plVar15[5] = 0;
      plVar15[6] = 0;
      plVar15[3] = 0;
      plVar15[4] = 0;
      plVar15[1] = 0;
      plVar15[2] = 0;
      puVar1 = PTR_DAT_047e6e58;
      lVar7 = *(long *)(PTR_DAT_047e6e58 + 8);
      plVar15[2] = 0;
      plVar15[3] = lVar7;
      plVar3 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar3 = (long *)(lVar7 + 0x10);
      }
      *plVar3 = (long)plVar15;
      *(long **)(puVar1 + 8) = plVar15;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_047e6e60;
      plVar15[8] = 0;
      plVar15[4] = 0;
      plVar15[5] = 0;
      plVar15[6] = 0;
      plVar15[7] = 0;
      *plVar15 = (long)(puVar1 + 0x10);
      puVar13[7] = plVar15;
      plVar15[1] = (long)puVar13;
      iVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar13[0xf]);
      if (iVar6 == 1) goto LAB_0341de48;
      (**(code **)*plVar15)(plVar15);
      (**(code **)(puVar5 + 0x30))(4,plVar15);
      puVar13[7] = 0;
    }
  }
  else {
LAB_0341de48:
    if ((plVar11 != (long *)0x0) && (plVar14 != (long *)0x0)) {
      puVar10 = (undefined8 *)puVar13[0xc];
      if (puVar10 != (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar10);
        puVar13[0xc] = 0;
      }
      plVar3 = (long *)0x0;
      if (param_1 != 0) {
        plVar3 = plVar16;
      }
      *(undefined4 *)(plVar11 + 5) = param_3;
      if ((param_1 == 0) && ((undefined8 *)plVar11[4] != (undefined8 *)0x0)) {
        *(undefined8 *)plVar11[4] = 0;
      }
      else if (param_1 != 0) {
        *plVar3 = plVar11[1];
      }
      plVar11[4] = (long)plVar3;
      plVar15[8] = (long)&LAB_0341e260;
      *(undefined1 *)(plVar14 + 0x11) = 0;
      return puVar13;
    }
  }
  FUN_034c570c(*puVar10,param_2);
  iVar6 = *(int *)(puVar13 + 0x10);
  uVar8 = iVar6 - 1;
  *(uint *)(puVar13 + 0x10) = uVar8;
  if (iVar6 == 0 || uVar8 == 0) {
    if (uVar8 != 0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (1 < uVar8) {
      return (undefined8 *)0x0;
    }
    if (*(char *)((long)puVar13 + 0x84) == '\0') goto LAB_0341e1d4;
  }
  lVar7 = puVar13[5];
  if (lVar7 != 0) {
    uVar8 = ((uint)lVar7 ^ (uint)lVar7 >> 0x10) * -0x7a143595;
    uVar8 = (uVar8 ^ uVar8 >> 0xd) * -0x3d4d51cb;
    local_90[0] = lVar7;
    FUN_034c6294(&DAT_048b02b8,local_90,uVar8 ^ uVar8 >> 0x10);
    uVar8 = *(uint *)(puVar13 + 0x10);
  }
LAB_0341e1d4:
  if (uVar8 == 0) {
    (**(code **)*puVar13)(puVar13);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4,puVar13);
  }
  return (undefined8 *)0x0;
code_r0x0341dc08:
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) goto LAB_0341de30;
  goto LAB_0341dbfc;
}


