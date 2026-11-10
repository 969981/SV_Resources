/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034960ac; name: FUN_034960ac
 */


undefined4 FUN_034960ac(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  ulong *puVar26;
  uint uVar27;
  long lVar28;
  undefined8 *puVar29;
  int iVar30;
  long *plVar31;
  long *plVar32;
  ulong uVar33;
  long *plVar34;
  long *plVar35;
  undefined8 *puVar36;
  long *plVar37;
  uint uVar38;
  long *plVar39;
  undefined4 *puVar40;
  undefined *puVar41;
  undefined8 *puVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 local_dc;
  undefined1 auStack_98 [4];
  uint local_94;
  
  plVar39 = (long *)(param_1 + 0x40);
  for (plVar19 = (long *)*plVar39; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    *(undefined4 *)(plVar19 + 5) = 0;
    *(undefined4 *)(plVar19 + 2) = 0;
    *(undefined4 *)(plVar19 + 4) = 0;
  }
  plVar32 = (long *)(param_1 + 0x28);
  for (plVar19 = (long *)*plVar32; plVar19 != (long *)0x0; plVar19 = (long *)*plVar19) {
    *(undefined4 *)(plVar19 + 5) = 0;
    *(undefined4 *)(plVar19 + 2) = 0;
    *(undefined4 *)(plVar19 + 4) = 0;
  }
  plVar23 = (long *)(param_1 + 0x58);
  plVar19 = (long *)*plVar23;
  if (plVar19 == (long *)0x0) {
    puVar36 = (undefined8 *)0x0;
  }
  else {
    do {
      *(undefined4 *)(plVar19 + 5) = 0;
      *(undefined4 *)(plVar19 + 2) = 0;
      *(undefined4 *)(plVar19 + 4) = 0;
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0);
    puVar36 = (undefined8 *)*plVar23;
  }
  plVar35 = *(long **)(param_1 + 0x40);
  plVar34 = *(long **)(param_1 + 0x28);
  plVar19 = *(long **)(param_1 + 0x10);
  puVar41 = PTR_DAT_047e2fd0;
  local_94 = param_2;
  if (plVar19 == (long *)0x0) {
    local_dc = 1;
  }
  else {
    local_dc = 0x34;
    do {
      (**(code **)(*plVar19 + 0x18))(plVar19,local_94);
      if ((*(int *)((long)plVar19 + 0x7c) == 3) ||
         (*(int *)((long)plVar19 + 0x8c) < *(int *)((long)plVar19 + 0x84))) {
        iVar30 = *(int *)(plVar19[2] + 0x18);
        if (iVar30 == 2) {
          if ((puVar36 == (undefined8 *)0x0) ||
             ((*(int *)(puVar36 + 2) == *(int *)((long)puVar36 + 0x14) &&
              (puVar36 = (undefined8 *)*puVar36, puVar36 == (undefined8 *)0x0)))) {
            puVar36 = (undefined8 *)(**(code **)(puVar41 + 0x10))(0,0x38);
            if (puVar36 != (undefined8 *)0x0) {
              puVar36[5] = 0;
              puVar36[6] = 0;
              *puVar36 = 0;
              puVar36[3] = 0;
              puVar36[4] = 0;
              puVar36[1] = 0;
              puVar36[2] = 0;
              lVar14 = (**(code **)(puVar41 + 0x18))(0,0x280,0x10);
              puVar36[1] = lVar14;
              if (lVar14 != 0) {
                *(undefined4 *)((long)puVar36 + 0x14) = 0x10;
                lVar14 = (**(code **)(puVar41 + 0x18))(0,0x180,0x10);
                puVar36[3] = lVar14;
                if (lVar14 != 0) {
                  *(undefined4 *)((long)puVar36 + 0x24) = 0x10;
                  *puVar36 = 0;
                  if (*plVar23 == 0) {
                    plVar31 = plVar23;
                  }
                  else {
                    plVar31 = *(long **)(param_1 + 0x50);
                  }
                  *plVar31 = (long)puVar36;
                  *(undefined8 **)(param_1 + 0x50) = puVar36;
                  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
                  goto LAB_034965a4;
                }
              }
              if (puVar36[6] != 0) {
                (**(code **)(puVar41 + 0x30))(0);
              }
              *(undefined4 *)((long)puVar36 + 0x2c) = 0;
              puVar36[6] = 0;
              if (puVar36[1] != 0) {
                *(undefined4 *)(puVar36 + 2) = 0;
                (**(code **)(puVar41 + 0x30))(0);
                puVar36[1] = 0;
                *(undefined4 *)((long)puVar36 + 0x14) = 0;
              }
              if (puVar36[3] != 0) {
                *(undefined4 *)(puVar36 + 4) = 0;
                (**(code **)(puVar41 + 0x30))(0);
                puVar36[3] = 0;
                *(undefined4 *)((long)puVar36 + 0x24) = 0;
              }
              (**(code **)(puVar41 + 0x30))(0,puVar36);
              local_dc = 0x34;
            }
            goto joined_r0x034967bc;
          }
LAB_034965a4:
          uVar38 = *(uint *)(puVar36 + 2);
          uVar17 = *(uint *)((long)puVar36 + 0x14);
          if (uVar38 < uVar17) {
            lVar14 = puVar36[1];
          }
          else {
            iVar30 = uVar17 + (uVar17 >> 1);
            if (uVar17 == 0) {
              iVar30 = 1;
            }
            lVar14 = (**(code **)(puVar41 + 0x28))
                               (0,puVar36[1],(ulong)(iVar30 + uVar17) * 0x28,0x10);
            uVar38 = *(uint *)(puVar36 + 2);
            *(uint *)((long)puVar36 + 0x14) = iVar30 + uVar17;
            puVar36[1] = lVar14;
          }
          puVar40 = (undefined4 *)(lVar14 + (ulong)uVar38 * 0x28);
          *(uint *)(puVar36 + 2) = uVar38 + 1;
          puVar40[6] = *(undefined4 *)((long)plVar19 + 0xac);
          puVar40[7] = (int)plVar19[0x16];
          puVar40[8] = *(undefined4 *)((long)plVar19 + 0xb4);
        }
        else {
          if (iVar30 != 1) {
            if (iVar30 != 0) goto LAB_03496790;
            if ((plVar35 != (long *)0x0) &&
               (((int)plVar35[2] != *(int *)((long)plVar35 + 0x14) ||
                (plVar35 = (long *)*plVar35, plVar35 != (long *)0x0)))) {
LAB_034963bc:
              uVar17 = *(uint *)(plVar35 + 2);
              uVar38 = *(uint *)((long)plVar35 + 0x14);
              if (uVar17 < uVar38) {
LAB_03496400:
                if (uVar38 <= uVar17) goto LAB_03496434;
                uVar38 = *(uint *)(plVar35 + 2);
                lVar14 = plVar35[1];
                *(uint *)(plVar35 + 2) = uVar38 + 1;
                puVar40 = (undefined4 *)(lVar14 + (ulong)uVar38 * 0x58);
                if (lVar14 != 0) {
                  lVar14 = lVar14 + (ulong)uVar38 * 0x58;
                  *(undefined8 *)(lVar14 + 0x48) = 0;
                  *(undefined8 *)(lVar14 + 0x50) = 0;
                  *(undefined8 *)(lVar14 + 0x38) = 0;
                  *(undefined8 *)(lVar14 + 0x40) = 0;
                }
              }
              else {
                iVar30 = uVar38 + (uVar38 >> 1);
                if (uVar38 == 0) {
                  iVar30 = 1;
                }
                uVar38 = iVar30 + uVar38;
                lVar14 = (**(code **)(puVar41 + 0x28))(0,plVar35[1],(ulong)uVar38 * 0x58,0x10);
                if (lVar14 != 0) {
                  plVar35[1] = lVar14;
                  *(uint *)((long)plVar35 + 0x14) = uVar38;
                  goto LAB_03496400;
                }
LAB_03496434:
                puVar40 = (undefined4 *)0x0;
              }
              lVar14 = plVar19[0xc];
              if (lVar14 != 0) {
                fVar47 = *(float *)(lVar14 + 0x24);
                uVar4 = *(undefined4 *)(lVar14 + 0x28);
                iVar30 = *(int *)(lVar14 + 0x2c);
                lVar24 = *(long *)(lVar14 + 0x30);
                lVar28 = *(long *)(lVar14 + 0x18);
                *(undefined4 *)(plVar19 + 0x1b) = *(undefined4 *)(lVar14 + 0x20);
                plVar19[0x1a] = lVar28;
                *(float *)((long)plVar19 + 0xdc) = fVar47;
                *(undefined4 *)(plVar19 + 0x1c) = uVar4;
                *(int *)((long)plVar19 + 0xe4) = iVar30;
                plVar19[0x1d] = lVar24;
                if (iVar30 == 0) {
                  fVar43 = 6.2831855;
LAB_0349648c:
                  fVar47 = fmodf(fVar47,fVar43);
                  *(float *)((long)plVar19 + 0xdc) = fVar47;
                }
                else if (iVar30 != 5) {
                  fVar43 = 1.0;
                  goto LAB_0349648c;
                }
                if ((char)plVar19[0x1e] != '\0') {
                  fVar48 = *(float *)(plVar19 + 0x18);
                  fVar49 = *(float *)((long)plVar19 + 0xc4);
                  fVar43 = 0.0;
                  fVar45 = 1.0;
                  if (fVar49 != 0.0) {
                    dVar44 = (double)NEON_fminnm((double)fVar48,0x40e7700000000000);
                    dVar44 = log(24000.0 / dVar44);
                    dVar44 = exp(dVar44 * -(double)fVar49);
                    dVar44 = cos(dVar44 * 3.141592653589793);
                    dVar44 = 2.0 - dVar44;
                    fVar43 = (float)(SQRT(dVar44 * dVar44 + -1.0) - dVar44);
                    fVar45 = fVar43 + 1.0;
                  }
                  iVar5 = *(int *)((long)plVar19 + 0xbc);
                  fVar49 = fVar48 * 2.0833333e-05;
                  if (48000.0 <= fVar48) {
                    fVar49 = 1.0;
                  }
                  *(float *)(plVar19 + 0x1c) = fVar49;
                  if (iVar5 == 0) {
                    *(float *)(plVar19 + 0x1c) = fVar49 * 6.2831855;
                  }
                  *(float *)((long)plVar19 + 0xd4) = fVar45;
                  *(float *)(plVar19 + 0x1b) = fVar43;
                  if (iVar30 != iVar5) {
                    if (iVar30 == 0) {
                      fVar43 = 0.15915494;
                    }
                    else {
                      if (iVar5 != 0) goto LAB_03496704;
                      fVar43 = 6.2831855;
                    }
                    *(float *)((long)plVar19 + 0xdc) = fVar47 * fVar43;
                  }
LAB_03496704:
                  *(int *)((long)plVar19 + 0xe4) = iVar5;
                  *(undefined1 *)(plVar19 + 0x1e) = 0;
                }
              }
              puVar40[6] = (int)plVar19[0x16];
              puVar40[7] = *(undefined4 *)((long)plVar19 + 0xb4);
              puVar40[8] = (int)plVar19[0x17];
              puVar40[9] = *(undefined4 *)((long)plVar19 + 0xbc);
              puVar40[10] = (int)plVar19[0x18];
              puVar40[0xb] = *(undefined4 *)((long)plVar19 + 0xc4);
              puVar40[0xc] = (int)plVar19[0x19];
              lVar14 = plVar19[0x1a];
              lVar24 = plVar19[0x1b];
              lVar28 = plVar19[0x1d];
              *(long *)(puVar40 + 0x12) = plVar19[0x1c];
              *(long *)(puVar40 + 0x14) = lVar28;
              *(long *)(puVar40 + 0xe) = lVar14;
              *(long *)(puVar40 + 0x10) = lVar24;
              *puVar40 = (int)plVar19[0xf];
              puVar40[3] = (int)plVar19[0xe];
              puVar40[2] = *(undefined4 *)((long)plVar19 + 0x6c);
              puVar40[1] = (int)plVar19[0xd];
              puVar40[4] = (int)plVar19[0x10];
              puVar40[5] = (int)plVar19[0x11];
              puVar41 = PTR_DAT_047e2fd0;
              goto LAB_03496790;
            }
            plVar35 = (long *)(**(code **)(puVar41 + 0x10))(0,0x38);
            if (plVar35 != (long *)0x0) {
              plVar35[5] = 0;
              plVar35[6] = 0;
              *plVar35 = 0;
              plVar35[3] = 0;
              plVar35[4] = 0;
              plVar35[1] = 0;
              plVar35[2] = 0;
              lVar14 = (**(code **)(puVar41 + 0x18))(0,0x580,0x10);
              plVar35[1] = lVar14;
              if (lVar14 != 0) {
                *(undefined4 *)((long)plVar35 + 0x14) = 0x10;
                lVar14 = (**(code **)(puVar41 + 0x18))(0,0x380,0x10);
                plVar35[3] = lVar14;
                if (lVar14 != 0) {
                  *(undefined4 *)((long)plVar35 + 0x24) = 0x10;
                  *plVar35 = 0;
                  if (*plVar39 == 0) {
                    plVar31 = plVar39;
                  }
                  else {
                    plVar31 = *(long **)(param_1 + 0x38);
                  }
                  *plVar31 = (long)plVar35;
                  *(long **)(param_1 + 0x38) = plVar35;
                  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
                  goto LAB_034963bc;
                }
              }
              if (plVar35[6] != 0) {
                (**(code **)(puVar41 + 0x30))(0);
              }
              *(undefined4 *)((long)plVar35 + 0x2c) = 0;
              plVar35[6] = 0;
              if (plVar35[1] != 0) {
                *(undefined4 *)(plVar35 + 2) = 0;
                (**(code **)(puVar41 + 0x30))(0);
                plVar35[1] = 0;
                *(undefined4 *)((long)plVar35 + 0x14) = 0;
              }
              if (plVar35[3] != 0) {
                *(undefined4 *)(plVar35 + 4) = 0;
                (**(code **)(puVar41 + 0x30))(0);
                plVar35[3] = 0;
                *(undefined4 *)((long)plVar35 + 0x24) = 0;
              }
              (**(code **)(puVar41 + 0x30))(0,plVar35);
              local_dc = 0x34;
            }
            goto LAB_03496888;
          }
          if ((plVar34 == (long *)0x0) ||
             (((int)plVar34[2] == *(int *)((long)plVar34 + 0x14) &&
              (plVar34 = (long *)*plVar34, plVar34 == (long *)0x0)))) {
            plVar34 = (long *)(**(code **)(puVar41 + 0x10))(0,0x38);
            if (plVar34 != (long *)0x0) {
              plVar34[5] = 0;
              plVar34[6] = 0;
              *plVar34 = 0;
              plVar34[3] = 0;
              plVar34[4] = 0;
              plVar34[1] = 0;
              plVar34[2] = 0;
              lVar14 = (**(code **)(puVar41 + 0x18))(0,0x300,0x10);
              plVar34[1] = lVar14;
              if (lVar14 != 0) {
                *(undefined4 *)((long)plVar34 + 0x14) = 0x10;
                lVar14 = (**(code **)(puVar41 + 0x18))(0,0x180,0x10);
                plVar34[3] = lVar14;
                if (lVar14 != 0) {
                  *(undefined4 *)((long)plVar34 + 0x24) = 0x10;
                  *plVar34 = 0;
                  if (*plVar32 == 0) {
                    plVar31 = plVar32;
                  }
                  else {
                    plVar31 = *(long **)(param_1 + 0x20);
                  }
                  *plVar31 = (long)plVar34;
                  *(long **)(param_1 + 0x20) = plVar34;
                  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
                  goto LAB_03496630;
                }
              }
              if (plVar34[6] != 0) {
                (**(code **)(puVar41 + 0x30))(0);
              }
              *(undefined4 *)((long)plVar34 + 0x2c) = 0;
              plVar34[6] = 0;
              if (plVar34[1] != 0) {
                *(undefined4 *)(plVar34 + 2) = 0;
                (**(code **)(puVar41 + 0x30))(0);
                plVar34[1] = 0;
                *(undefined4 *)((long)plVar34 + 0x14) = 0;
              }
              if (plVar34[3] != 0) {
                *(undefined4 *)(plVar34 + 4) = 0;
                (**(code **)(puVar41 + 0x30))(0);
                plVar34[3] = 0;
                *(undefined4 *)((long)plVar34 + 0x24) = 0;
              }
              (**(code **)(puVar41 + 0x30))(0,plVar34);
              local_dc = 0x34;
              plVar34 = (long *)0x0;
            }
            goto joined_r0x034967bc;
          }
LAB_03496630:
          uVar38 = *(uint *)(plVar34 + 2);
          uVar17 = *(uint *)((long)plVar34 + 0x14);
          if (uVar38 < uVar17) {
            lVar14 = plVar34[1];
          }
          else {
            iVar30 = uVar17 + (uVar17 >> 1);
            if (uVar17 == 0) {
              iVar30 = 1;
            }
            lVar14 = (**(code **)(puVar41 + 0x28))
                               (0,plVar34[1],(ulong)(iVar30 + uVar17) * 0x30,0x10);
            uVar38 = *(uint *)(plVar34 + 2);
            *(uint *)((long)plVar34 + 0x14) = iVar30 + uVar17;
            plVar34[1] = lVar14;
          }
          puVar40 = (undefined4 *)(lVar14 + (ulong)uVar38 * 0x30);
          *(uint *)(plVar34 + 2) = uVar38 + 1;
          puVar40[6] = *(undefined4 *)((long)plVar19 + 0xac);
          puVar40[7] = (int)plVar19[0x16];
          puVar40[8] = *(undefined4 *)((long)plVar19 + 0xb4);
          puVar40[9] = (int)plVar19[0x17];
          puVar40[10] = *(undefined4 *)((long)plVar19 + 0xbc);
          puVar40[0xb] = (int)plVar19[0x18];
        }
        *puVar40 = (int)plVar19[0xf];
        puVar40[3] = (int)plVar19[0xe];
        puVar40[2] = *(undefined4 *)((long)plVar19 + 0x6c);
        puVar40[1] = (int)plVar19[0xd];
        puVar40[4] = (int)plVar19[0x10];
        puVar40[5] = (int)plVar19[0x11];
      }
LAB_03496790:
      plVar19 = (long *)plVar19[1];
    } while (plVar19 != (long *)0x0);
    local_dc = 1;
  }
joined_r0x034967bc:
  if ((plVar35 != (long *)0x0) && (*(uint *)(plVar35 + 2) < *(uint *)((long)plVar35 + 0x14) >> 1)) {
    plVar31 = (long *)*plVar35;
    while (plVar31 != (long *)0x0) {
      *(undefined4 *)(plVar31 + 2) = 0;
      *(undefined4 *)(plVar31 + 4) = 0;
      plVar37 = plVar39;
      if (*(long **)(param_1 + 0x40) != plVar31) {
        plVar37 = plVar35;
      }
      *plVar37 = *plVar31;
      if (*(long **)(param_1 + 0x38) == plVar31) {
        *(long **)(param_1 + 0x38) = plVar35;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      plVar37 = (long *)*plVar35;
      if (plVar31[6] != 0) {
        (**(code **)(puVar41 + 0x30))(0);
      }
      *(undefined4 *)((long)plVar31 + 0x2c) = 0;
      plVar31[6] = 0;
      if (plVar31[1] != 0) {
        *(undefined4 *)(plVar31 + 2) = 0;
        (**(code **)(puVar41 + 0x30))(0);
        plVar31[1] = 0;
        *(undefined4 *)((long)plVar31 + 0x14) = 0;
      }
      if (plVar31[3] != 0) {
        *(undefined4 *)(plVar31 + 4) = 0;
        (**(code **)(puVar41 + 0x30))(0);
        plVar31[3] = 0;
        *(undefined4 *)((long)plVar31 + 0x24) = 0;
      }
      (**(code **)(puVar41 + 0x30))(0,plVar31);
      plVar31 = plVar37;
    }
  }
LAB_03496888:
  if (plVar34 != (long *)0x0) {
    uVar38 = *(uint *)(plVar34 + 2);
    if ((uVar38 < *(uint *)((long)plVar34 + 0x14) >> 1) &&
       (plVar35 = (long *)*plVar34, (long *)*plVar34 != (long *)0x0)) {
      do {
        *(undefined4 *)(plVar35 + 2) = 0;
        *(undefined4 *)(plVar35 + 4) = 0;
        plVar31 = plVar32;
        if (*(long **)(param_1 + 0x28) != plVar35) {
          plVar31 = plVar34;
        }
        *plVar31 = *plVar35;
        if (*(long **)(param_1 + 0x20) == plVar35) {
          *(long **)(param_1 + 0x20) = plVar34;
        }
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        plVar31 = (long *)*plVar34;
        if (plVar35[6] != 0) {
          (**(code **)(puVar41 + 0x30))(0);
        }
        *(undefined4 *)((long)plVar35 + 0x2c) = 0;
        plVar35[6] = 0;
        if (plVar35[1] != 0) {
          *(undefined4 *)(plVar35 + 2) = 0;
          (**(code **)(puVar41 + 0x30))(0);
          plVar35[1] = 0;
          *(undefined4 *)((long)plVar35 + 0x14) = 0;
        }
        if (plVar35[3] != 0) {
          *(undefined4 *)(plVar35 + 4) = 0;
          (**(code **)(puVar41 + 0x30))(0);
          plVar35[3] = 0;
          *(undefined4 *)((long)plVar35 + 0x24) = 0;
        }
        (**(code **)(puVar41 + 0x30))(0,plVar35);
        plVar35 = plVar31;
      } while (plVar31 != (long *)0x0);
      uVar38 = *(uint *)(plVar34 + 2);
    }
    if (uVar38 < *(uint *)((long)plVar34 + 0x14) >> 1) {
      plVar35 = (long *)*plVar34;
      while (plVar35 != (long *)0x0) {
        *(undefined4 *)(plVar35 + 2) = 0;
        *(undefined4 *)(plVar35 + 4) = 0;
        plVar31 = plVar23;
        if (*(long **)(param_1 + 0x58) != plVar35) {
          plVar31 = plVar34;
        }
        *plVar31 = *plVar35;
        if (*(long **)(param_1 + 0x50) == plVar35) {
          *(long **)(param_1 + 0x50) = plVar34;
        }
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
        plVar31 = (long *)*plVar34;
        if (plVar35[6] != 0) {
          (**(code **)(puVar41 + 0x30))(0);
        }
        *(undefined4 *)((long)plVar35 + 0x2c) = 0;
        plVar35[6] = 0;
        if (plVar35[1] != 0) {
          *(undefined4 *)(plVar35 + 2) = 0;
          (**(code **)(puVar41 + 0x30))(0);
          plVar35[1] = 0;
          *(undefined4 *)((long)plVar35 + 0x14) = 0;
        }
        if (plVar35[3] != 0) {
          *(undefined4 *)(plVar35 + 4) = 0;
          (**(code **)(puVar41 + 0x30))(0);
          plVar35[3] = 0;
          *(undefined4 *)((long)plVar35 + 0x24) = 0;
        }
        (**(code **)(puVar41 + 0x30))(0,plVar35);
        plVar35 = plVar31;
      }
    }
  }
  plVar34 = *(long **)(param_1 + 0x10);
  if (plVar19 != plVar34) {
    plVar35 = (long *)*plVar23;
    plVar37 = (long *)*plVar39;
    plVar31 = (long *)*plVar32;
    do {
      if ((*(int *)((long)plVar34 + 0x7c) == 3) ||
         (*(int *)((long)plVar34 + 0x8c) < *(int *)((long)plVar34 + 0x84))) {
        iVar30 = *(int *)(plVar34[2] + 0x18);
        if (iVar30 == 2) {
          uVar17 = *(uint *)(plVar35 + 4);
          uVar38 = *(uint *)((long)plVar35 + 0x24);
          if (uVar17 < uVar38) {
LAB_03496b4c:
            if (uVar38 <= uVar17) goto LAB_03496c34;
            uVar38 = *(uint *)(plVar35 + 4);
            lVar14 = plVar35[3];
            *(uint *)(plVar35 + 4) = uVar38 + 1;
            puVar36 = (undefined8 *)(lVar14 + (ulong)uVar38 * 0x18);
            if (lVar14 != 0) {
              lVar14 = lVar14 + (ulong)uVar38 * 0x18;
              *puVar36 = 0;
              *(undefined4 *)(lVar14 + 8) = 0xffffffff;
              *(undefined8 *)(lVar14 + 0xc) = 0;
            }
          }
          else {
            iVar30 = uVar38 + (uVar38 >> 1);
            if (uVar38 == 0) {
              iVar30 = 1;
            }
            uVar38 = iVar30 + uVar38;
            lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,plVar35[3],(ulong)uVar38 * 0x18,0x10);
            if (lVar14 != 0) {
              plVar35[3] = lVar14;
              *(uint *)((long)plVar35 + 0x24) = uVar38;
              goto LAB_03496b4c;
            }
LAB_03496c34:
            puVar36 = (undefined8 *)0x0;
          }
          plVar34[0xc] = (long)puVar36;
          *(int *)(plVar35 + 5) = (int)plVar35[5] + (int)plVar34[0x11];
          if ((int)plVar35[2] == (int)plVar35[4]) {
            plVar35 = (long *)*plVar35;
          }
        }
        else {
          if (iVar30 != 1) {
            if (iVar30 != 0) goto LAB_03496c90;
            uVar17 = *(uint *)(plVar37 + 4);
            uVar38 = *(uint *)((long)plVar37 + 0x24);
            if (uVar17 < uVar38) {
LAB_03496abc:
              if (uVar38 <= uVar17) goto LAB_03496c04;
              uVar38 = *(uint *)(plVar37 + 4);
              lVar14 = plVar37[3];
              *(uint *)(plVar37 + 4) = uVar38 + 1;
              puVar36 = (undefined8 *)(lVar14 + (ulong)uVar38 * 0x38);
              if (lVar14 != 0) {
                lVar14 = lVar14 + (ulong)uVar38 * 0x38;
                *puVar36 = 0;
                *(undefined4 *)(lVar14 + 8) = 0xffffffff;
                *(undefined8 *)(lVar14 + 0xc) = 0;
                *(undefined8 *)(lVar14 + 0x18) = 0;
                *(undefined8 *)(lVar14 + 0x20) = 0;
                *(undefined8 *)(lVar14 + 0x28) = 0;
                *(undefined8 *)(lVar14 + 0x30) = 0;
              }
            }
            else {
              iVar30 = uVar38 + (uVar38 >> 1);
              if (uVar38 == 0) {
                iVar30 = 1;
              }
              uVar38 = iVar30 + uVar38;
              lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))
                                 (0,plVar37[3],(ulong)uVar38 * 0x38,0x10);
              if (lVar14 != 0) {
                plVar37[3] = lVar14;
                *(uint *)((long)plVar37 + 0x24) = uVar38;
                goto LAB_03496abc;
              }
LAB_03496c04:
              puVar36 = (undefined8 *)0x0;
            }
            plVar34[0xc] = (long)puVar36;
            *(int *)(plVar37 + 5) = (int)plVar37[5] + (int)plVar34[0x11];
            if ((int)plVar37[2] == (int)plVar37[4]) {
              plVar37 = (long *)*plVar37;
            }
            goto LAB_03496c90;
          }
          uVar17 = *(uint *)(plVar31 + 4);
          uVar38 = *(uint *)((long)plVar31 + 0x24);
          if (uVar17 < uVar38) {
LAB_03496bcc:
            if (uVar38 <= uVar17) goto LAB_03496c64;
            uVar38 = *(uint *)(plVar31 + 4);
            lVar14 = plVar31[3];
            *(uint *)(plVar31 + 4) = uVar38 + 1;
            puVar36 = (undefined8 *)(lVar14 + (ulong)uVar38 * 0x18);
            if (lVar14 != 0) {
              lVar14 = lVar14 + (ulong)uVar38 * 0x18;
              *puVar36 = 0;
              *(undefined4 *)(lVar14 + 8) = 0xffffffff;
              *(undefined8 *)(lVar14 + 0xc) = 0;
            }
          }
          else {
            iVar30 = uVar38 + (uVar38 >> 1);
            if (uVar38 == 0) {
              iVar30 = 1;
            }
            uVar38 = iVar30 + uVar38;
            lVar14 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,plVar31[3],(ulong)uVar38 * 0x18,0x10);
            if (lVar14 != 0) {
              plVar31[3] = lVar14;
              *(uint *)((long)plVar31 + 0x24) = uVar38;
              goto LAB_03496bcc;
            }
LAB_03496c64:
            puVar36 = (undefined8 *)0x0;
          }
          plVar34[0xc] = (long)puVar36;
          *(int *)(plVar31 + 5) = (int)plVar31[5] + (int)plVar34[0x11];
          if ((int)plVar31[2] == (int)plVar31[4]) {
            plVar31 = (long *)*plVar31;
          }
        }
      }
      else {
        plVar34[0xc] = 0;
      }
LAB_03496c90:
      plVar34 = (long *)plVar34[1];
      puVar41 = PTR_DAT_047e2fd0;
    } while (plVar19 != plVar34);
  }
  for (; plVar34 != (long *)0x0; plVar34 = (long *)plVar34[1]) {
    plVar34[0xc] = 0;
  }
  plVar39 = (long *)*plVar39;
  if (plVar39 != (long *)0x0) {
    uVar38 = local_94 - 1;
    do {
      uVar17 = *(uint *)(plVar39 + 5);
      lVar14 = plVar39[6];
      if (*(uint *)((long)plVar39 + 0x2c) < uVar17) {
        if (lVar14 != 0) {
          (**(code **)(puVar41 + 0x30))(0,lVar14);
          uVar17 = *(uint *)(plVar39 + 5);
        }
        *(undefined4 *)((long)plVar39 + 0x2c) = 0;
        plVar39[6] = 0;
        lVar14 = (**(code **)(puVar41 + 0x18))(0,(ulong)uVar17 << 2,0x10);
        plVar39[6] = lVar14;
        if (lVar14 == 0) break;
        *(int *)((long)plVar39 + 0x2c) = (int)plVar39[5];
      }
      uVar17 = *(uint *)(plVar39 + 2);
      if (uVar17 != 0) {
        puVar36 = (undefined8 *)(plVar39[3] + 0x30);
        lVar28 = plVar39[1];
        lVar24 = 0;
        do {
          puVar36[-6] = lVar14;
          lVar2 = lVar28 + lVar24;
          *(undefined4 *)(puVar36 + -5) = 0xffffffff;
          fVar47 = *(float *)(lVar2 + 0x44);
          fVar43 = *(float *)(lVar2 + 0x48);
          uVar25 = *(undefined8 *)(lVar2 + 0x38);
          iVar30 = *(int *)(lVar2 + 0x4c);
          uVar20 = *(undefined8 *)(lVar2 + 0x50);
          *(undefined4 *)(puVar36 + -2) = *(undefined4 *)(lVar2 + 0x40);
          puVar42 = puVar36 + -3;
          *puVar42 = uVar25;
          *(float *)((long)puVar36 + -0xc) = fVar47;
          *(float *)(puVar36 + -1) = fVar43;
          *(int *)((long)puVar36 + -4) = iVar30;
          *puVar36 = uVar20;
          if (iVar30 == 0) {
            fVar45 = 6.2831855;
LAB_03496da4:
            fVar47 = fmodf(fVar47,fVar45);
            *(float *)((long)puVar36 + -0xc) = fVar47;
          }
          else if (iVar30 != 5) {
            fVar45 = 1.0;
            goto LAB_03496da4;
          }
          uVar22 = *(uint *)(lVar2 + 0xc);
          fVar48 = *(float *)(lVar2 + 0x18);
          uVar6 = *(uint *)(lVar2 + 0x1c);
          fVar45 = fVar48;
          if (uVar22 - local_94 < uVar6) {
            fVar45 = (fVar48 * (float)(uVar22 - local_94)) / (float)uVar6;
          }
          if (*(int *)(lVar2 + 0x14) == 0) {
            fVar47 = fVar47 + (float)uVar38 * fVar43;
            puVar36[-6] = 0;
            *(float *)((long)puVar36 + -0xc) = fVar47;
            if (iVar30 == 0) {
              fVar43 = 6.2831855;
LAB_03496e58:
              fVar47 = fmodf(fVar47,fVar43);
              *(float *)((long)puVar36 + -0xc) = fVar47;
            }
            else if (iVar30 != 5) {
              fVar43 = 1.0;
              goto LAB_03496e58;
            }
            FUN_034952fc(fVar45,fVar45,*(undefined4 *)(lVar2 + 0x30),puVar42,(long)puVar36 + -0x24,1
                         ,auStack_98);
            *(undefined4 *)(puVar36 + -4) = *(undefined4 *)((long)puVar36 + -0x24);
          }
          else {
            if (uVar22 < uVar6) {
              fVar48 = (fVar48 * (float)uVar22) / (float)uVar6;
            }
            FUN_034952fc(fVar48,fVar45,*(undefined4 *)(lVar2 + 0x30),puVar42,lVar14,local_94,
                         auStack_98);
            *(undefined4 *)((long)puVar36 + -0x24) = *(undefined4 *)(lVar14 + (ulong)uVar38 * 4);
            *(float *)(puVar36 + -4) = fVar48;
          }
          lVar14 = lVar14 + (ulong)*(uint *)(lVar2 + 0x14) * 4;
          lVar24 = lVar24 + 0x58;
          puVar36 = puVar36 + 7;
        } while ((ulong)uVar17 * 0x58 != lVar24);
      }
      plVar39 = (long *)*plVar39;
      puVar41 = PTR_DAT_047e2fd0;
    } while (plVar39 != (long *)0x0);
  }
  for (plVar32 = (long *)*plVar32; plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
    uVar38 = *(uint *)(plVar32 + 5);
    puVar36 = (undefined8 *)plVar32[6];
    if (*(uint *)((long)plVar32 + 0x2c) < uVar38) {
      if (puVar36 != (undefined8 *)0x0) {
        (**(code **)(puVar41 + 0x30))(0,puVar36);
        uVar38 = *(uint *)(plVar32 + 5);
      }
      *(undefined4 *)((long)plVar32 + 0x2c) = 0;
      plVar32[6] = 0;
      puVar36 = (undefined8 *)(**(code **)(puVar41 + 0x18))(0,(ulong)uVar38 << 2,0x10);
      plVar32[6] = (long)puVar36;
      if (puVar36 == (undefined8 *)0x0) break;
      *(undefined4 *)((long)plVar32 + 0x2c) = *(undefined4 *)(plVar32 + 5);
    }
    if (*(uint *)(plVar32 + 2) != 0) {
      lVar14 = plVar32[1];
      lVar24 = lVar14 + (ulong)*(uint *)(plVar32 + 2) * 0x30;
      puVar42 = (undefined8 *)plVar32[3];
      do {
        *puVar42 = puVar36;
        if (*(int *)(lVar14 + 0x14) == 0) {
          *(undefined4 *)(puVar42 + 1) = 0xffffffff;
          fVar47 = *(float *)(lVar14 + 0x18);
          *(float *)(puVar42 + 2) = fVar47;
          fVar43 = *(float *)(lVar14 + 0x18);
          uVar7 = *(uint *)(lVar14 + 0x1c);
          uVar22 = *(uint *)(lVar14 + 4) & 0xfffffffc;
          uVar8 = uVar7 >> 1;
          uVar6 = *(uint *)(lVar14 + 0x28);
          uVar18 = *(uint *)(lVar14 + 0x2c);
          uVar17 = *(int *)(lVar14 + 8) + uVar22;
          uVar38 = *(int *)(lVar14 + 0xc) - local_94;
          if (0.0 < fVar43) {
            fVar45 = *(float *)(lVar14 + 0x20);
            if ((fVar45 <= fVar43) || (fVar45 <= 0.0)) {
              iVar30 = uVar8 + (int)(((fVar43 - fVar45) * (float)uVar8) / (1.0 - fVar45));
            }
            else {
              iVar30 = (int)((fVar43 * (float)uVar8) / fVar45);
            }
            uVar38 = iVar30 + uVar38;
            uVar17 = iVar30 + uVar17;
          }
          lVar28 = 0x18;
          if (uVar38 != 0) {
            lVar28 = 0x10;
          }
          fVar43 = *(float *)(lVar14 + lVar28);
          uVar27 = uVar22 - uVar38;
          if (uVar22 < uVar38 || uVar27 == 0) {
            uVar27 = local_94;
          }
          else {
            if (fVar47 <= 0.0) {
              fVar47 = 0.0;
            }
            if (local_94 <= uVar27) {
              uVar27 = local_94;
            }
            uVar38 = uVar27 + uVar38;
            *(float *)(puVar42 + 2) = fVar47;
            uVar27 = local_94 - uVar27;
          }
          uVar9 = uVar8 + uVar22;
          if (uVar17 <= uVar8 + uVar22) {
            uVar9 = uVar17;
          }
          uVar12 = uVar9 - uVar38;
          fVar45 = fVar43;
          if (uVar38 <= uVar9 && uVar12 != 0) {
            fVar47 = 0.0;
            if (uVar8 != 0) {
              fVar47 = *(float *)(lVar14 + 0x20) / (float)uVar8;
            }
            uVar10 = uVar27;
            if (uVar12 <= uVar27) {
              uVar10 = uVar12;
            }
            uVar38 = uVar10 + uVar38;
            fVar45 = fVar43 + (float)uVar10 * fVar47;
            fVar47 = fVar45;
            if (fVar45 <= fVar43) {
              fVar47 = fVar43;
            }
            uVar27 = uVar27 - uVar10;
            *(float *)(puVar42 + 2) = fVar47;
          }
          uVar7 = (uVar7 & 0xfffffffe) + uVar22;
          if (uVar17 <= uVar7) {
            uVar7 = uVar17;
          }
          uVar12 = uVar7 - uVar38;
          fVar43 = fVar45;
          if (uVar38 <= uVar7 && uVar12 != 0) {
            fVar47 = 0.0;
            if (uVar8 != 0) {
              fVar47 = (1.0 - *(float *)(lVar14 + 0x20)) / (float)uVar8;
            }
            uVar10 = uVar27;
            if (uVar12 <= uVar27) {
              uVar10 = uVar12;
            }
            uVar38 = uVar10 + uVar38;
            fVar43 = fVar45 + (float)uVar10 * fVar47;
            fVar47 = fVar43;
            if (fVar43 <= fVar45) {
              fVar47 = fVar45;
            }
            uVar27 = uVar27 - uVar10;
            *(float *)(puVar42 + 2) = fVar47;
          }
          uVar12 = uVar7 + uVar6;
          uVar10 = uVar12;
          if (uVar17 <= uVar12) {
            uVar10 = uVar17;
          }
          uVar11 = uVar10 - uVar38;
          fVar45 = fVar43;
          if (uVar38 <= uVar10 && uVar11 != 0) {
            fVar47 = 0.0;
            if (uVar6 != 0) {
              fVar47 = (*(float *)(lVar14 + 0x24) + -1.0) / (float)uVar6;
            }
            uVar3 = uVar27;
            if (uVar11 <= uVar27) {
              uVar3 = uVar11;
            }
            uVar38 = uVar3 + uVar38;
            fVar45 = fVar43 + (float)uVar3 * fVar47;
            fVar47 = fVar45;
            if (fVar45 <= fVar43) {
              fVar47 = fVar43;
            }
            uVar27 = uVar27 - uVar3;
            *(float *)(puVar42 + 2) = fVar47;
          }
          fVar43 = *(float *)(lVar14 + 0x24);
          uVar11 = uVar12 - uVar17;
          if (uVar12 < uVar17 || uVar11 == 0) {
            uVar22 = 0;
          }
          else {
            fVar48 = 1.0;
            if (uVar8 != 0) {
              fVar48 = ((float)(uVar7 - uVar9) +
                       ((float)(uVar9 - uVar22) - (float)(uVar7 - uVar9)) *
                       *(float *)(lVar14 + 0x20)) / (float)uVar8;
            }
            fVar49 = fVar48 - fVar43;
            if (fVar49 <= 0.0) {
              uVar22 = 0;
              fVar43 = fVar48;
            }
            else {
              if (uVar6 == 0) {
                fVar48 = 0.0;
                uVar22 = 0;
              }
              else {
                fVar48 = (fVar43 + -1.0) / (float)uVar6;
                if (fVar48 == 0.0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = (uint)(-fVar49 / fVar48);
                }
              }
              if (uVar22 <= uVar11) {
                uVar11 = uVar22;
              }
              uVar6 = uVar18;
              if (uVar11 <= uVar18) {
                uVar6 = uVar11;
              }
              uVar22 = uVar6 >> 1;
              fVar46 = 0.0;
              if (uVar18 != 0) {
                fVar46 = -fVar43 / (float)uVar18;
              }
              uVar6 = uVar10 + (uVar6 >> 1);
              fVar46 = fVar46 * -(float)uVar22;
              fVar43 = fVar46 + fVar43;
              uVar8 = uVar6 - uVar38;
              if (uVar38 <= uVar6 && uVar8 != 0) {
                fVar47 = 0.0;
                if (uVar22 != 0) {
                  fVar47 = ((-(fVar48 * ((float)uVar10 - (float)uVar7)) - fVar49) - fVar46) /
                           (float)uVar22;
                }
                uVar6 = uVar27;
                if (uVar8 <= uVar27) {
                  uVar6 = uVar8;
                }
                fVar48 = fVar45 + (float)uVar6 * fVar47;
                fVar47 = fVar48;
                if (fVar48 <= fVar45) {
                  fVar47 = fVar45;
                }
                uVar38 = uVar6 + uVar38;
                uVar27 = uVar27 - uVar6;
                *(float *)(puVar42 + 2) = fVar47;
                fVar45 = fVar48;
              }
            }
          }
          uVar6 = uVar27;
          if ((int)(uVar17 - uVar38) <= (int)uVar27) {
            uVar6 = uVar17 - uVar38;
          }
          if (0 < (int)uVar6) {
            fVar45 = *(float *)(lVar14 + 0x24);
            if (fVar47 <= fVar45) {
              fVar47 = fVar45;
            }
            uVar38 = uVar6 + uVar38;
            uVar27 = uVar27 - uVar6;
            *(float *)(puVar42 + 2) = fVar47;
          }
          uVar18 = uVar18 - uVar22;
          uVar17 = uVar18 + uVar17;
          uVar22 = uVar17 - uVar38;
          fVar48 = fVar45;
          if (uVar38 <= uVar17 && uVar22 != 0) {
            fVar47 = 0.0;
            if (uVar18 != 0) {
              fVar47 = -fVar43 / (float)uVar18;
            }
            uVar6 = uVar27;
            if (uVar22 <= uVar27) {
              uVar6 = uVar22;
            }
            uVar38 = uVar6 + uVar38;
            fVar48 = fVar45 + (float)uVar6 * fVar47;
            fVar47 = fVar48;
            if (fVar48 <= fVar45) {
              fVar47 = fVar45;
            }
            uVar27 = uVar27 - uVar6;
            *(float *)(puVar42 + 2) = fVar47;
          }
          if ((uVar27 != 0) && (uVar17 <= uVar38)) goto LAB_034978c8;
        }
        else {
          *(undefined4 *)(puVar42 + 1) = 0xffffffff;
          fVar47 = *(float *)(lVar14 + 0x18);
          *(float *)(puVar42 + 2) = fVar47;
          uVar22 = *(uint *)(lVar14 + 4) & 0xfffffffc;
          iVar30 = *(int *)(lVar14 + 0x28);
          iVar5 = *(int *)(lVar14 + 0x2c);
          fVar43 = *(float *)(lVar14 + 0x18);
          uVar6 = (*(uint *)(lVar14 + 0x1c) >> 1) + 2 & 0xfffffffc;
          uVar17 = (*(int *)(lVar14 + 8) + 2U & 0xfffffffc) + uVar22;
          uVar38 = *(int *)(lVar14 + 0xc) - local_94;
          if (0.0 < fVar43) {
            fVar45 = *(float *)(lVar14 + 0x20);
            if ((fVar45 <= fVar43) || (fVar45 <= 0.0)) {
              iVar21 = uVar6 + (int)(((fVar43 - fVar45) * (float)uVar6) / (1.0 - fVar45));
            }
            else {
              iVar21 = (int)((fVar43 * (float)uVar6) / fVar45);
            }
            uVar18 = iVar21 + 2U & 0xfffffffc;
            uVar38 = uVar18 + uVar38;
            uVar17 = uVar18 + uVar17;
          }
          lVar28 = 0x18;
          if (uVar38 != 0) {
            lVar28 = 0x10;
          }
          fVar48 = *(float *)(lVar14 + lVar28);
          uVar18 = uVar22 - uVar38;
          if (uVar22 < uVar38 || uVar18 == 0) {
            puVar16 = puVar36;
            uVar18 = local_94;
          }
          else {
            if (local_94 <= uVar18) {
              uVar18 = local_94;
            }
            puVar16 = (undefined8 *)((long)puVar36 + (ulong)uVar18 * 4);
            if (uVar18 != 0) {
              puVar15 = puVar16;
              if (puVar16 <= puVar36 + 2) {
                puVar15 = puVar36 + 2;
              }
              memset(puVar36,0,(long)puVar15 + ~(ulong)puVar36 + 0x10 & 0xfffffffffffffff0);
              fVar47 = *(float *)(puVar42 + 2);
            }
            if (fVar47 <= 0.0) {
              fVar47 = 0.0;
            }
            uVar38 = uVar18 + uVar38;
            *(float *)(puVar42 + 2) = fVar47;
            uVar18 = local_94 - uVar18;
          }
          uVar7 = uVar6 + uVar22;
          if (uVar17 <= uVar6 + uVar22) {
            uVar7 = uVar17;
          }
          uVar8 = uVar7 - uVar38;
          puVar15 = puVar16;
          if (uVar38 <= uVar7 && uVar8 != 0) {
            fVar47 = 0.0;
            if (uVar6 != 0) {
              fVar47 = *(float *)(lVar14 + 0x20) / (float)uVar6;
            }
            uVar27 = uVar18;
            if (uVar8 <= uVar18) {
              uVar27 = uVar8;
            }
            if (uVar27 != 0) {
              fVar43 = fVar47 * 4.0;
              fVar45 = fVar47 + fVar47 + fVar48;
              fVar49 = fVar47 * 3.0 + fVar48;
              puVar15 = (undefined8 *)((long)puVar16 + (ulong)uVar27 * 4);
              puVar16[1] = CONCAT44(fVar49,fVar45);
              *puVar16 = CONCAT44(fVar47 + fVar48,fVar48 + 0.0);
              uVar20 = CONCAT44(fVar47 + fVar48 + fVar43,fVar48 + 0.0 + fVar43);
              uVar25 = CONCAT44(fVar49 + fVar43,fVar45 + fVar43);
              if (4 < uVar27) {
                puVar16 = puVar16 + 2;
                do {
                  puVar29 = puVar16 + 2;
                  puVar16[1] = uVar25;
                  *puVar16 = uVar20;
                  uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + fVar43,(float)uVar20 + fVar43);
                  uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar43,(float)uVar25 + fVar43);
                  puVar16 = puVar29;
                } while (puVar29 < puVar15);
              }
              fVar47 = (float)NEON_fminnm((int)uVar20,0x3f800000);
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              fVar43 = fVar47;
              if (fVar47 <= fVar48) {
                fVar43 = fVar48;
              }
              if (fVar43 <= *(float *)(puVar42 + 2)) {
                fVar43 = *(float *)(puVar42 + 2);
              }
              *(float *)(puVar42 + 2) = fVar43;
              fVar48 = fVar47;
            }
            uVar38 = uVar27 + uVar38;
            uVar18 = uVar18 - uVar27;
          }
          uVar27 = iVar30 + 2U & 0xfffffffc;
          uVar8 = uVar22 + uVar6 * 2;
          if (uVar17 <= uVar8) {
            uVar8 = uVar17;
          }
          uVar9 = uVar8 - uVar38;
          puVar16 = puVar15;
          if (uVar38 <= uVar8 && uVar9 != 0) {
            fVar47 = 0.0;
            if (uVar6 != 0) {
              fVar47 = (1.0 - *(float *)(lVar14 + 0x20)) / (float)uVar6;
            }
            uVar12 = uVar18;
            if (uVar9 <= uVar18) {
              uVar12 = uVar9;
            }
            if (uVar12 != 0) {
              fVar43 = fVar47 * 4.0;
              fVar45 = fVar47 + fVar47 + fVar48;
              fVar49 = fVar47 * 3.0 + fVar48;
              puVar16 = (undefined8 *)((long)puVar15 + (ulong)uVar12 * 4);
              puVar15[1] = CONCAT44(fVar49,fVar45);
              *puVar15 = CONCAT44(fVar47 + fVar48,fVar48 + 0.0);
              uVar20 = CONCAT44(fVar47 + fVar48 + fVar43,fVar48 + 0.0 + fVar43);
              uVar25 = CONCAT44(fVar49 + fVar43,fVar45 + fVar43);
              if (4 < uVar12) {
                puVar15 = puVar15 + 2;
                do {
                  puVar29 = puVar15 + 2;
                  puVar15[1] = uVar25;
                  *puVar15 = uVar20;
                  uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + fVar43,(float)uVar20 + fVar43);
                  uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar43,(float)uVar25 + fVar43);
                  puVar15 = puVar29;
                } while (puVar29 < puVar16);
              }
              fVar47 = (float)NEON_fminnm((int)uVar20,0x3f800000);
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              fVar43 = fVar47;
              if (fVar47 <= fVar48) {
                fVar43 = fVar48;
              }
              if (fVar43 <= *(float *)(puVar42 + 2)) {
                fVar43 = *(float *)(puVar42 + 2);
              }
              *(float *)(puVar42 + 2) = fVar43;
              fVar48 = fVar47;
            }
            uVar38 = uVar12 + uVar38;
            uVar18 = uVar18 - uVar12;
          }
          uVar9 = uVar8 + uVar27;
          uVar12 = uVar9;
          if (uVar17 <= uVar9) {
            uVar12 = uVar17;
          }
          uVar10 = uVar12 - uVar38;
          puVar15 = puVar16;
          if (uVar38 <= uVar12 && uVar10 != 0) {
            fVar47 = 0.0;
            if (uVar27 != 0) {
              fVar47 = (*(float *)(lVar14 + 0x24) + -1.0) / (float)uVar27;
            }
            uVar11 = uVar18;
            if (uVar10 <= uVar18) {
              uVar11 = uVar10;
            }
            if (uVar11 != 0) {
              fVar43 = fVar47 * 4.0;
              fVar45 = fVar47 + fVar47 + fVar48;
              fVar49 = fVar47 * 3.0 + fVar48;
              puVar15 = (undefined8 *)((long)puVar16 + (ulong)uVar11 * 4);
              puVar16[1] = CONCAT44(fVar49,fVar45);
              *puVar16 = CONCAT44(fVar47 + fVar48,fVar48 + 0.0);
              uVar20 = CONCAT44(fVar47 + fVar48 + fVar43,fVar48 + 0.0 + fVar43);
              uVar25 = CONCAT44(fVar49 + fVar43,fVar45 + fVar43);
              if (4 < uVar11) {
                puVar16 = puVar16 + 2;
                do {
                  puVar29 = puVar16 + 2;
                  puVar16[1] = uVar25;
                  *puVar16 = uVar20;
                  uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + fVar43,(float)uVar20 + fVar43);
                  uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar43,(float)uVar25 + fVar43);
                  puVar16 = puVar29;
                } while (puVar29 < puVar15);
              }
              fVar47 = (float)NEON_fminnm((int)uVar20,0x3f800000);
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              fVar43 = fVar47;
              if (fVar47 <= fVar48) {
                fVar43 = fVar48;
              }
              if (fVar43 <= *(float *)(puVar42 + 2)) {
                fVar43 = *(float *)(puVar42 + 2);
              }
              *(float *)(puVar42 + 2) = fVar43;
              fVar48 = fVar47;
            }
            uVar38 = uVar11 + uVar38;
            uVar18 = uVar18 - uVar11;
          }
          fVar47 = *(float *)(lVar14 + 0x24);
          uVar10 = iVar5 + 2U & 0xfffffffc;
          uVar11 = uVar9 - uVar17;
          if (uVar9 < uVar17 || uVar11 == 0) {
            uVar22 = 0;
          }
          else {
            fVar43 = 1.0;
            if (uVar6 != 0) {
              fVar43 = ((float)(uVar8 - uVar7) +
                       ((float)(uVar7 - uVar22) - (float)(uVar8 - uVar7)) *
                       *(float *)(lVar14 + 0x20)) / (float)uVar6;
            }
            fVar45 = fVar43 - fVar47;
            if (fVar45 <= 0.0) {
              uVar22 = 0;
              fVar47 = fVar43;
            }
            else {
              if (uVar27 == 0) {
                uVar22 = 0;
                fVar43 = 0.0;
              }
              else {
                fVar43 = (fVar47 + -1.0) / (float)uVar27;
                if (fVar43 == 0.0) {
                  uVar22 = 0;
                }
                else {
                  uVar22 = (uint)(-fVar45 / fVar43);
                }
              }
              if (uVar22 <= uVar11) {
                uVar11 = uVar22;
              }
              uVar22 = uVar10;
              if (uVar11 <= uVar10) {
                uVar22 = uVar11;
              }
              fVar49 = 0.0;
              uVar22 = (uVar22 >> 1) + 2 & 0xfffffffc;
              if (uVar10 != 0) {
                fVar49 = -fVar47 / (float)uVar10;
              }
              fVar49 = fVar49 * -(float)uVar22;
              fVar47 = fVar49 + fVar47;
              uVar6 = (uVar22 + uVar12) - uVar38;
              if (uVar38 <= uVar22 + uVar12 && uVar6 != 0) {
                fVar46 = 0.0;
                if (uVar22 != 0) {
                  fVar46 = ((-(fVar43 * ((float)uVar12 - (float)uVar8)) - fVar45) - fVar49) /
                           (float)uVar22;
                }
                uVar7 = uVar18;
                if (uVar6 <= uVar18) {
                  uVar7 = uVar6;
                }
                puVar16 = puVar15;
                if (uVar7 != 0) {
                  fVar43 = fVar46 * 4.0;
                  fVar45 = fVar46 + fVar46 + fVar48;
                  fVar49 = fVar46 * 3.0 + fVar48;
                  puVar16 = (undefined8 *)((long)puVar15 + (ulong)uVar7 * 4);
                  puVar15[1] = CONCAT44(fVar49,fVar45);
                  *puVar15 = CONCAT44(fVar46 + fVar48,fVar48 + 0.0);
                  uVar20 = CONCAT44(fVar46 + fVar48 + fVar43,fVar48 + 0.0 + fVar43);
                  uVar25 = CONCAT44(fVar49 + fVar43,fVar45 + fVar43);
                  if (4 < uVar7) {
                    puVar15 = puVar15 + 2;
                    do {
                      puVar29 = puVar15 + 2;
                      puVar15[1] = uVar25;
                      *puVar15 = uVar20;
                      uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + fVar43,
                                        (float)uVar20 + fVar43);
                      uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar43,
                                        (float)uVar25 + fVar43);
                      puVar15 = puVar29;
                    } while (puVar29 < puVar16);
                  }
                  fVar43 = (float)NEON_fminnm((int)uVar20,0x3f800000);
                  if (fVar43 <= 0.0) {
                    fVar43 = 0.0;
                  }
                  fVar45 = fVar43;
                  if (fVar43 <= fVar48) {
                    fVar45 = fVar48;
                  }
                  if (fVar45 <= *(float *)(puVar42 + 2)) {
                    fVar45 = *(float *)(puVar42 + 2);
                  }
                  *(float *)(puVar42 + 2) = fVar45;
                  fVar48 = fVar43;
                }
                uVar38 = uVar7 + uVar38;
                uVar18 = uVar18 - uVar7;
                puVar15 = puVar16;
              }
            }
          }
          uVar6 = uVar18;
          if ((int)(uVar17 - uVar38) <= (int)uVar18) {
            uVar6 = uVar17 - uVar38;
          }
          if (0 < (int)uVar6) {
            fVar48 = *(float *)(lVar14 + 0x24);
            puVar16 = (undefined8 *)((long)puVar15 + (ulong)uVar6 * 4);
            do {
              puVar29 = puVar15 + 2;
              puVar15[1] = CONCAT44(fVar48,fVar48);
              *puVar15 = CONCAT44(fVar48,fVar48);
              puVar15 = puVar29;
            } while (puVar29 < puVar16);
            fVar43 = *(float *)(puVar42 + 2);
            if (*(float *)(puVar42 + 2) <= fVar48) {
              fVar43 = fVar48;
            }
            uVar38 = uVar6 + uVar38;
            uVar18 = uVar18 - uVar6;
            *(float *)(puVar42 + 2) = fVar43;
            puVar15 = puVar16;
          }
          uVar10 = uVar10 - uVar22;
          uVar17 = uVar10 + uVar17;
          uVar22 = uVar17 - uVar38;
          puVar16 = puVar15;
          if (uVar38 <= uVar17 && uVar22 != 0) {
            fVar43 = 0.0;
            if (uVar10 != 0) {
              fVar43 = -fVar47 / (float)uVar10;
            }
            uVar6 = uVar18;
            if (uVar22 <= uVar18) {
              uVar6 = uVar22;
            }
            if (uVar6 != 0) {
              fVar49 = fVar43 * 4.0;
              fVar47 = fVar43 + fVar43 + fVar48;
              fVar45 = fVar43 * 3.0 + fVar48;
              puVar16 = (undefined8 *)((long)puVar15 + (ulong)uVar6 * 4);
              puVar15[1] = CONCAT44(fVar45,fVar47);
              *puVar15 = CONCAT44(fVar43 + fVar48,fVar48 + 0.0);
              uVar20 = CONCAT44(fVar43 + fVar48 + fVar49,fVar48 + 0.0 + fVar49);
              uVar25 = CONCAT44(fVar45 + fVar49,fVar47 + fVar49);
              if (4 < uVar6) {
                puVar15 = puVar15 + 2;
                do {
                  puVar29 = puVar15 + 2;
                  puVar15[1] = uVar25;
                  *puVar15 = uVar20;
                  uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + fVar49,(float)uVar20 + fVar49);
                  uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar49,(float)uVar25 + fVar49);
                  puVar15 = puVar29;
                } while (puVar29 < puVar16);
              }
              fVar47 = (float)NEON_fminnm((int)uVar20,0x3f800000);
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              fVar43 = fVar47;
              if (fVar47 <= fVar48) {
                fVar43 = fVar48;
              }
              if (fVar43 <= *(float *)(puVar42 + 2)) {
                fVar43 = *(float *)(puVar42 + 2);
              }
              *(float *)(puVar42 + 2) = fVar43;
              fVar48 = fVar47;
            }
            uVar38 = uVar6 + uVar38;
            uVar18 = uVar18 - uVar6;
          }
          if ((uVar18 != 0) && (uVar17 <= uVar38)) {
            puVar15 = (undefined8 *)((long)puVar16 + (ulong)uVar18 * 4);
            if (puVar15 <= puVar16 + 2) {
              puVar15 = puVar16 + 2;
            }
            memset(puVar16,0,(long)puVar15 + ~(ulong)puVar16 + 0x10 & 0xfffffffffffffff0);
            fVar47 = *(float *)(puVar42 + 2);
LAB_034978c8:
            if (fVar47 <= 0.0) {
              fVar47 = 0.0;
            }
            fVar48 = 0.0;
            *(undefined4 *)(puVar42 + 1) = 3;
            *(float *)(puVar42 + 2) = fVar47;
          }
        }
        *(float *)((long)puVar42 + 0xc) = fVar48;
        puVar1 = (uint *)(lVar14 + 0x14);
        lVar14 = lVar14 + 0x30;
        puVar36 = (undefined8 *)((long)puVar36 + (ulong)*puVar1 * 4);
        puVar42 = puVar42 + 3;
      } while (lVar14 != lVar24);
    }
    puVar41 = PTR_DAT_047e2fd0;
  }
  puVar13 = PTR_DAT_047e6fa0;
  plVar23 = (long *)*plVar23;
  if (plVar23 != (long *)0x0) {
    uVar33 = (ulong)local_94;
    do {
      uVar38 = *(uint *)(plVar23 + 5);
      puVar36 = (undefined8 *)plVar23[6];
      if (*(uint *)((long)plVar23 + 0x2c) < uVar38) {
        if (puVar36 != (undefined8 *)0x0) {
          (**(code **)(puVar41 + 0x30))(0);
          uVar38 = *(uint *)(plVar23 + 5);
        }
        *(undefined4 *)((long)plVar23 + 0x2c) = 0;
        plVar23[6] = 0;
        puVar36 = (undefined8 *)(**(code **)(puVar41 + 0x18))(0,(ulong)uVar38 << 2,0x10);
        plVar23[6] = (long)puVar36;
        if (puVar36 == (undefined8 *)0x0) {
          return local_dc;
        }
        *(int *)((long)plVar23 + 0x2c) = (int)plVar23[5];
      }
      if (*(uint *)(plVar23 + 2) != 0) {
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)puVar13);
        dVar44 = 1.0 / dVar44;
        lVar14 = plVar23[1];
        lVar24 = lVar14 + (ulong)*(uint *)(plVar23 + 2) * 0x28;
        puVar26 = (ulong *)plVar23[3];
        do {
          *puVar26 = (ulong)puVar36;
          iVar30 = *(int *)(lVar14 + 0x14);
          *(undefined4 *)(puVar26 + 1) = 0xffffffff;
          *(undefined4 *)(puVar26 + 2) = 0;
          uVar38 = *(uint *)(lVar14 + 0xc);
          uVar17 = *(uint *)(lVar14 + 0x18);
          if (iVar30 == 0) {
            if ((uVar17 < uVar38) && (uVar38 < *(uint *)(lVar14 + 0x1c))) {
              uVar22 = 0;
              if (uVar17 != 0) {
                uVar22 = uVar38 / uVar17;
              }
              uVar38 = uVar38 - uVar22 * uVar17;
            }
            fVar47 = (float)((double)(int)uVar17 * dVar44);
            if (uVar38 < *(uint *)(lVar14 + 8)) {
              fVar47 = (float)NEON_fminnm((float)((double)(int)uVar38 * dVar44),fVar47);
              fVar43 = fVar47;
              if (fVar47 <= 0.0) {
                fVar43 = 0.0;
              }
              goto LAB_03497a88;
            }
            fVar43 = fVar47;
            if (fVar47 <= 0.0) {
              fVar43 = 0.0;
            }
LAB_03497ac4:
            *(float *)(puVar26 + 2) = fVar43;
            *(undefined4 *)(puVar26 + 1) = 3;
          }
          else {
            if ((uVar17 < uVar38) && (uVar38 < *(uint *)(lVar14 + 0x1c))) {
              uVar22 = 0;
              if (uVar17 != 0) {
                uVar22 = uVar38 / uVar17;
              }
              uVar38 = uVar38 - uVar22 * uVar17;
            }
            fVar47 = (float)((double)(int)uVar17 * dVar44);
            if (*(uint *)(lVar14 + 8) <= uVar38) {
              fVar43 = 0.0;
              if (local_94 != 0) {
                puVar42 = puVar36;
                do {
                  puVar16 = puVar42 + 2;
                  puVar42[1] = CONCAT44(fVar47,fVar47);
                  *puVar42 = CONCAT44(fVar47,fVar47);
                  puVar42 = puVar16;
                } while (puVar16 < (undefined8 *)((long)puVar36 + uVar33 * 4));
                fVar43 = *(float *)(puVar26 + 2);
              }
              if (fVar43 <= fVar47) {
                fVar43 = fVar47;
              }
              goto LAB_03497ac4;
            }
            fVar47 = (float)NEON_fminnm((float)((double)(int)uVar38 * dVar44),fVar47);
            fVar43 = 0.0;
            if (local_94 != 0) {
              puVar42 = puVar36;
              do {
                puVar16 = puVar42 + 2;
                puVar42[1] = CONCAT44(fVar47,fVar47);
                *puVar42 = CONCAT44(fVar47,fVar47);
                puVar42 = puVar16;
              } while (puVar16 < (undefined8 *)((long)puVar36 + uVar33 * 4));
              fVar43 = *(float *)(puVar26 + 2);
            }
            if (fVar43 <= fVar47) {
              fVar43 = fVar47;
            }
LAB_03497a88:
            *(float *)(puVar26 + 2) = fVar43;
          }
          *(float *)((long)puVar26 + 0xc) = fVar47;
          puVar1 = (uint *)(lVar14 + 0x14);
          lVar14 = lVar14 + 0x28;
          puVar36 = (undefined8 *)((long)puVar36 + (ulong)*puVar1 * 4);
          puVar26 = puVar26 + 3;
        } while (lVar14 != lVar24);
      }
      plVar23 = (long *)*plVar23;
    } while (plVar23 != (long *)0x0);
  }
  return local_dc;
}


