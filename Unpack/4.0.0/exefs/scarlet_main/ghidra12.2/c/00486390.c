/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00486390; name: FUN_00486390
 */


undefined8 FUN_00486390(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  long *plVar18;
  bool bVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  uint local_80;
  int local_7c;
  uint *local_78;
  long local_70;
  int local_64;
  
  puVar22 = (undefined8 *)(param_1 + 0x98);
  lVar20 = *(long *)(param_1 + 0xe8);
  iVar2 = FUN_0047e430(*puVar22);
  lVar10 = FUN_0047e450(*puVar22,iVar2 + -1);
  iVar3 = FUN_00498e10(lVar10,0xffffffff,0);
  uVar8 = 0;
  if (iVar3 == 1) {
    uVar8 = *(uint *)(lVar10 + 0xe0) >> 0xd & 1;
  }
  if ((iVar2 == 1) && (*(int *)(param_1 + 0x94) == 1)) {
    lVar10 = *(long *)(param_1 + 0x10);
    uVar17 = (uint)(lVar10 != 0);
    if ((lVar20 != 0) &&
       (((*(uint *)(lVar20 + 0x28) & 3) == 0 && ((*(uint *)(lVar20 + 0x28) & 0xc) != 0)))) {
      bVar19 = true;
joined_r0x004864f8:
      if (lVar10 == 0) {
        local_80 = 0;
        lVar10 = 0;
      }
      else {
        local_80 = 0;
        lVar10 = FUN_0047da00();
        if (lVar10 == 0) goto LAB_004864c8;
      }
joined_r0x00486440:
      if ((lVar20 != 0) && (iVar2 = FUN_0047e430(*(undefined8 *)(lVar20 + 8)), 0 < iVar2)) {
        plVar18 = (long *)(lVar20 + 0x10);
        lVar12 = *plVar18;
        if (lVar12 != 0) {
          if (lVar10 == 0) {
            lVar10 = FUN_0047dcc0();
            if (lVar10 == 0) {
              uVar11 = 3000;
              goto LAB_004864e0;
            }
            lVar12 = *plVar18;
          }
          iVar2 = FUN_0047e430(lVar12);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              uVar11 = FUN_0047e450(*plVar18,iVar2);
              iVar3 = FUN_0047e2f0(lVar10,uVar11);
              if (iVar3 == 0) {
                FUN_0047db00(lVar10);
                uVar11 = 0xbbf;
                goto LAB_004864e0;
              }
              iVar2 = iVar2 + 1;
              iVar3 = FUN_0047e430(*plVar18);
            } while (iVar2 < iVar3);
          }
        }
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
      if (0x3fffffff < iVar2) {
        iVar2 = 0x3fffffff;
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
      }
      iVar2 = iVar2 + 1;
      if (uVar17 == 0) {
        local_7c = 3;
      }
      else {
        iVar3 = 0;
        local_7c = 3;
        do {
          local_70 = 0;
          if ((uVar17 >> 1 & 1) == 0) goto LAB_004867f4;
          iVar4 = FUN_0047e430(*puVar22);
          iVar6 = iVar4;
          if ((uVar17 & 4) != 0) {
            iVar6 = iVar3;
          }
          uVar11 = FUN_0047e450(*puVar22,iVar6 + -1);
          if (iVar4 <= iVar2) {
            uVar21 = *(undefined8 *)(param_1 + 0x98);
            *(undefined8 *)(param_1 + 0x98) = 0;
            iVar5 = (**(code **)(param_1 + 0x40))(&local_70,param_1,uVar11);
            *(undefined8 *)(param_1 + 0x98) = uVar21;
            if (iVar5 < 0) {
              uVar16 = 0x46;
LAB_00486a24:
              *(undefined4 *)(param_1 + 0xb0) = uVar16;
              local_7c = 2;
            }
            else {
              if (iVar5 == 0) goto joined_r0x004867f0;
              if (uVar17 >> 2 == 0) {
LAB_0048671c:
                iVar6 = iVar4;
                if (uVar8 == 0) goto LAB_00486780;
                if (iVar6 != *(int *)(param_1 + 0x94)) {
                  uVar8 = 1;
                  goto LAB_004867bc;
                }
                iVar4 = FUN_00483b60(uVar11,local_70);
                if (iVar4 == 0) {
                  FUN_0048c830(uVar11);
                  iVar6 = iVar6 + -1;
                  *(int *)(param_1 + 0x94) = iVar6;
                  FUN_0047e480(*(undefined8 *)(param_1 + 0x98),iVar6,local_70);
                  uVar8 = 1;
                  goto LAB_004867bc;
                }
                FUN_0048c830(local_70);
LAB_004867ec:
                uVar8 = 1;
                goto joined_r0x004867f0;
              }
              if (((uVar8 != 0) || (iVar4 <= iVar6)) || (iVar6 < 1)) {
                FUN_004806c0(0xb,0x6a,0x44,"external/openssl/crypto/x509/x509_vfy.c",0xc16);
                FUN_0048c830(local_70);
                uVar16 = 1;
                goto LAB_00486a24;
              }
              while( true ) {
                FUN_0047e380(uVar21);
                FUN_0048c830();
                iVar4 = iVar4 + -1;
                if (iVar4 <= iVar6) break;
                uVar21 = *puVar22;
              }
              uVar17 = uVar17 & 0xfffffffb;
              *(int *)(param_1 + 0x94) = iVar6;
              iVar4 = iVar6;
              if (lVar20 == 0) goto LAB_0048671c;
              iVar5 = FUN_0047e430(*(undefined8 *)(lVar20 + 8));
              if ((0 < iVar5) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar20 + 0x2c))) {
                *(undefined4 *)(lVar20 + 0x2c) = 0xffffffff;
                FUN_0048c830(*(undefined8 *)(lVar20 + 0x20));
                *(undefined8 *)(lVar20 + 0x20) = 0;
              }
              iVar5 = FUN_0047e430(*(undefined8 *)(lVar20 + 8));
              if (0 < iVar5) {
                if (*(int *)(lVar20 + 0x30) < *(int *)(param_1 + 0x94)) goto LAB_0048671c;
                *(undefined4 *)(lVar20 + 0x30) = 0xffffffff;
              }
LAB_00486780:
              lVar12 = local_70;
              iVar4 = FUN_0047e2f0(*puVar22,local_70);
              if (iVar4 == 0) {
                FUN_0048c830(local_70);
                uVar11 = 0xc34;
LAB_00486a58:
                FUN_004806c0(0xb,0x6a,0x41,"external/openssl/crypto/x509/x509_vfy.c",uVar11);
                uVar8 = 0;
                uVar16 = 0x11;
LAB_00486a64:
                *(undefined4 *)(param_1 + 0xb0) = uVar16;
LAB_00486a68:
                local_7c = 2;
              }
              else {
                iVar4 = FUN_00498e10(lVar12,0xffffffff,0);
                if (iVar4 == 1) {
                  uVar8 = *(uint *)(lVar12 + 0xe0) >> 0xd & 1;
                }
                else {
                  uVar8 = 0;
                }
LAB_004867bc:
                if (iVar6 < *(int *)(param_1 + 0x94)) {
                  uVar11 = 0xc5f;
                  goto LAB_004869f0;
                }
                local_7c = FUN_00488a90(param_1,iVar6);
                if (1 < local_7c - 1U) {
                  uVar17 = uVar17 & 0xfffffffe;
                  if (uVar8 != 0) goto LAB_004867ec;
                  goto LAB_004865bc;
                }
              }
            }
            break;
          }
joined_r0x004867f0:
          if ((uVar17 & 1) == 0) {
            if (uVar17 >> 2 == 0) {
              if ((local_80 != 0) && (1 < *(int *)(param_1 + 0x94))) {
                uVar8 = 0;
                uVar17 = uVar17 | 4;
                iVar3 = *(int *)(param_1 + 0x94) + -1;
                goto LAB_004867f4;
              }
              break;
            }
            iVar6 = iVar3 + -1;
            bVar1 = iVar3 < 1;
            iVar3 = iVar6;
            if (iVar6 == 0 || bVar1) break;
          }
          else {
LAB_004867f4:
            if ((uVar17 & 1) != 0) {
              iVar6 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
              if (iVar6 != *(int *)(param_1 + 0x94)) {
                uVar11 = 0xc8c;
LAB_004869f0:
                FUN_004806c0(0xb,0x6a,0x44,"external/openssl/crypto/x509/x509_vfy.c",uVar11);
LAB_004869f4:
                uVar16 = 1;
                goto LAB_00486a64;
              }
              uVar11 = FUN_0047e450(*puVar22,iVar6 + -1);
              if ((uVar8 == 0) && (iVar6 <= iVar2)) {
                local_70 = FUN_00488d40(param_1,lVar10,uVar11);
                if (local_70 != 0) {
                  FUN_0047e0c0(lVar10,local_70);
                  iVar6 = FUN_00485cf0(local_70);
                  if (iVar6 == 0) {
                    FUN_004806c0(0xb,0x6a,0x44,"external/openssl/crypto/x509/x509_vfy.c",0xca4);
                    uVar8 = 0;
                    goto LAB_004869f4;
                  }
                  iVar6 = FUN_0047e2f0(*puVar22,local_70);
                  lVar12 = local_70;
                  if (iVar6 == 0) {
                    FUN_0048c830(local_70);
                    uVar11 = 0xcad;
                    goto LAB_00486a58;
                  }
                  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
                  iVar6 = FUN_00498e10(local_70,0xffffffff,0);
                  uVar8 = 0;
                  if (iVar6 == 1) {
                    uVar8 = *(uint *)(lVar12 + 0xe0) >> 0xd & 1;
                  }
                  if (*(long *)(param_1 + 0xe8) != 0) {
                    iVar6 = *(int *)(param_1 + 0x94);
                    iVar4 = iVar6 + -1;
                    local_7c = 3;
                    if ((iVar4 == 0) || ((*(uint *)(*(long *)(param_1 + 0xe8) + 0x28) & 5) == 0))
                    goto LAB_004865bc;
                    lVar12 = FUN_0047e450(*puVar22,iVar4);
                    if (lVar12 != 0) {
                      iVar4 = FUN_00488e60(*(undefined4 *)(param_1 + 0x94),
                                           *(undefined8 *)(param_1 + 0xe8),lVar12,iVar4);
                      if (iVar4 < 0) goto LAB_00486a68;
                      if (iVar4 != 0) {
                        local_7c = 1;
                        *(int *)(param_1 + 0x94) = iVar6 + -2;
                        break;
                      }
                    }
                  }
                  local_7c = 3;
                  goto LAB_004865bc;
                }
              }
              else {
                local_70 = 0;
              }
              uVar17 = uVar17 & 0xfffffffe;
              if (!bVar19) {
                uVar17 = uVar17 | 2;
              }
            }
          }
LAB_004865bc:
        } while (uVar17 != 0);
      }
      FUN_0047db00(lVar10);
      iVar3 = FUN_0047e430(*puVar22);
      if (iVar2 < iVar3) {
LAB_00486bac:
        if (local_7c == 1) goto LAB_00486cb4;
        if (local_7c == 2) goto LAB_0048646c;
      }
      else {
        if ((lVar20 == 0) || (local_7c != 3)) {
          if (local_7c != 3) goto LAB_00486bac;
        }
        else if ((*(byte *)(lVar20 + 0x28) >> 2 & 1) != 0) {
          iVar6 = *(int *)(param_1 + 0x94) + -1;
          lVar10 = *(long *)(param_1 + 0xe8);
          uVar11 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar6);
          iVar4 = FUN_0047e430(*(undefined8 *)(lVar10 + 8));
          if (0 < iVar4) {
            iVar5 = 0;
            do {
              pcVar13 = (char *)FUN_0047e450(*(undefined8 *)(lVar10 + 8),iVar5);
              if ((((*pcVar13 == '\x02') && (pcVar13[1] == '\x01')) && (pcVar13[2] == '\0')) &&
                 (iVar7 = FUN_0048ab40(uVar11,*(undefined8 *)(pcVar13 + 0x18)), 0 < iVar7)) {
                FUN_0048c830(*(undefined8 *)(lVar10 + 0x20));
                *(undefined8 *)(lVar10 + 0x20) = 0;
                *(undefined4 *)(param_1 + 0xf0) = 1;
                *(int *)(lVar10 + 0x2c) = iVar6;
                *(char **)(lVar10 + 0x18) = pcVar13;
                iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
                if (*(int *)(param_1 + 0x94) < iVar2) {
                  do {
                    FUN_0047e380(*(undefined8 *)(param_1 + 0x98));
                    FUN_0048c830();
                    iVar2 = iVar2 + -1;
                  } while (*(int *)(param_1 + 0x94) < iVar2);
                }
                goto LAB_00486cb4;
              }
              iVar5 = iVar5 + 1;
            } while (iVar4 != iVar5);
          }
        }
        if (iVar3 == *(int *)(param_1 + 0x94)) {
          local_7c = FUN_00488a90(param_1,iVar3);
          goto LAB_00486bac;
        }
      }
      iVar3 = FUN_0047e430(*puVar22);
      if (iVar2 < iVar3) {
        *(int *)(param_1 + 0xac) = iVar3 + -1;
        uVar11 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        uVar16 = 0x16;
      }
      else if (((lVar20 == 0) || (iVar2 = FUN_0047e430(*(undefined8 *)(lVar20 + 8)), iVar2 < 1)) ||
              (((*(byte *)(lVar20 + 0x28) & 3) != 0 && (*(int *)(lVar20 + 0x30) < 0)))) {
        if (uVar8 == 0) {
          *(int *)(param_1 + 0xac) = iVar3 + -1;
          iVar2 = *(int *)(param_1 + 0x94);
          uVar11 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar11;
          if (iVar2 < iVar3) {
            uVar16 = 2;
          }
          else {
            uVar16 = 0x14;
          }
        }
        else {
          iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
          *(int *)(param_1 + 0xac) = iVar3 + -1;
          uVar11 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar11;
          if (iVar2 == 1) {
            uVar16 = 0x12;
          }
          else {
            uVar16 = 0x13;
          }
        }
      }
      else {
        *(int *)(param_1 + 0xac) = iVar3 + -1;
        uVar11 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        uVar16 = 0x41;
      }
      *(undefined4 *)(param_1 + 0xb0) = uVar16;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) {
LAB_00486cb4:
        uVar8 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
        if (*(long *)(param_1 + 0xd8) == 0) {
          iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
          uVar17 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18) >> 6 & 1;
        }
        else {
          uVar17 = 0;
          iVar2 = 6;
        }
        if (0 < (int)uVar8) {
          iVar3 = 0;
          uVar15 = 0;
          iVar6 = 0;
          iVar4 = -1;
LAB_00486d28:
          do {
            local_78 = (uint *)(param_1 + 0xac);
            lVar10 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),uVar15);
            if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
               ((*(byte *)(lVar10 + 0xe1) >> 1 & 1) != 0)) {
              *(long *)(param_1 + 0xb8) = lVar10;
              *(uint *)(param_1 + 0xac) = uVar15;
              *(undefined4 *)(param_1 + 0xb0) = 0x22;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_0048646c;
            }
            if ((uVar17 == 0) && ((*(byte *)(lVar10 + 0xe1) >> 2 & 1) != 0)) {
              *(long *)(param_1 + 0xb8) = lVar10;
              *(uint *)(param_1 + 0xac) = uVar15;
              *(undefined4 *)(param_1 + 0xb0) = 0x28;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_0048646c;
            }
            uVar9 = FUN_00499730(lVar10);
            lVar20 = lVar10;
            if (iVar4 == 0) {
              uVar16 = 0x25;
              if (uVar9 == 0) goto LAB_00486e08;
LAB_00486e84:
              *(uint *)(param_1 + 0xac) = uVar15;
              *(undefined4 *)(param_1 + 0xb0) = uVar16;
joined_r0x00486e00:
              if (lVar10 == 0) {
LAB_00486e90:
                lVar20 = FUN_0047e450(*puVar22,uVar15);
              }
LAB_00486e9c:
              *(long *)(param_1 + 0xb8) = lVar20;
              iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar5 == 0) goto LAB_0048646c;
            }
            else {
              if (iVar4 != -1) {
                if (uVar9 != 0) {
                  if ((int)(uVar15 + 1) < (int)uVar8) {
                    if (uVar9 != 1) goto LAB_00486df4;
                  }
                  else if (uVar9 != 1) goto LAB_00486de8;
                  goto LAB_00486e08;
                }
LAB_00486df4:
                *(uint *)(param_1 + 0xac) = uVar15;
                *(undefined4 *)(param_1 + 0xb0) = 0x18;
                goto joined_r0x00486e00;
              }
              if (1 < uVar9) {
LAB_00486de8:
                if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)
                goto LAB_00486df4;
              }
LAB_00486e08:
              if ((uVar8 == 1) ||
                 (((uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) == 0))
              goto LAB_00486e50;
              lVar12 = FUN_00483c90(lVar10);
              if (lVar12 == 0) {
                uVar16 = 1;
                goto LAB_00486e84;
              }
              iVar5 = FUN_0043e840();
              if (iVar5 == 0x198) {
                FUN_0043e6b0(lVar12);
                iVar5 = FUN_0040c300();
                if (-1 < iVar5) {
                  uVar16 = 0x4f;
                  if (iVar5 != 0) goto LAB_00486e84;
                  goto LAB_00486e50;
                }
                *(uint *)(param_1 + 0xac) = uVar15;
                *(undefined4 *)(param_1 + 0xb0) = 1;
                if (lVar10 != 0) goto LAB_00486e9c;
                goto LAB_00486e90;
              }
LAB_00486e50:
              if ((((*(byte *)(lVar10 + 0xe0) >> 4 & 1) == 0) && (*(long *)(lVar10 + 0xd0) != -1))
                 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)) {
                *(uint *)(param_1 + 0xac) = uVar15;
                *(undefined4 *)(param_1 + 0xb0) = 0x29;
                goto LAB_00486e9c;
              }
            }
            if (0 < iVar2) {
              if (((int)uVar15 < *(int *)(param_1 + 0x94)) ||
                 (*(int *)(*(long *)(param_1 + 0x20) + 0x20) != iVar2)) {
LAB_00486ef8:
                iVar4 = FUN_00498e10(lVar10,iVar2,0 < iVar4);
                if ((iVar4 == 0) ||
                   ((iVar4 != 1 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0))))
                {
LAB_00486f24:
                  *local_78 = uVar15;
                  lVar20 = lVar10;
                  if (lVar10 == 0) {
                    lVar20 = FUN_0047e450(*puVar22,uVar15);
                  }
                  *(long *)(param_1 + 0xb8) = lVar20;
                  *(undefined4 *)(param_1 + 0xb0) = 0x1a;
                  iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
                  if (iVar4 == 0) goto LAB_0048646c;
                }
              }
              else {
                iVar5 = FUN_004899f0(lVar10,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),4);
                if (iVar5 != 1) {
                  if (iVar5 != 2) goto LAB_00486ef8;
                  goto LAB_00486f24;
                }
              }
            }
            if (uVar15 < 2) {
              if (uVar15 != 0) goto LAB_00486fa8;
              if ((*(uint *)(lVar10 + 0xe0) >> 10 & 1) == 0) goto LAB_00486d18;
LAB_00486fbc:
              lVar20 = *(long *)(lVar10 + 0xd8);
              if (lVar20 != -1) {
                if (lVar20 < iVar3) {
                  *(long *)(param_1 + 0xb8) = lVar10;
                  *(uint *)(param_1 + 0xac) = uVar15;
                  *(undefined4 *)(param_1 + 0xb0) = 0x26;
                  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
                  if (iVar3 == 0) goto LAB_0048646c;
                  lVar20 = *(long *)(lVar10 + 0xd8);
                }
                iVar3 = (int)lVar20;
              }
              iVar4 = 0;
              iVar3 = iVar3 + 1;
              uVar15 = uVar15 + 1;
              if (uVar8 == uVar15) break;
              goto LAB_00486d28;
            }
            if ((*(long *)(lVar10 + 0xd0) != -1) &&
               (*(long *)(lVar10 + 0xd0) + (long)iVar3 < (long)iVar6)) {
              *(long *)(param_1 + 0xb8) = lVar10;
              *(uint *)(param_1 + 0xac) = uVar15;
              *(undefined4 *)(param_1 + 0xb0) = 0x19;
              iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar4 == 0) goto LAB_0048646c;
            }
LAB_00486fa8:
            iVar6 = ((*(uint *)(lVar10 + 0xe0) >> 5 ^ 0xffffffff) & 1) + iVar6;
            if ((*(uint *)(lVar10 + 0xe0) >> 10 & 1) != 0) goto LAB_00486fbc;
LAB_00486d18:
            iVar4 = 1;
            uVar15 = uVar15 + 1;
          } while (uVar8 != uVar15);
        }
        local_78 = (uint *)(param_1 + 0xac);
        iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
        if ((0 < iVar2) && (0 < *(int *)(*(long *)(param_1 + 0x20) + 0x2c))) {
          iVar3 = 0;
          do {
            lVar10 = FUN_0047e450(*puVar22,iVar3);
            if (iVar3 != 0) {
              lVar20 = FUN_00483c90(lVar10);
              iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
              if (0 < iVar6) {
                if (lVar20 != 0) {
                  if (4 < iVar6) {
                    iVar6 = 5;
                  }
                  iVar4 = FUN_0043dbd0();
                  if (*(int *)(&DAT_03d064f0 + (ulong)(iVar6 - 1) * 4) <= iVar4) goto LAB_00487128;
                }
                *local_78 = iVar3;
                lVar20 = lVar10;
                if (lVar10 == 0) {
                  lVar20 = FUN_0047e450(*puVar22,iVar3);
                }
                *(long *)(param_1 + 0xb8) = lVar20;
                *(undefined4 *)(param_1 + 0xb0) = 0x43;
                iVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar6 == 0) goto LAB_0048646c;
              }
            }
LAB_00487128:
            if (iVar3 < iVar2 + -1) {
              iVar6 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
              local_64 = -1;
              if (0 < iVar6) {
                iVar4 = FUN_00485d60(lVar10,0,0,&local_64,0);
                if (iVar4 != 0) {
                  if (4 < iVar6) {
                    iVar6 = 5;
                  }
                  if (*(int *)(&DAT_03d064f0 + (ulong)(iVar6 - 1) * 4) <= local_64)
                  goto LAB_00487098;
                }
                *local_78 = iVar3;
                if (lVar10 == 0) {
                  lVar10 = FUN_0047e450(*puVar22,iVar3);
                }
                *(long *)(param_1 + 0xb8) = lVar10;
                *(undefined4 *)(param_1 + 0xb0) = 0x44;
                iVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
                if (iVar6 == 0) goto LAB_0048646c;
              }
            }
LAB_00487098:
            iVar3 = iVar3 + 1;
          } while (iVar2 != iVar3);
        }
        iVar2 = FUN_004888f0(param_1);
        FUN_00487770(0,*(undefined8 *)(param_1 + 0x98));
        if (iVar2 == 0) {
          return 0;
        }
        uVar11 = (**(code **)(param_1 + 0x50))(param_1);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        iVar2 = FUN_00483d70(local_78,0,*(undefined8 *)(param_1 + 0x98),
                             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
        if (iVar2 != 0) {
          uVar11 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
          *(undefined8 *)(param_1 + 0xb8) = uVar11;
          *(int *)(param_1 + 0xb0) = iVar2;
          uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
        }
        if (*(code **)(param_1 + 0x30) == (code *)0x0) {
          uVar11 = FUN_00487df0(param_1);
        }
        else {
          uVar11 = (**(code **)(param_1 + 0x30))(param_1);
        }
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        iVar2 = FUN_0047e430(*puVar22);
        if (0 < iVar2) {
          do {
            iVar3 = iVar2 + -1;
            lVar10 = FUN_0047e450(*puVar22,iVar3);
            if ((iVar3 == 0) || ((*(uint *)(lVar10 + 0xe0) >> 5 & 1) == 0)) {
              if ((*(uint *)(lVar10 + 0xe0) >> 10 & 1) != 0) {
                uVar11 = FUN_00483b40(lVar10);
                uVar21 = FUN_00483ac0(lVar10);
                iVar6 = FUN_0048a3e0(uVar11);
                uVar16 = 0x48;
                if (1 < iVar6) {
                  iVar4 = FUN_0048a3e0(uVar11);
                  iVar5 = FUN_0048a3e0(uVar21);
                  uVar16 = 0x48;
                  if (iVar4 == iVar5 + 1) {
                    FUN_0048a390(uVar11,iVar6 + -1);
                    iVar4 = FUN_0048a980();
                    FUN_0048a390(uVar11,iVar6 + -2);
                    iVar5 = FUN_0048a980();
                    uVar16 = 0x48;
                    if (iVar4 != iVar5) {
                      lVar20 = FUN_0048b9f0(uVar11);
                      if (lVar20 == 0) {
                        FUN_004806c0(0xb,0x95,0x41,"external/openssl/crypto/x509/x509_vfy.c",0x2a6);
                        *(undefined4 *)(param_1 + 0xb0) = 0x11;
                        return 0;
                      }
                      uVar11 = FUN_0048a490(lVar20,iVar6 + -1);
                      FUN_0048a970();
                      iVar6 = FUN_0045bea0();
                      if ((iVar6 == 0xd) && (iVar6 = FUN_00483880(lVar20,uVar21), iVar6 == 0)) {
                        uVar16 = 0;
                        bVar19 = true;
                      }
                      else {
                        bVar19 = false;
                        uVar16 = 0x48;
                      }
                      FUN_0048b980(uVar11);
                      FUN_0048b9e0(lVar20);
                      if (bVar19) goto LAB_00487374;
                    }
                  }
                }
                *(long *)(param_1 + 0xb8) = lVar10;
                *(int *)(param_1 + 0xac) = iVar3;
                *(undefined4 *)(param_1 + 0xb0) = uVar16;
                uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
                if ((int)uVar11 == 0) {
                  return uVar11;
                }
              }
LAB_00487374:
              iVar6 = FUN_0047e430(*puVar22);
              if (iVar2 < iVar6) {
                do {
                  iVar6 = iVar6 + -1;
                  lVar20 = FUN_0047e450(*puVar22,iVar6);
                  lVar20 = *(long *)(lVar20 + 0x118);
                  if (lVar20 != 0) {
                    iVar4 = FUN_00497190(lVar10,lVar20);
                    if (iVar4 == 0 && iVar3 == 0) {
                      uVar8 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
                      if ((uVar8 >> 5 & 1) != 0) goto LAB_00487394;
                      if (((uVar8 & 1) == 0) &&
                         (lVar12 = FUN_004843e0(lVar10,0x55,0,0), lVar12 != 0)) {
                        iVar4 = FUN_0047e430();
                        if (0 < iVar4) {
                          iVar4 = 0;
                          do {
                            piVar14 = (int *)FUN_0047e450(lVar12,iVar4);
                            if (*piVar14 == 2) {
                              FUN_00494ed0(lVar12);
                              goto LAB_00487394;
                            }
                            iVar4 = iVar4 + 1;
                            iVar5 = FUN_0047e430(lVar12);
                          } while (iVar4 < iVar5);
                        }
                        FUN_00494ed0(lVar12);
                      }
                      iVar4 = FUN_00497480(lVar10,lVar20);
                    }
                    if (iVar4 != 0) {
                      if (iVar4 == 0x11) {
                        return 0;
                      }
                      *(int *)(param_1 + 0xac) = iVar3;
                      *(int *)(param_1 + 0xb0) = iVar4;
                      *(long *)(param_1 + 0xb8) = lVar10;
                      uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
                      if ((int)uVar11 == 0) {
                        return uVar11;
                      }
                    }
                  }
LAB_00487394:
                } while (iVar2 < iVar6);
              }
            }
            bVar19 = 1 < iVar2;
            iVar2 = iVar3;
          } while (bVar19);
        }
        uVar11 = FUN_004915c0(param_1);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        uVar11 = FUN_0048fca0(param_1);
        if ((int)uVar11 == 0) {
          return uVar11;
        }
        if (*(char *)(*(long *)(param_1 + 0x20) + 0x18) < '\0') {
          uVar11 = (**(code **)(param_1 + 0x70))(param_1);
          return uVar11;
        }
        return uVar11;
      }
      goto LAB_0048646c;
    }
    if ((lVar10 == 0) ||
       (uVar15 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18), (uVar15 >> 0xf & 1) != 0))
    {
      uVar17 = uVar17 | 2;
      bVar19 = false;
      goto joined_r0x004864f8;
    }
    uVar17 = 1;
    local_80 = (uVar15 >> 0x14 ^ 0xffffffff) & 1;
    bVar19 = false;
    lVar10 = FUN_0047da00();
    if (lVar10 != 0) goto joined_r0x00486440;
LAB_004864c8:
    uVar11 = 0xba7;
LAB_004864e0:
    FUN_004806c0(0xb,0x6a,0x41,"external/openssl/crypto/x509/x509_vfy.c",uVar11);
    uVar16 = 0x11;
  }
  else {
    FUN_004806c0(0xb,0x6a,0x44,"external/openssl/crypto/x509/x509_vfy.c",0xb89);
    uVar16 = 1;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar16;
LAB_0048646c:
  FUN_00487770(0,*puVar22);
  return 0;
}


