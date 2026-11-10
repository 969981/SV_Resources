/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155756c; name: FUN_0155756c
 */


void FUN_0155756c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 *puVar14;
  long *plVar15;
  ushort uVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  int *piVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  float fVar24;
  char *local_128;
  char *local_120;
  undefined8 uStack_118;
  long *local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  long *local_f0;
  int *local_e8;
  int *local_e0;
  undefined4 local_cc;
  int *local_c8;
  int *local_c0;
  undefined1 auStack_b0 [24];
  char *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  
  FUN_00fb443c(*param_1);
  FUN_00fb4dd0(auStack_b0);
  iVar10 = FUN_01557ecc(auStack_b0);
  if (iVar10 != 0) {
    iVar23 = 0;
    do {
      local_80 = (long *)0x0;
      local_98 = &DAT_fbec41851566601b;
      local_90 = "values";
      local_88 = 6;
      FUN_00e90ee0(&local_c8,auStack_b0,&local_98,iVar23);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_80 = (long *)0x0;
      local_98 = (char *)0x7ef45b5852ab1156;
      local_90 = "State";
      local_88 = 5;
      piVar12 = (int *)FUN_00d27b5c(&local_c8,&local_98);
      if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
         (uVar17 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar17 == 0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = *(undefined4 *)((long)piVar12 + uVar17);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_98 = (char *)0xcf2be88c37290bdd;
      local_80 = (long *)0x0;
      local_90 = "FacialLabel";
      local_88 = 0xb;
      local_cc = uVar21;
      piVar12 = (int *)FUN_00d27b5c(&local_c8,&local_98);
      if (((piVar12 == (int *)0x0) || (*(ushort *)((long)piVar12 - (long)*piVar12) < 7)) ||
         (uVar17 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[3], uVar17 == 0)) {
        uVar21 = 0;
      }
      else {
        uVar21 = *(undefined4 *)((long)piVar12 + uVar17);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      fVar24 = 0.0;
      if (local_c0 != (int *)0x0) {
        fVar24 = 0.0;
        if (6 < *(ushort *)((long)local_c0 - (long)*local_c0)) {
          uVar17 = (ulong)((ushort *)((long)local_c0 - (long)*local_c0))[3];
          fVar24 = 0.0;
          if (uVar17 != 0) {
            puVar13 = (uint *)((long)local_c0 + uVar17);
            puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
            local_98 = "Seconds";
            puVar13 = bsearch(&local_98,puVar13 + 1,(ulong)*puVar13,4,
                              (__compar_fn_t)PTR_LAB_047d5600);
            if (puVar13 == (uint *)0x0) {
              fVar24 = 0.0;
            }
            else {
              fVar24 = 0.0;
              if (local_c8 != (int *)0x0) {
                piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
                puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
                uVar9 = *puVar18;
                if (uVar9 < 7) {
                  piVar20 = (int *)0x0;
                }
                else {
                  piVar20 = (int *)0x0;
                  if ((ulong)puVar18[3] != 0) {
                    puVar13 = (uint *)((long)piVar12 + (ulong)puVar18[3]);
                    piVar20 = (int *)((long)puVar13 + (ulong)*puVar13);
                  }
                }
                if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
                   (uVar17 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar17 == 0)) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (long)*(char *)((long)piVar20 + uVar17) & 0xffffffff;
                }
                if (*(long *)(PTR_DAT_047d5608 + uVar17 * 8) == 4) {
                  if (uVar9 < 0xb) {
                    uVar11 = 0;
LAB_015577c4:
                    fVar24 = 0.0;
                  }
                  else {
                    uVar11 = 0;
                    if ((ulong)puVar18[5] != 0) {
                      uVar11 = (uint)*(ushort *)((long)piVar12 + (ulong)puVar18[5]);
                    }
                    if ((uVar9 < 0xf) || ((ulong)puVar18[7] == 0)) goto LAB_015577c4;
                    fVar24 = (float)*(double *)((long)piVar12 + (ulong)puVar18[7]);
                  }
                  if ((uVar11 < *(ushort *)((long)local_c8 - (long)*local_c8)) &&
                     (uVar17 = (ulong)*(ushort *)
                                       (((long)local_c8 - (long)*local_c8) + (ulong)uVar11),
                     uVar17 != 0)) {
                    fVar24 = *(float *)((long)local_c8 + uVar17);
                  }
                }
                else {
                  fVar24 = 0.0;
                  if (0xe < uVar9) {
                    fVar24 = 0.0;
                    if ((ulong)puVar18[7] != 0) {
                      fVar24 = (float)*(double *)((long)piVar12 + (ulong)puVar18[7]);
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_80 = (long *)0x0;
      local_98 = (char *)0xc4797013e7942f48;
      local_90 = "EnableLookAt";
      local_88 = 0xc;
      uVar9 = FUN_00cf7518(&local_c8,&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_80 = (long *)0x0;
      local_98 = (char *)0x9cf04490476be433;
      local_90 = "EnableEyeBlink";
      local_88 = 0xe;
      uVar11 = FUN_00cf7518(&local_c8,&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_80 = (long *)0x0;
      local_98 = (char *)0xa93d7e1eaa11332a;
      local_90 = "TriggerAnim";
      local_88 = 0xb;
      FUN_00d996a8(&local_e8,&local_c8,&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_f0 = (long *)0x0;
      local_108 = 0xc222c29601320e63;
      local_100 = "trigger";
      local_f8 = 7;
      FUN_00cee868(&local_98,&local_e8,&local_108);
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      local_110 = (long *)0x0;
      local_128 = (char *)0x397dbf7b2e20351d;
      local_120 = "intName";
      uStack_118 = 7;
      FUN_00cee868(&local_108,&local_e8,&local_128);
      if (local_110 != (long *)0x0) {
        (**(code **)(*local_110 + 0x20))();
      }
      if (((local_e0 == (int *)0x0) || (*(ushort *)((long)local_e0 - (long)*local_e0) < 7)) ||
         (uVar17 = (ulong)((ushort *)((long)local_e0 - (long)*local_e0))[3], uVar17 == 0)) {
LAB_01557b4c:
        uVar22 = 0;
      }
      else {
        puVar13 = (uint *)((long)local_e0 + uVar17);
        puVar13 = (uint *)((long)puVar13 + (ulong)*puVar13);
        local_128 = "intValue";
        puVar13 = bsearch(&local_128,puVar13 + 1,(ulong)*puVar13,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar13 == (uint *)0x0) || (local_e8 == (int *)0x0)) goto LAB_01557b4c;
        piVar12 = (int *)((long)puVar13 + (ulong)*puVar13);
        puVar18 = (ushort *)((long)piVar12 - (long)*piVar12);
        uVar16 = *puVar18;
        if (uVar16 < 7) {
          piVar20 = (int *)0x0;
        }
        else {
          piVar20 = (int *)0x0;
          if ((ulong)puVar18[3] != 0) {
            puVar13 = (uint *)((long)piVar12 + (ulong)puVar18[3]);
            piVar20 = (int *)((long)puVar13 + (ulong)*puVar13);
          }
        }
        if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
           (uVar17 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar17 == 0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (long)*(char *)((long)piVar20 + uVar17) & 0xffffffff;
        }
        if (*(long *)(PTR_DAT_047d5608 + uVar17 * 8) == 4) {
          if (uVar16 < 0xb) {
            uVar19 = 0;
LAB_01557c68:
            uVar22 = 0;
          }
          else {
            uVar19 = 0;
            if ((ulong)puVar18[5] != 0) {
              uVar19 = (uint)*(ushort *)((long)piVar12 + (ulong)puVar18[5]);
            }
            if ((uVar16 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_01557c68;
            uVar22 = *(undefined4 *)((long)piVar12 + (ulong)puVar18[6]);
          }
          if ((uVar19 < *(ushort *)((long)local_e8 - (long)*local_e8)) &&
             (uVar17 = (ulong)*(ushort *)(((long)local_e8 - (long)*local_e8) + (ulong)uVar19),
             uVar17 != 0)) {
            uVar22 = *(undefined4 *)((long)local_e8 + uVar17);
          }
        }
        else {
          if ((uVar16 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_01557b4c;
          uVar22 = *(undefined4 *)((long)piVar12 + (ulong)puVar18[6]);
        }
      }
      plVar8 = local_80;
      uVar7 = local_88;
      pcVar6 = local_90;
      pcVar5 = local_98;
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x18))(local_80);
      }
      plVar4 = local_f0;
      uVar3 = local_f8;
      pcVar2 = local_100;
      uVar1 = local_108;
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x18))(local_f0);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      puVar14 = (undefined4 *)FUN_01557ce4(param_2,&local_cc);
      puVar14[1] = fVar24;
      *(char **)(puVar14 + 2) = pcVar5;
      *(char **)(puVar14 + 4) = pcVar6;
      *(undefined8 *)(puVar14 + 6) = uVar7;
      *puVar14 = uVar21;
      plVar15 = *(long **)(puVar14 + 8);
      *(undefined8 *)(puVar14 + 8) = 0;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      *(long **)(puVar14 + 8) = plVar8;
      *(undefined8 *)(puVar14 + 10) = uVar1;
      plVar15 = *(long **)(puVar14 + 0x10);
      *(undefined8 *)(puVar14 + 0x10) = 0;
      *(char **)(puVar14 + 0xc) = pcVar2;
      *(undefined8 *)(puVar14 + 0xe) = uVar3;
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x20))();
      }
      *(long **)(puVar14 + 0x10) = plVar4;
      uVar16 = 0x100;
      if ((uVar11 & 1) == 0) {
        uVar16 = 0;
      }
      puVar14[0x12] = uVar22;
      *(ushort *)(puVar14 + 0x14) = uVar16 | uVar9 & 1;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      iVar23 = iVar23 + 1;
    } while (iVar10 != iVar23);
  }
  return;
}


