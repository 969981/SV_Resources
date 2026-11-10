/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034dd6dc; name: FUN_034dd6dc
 */


void FUN_034dd6dc(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  undefined4 *puVar24;
  long *plVar25;
  uint *puVar26;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 *local_90;
  ulong local_88;
  long *local_80;
  ulong local_78;
  long *local_70;
  ulong local_68;
  
  plVar23 = param_1 + 2;
  puVar13 = (undefined4 *)*plVar23;
  uVar4 = *(uint *)(param_1 + 3);
  plVar25 = param_1 + 4;
  puVar14 = (undefined4 *)*plVar25;
  uVar12 = *(uint *)(param_1 + 5);
  *plVar25 = 0;
  param_1[5] = 0;
  *plVar23 = 0;
  param_1[3] = 0;
  puVar9 = PTR_DAT_047e6f28;
  puVar8 = PTR_DAT_047e2fc8;
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_90 = (undefined4 *)0x0;
  local_88 = 0;
  lVar22 = *(long *)(param_2 + 0x18);
  if (lVar22 != 0) {
    do {
      if ((*(short *)(lVar22 + 0x34) == 0x403) &&
         (plVar10 = (long *)FUN_0344ec90(*(undefined8 *)puVar9,*(undefined4 *)(lVar22 + 0x30),
                                         *(byte *)(lVar22 + 0x36) >> 6 & 1), plVar10 != (long *)0x0)
         ) {
        (**(code **)(*plVar10 + 0x80))
                  (plVar10,&local_70,&local_80,&local_90,1,param_3,param_4,param_5);
        (**(code **)(*plVar10 + 0x30))(plVar10);
      }
      lVar22 = *(long *)(lVar22 + 0x18);
    } while (lVar22 != 0);
    uVar15 = local_68 & 0xffffffff;
    if ((int)local_68 != 0) {
      plVar18 = local_70;
      plVar10 = local_70;
      do {
        lVar22 = *plVar10;
        uVar5 = *(uint *)(lVar22 + 4);
        uVar19 = *(uint *)(param_1 + 3);
        if (uVar19 != 0) {
          iVar21 = 0;
          do {
            iVar1 = iVar21 + (uVar19 >> 1);
            uVar6 = *(uint *)(*plVar23 + (long)iVar1 * 4);
            if (uVar6 == uVar5) goto LAB_034dd898;
            if (uVar6 < uVar5) {
              iVar21 = iVar1 + 1;
            }
            uVar19 = uVar19 - (uVar6 < uVar5) >> 1;
          } while (uVar19 != 0);
        }
        if (*(int *)(lVar22 + 8) != 0) {
          FUN_0342a7e0(plVar23,uVar5,&local_b8);
          local_9c = 0xffffffff;
          if ((*(ushort *)(lVar22 + 0xc) & 0x500) == 0) {
            local_9c = *(undefined4 *)(lVar22 + 4);
          }
          local_a0 = (byte)*(ushort *)(lVar22 + 0xc) & 1;
          uStack_b4 = (uint)*(ushort *)(lVar22 + 0x1a);
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_98 = *(undefined4 *)(lVar22 + 8);
          (**(code **)(**(long **)puVar8 + 0x48))(*(long **)puVar8,uVar5,&local_b8,(char)param_1[6])
          ;
          uVar15 = local_68 & 0xffffffff;
          plVar18 = local_70;
        }
LAB_034dd898:
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar18 + uVar15);
    }
  }
  uVar15 = local_78 & 0xffffffff;
  if ((int)local_78 != 0) {
    plVar18 = local_80;
    plVar10 = local_80;
    do {
      lVar22 = *plVar10;
      uVar5 = *(uint *)(lVar22 + 4);
      uVar19 = *(uint *)(param_1 + 3);
      if (uVar19 != 0) {
        iVar21 = 0;
        do {
          iVar1 = iVar21 + (uVar19 >> 1);
          uVar6 = *(uint *)(*plVar23 + (long)iVar1 * 4);
          if (uVar6 == uVar5) goto LAB_034dd9a4;
          if (uVar6 < uVar5) {
            iVar21 = iVar1 + 1;
          }
          uVar19 = uVar19 - (uVar6 < uVar5) >> 1;
        } while (uVar19 != 0);
      }
      uVar19 = *(uint *)(param_1 + 5);
      if (uVar19 != 0) {
        iVar21 = 0;
        do {
          iVar1 = iVar21 + (uVar19 >> 1);
          uVar6 = *(uint *)(*plVar25 + (long)iVar1 * 4);
          if (uVar6 == uVar5) goto LAB_034dd9a4;
          if (uVar6 < uVar5) {
            iVar21 = iVar1 + 1;
          }
          uVar19 = uVar19 - (uVar6 < uVar5) >> 1;
        } while (uVar19 != 0);
      }
      if (*(int *)(lVar22 + 8) != 0) {
        FUN_0342a7e0(plVar25,uVar5,&local_b8);
        local_9c = 0xffffffff;
        if ((*(ushort *)(lVar22 + 0xc) & 0x500) == 0) {
          local_9c = *(undefined4 *)(lVar22 + 4);
        }
        local_a0 = (byte)*(ushort *)(lVar22 + 0xc) & 1;
        uStack_b4 = (uint)*(ushort *)(lVar22 + 0x1a);
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_98 = *(undefined4 *)(lVar22 + 8);
        (**(code **)(**(long **)puVar8 + 0x48))
                  (*(long **)puVar8,uVar5,&local_b8,*(undefined1 *)((long)param_1 + 0x31));
        uVar15 = local_78 & 0xffffffff;
        plVar18 = local_80;
      }
LAB_034dd9a4:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar18 + uVar15);
  }
  if (uVar4 != 0) {
    lVar22 = (ulong)uVar4 << 2;
    puVar24 = puVar13;
    do {
      (**(code **)(**(long **)puVar8 + 0x50))(*(long **)puVar8,*puVar24,(char)param_1[6]);
      lVar22 = lVar22 + -4;
      puVar24 = puVar24 + 1;
    } while (lVar22 != 0);
  }
  if (uVar12 != 0) {
    lVar22 = (ulong)uVar12 << 2;
    puVar24 = puVar14;
    do {
      (**(code **)(**(long **)puVar8 + 0x50))
                (*(long **)puVar8,*puVar24,*(undefined1 *)((long)param_1 + 0x31));
      lVar22 = lVar22 + -4;
      puVar24 = puVar24 + 1;
    } while (lVar22 != 0);
  }
  puVar8 = PTR_DAT_047e2fd0;
  if (puVar13 != (undefined4 *)0x0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar13);
  }
  if (puVar14 != (undefined4 *)0x0) {
    (**(code **)(puVar8 + 0x30))(0,puVar14);
  }
  if ((int)local_88 != 0) {
    puVar13 = local_90;
    do {
      uVar5 = DAT_048b0538;
      uVar4 = puVar13[1];
      uVar12 = *(uint *)(param_1 + 1);
      if (uVar12 != 0) {
        iVar21 = 0;
        do {
          iVar1 = iVar21 + (uVar12 >> 1);
          uVar19 = *(uint *)(*param_1 + (long)iVar1 * 4);
          if (uVar19 == uVar4) goto LAB_034ddca4;
          if (uVar19 < uVar4) {
            iVar21 = iVar1 + 1;
          }
          uVar12 = uVar12 - (uVar19 < uVar4) >> 1;
        } while (uVar12 != 0);
      }
      if (DAT_048b0538 == 0) {
        if (DAT_048b0530 != 0) {
          uVar15 = 0;
          goto LAB_034ddb28;
        }
        if (DAT_048b053c == 0) {
          lVar22 = (**(code **)(puVar8 + 0x20))(0,0,0x10);
          if (lVar22 != 0) {
            DAT_048b0530 = lVar22;
            DAT_048b053c = 1;
            goto LAB_034ddc30;
          }
          goto LAB_034ddca4;
        }
        lVar22 = 0;
LAB_034ddc30:
        if (DAT_048b053c == 0) goto LAB_034ddca4;
        puVar26 = (uint *)(lVar22 + (ulong)DAT_048b0538 * 0x10);
        DAT_048b0538 = DAT_048b0538 + 1;
        if (lVar22 == 0) goto LAB_034ddbc4;
        puVar26[2] = 0;
        puVar26[3] = 0;
LAB_034ddc54:
        *puVar26 = uVar4;
LAB_034ddc58:
        puVar11 = (undefined8 *)(**(code **)(puVar8 + 0x10))(7,0x18);
        if (puVar11 == (undefined8 *)0x0) {
          puVar26[2] = 0;
          puVar26[3] = 0;
          if (DAT_048b0538 != 0) {
            uVar4 = puVar13[1];
            iVar21 = 0;
            uVar12 = DAT_048b0538;
LAB_034ddce0:
            uVar5 = iVar21 + (uVar12 >> 1);
            uVar19 = *(uint *)(DAT_048b0530 +
                              (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar5 << 4));
            if (uVar19 != uVar4) goto code_r0x034ddcf8;
            puVar20 = (undefined8 *)((DAT_048b0530 + (ulong)DAT_048b0538 * 0x10) - 0x10);
            puVar11 = (undefined8 *)(DAT_048b0530 + (long)(int)uVar5 * 0x10);
            if (puVar11 < puVar20) {
              do {
                puVar17 = puVar11 + 2;
                *puVar11 = *puVar17;
                puVar11[1] = puVar11[3];
                puVar11 = puVar17;
              } while (puVar17 < puVar20);
            }
            DAT_048b0538 = DAT_048b0538 - 1;
          }
        }
        else {
          uVar2 = *puVar13;
          uVar3 = puVar13[1];
          *puVar11 = &PTR_LAB_047c55c0;
          *(undefined4 *)(puVar11 + 1) = uVar2;
          *(undefined4 *)((long)puVar11 + 0xc) = uVar3;
          *(undefined4 *)(puVar11 + 2) = 1;
          FUN_034de99c();
          *(undefined8 **)(puVar26 + 2) = puVar11;
LAB_034ddc94:
          FUN_0342a7e0(param_1,puVar13[1],&local_b8);
        }
      }
      else {
        iVar21 = 0;
        uVar12 = DAT_048b0538;
        do {
          uVar19 = iVar21 + (uVar12 >> 1);
          uVar6 = *(uint *)(DAT_048b0530 +
                           (-(ulong)(uVar19 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar19 << 4));
          if (uVar6 == uVar4) {
            plVar23 = *(long **)(DAT_048b0530 + (long)(int)uVar19 * 0x10 + 8);
            (**(code **)(*plVar23 + 0x18))(plVar23);
            if (plVar23 != (long *)0x0) goto LAB_034ddc94;
            goto LAB_034ddca4;
          }
          if (uVar6 < uVar4) {
            iVar21 = uVar19 + 1;
          }
          uVar12 = uVar12 - (uVar6 < uVar4) >> 1;
        } while (uVar12 != 0);
        uVar12 = 0;
        uVar19 = DAT_048b0538;
        do {
          uVar6 = uVar12 + (uVar19 >> 1);
          uVar7 = *(uint *)(DAT_048b0530 +
                           (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar6 << 4));
          if (uVar7 == uVar4) {
            puVar26 = (uint *)(DAT_048b0530 + (long)(int)uVar6 * 0x10);
            goto LAB_034ddc58;
          }
          if (uVar7 < uVar4) {
            uVar12 = uVar6 + 1;
          }
          uVar19 = uVar19 - (uVar7 < uVar4) >> 1;
        } while (uVar19 != 0);
        uVar15 = (ulong)uVar12;
LAB_034ddb28:
        if (DAT_048b0538 < DAT_048b053c) {
LAB_034ddb60:
          if (uVar5 < DAT_048b053c) {
            uVar16 = (ulong)DAT_048b0538;
            DAT_048b0538 = DAT_048b0538 + 1;
            puVar11 = (undefined8 *)(DAT_048b0530 + uVar16 * 0x10);
            puVar11[1] = 0;
            if ((undefined8 *)(DAT_048b0530 + uVar15 * 0x10) < puVar11) {
              do {
                puVar20 = puVar11 + -2;
                *puVar11 = *puVar20;
                puVar11[1] = puVar11[-1];
                puVar11 = puVar20;
              } while ((undefined8 *)(DAT_048b0530 + uVar15 * 0x10) < puVar20);
            }
            if (DAT_048b0530 != 0) {
              *(undefined8 *)(DAT_048b0530 + uVar15 * 0x10 + 8) = 0;
            }
            puVar26 = (uint *)(DAT_048b0530 + uVar15 * 0x10);
LAB_034ddbc4:
            if (puVar26 != (uint *)0x0) goto LAB_034ddc54;
          }
        }
        else {
          iVar21 = DAT_048b053c + (DAT_048b053c >> 1);
          if (DAT_048b053c == 0) {
            iVar21 = 1;
          }
          uVar12 = iVar21 + DAT_048b053c;
          lVar22 = (**(code **)(puVar8 + 0x20))(0,DAT_048b0530,(ulong)uVar12 << 4);
          if (lVar22 != 0) {
            DAT_048b0530 = lVar22;
            DAT_048b053c = uVar12;
            goto LAB_034ddb60;
          }
        }
      }
LAB_034ddca4:
      puVar13 = puVar13 + 2;
    } while (puVar13 != local_90 + (local_88 & 0xffffffff) * 2);
  }
  if (local_70 != (long *)0x0) {
    local_68 = local_68 & 0xffffffff00000000;
    (**(code **)(puVar8 + 0x30))(0);
    local_70 = (long *)0x0;
    local_68 = local_68 & 0xffffffff;
  }
  if (local_80 != (long *)0x0) {
    local_78 = local_78 & 0xffffffff00000000;
    (**(code **)(puVar8 + 0x30))(0);
    local_80 = (long *)0x0;
    local_78 = local_78 & 0xffffffff;
  }
  if (local_90 != (undefined4 *)0x0) {
    local_88 = local_88 & 0xffffffff00000000;
    (**(code **)(puVar8 + 0x30))(0);
  }
  return;
code_r0x034ddcf8:
  if (uVar19 < uVar4) {
    iVar21 = uVar5 + 1;
  }
  uVar12 = uVar12 - (uVar19 < uVar4) >> 1;
  if (uVar12 == 0) goto LAB_034ddca4;
  goto LAB_034ddce0;
}


