/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b8d9c; name: FUN_002b8d9c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002b8d9c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *******pppppppuVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  char *pcVar20;
  void *pvVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  ulong local_c0;
  undefined8 *******local_b8 [6];
  undefined8 *local_88;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  undefined8 local_68;
  
  pcVar20 = *(char **)PTR_PTR_047cc710;
  sVar9 = strlen(pcVar20);
  if (0xffffffffffffffef < sVar9) {
LAB_002b95f8:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  plVar1 = (long *)(param_1 + 0x108);
  if (sVar9 < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar9 << 1));
    pvVar21 = (void *)((ulong)&local_80 | 1);
    if (sVar9 == 0) goto LAB_002b8e3c;
  }
  else {
    uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar21 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
    local_80 = uVar14 | 1;
    sStack_78 = sVar9;
    local_70 = pvVar21;
  }
  memcpy(pvVar21,pcVar20,sVar9);
LAB_002b8e3c:
  *(undefined1 *)((long)pvVar21 + sVar9) = 0;
                    /* try { // try from 002b8e40 to 002b8e4f has its CatchHandler @ 002b9600 */
  puVar10 = (undefined8 *)FUN_002c3c14(plVar1,&local_68,&local_80);
  puVar18 = (undefined8 *)*puVar10;
  if (puVar18 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    puVar18[6] = local_70;
    puVar18[5] = sStack_78;
    puVar18[4] = local_80;
    sStack_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    puVar18[0xe] = 0;
    puVar18[0xd] = 0;
    puVar18[0x10] = 0;
    puVar18[0xf] = 0;
    puVar18[0xe] = puVar18 + 0xf;
    puVar18[0xc] = 0;
    puVar18[0xb] = 0;
    puVar18[10] = 0;
    puVar18[9] = 0;
    puVar18[8] = 0;
    puVar18[7] = 0;
    puVar18[2] = local_68;
    *puVar18 = 0;
    puVar18[1] = 0;
    *puVar10 = puVar18;
    if (*(long *)*plVar1 == 0) {
      puVar10 = puVar18;
    }
    else {
      *plVar1 = *(long *)*plVar1;
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x110),puVar10);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  }
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  puVar6 = PTR_LAB_047cba48;
  if ((long *)*param_2 != param_2 + 1) {
    plVar1 = puVar18 + 0xe;
    pvVar21 = (void *)((ulong)&local_80 | 1);
    plVar17 = (long *)*param_2;
    do {
      if ((*(byte *)(plVar17 + 4) & 1) == 0) {
        pcVar20 = (char *)((long)plVar17 + 0x21);
      }
      else {
        pcVar20 = (char *)plVar17[6];
      }
      sVar9 = strlen(pcVar20);
      if (0xffffffffffffffef < sVar9) goto LAB_002b95f8;
      if (sVar9 < 0x17) {
        local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar9 << 1));
        pvVar11 = pvVar21;
        if (sVar9 != 0) goto LAB_002b8f38;
      }
      else {
        uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
        pvVar11 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
        local_80 = uVar14 | 1;
        sStack_78 = sVar9;
        local_70 = pvVar11;
LAB_002b8f38:
        memcpy(pvVar11,pcVar20,sVar9);
      }
      *(undefined1 *)((long)pvVar11 + sVar9) = 0;
                    /* try { // try from 002b8f4c to 002b8f5b has its CatchHandler @ 002b9608 */
      puVar10 = (undefined8 *)FUN_002c4080(plVar1,&local_68,&local_80);
      puVar23 = (undefined8 *)*puVar10;
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
        puVar23[6] = local_70;
        puVar23[7] = 0;
        puVar23[5] = sStack_78;
        puVar23[4] = local_80;
        sStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        puVar23[2] = local_68;
        *puVar23 = 0;
        puVar23[1] = 0;
        *puVar10 = puVar23;
        if (*(long *)*plVar1 == 0) {
          puVar10 = puVar23;
        }
        else {
          *plVar1 = *(long *)*plVar1;
          puVar10 = (undefined8 *)*puVar10;
        }
        FUN_010108e0(puVar18[0xf],puVar10);
        puVar18[0x10] = puVar18[0x10] + 1;
        if ((local_80 & 1) != 0) goto LAB_002b8ff4;
LAB_002b8f70:
        lVar19 = puVar23[7];
      }
      else {
        if ((local_80 & 1) == 0) goto LAB_002b8f70;
LAB_002b8ff4:
        FUN_0049e790(puVar6,local_70);
        lVar19 = puVar23[7];
      }
      if ((lVar19 != 0) && (*(char *)(lVar19 + 0x49) != '\0')) {
        FUN_00360570(lVar19 + 0x50);
        *(undefined1 *)(lVar19 + 0x49) = 0;
      }
      puVar2 = (ulong *)(plVar17 + 7);
      if ((PTR_DAT_047cc7c8[0x10] != '\0') && (1 < *puVar2)) {
        uVar14 = 0;
        do {
          puVar10 = (undefined8 *)FUN_002a60bc(puVar2);
          plVar13 = (long *)*puVar10;
          while (plVar13 != puVar10 + 1) {
            uVar12 = plVar13[6];
            if (1 < uVar12) {
              lVar19 = 0;
              uVar22 = 0;
              do {
                plVar25 = plVar13 + 7;
                if ((uVar12 & 1) != 0) {
                  plVar25 = (long *)plVar13[7];
                }
                FUN_0035a410(&local_80,(long)plVar25 + lVar19,0);
                if ((local_80 & 1) != 0) {
                  FUN_0049e790(puVar6,local_70);
                }
                uVar12 = plVar13[6];
                uVar22 = uVar22 + 1;
                lVar19 = lVar19 + 0x90;
              } while (uVar22 < uVar12 >> 1);
            }
            plVar25 = (long *)plVar13[1];
            if ((long *)plVar13[1] == (long *)0x0) {
              plVar25 = plVar13 + 2;
              if (*(long **)*plVar25 == plVar13) {
                plVar13 = (long *)*plVar25;
              }
              else {
                do {
                  lVar19 = *plVar25;
                  plVar25 = (long *)(lVar19 + 0x10);
                  plVar13 = (long *)*plVar25;
                } while (*plVar13 != lVar19);
              }
            }
            else {
              do {
                plVar13 = plVar25;
                plVar25 = (long *)*plVar13;
              } while ((long *)*plVar13 != (long *)0x0);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *puVar2 >> 1);
      }
      lVar19 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
      sVar9 = strlen(pcVar20);
      if (0xffffffffffffffef < sVar9) goto LAB_002b95f8;
      plVar13 = (long *)(lVar19 + 0x120);
      if (sVar9 < 0x17) {
        local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar9 << 1));
        pvVar11 = pvVar21;
        if (sVar9 != 0) goto LAB_002b909c;
      }
      else {
        uVar14 = sVar9 + 0x10 & 0xfffffffffffffff0;
        pvVar11 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
        local_80 = uVar14 | 1;
        sStack_78 = sVar9;
        local_70 = pvVar11;
LAB_002b909c:
        memcpy(pvVar11,pcVar20,sVar9);
      }
      *(undefined1 *)((long)pvVar11 + sVar9) = 0;
                    /* try { // try from 002b90b0 to 002b90bf has its CatchHandler @ 002b9604 */
      puVar10 = (undefined8 *)FUN_002c2610(plVar13,&local_68,&local_80);
      puVar23 = (undefined8 *)*puVar10;
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x98);
        pvVar11 = local_70;
        puVar23[5] = sStack_78;
        puVar23[4] = local_80;
        sStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        puVar23[8] = 0;
        puVar23[9] = 0;
        puVar23[10] = 0;
        *(undefined1 *)(puVar23 + 10) = 0;
        puVar23[0xc] = 0;
        puVar23[0xb] = 0;
        puVar23[6] = pvVar11;
        puVar23[7] = puVar23 + 8;
        puVar23[0xe] = 0;
        puVar23[0xd] = 0;
        puVar23[0x10] = 0;
        puVar23[0xf] = 0;
        puVar23[0x12] = 0;
        puVar23[0x11] = 0;
        puVar23[2] = local_68;
        *puVar23 = 0;
        puVar23[1] = 0;
        *puVar10 = puVar23;
        if (*(long *)*plVar13 == 0) {
          puVar10 = puVar23;
        }
        else {
          *plVar13 = *(long *)*plVar13;
          puVar10 = (undefined8 *)*puVar10;
        }
        FUN_010108e0(*(undefined8 *)(lVar19 + 0x128),puVar10);
        *(long *)(lVar19 + 0x130) = *(long *)(lVar19 + 0x130) + 1;
        if ((local_80 & 1) != 0) goto LAB_002b9178;
LAB_002b90d4:
        if (*(char *)(puVar23 + 10) == '\0') goto LAB_002b91dc;
LAB_002b918c:
        uVar7 = FUN_002a5e88(puVar23 + 0xb,puVar2);
        if ((puVar23[0x12] == 0) ||
           (uVar8 = FUN_00290a30(puVar23[0x12],plVar17[0xe]), (uVar7 & uVar8 & 1) == 0)) {
          if (*(char *)(puVar23 + 10) == '\0') goto LAB_002b91dc;
          FUN_002c5080(puVar23 + 0xb,puVar2);
          plVar25 = (long *)puVar23[7];
          plVar13 = puVar23 + 8;
          if (plVar25 == plVar13) goto LAB_002b93e0;
          goto LAB_002b9298;
        }
      }
      else {
        if ((local_80 & 1) == 0) goto LAB_002b90d4;
LAB_002b9178:
        FUN_0049e790(puVar6,local_70);
        if (*(char *)(puVar23 + 10) != '\0') goto LAB_002b918c;
LAB_002b91dc:
        puVar23[0xb] = 0;
        uVar14 = *puVar2;
        if ((uVar14 & 1) == 0) {
          uVar12 = uVar14 >> 1;
          if (uVar12 != 0) {
            plVar13 = plVar17 + 9;
            plVar25 = puVar23 + 0xc;
            do {
              while( true ) {
                *plVar25 = plVar13[-1];
                lVar19 = *plVar13;
                plVar24 = plVar25 + 1;
                *plVar24 = lVar19;
                lVar16 = plVar13[1];
                plVar25[2] = lVar16;
                if (lVar16 == 0) break;
                *(long **)(lVar19 + 0x10) = plVar24;
                plVar13[1] = 0;
                plVar13[-1] = (long)plVar13;
                *plVar13 = 0;
                plVar13 = plVar13 + 3;
                uVar12 = uVar12 - 1;
                plVar25 = plVar25 + 3;
                if (uVar12 == 0) goto LAB_002b9248;
              }
              *plVar25 = (long)plVar24;
              plVar13 = plVar13 + 3;
              uVar12 = uVar12 - 1;
              plVar25 = plVar25 + 3;
            } while (uVar12 != 0);
LAB_002b9248:
            uVar14 = *puVar2;
          }
          puVar23[0xb] = uVar14 & 0xfffffffffffffffe;
        }
        else {
          lVar19 = plVar17[8];
          puVar23[0xd] = plVar17[9];
          puVar23[0xc] = lVar19;
          puVar23[0xb] = plVar17[7] | 1;
          plVar17[7] = 0;
        }
        puVar23[0x12] = 0;
        puVar23[0x12] = plVar17[0xe];
        plVar17[0xe] = 0;
        *(undefined1 *)(puVar23 + 10) = 1;
        plVar25 = (long *)puVar23[7];
        plVar13 = puVar23 + 8;
        if (plVar25 != plVar13) {
LAB_002b9298:
          do {
            if (*(char *)(puVar23 + 10) == '\0') {
              FUN_003855e0();
              goto LAB_002b95f8;
            }
            plVar24 = (long *)plVar25[4];
            FUN_002c1588(&local_c0,puVar23 + 0xb,puVar23 + 0xb);
            local_88 = (undefined8 *)0x0;
            if (puVar23[0x12] != 0) {
              plVar15 = (long *)(puVar23[0x12] + 8);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar5) {
                  *plVar15 = *plVar15 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              local_88 = (undefined8 *)puVar23[0x12];
            }
                    /* try { // try from 002b92f8 to 002b9303 has its CatchHandler @ 002b961c */
            (**(code **)(*plVar24 + 0x10))(plVar24,&local_c0);
            puVar10 = local_88;
            if (local_88 != (undefined8 *)0x0) {
              plVar24 = local_88 + 1;
              do {
                lVar19 = *plVar24;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                if (bVar5) {
                  *plVar24 = lVar19 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar19 + -1 == 0) {
                (**(code **)*local_88)(local_88);
                FUN_0049e790(puVar6,puVar10);
              }
            }
            uVar14 = local_c0 & 1;
            pppppppuVar3 = local_b8;
            if (uVar14 != 0) {
              pppppppuVar3 = local_b8[0];
            }
            uVar12 = local_c0 >> 1;
            if ((uVar12 != 0) && (pppppppuVar3 != (undefined8 *******)0x0)) {
              pppppppuVar3 = pppppppuVar3 + uVar12 * 3;
              do {
                uVar12 = uVar12 - 1;
                FUN_0028bf34(pppppppuVar3 + -3,pppppppuVar3[-2]);
                pppppppuVar3 = pppppppuVar3 + -3;
              } while (uVar12 != 0);
              uVar14 = local_c0 & 1;
            }
            if (uVar14 != 0) {
              FUN_0049e790(puVar6,local_b8[0]);
            }
            plVar24 = (long *)plVar25[1];
            if ((long *)plVar25[1] == (long *)0x0) {
              plVar24 = plVar25 + 2;
              plVar15 = (long *)*plVar24;
              if ((long *)*plVar15 != plVar25) {
                do {
                  lVar19 = *plVar24;
                  plVar24 = (long *)(lVar19 + 0x10);
                  plVar15 = (long *)*plVar24;
                } while (*plVar15 != lVar19);
              }
            }
            else {
              do {
                plVar15 = plVar24;
                plVar24 = (long *)*plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
            }
            plVar25 = plVar15;
          } while (plVar15 != plVar13);
        }
      }
LAB_002b93e0:
      plVar13 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        plVar13 = plVar17 + 2;
        plVar25 = (long *)*plVar13;
        if ((long *)*plVar25 != plVar17) {
          do {
            lVar19 = *plVar13;
            plVar13 = (long *)(lVar19 + 0x10);
            plVar25 = (long *)*plVar13;
          } while (*plVar25 != lVar19);
        }
      }
      else {
        do {
          plVar25 = plVar13;
          plVar13 = (long *)*plVar25;
        } while ((long *)*plVar25 != (long *)0x0);
      }
      plVar17 = plVar25;
    } while (plVar25 != param_2 + 1);
  }
  return;
}


