/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01848ba8; name: FUN_01848ba8
 */


undefined8 FUN_01848ba8(void)

{
  int *piVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  bool bVar6;
  __compar_fn_t __compar;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  undefined **ppuVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  int *local_120;
  int *local_118;
  long *local_108;
  char *local_100;
  char *local_f8;
  long *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  long *local_b8;
  char *local_b0 [2];
  long *local_a0;
  char *local_98;
  undefined8 uStack_90;
  
  if (((DAT_0483af40 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_0483af40), iVar9 != 0)) {
    FUN_00100190(&LAB_02a30078,&DAT_0483af30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483af40);
  }
  lVar8 = DAT_0483af30;
  DAT_0483af48 = DAT_0483af30;
  uVar10 = FUN_00fb3a58(*(undefined8 *)(DAT_0483af30 + 0x30));
  if ((uVar10 & 1) == 0) {
    uVar12 = 0;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x30);
    if (((*(long *)(lVar14 + 0x120) == 0) ||
        ((*(byte *)(*(long *)(lVar14 + 0x120) + 0x1e8) & 1) != 0)) &&
       ((*(long *)(lVar14 + 0xe0) == 0 || ((*(byte *)(*(long *)(lVar14 + 0xe0) + 0x1e8) & 1) != 0)))
       ) {
      local_138 = *(undefined8 *)(lVar14 + 0xc0);
      local_130 = *(undefined8 *)(lVar14 + 200);
      uStack_128 = *(undefined8 *)(lVar14 + 0xd0);
    }
    else {
      local_130 = 0;
      uStack_128 = 0;
      local_138 = 0;
    }
    local_b8 = (long *)&DAT_fbec41851566601b;
    local_b0[0] = "values";
    local_b0[1] = (char *)0x6;
    local_a0 = (long *)0x0;
    puVar11 = (uint *)FUN_00efa07c(&local_138,&local_b8);
    if (puVar11 == (uint *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *puVar11;
    }
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
    puVar7 = PTR_DAT_047d5608;
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
      __compar = (__compar_fn_t)PTR_LAB_047d5600;
      puVar7 = PTR_DAT_047d5608;
    }
    PTR_LAB_047d5600 = __compar;
    PTR_DAT_047d5608 = puVar7;
    if (uVar21 != 0) {
      uVar10 = 0;
      lVar14 = lVar8;
      do {
        if (uVar10 < 2) {
          local_b8 = (long *)0xf4bd9126a4a8ddb0;
          local_b0[0] = "Npc";
          local_b0[1] = (char *)0x3;
          local_a0 = (long *)0x43741481b5ae6dc6;
          local_98 = "Traffic";
          uStack_90 = 7;
          lVar15 = *(long *)(lVar8 + 0x30);
          if (((*(long *)(lVar15 + 0x120) == 0) ||
              ((*(byte *)(*(long *)(lVar15 + 0x120) + 0x1e8) & 1) != 0)) &&
             ((*(long *)(lVar15 + 0xe0) == 0 ||
              ((*(byte *)(*(long *)(lVar15 + 0xe0) + 0x1e8) & 1) != 0)))) {
            local_e8 = *(undefined8 *)(lVar15 + 0xc0);
            local_e0 = *(undefined8 *)(lVar15 + 200);
            uStack_d8 = *(undefined8 *)(lVar15 + 0xd0);
          }
          else {
            local_e0 = 0;
            uStack_d8 = 0;
            local_e8 = 0;
          }
          local_f0 = (long *)0x0;
          local_108 = (long *)&DAT_fbec41851566601b;
          local_100 = "values";
          local_f8 = (char *)0x6;
          FUN_00e90ee0(auStack_d0,&local_e8,&local_108,uVar10 & 0xffffffff);
          if (local_f0 != (long *)0x0) {
            (**(code **)(*local_f0 + 0x20))();
          }
          lVar15 = 0;
          bVar13 = false;
          do {
            local_108 = (&local_b8)[lVar15 * 3];
            local_100 = local_b0[lVar15 * 3];
            local_f8 = local_b0[lVar15 * 3 + 1];
            local_f0 = (long *)0x0;
            FUN_00d996a8(&local_e8,auStack_d0,&local_108);
            if (local_f0 != (long *)0x0) {
              (**(code **)(*local_f0 + 0x20))();
            }
            lVar23 = 0;
            ppuVar22 = &PTR_DAT_04568f88;
            do {
              local_108 = (long *)ppuVar22[-1];
              local_100 = *ppuVar22;
              local_f8 = ppuVar22[1];
              local_f0 = (long *)0x0;
              FUN_00d996a8(&local_120,&local_e8,&local_108);
              if (local_f0 != (long *)0x0) {
                (**(code **)(*local_f0 + 0x20))();
              }
              if (local_118 == (int *)0x0) {
                uVar16 = 0;
                fVar25 = 0.0;
                fVar24 = 0.0;
              }
              else {
                fVar24 = 0.0;
                if (6 < *(ushort *)((long)local_118 - (long)*local_118)) {
                  uVar17 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[3];
                  fVar24 = 0.0;
                  if (uVar17 != 0) {
                    puVar11 = (uint *)((long)local_118 + uVar17);
                    local_108 = (long *)0x3c9f69f;
                    puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                    puVar11 = bsearch(&local_108,puVar11 + 1,(ulong)*puVar11,4,__compar);
                    if (puVar11 == (uint *)0x0) {
                      fVar24 = 0.0;
                    }
                    else {
                      fVar24 = 0.0;
                      if (local_120 != (int *)0x0) {
                        piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
                        puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
                        uVar5 = *puVar18;
                        if (uVar5 < 7) {
                          piVar20 = (int *)0x0;
                        }
                        else {
                          piVar20 = (int *)0x0;
                          if ((ulong)puVar18[3] != 0) {
                            puVar11 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
                            piVar20 = (int *)((long)puVar11 + (ulong)*puVar11);
                          }
                        }
                        if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
                           (uVar17 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2],
                           uVar17 == 0)) {
                          uVar17 = 0;
                        }
                        else {
                          uVar17 = (long)*(char *)((long)piVar20 + uVar17) & 0xffffffff;
                        }
                        if (*(long *)(puVar7 + uVar17 * 8) == 4) {
                          if (uVar5 < 0xb) {
                            uVar19 = 0;
LAB_01848ee4:
                            fVar24 = 0.0;
                          }
                          else {
                            uVar19 = 0;
                            if ((ulong)puVar18[5] != 0) {
                              uVar19 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
                            }
                            if ((uVar5 < 0xf) || ((ulong)puVar18[7] == 0)) goto LAB_01848ee4;
                            fVar24 = (float)*(double *)((long)piVar1 + (ulong)puVar18[7]);
                          }
                          if ((uVar19 < *(ushort *)((long)local_120 - (long)*local_120)) &&
                             (uVar17 = (ulong)*(ushort *)
                                               (((long)local_120 - (long)*local_120) + (ulong)uVar19
                                               ), uVar17 != 0)) {
                            fVar24 = *(float *)((long)local_120 + uVar17);
                          }
                        }
                        else {
                          fVar24 = 0.0;
                          if (0xe < uVar5) {
                            fVar24 = 0.0;
                            if ((ulong)puVar18[7] != 0) {
                              fVar24 = (float)*(double *)((long)piVar1 + (ulong)puVar18[7]);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                fVar25 = fVar24 * fVar24;
                if ((local_118 == (int *)0x0) ||
                   (*(ushort *)((long)local_118 - (long)*local_118) < 7)) goto LAB_01849098;
                uVar17 = (ulong)((ushort *)((long)local_118 - (long)*local_118))[3];
                uVar16 = 0;
                if (uVar17 == 0) goto LAB_0184904c;
                puVar11 = (uint *)((long)local_118 + uVar17);
                local_108 = (long *)0x3c12493;
                puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11);
                puVar11 = bsearch(&local_108,puVar11 + 1,(ulong)*puVar11,4,__compar);
                if ((puVar11 != (uint *)0x0) && (local_120 != (int *)0x0)) {
                  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
                  puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
                  uVar5 = *puVar18;
                  if (uVar5 < 7) {
                    piVar20 = (int *)0x0;
                  }
                  else {
                    piVar20 = (int *)0x0;
                    if ((ulong)puVar18[3] != 0) {
                      puVar11 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
                      piVar20 = (int *)((long)puVar11 + (ulong)*puVar11);
                    }
                  }
                  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 5) ||
                     (uVar17 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[2], uVar17 == 0))
                  {
                    uVar17 = 0;
                  }
                  else {
                    uVar17 = (long)*(char *)((long)piVar20 + uVar17) & 0xffffffff;
                  }
                  if (*(long *)(puVar7 + uVar17 * 8) == 4) {
                    if (uVar5 < 0xb) {
                      uVar19 = 0;
LAB_01849028:
                      uVar16 = 0;
                    }
                    else {
                      uVar19 = 0;
                      if ((ulong)puVar18[5] != 0) {
                        uVar19 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
                      }
                      if ((uVar5 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_01849028;
                      uVar16 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
                    }
                    if ((uVar19 < *(ushort *)((long)local_120 - (long)*local_120)) &&
                       (uVar17 = (ulong)*(ushort *)
                                         (((long)local_120 - (long)*local_120) + (ulong)uVar19),
                       uVar17 != 0)) {
                      uVar16 = *(undefined4 *)((long)local_120 + uVar17);
                    }
                    goto LAB_0184904c;
                  }
                  if ((0xc < uVar5) && ((ulong)puVar18[6] != 0)) {
                    uVar16 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
                    goto LAB_0184904c;
                  }
                }
LAB_01849098:
                uVar16 = 0;
              }
LAB_0184904c:
              lVar2 = lVar14 + lVar15 * 0x24 + lVar23;
              lVar23 = lVar23 + 0xc;
              *(float *)(lVar2 + 0x38) = fVar24;
              *(float *)(lVar2 + 0x3c) = fVar25;
              ppuVar22 = ppuVar22 + 3;
              *(undefined4 *)(lVar2 + 0x40) = uVar16;
            } while (lVar23 != 0x24);
            lVar15 = 1;
            bVar6 = !bVar13;
            bVar13 = true;
          } while (bVar6);
        }
        uVar10 = uVar10 + 1;
        lVar14 = lVar14 + 0x48;
      } while (uVar10 != uVar21);
    }
    if (*(uint *)(lVar8 + 0x28) < 2) {
      lVar14 = lVar8 + (ulong)*(uint *)(lVar8 + 0x28) * 0x48;
      uVar16 = *(undefined4 *)(lVar14 + 0x40);
      uVar3 = *(undefined4 *)(lVar14 + 0x4c);
      uVar4 = *(undefined4 *)(lVar14 + 0x58);
      *(undefined8 *)(lVar8 + 200) = 4;
      *(undefined4 *)(lVar8 + 0xd0) = 4;
      *(undefined4 *)(lVar8 + 0xd4) = uVar16;
      *(undefined4 *)(lVar8 + 0xd8) = 2;
      *(undefined4 *)(lVar8 + 0xdc) = uVar3;
      *(undefined4 *)(lVar8 + 0xe0) = 2;
      *(undefined4 *)(lVar8 + 0xe4) = uVar4;
    }
    uVar12 = 1;
  }
  return uVar12;
}


