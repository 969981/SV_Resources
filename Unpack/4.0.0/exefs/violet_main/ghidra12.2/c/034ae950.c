/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ae950; name: FUN_034ae950
 */


long * FUN_034ae950(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 uVar22;
  long *plVar23;
  uint uVar24;
  
  if (param_2 == 0) {
    plVar13 = *(long **)PTR_DAT_047e6cc0;
    iVar10 = *(int *)(param_1 + 0x18);
    uVar17 = *(uint *)(param_1 + 0xda) >> 0x11;
    for (plVar11 = (long *)*plVar13; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
      if ((iVar10 == *(int *)(plVar11 + 1)) &&
         ((uVar17 & 1) == (uint)*(byte *)((long)plVar11 + 0xc))) goto LAB_034aeb5c;
    }
    plVar23 = plVar13 + 2;
    plVar11 = (long *)*plVar23;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
      if (plVar11 == (long *)0x0) goto LAB_034aeb5c;
      *plVar11 = *plVar23;
      *plVar23 = (long)plVar11;
    }
    if ((undefined8 *)plVar13[1] == (undefined8 *)0x0) {
      *plVar13 = (long)plVar11;
    }
    else {
      *(undefined8 *)plVar13[1] = plVar11;
      plVar11 = (long *)*plVar23;
    }
    plVar13[1] = (long)plVar11;
    plVar13[2] = *plVar11;
    *plVar11 = 0;
    *(int *)((long)plVar13 + 0x24) = *(int *)((long)plVar13 + 0x24) + 1;
    *(ulong *)(plVar13[1] + 8) = CONCAT44(uVar17,iVar10) & 0x1ffffffff;
LAB_034aeb5c:
    plVar11 = *(long **)(param_1 + 0x70);
    if (plVar11 == (long *)0x0) {
      if (*(long *)(param_1 + 0xd0) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x24);
      }
      plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x28);
      puVar7 = PTR_DAT_047e71b8;
      if (plVar11 != (long *)0x0) {
        *(undefined1 *)(plVar11 + 4) = uVar22;
        plVar11[2] = 0;
        plVar11[3] = 0;
        *plVar11 = (long)(puVar7 + 0x10);
        plVar11[1] = param_1;
      }
      *(long **)(param_1 + 0x70) = plVar11;
    }
    return plVar11;
  }
  plVar11 = *(long **)(param_1 + 0x78);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x10);
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      return (long *)0x0;
    }
    *plVar11 = 0;
    plVar11[1] = 0;
    *(long **)(param_1 + 0x78) = plVar11;
  }
  puVar7 = PTR_DAT_047e2fd0;
  plVar13 = (long *)*plVar11;
  uVar17 = *(uint *)(plVar11 + 1);
  if ((uVar17 == 0) || (*plVar13 == param_2)) {
    plVar11 = plVar13;
  }
  else {
    lVar18 = (ulong)uVar17 * 0x10;
    plVar23 = plVar13;
    do {
      lVar18 = lVar18 + -0x10;
      if (lVar18 == 0) goto LAB_034aea84;
      plVar11 = plVar23 + 2;
      plVar15 = plVar23 + 2;
      plVar23 = plVar11;
    } while (*plVar15 != param_2);
  }
  if (plVar11 != plVar13 + (ulong)uVar17 * 2) {
    return (long *)plVar11[1];
  }
LAB_034aea84:
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x24);
  }
  plVar11 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0x28);
  puVar9 = PTR_DAT_047e71b8;
  if (plVar11 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined1 *)(plVar11 + 4) = uVar22;
  plVar11[2] = param_2;
  plVar11[3] = 0;
  *plVar11 = (long)(puVar9 + 0x10);
  plVar11[1] = param_1;
  plVar23 = *(long **)(param_1 + 0x78);
  plVar13 = (long *)*plVar23;
  uVar17 = *(uint *)(plVar23 + 1);
  if ((uVar17 == 0) || (*plVar13 == param_2)) {
    plVar15 = plVar13;
  }
  else {
    lVar18 = (ulong)uVar17 * 0x10;
    plVar19 = plVar13;
    do {
      lVar18 = lVar18 + -0x10;
      if (lVar18 == 0) goto LAB_034aeb80;
      plVar15 = plVar19 + 2;
      plVar1 = plVar19 + 2;
      plVar19 = plVar15;
    } while (*plVar1 != param_2);
  }
  if (plVar15 == plVar13 + (ulong)uVar17 * 2) {
LAB_034aeb80:
    uVar24 = *(uint *)((long)plVar23 + 0xc);
    if (uVar17 < uVar24) {
LAB_034aebbc:
      if (uVar17 < uVar24) {
        uVar17 = *(uint *)(plVar23 + 1);
        *(uint *)(plVar23 + 1) = uVar17 + 1;
        if (plVar13 != (long *)0x0) {
          plVar15 = plVar13 + (ulong)uVar17 * 2;
          *plVar15 = param_2;
          goto LAB_034aebdc;
        }
      }
    }
    else {
      iVar10 = uVar24 + (uVar24 >> 1);
      if (uVar24 == 0) {
        iVar10 = 1;
      }
      uVar24 = iVar10 + uVar24;
      plVar13 = (long *)(**(code **)(puVar7 + 0x20))(0,plVar13,(ulong)uVar24 << 4);
      if (plVar13 != (long *)0x0) {
        *plVar23 = (long)plVar13;
        *(uint *)((long)plVar23 + 0xc) = uVar24;
        goto LAB_034aebbc;
      }
    }
    pbVar12 = (byte *)plVar11[3];
    *plVar11 = (long)(puVar9 + 0x10);
    if (pbVar12 == (byte *)0x0) goto LAB_034aefa0;
    bVar6 = *pbVar12;
    if ((ulong)bVar6 != 0) {
      pbVar5 = pbVar12 + bVar6;
      pbVar16 = pbVar12 + ((ulong)(bVar6 + 4) & 0x1fc);
      do {
        lVar18 = *(long *)(pbVar16 + 8);
        pbVar12 = pbVar12 + 1;
        if (lVar18 != 0) {
          uVar17 = *(uint *)(lVar18 + 0x30);
          if (uVar17 != 0) {
            puVar20 = *(undefined8 **)(lVar18 + 0x28);
            puVar4 = puVar20 + uVar17;
            if ((long *)*puVar20 != plVar11) {
              lVar21 = (ulong)uVar17 * 8;
              do {
                lVar21 = lVar21 + -8;
                if (lVar21 == 0) {
                  puVar20 = puVar4;
                  break;
                }
                puVar3 = puVar20 + 1;
                puVar2 = puVar20 + 1;
                puVar20 = puVar3;
              } while ((long *)*puVar2 != plVar11);
            }
            if (puVar4 != puVar20) {
              if (uVar17 < 2) {
                iVar10 = 0;
              }
              else {
                *puVar20 = puVar4[-1];
                iVar10 = *(int *)(lVar18 + 0x30) + -1;
              }
              *(int *)(lVar18 + 0x30) = iVar10;
            }
          }
        }
        pbVar16 = pbVar16 + 0x10;
      } while (pbVar12 != pbVar5);
      goto LAB_034aef8c;
    }
  }
  else {
LAB_034aebdc:
    plVar15[1] = (long)plVar11;
    plVar13 = *(long **)(param_2 + 0x48);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)(**(code **)(puVar7 + 0x10))(4,0x48);
      if (plVar13 != (long *)0x0) {
        *plVar13 = (long)(PTR_DAT_047e7288 + 0x10);
        plVar13[1] = 0;
        puVar8 = PTR_DAT_047e70d0;
        lVar18 = *(long *)(PTR_DAT_047e70d0 + 8);
        plVar13[2] = 0;
        plVar13[3] = lVar18;
        plVar23 = (long *)(puVar8 + 0x10);
        if (*(long *)(puVar8 + 0x10) != 0) {
          plVar23 = (long *)(lVar18 + 0x10);
        }
        *plVar23 = (long)plVar13;
        *(long **)(puVar8 + 8) = plVar13;
        *(int *)puVar8 = *(int *)puVar8 + 1;
        puVar8 = PTR_DAT_047e7290;
        plVar13[8] = 0;
        plVar13[4] = 0;
        plVar13[5] = 0;
        plVar13[6] = 0;
        plVar13[7] = 0;
        *plVar13 = (long)(puVar8 + 0x10);
        *(long **)(param_2 + 0x48) = plVar13;
        plVar13[1] = param_2;
        iVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,*(undefined8 *)(param_2 + 0x78));
        if (iVar10 == 1) goto LAB_034aebe8;
        (**(code **)*plVar13)(plVar13);
        (**(code **)(puVar7 + 0x30))(4,plVar13);
        *(undefined8 *)(param_2 + 0x48) = 0;
      }
    }
    else {
LAB_034aebe8:
      uVar17 = *(uint *)(param_1 + 0xda) >> 0x11;
      iVar10 = *(int *)(param_1 + 0x18);
      for (plVar23 = (long *)plVar13[4]; plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
        if ((iVar10 == *(int *)(plVar23 + 1)) &&
           ((uVar17 & 1) == (uint)*(byte *)((long)plVar23 + 0xc))) {
          return plVar11;
        }
      }
      plVar15 = plVar13 + 6;
      plVar23 = (long *)*plVar15;
      if (plVar23 != (long *)0x0) {
LAB_034aec44:
        if ((undefined8 *)plVar13[5] == (undefined8 *)0x0) {
          plVar13[4] = (long)plVar23;
        }
        else {
          *(undefined8 *)plVar13[5] = plVar23;
          plVar23 = (long *)*plVar15;
        }
        plVar13[5] = (long)plVar23;
        plVar13[6] = *plVar23;
        *plVar23 = 0;
        *(int *)((long)plVar13 + 0x44) = *(int *)((long)plVar13 + 0x44) + 1;
        *(ulong *)(plVar13[5] + 8) = CONCAT44(uVar17,iVar10) & 0x1ffffffff;
        return plVar11;
      }
      plVar23 = (long *)(**(code **)(puVar7 + 0x10))(0,0x10);
      if (plVar23 != (long *)0x0) {
        *plVar23 = *plVar15;
        *plVar15 = (long)plVar23;
        goto LAB_034aec44;
      }
    }
    puVar14 = *(ulong **)(param_1 + 0x78);
    plVar23 = (long *)*puVar14;
    uVar17 = (uint)puVar14[1];
    plVar13 = plVar23 + (ulong)uVar17 * 2;
    if ((uVar17 != 0) && (*plVar23 != param_2)) {
      lVar18 = (ulong)uVar17 * 0x10;
      do {
        lVar18 = lVar18 + -0x10;
        if (lVar18 == 0) {
          plVar23 = plVar13;
          break;
        }
        plVar19 = plVar23 + 2;
        plVar15 = plVar23 + 2;
        plVar23 = plVar19;
      } while (*plVar15 != param_2);
    }
    if (plVar13 != plVar23) {
      if (plVar23 < plVar13 + -2) {
        do {
          plVar15 = plVar23 + 2;
          *plVar23 = *plVar15;
          plVar23[1] = plVar23[3];
          plVar23 = plVar15;
        } while (plVar15 < plVar13 + -2);
        uVar17 = (uint)puVar14[1];
      }
      *(uint *)(puVar14 + 1) = uVar17 - 1;
    }
    pbVar12 = (byte *)plVar11[3];
    *plVar11 = (long)(puVar9 + 0x10);
    if (pbVar12 == (byte *)0x0) goto LAB_034aefa0;
    bVar6 = *pbVar12;
    if ((ulong)bVar6 != 0) {
      pbVar5 = pbVar12 + bVar6;
      pbVar16 = pbVar12 + ((ulong)(bVar6 + 4) & 0x1fc);
      do {
        lVar18 = *(long *)(pbVar16 + 8);
        pbVar12 = pbVar12 + 1;
        if (lVar18 != 0) {
          uVar17 = *(uint *)(lVar18 + 0x30);
          if (uVar17 != 0) {
            puVar20 = *(undefined8 **)(lVar18 + 0x28);
            puVar4 = puVar20 + uVar17;
            if ((long *)*puVar20 != plVar11) {
              lVar21 = (ulong)uVar17 * 8;
              do {
                lVar21 = lVar21 + -8;
                if (lVar21 == 0) {
                  puVar20 = puVar4;
                  break;
                }
                puVar3 = puVar20 + 1;
                puVar2 = puVar20 + 1;
                puVar20 = puVar3;
              } while ((long *)*puVar2 != plVar11);
            }
            if (puVar4 != puVar20) {
              if (uVar17 < 2) {
                iVar10 = 0;
              }
              else {
                *puVar20 = puVar4[-1];
                iVar10 = *(int *)(lVar18 + 0x30) + -1;
              }
              *(int *)(lVar18 + 0x30) = iVar10;
            }
          }
        }
        pbVar16 = pbVar16 + 0x10;
      } while (pbVar12 != pbVar5);
LAB_034aef8c:
      if (plVar11[3] == 0) goto LAB_034aefa0;
    }
  }
  (**(code **)(puVar7 + 0x30))(0);
LAB_034aefa0:
  plVar11[3] = 0;
  (**(code **)(puVar7 + 0x30))(4,plVar11);
  return (long *)0x0;
}


