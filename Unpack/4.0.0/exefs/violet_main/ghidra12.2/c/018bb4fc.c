/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018bb4fc; name: FUN_018bb4fc
 */


void FUN_018bb4fc(long param_1,undefined8 *param_2,long *param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  short sVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  undefined2 local_44 [2];
  
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  *(undefined8 *)(param_1 + 0x50) = param_2[2];
  plVar16 = (long *)param_2[3];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar5 = *(long **)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar16;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x68) = param_2[5];
  *(undefined8 *)(param_1 + 0x70) = param_2[6];
  *(undefined8 *)(param_1 + 0x78) = param_2[7];
  plVar16 = (long *)param_2[8];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar5 = *(long **)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar16;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x88) = param_2[9];
  *(undefined8 *)(param_1 + 0x90) = param_2[10];
  *(undefined8 *)(param_1 + 0x98) = param_2[0xb];
  plVar16 = (long *)param_2[0xc];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar5 = *(long **)(param_1 + 0xa0);
  *(long **)(param_1 + 0xa0) = plVar16;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0xa8) = param_2[0xd];
  *(undefined8 *)(param_1 + 0xb0) = param_2[0xe];
  *(undefined8 *)(param_1 + 0xb8) = param_2[0xf];
  plVar16 = (long *)param_2[0x10];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar5 = *(long **)(param_1 + 0xc0);
  *(long **)(param_1 + 0xc0) = plVar16;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  memcpy((void *)(param_1 + 200),param_2 + 0x11,0x9c);
  *(undefined8 *)(param_1 + 0x170) = param_2[0x26];
  *(undefined8 *)(param_1 + 0x178) = param_2[0x27];
  *(undefined8 *)(param_1 + 0x180) = param_2[0x28];
  *(undefined8 *)(param_1 + 0x188) = param_2[0x29];
  plVar16 = (long *)param_2[0x2a];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar5 = *(long **)(param_1 + 400);
  *(long **)(param_1 + 400) = plVar16;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x198) = param_2[0x2b];
  *(undefined8 *)(param_1 + 0x1a0) = param_2[0x2c];
  *(undefined8 *)(param_1 + 0x1a8) = param_2[0x2d];
  plVar16 = (long *)param_2[0x2e];
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar5 = *(long **)(param_1 + 0x1b0);
  *(long **)(param_1 + 0x1b0) = plVar16;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1b8) = param_2[0x2f];
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x30);
  plVar16 = *(long **)(*param_3 + 0x30);
  plVar5 = *(long **)(*param_3 + 0x38);
  if (plVar16 != plVar5) {
    uVar10 = *(ulong *)(param_1 + 0x68);
LAB_018bb670:
    uVar11 = *(ulong *)(*plVar16 + 0x40);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & uVar10;
      }
      else {
        uVar13 = uVar10;
        if (uVar11 <= uVar10) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar10 / uVar11;
          }
          uVar13 = uVar10 - uVar13 * uVar11;
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar16 + 0x38) + uVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar14[1] == uVar10) {
              if (plVar14[2] == uVar10) goto LAB_018bb764;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar14[1];
            if (uVar12 == uVar10) {
              if (plVar14[2] == uVar10) goto LAB_018bb764;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar3 = 0;
                if (uVar11 != 0) {
                  uVar3 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar3 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_018bb76c;
  }
LAB_018bb778:
  sVar6 = -1;
LAB_018bb77c:
  *(short *)(param_1 + 0x1d0) = sVar6;
  plVar16 = *(long **)(*param_3 + 0x30);
  plVar5 = *(long **)(*param_3 + 0x38);
  if (plVar16 != plVar5) {
    uVar10 = *(ulong *)(param_1 + 0x88);
LAB_018bb798:
    uVar11 = *(ulong *)(*plVar16 + 0x40);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & uVar10;
      }
      else {
        uVar13 = uVar10;
        if (uVar11 <= uVar10) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar10 / uVar11;
          }
          uVar13 = uVar10 - uVar13 * uVar11;
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar16 + 0x38) + uVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar14[1] == uVar10) {
              if (plVar14[2] == uVar10) goto LAB_018bb88c;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar14[1];
            if (uVar12 == uVar10) {
              if (plVar14[2] == uVar10) goto LAB_018bb88c;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar3 = 0;
                if (uVar11 != 0) {
                  uVar3 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar3 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_018bb894;
  }
LAB_018bb8a0:
  sVar6 = -1;
LAB_018bb8a4:
  *(short *)(param_1 + 0x1d2) = sVar6;
  plVar16 = *(long **)(*param_3 + 0x30);
  plVar5 = *(long **)(*param_3 + 0x38);
  if (plVar16 != plVar5) {
    uVar10 = *(ulong *)(param_1 + 0xa8);
LAB_018bb8c0:
    uVar11 = *(ulong *)(*plVar16 + 0x40);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & uVar10;
      }
      else {
        uVar13 = uVar10;
        if (uVar11 <= uVar10) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar10 / uVar11;
          }
          uVar13 = uVar10 - uVar13 * uVar11;
        }
      }
      plVar14 = *(long **)(*(long *)(*plVar16 + 0x38) + uVar13 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar14[1] == uVar10) {
              if (plVar14[2] == uVar10) goto LAB_018bb9b4;
            }
            else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar14[1];
            if (uVar12 == uVar10) {
              if (plVar14[2] == uVar10) goto LAB_018bb9b4;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar3 = 0;
                if (uVar11 != 0) {
                  uVar3 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar3 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_018bb9bc;
  }
LAB_018bb9c8:
  sVar6 = -1;
LAB_018bb9cc:
  *(short *)(param_1 + 0x1d4) = sVar6;
  plVar16 = *(long **)(*param_3 + 0x30);
  plVar5 = *(long **)(*param_3 + 0x38);
  if (plVar16 != plVar5) {
    uVar10 = *(ulong *)(param_1 + 0x178);
    plVar14 = plVar16;
LAB_018bb9ec:
    uVar11 = *(ulong *)(*plVar14 + 0x40);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & uVar10;
      }
      else {
        uVar13 = uVar10;
        if (uVar11 <= uVar10) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar10 / uVar11;
          }
          uVar13 = uVar10 - uVar13 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(*plVar14 + 0x38) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == uVar10) {
              if (plVar15[2] == uVar10) goto LAB_018bbae0;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == uVar10) {
              if (plVar15[2] == uVar10) goto LAB_018bbae0;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar3 = 0;
                if (uVar11 != 0) {
                  uVar3 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar3 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_018bbae8;
  }
  uVar17 = 0xffff;
LAB_018bbc08:
  uVar4 = 0xffff;
LAB_018bbc0c:
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f0);
  if (((~uVar17 & 0xffff) != 0) && ((~uVar4 & 0xffff) != 0)) {
    local_44[0] = (undefined2)uVar4;
    while (FUN_018bbdf0(param_1 + 0x1f0,local_44), (uVar4 & 0xffff) != (uVar17 & 0xffff)) {
      if ((~uVar4 & 0xffff) == 0) {
        *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f0);
        return;
      }
      uVar4 = FUN_00c9edd0(*param_3,uVar4);
      local_44[0] = (undefined2)uVar4;
    }
    puVar1 = *(undefined2 **)(param_1 + 0x1f0);
    if ((puVar1 != *(undefined2 **)(param_1 + 0x1f8)) &&
       (puVar7 = *(undefined2 **)(param_1 + 0x1f8) + -1, puVar1 < puVar7)) {
      do {
        puVar9 = puVar1 + 1;
        uVar2 = *puVar1;
        *puVar1 = *puVar7;
        puVar8 = puVar7 + -1;
        *puVar7 = uVar2;
        puVar7 = puVar8;
        puVar1 = puVar9;
      } while (puVar9 < puVar8);
    }
  }
  return;
LAB_018bb764:
  if (-1 < (short)plVar14[6]) {
    sVar6 = *(short *)((long)plVar16 + 10) + (short)plVar14[6];
    goto LAB_018bb77c;
  }
LAB_018bb76c:
  plVar16 = plVar16 + 2;
  if (plVar16 == plVar5) goto LAB_018bb778;
  goto LAB_018bb670;
LAB_018bb88c:
  if (-1 < (short)plVar14[6]) {
    sVar6 = *(short *)((long)plVar16 + 10) + (short)plVar14[6];
    goto LAB_018bb8a4;
  }
LAB_018bb894:
  plVar16 = plVar16 + 2;
  if (plVar16 == plVar5) goto LAB_018bb8a0;
  goto LAB_018bb798;
LAB_018bb9b4:
  if (-1 < (short)plVar14[6]) {
    sVar6 = *(short *)((long)plVar16 + 10) + (short)plVar14[6];
    goto LAB_018bb9cc;
  }
LAB_018bb9bc:
  plVar16 = plVar16 + 2;
  if (plVar16 == plVar5) goto LAB_018bb9c8;
  goto LAB_018bb8c0;
LAB_018bbae0:
  if (-1 < (short)plVar15[6]) {
    uVar17 = (uint)*(ushort *)((long)plVar14 + 10) + (int)(short)plVar15[6];
    goto LAB_018bbaf8;
  }
LAB_018bbae8:
  plVar14 = plVar14 + 2;
  if (plVar14 == plVar5) goto code_r0x018bbaf4;
  goto LAB_018bb9ec;
code_r0x018bbaf4:
  uVar17 = 0xffff;
LAB_018bbaf8:
  uVar10 = *(ulong *)(param_1 + 0x198);
LAB_018bbb00:
  uVar11 = *(ulong *)(*plVar16 + 0x40);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else {
      uVar13 = uVar10;
      if (uVar11 <= uVar10) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar10 / uVar11;
        }
        uVar13 = uVar10 - uVar13 * uVar11;
      }
    }
    plVar14 = *(long **)(*(long *)(*plVar16 + 0x38) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar10) {
            if (plVar14[2] == uVar10) goto LAB_018bbbf4;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar10) {
            if (plVar14[2] == uVar10) goto LAB_018bbbf4;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar3 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_018bbbfc;
LAB_018bbbf4:
  if (-1 < (short)plVar14[6]) {
    uVar4 = (uint)*(ushort *)((long)plVar16 + 10) + (int)(short)plVar14[6];
    goto LAB_018bbc0c;
  }
LAB_018bbbfc:
  plVar16 = plVar16 + 2;
  if (plVar16 == plVar5) goto LAB_018bbc08;
  goto LAB_018bbb00;
}


