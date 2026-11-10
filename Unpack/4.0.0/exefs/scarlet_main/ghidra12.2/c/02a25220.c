/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a25220; name: FUN_02a25220
 */


void FUN_02a25220(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined *puVar3;
  uint *puVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  char *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  int *local_80;
  int *local_78;
  int *local_68;
  int *local_60;
  
  FUN_00d996a8(&local_68);
  puVar3 = PTR_DAT_047d5608;
  if (local_60 == (int *)0x0) {
    *param_3 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar11 = 0.0;
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)local_60 - (long)*local_60)) {
      uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3];
      fVar10 = 0.0;
      if (uVar5 != 0) {
        puVar4 = (uint *)((long)local_60 + uVar5);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        local_a0 = "height";
        puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          if (local_68 != (int *)0x0) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar6;
            if (uVar2 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar6[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar5 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar2 < 0xb) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                if ((ulong)puVar6[5] != 0) {
                  uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
                }
              }
              if ((uVar7 < *(ushort *)((long)local_68 - (long)*local_68)) &&
                 (uVar5 = (ulong)*(ushort *)(((long)local_68 - (long)*local_68) + (ulong)uVar7),
                 uVar5 != 0)) {
                fVar10 = *(float *)((long)local_68 + uVar5);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar2) {
                fVar10 = 0.0;
                if ((ulong)puVar6[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
                }
              }
            }
          }
        }
      }
    }
    *param_3 = fVar10;
    if (((local_60 != (int *)0x0) && (6 < *(ushort *)((long)local_60 - (long)*local_60))) &&
       (uVar5 = (ulong)((ushort *)((long)local_60 - (long)*local_60))[3], uVar5 != 0)) {
      puVar4 = (uint *)((long)local_60 + uVar5);
      puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      local_a0 = "radius";
      puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
      if ((puVar4 != (uint *)0x0) && (local_68 != (int *)0x0)) {
        piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
        puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
        uVar2 = *puVar6;
        if (uVar2 < 7) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)0x0;
          if ((ulong)puVar6[3] != 0) {
            puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
            piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
          }
        }
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
        }
        if (*(long *)(puVar3 + uVar5 * 8) == 4) {
          fVar11 = 0.0;
          if (uVar2 < 0xb) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            if ((ulong)puVar6[5] != 0) {
              uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
            }
            if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
              fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
            }
          }
          if ((uVar7 < *(ushort *)((long)local_68 - (long)*local_68)) &&
             (uVar5 = (ulong)*(ushort *)(((long)local_68 - (long)*local_68) + (ulong)uVar7),
             uVar5 != 0)) {
            fVar11 = *(float *)((long)local_68 + uVar5);
          }
        }
        else if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
          fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
        }
      }
    }
  }
  param_3[1] = fVar11;
  local_a0 = (char *)0x44e5ec527d73f640;
  pcStack_98 = "lookAtOffset";
  local_90 = 0xc;
  local_88 = (long *)0x0;
  FUN_00d996a8(&local_80,&local_68,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_78 == (int *)0x0) {
    fVar11 = 0.0;
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_3 + 6);
    *(ulong *)(param_3 + 4) = *(ulong *)(param_3 + 4) & 0xffffffff00000000;
  }
  else {
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)local_78 - (long)*local_78)) {
      uVar5 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3];
      fVar10 = 0.0;
      if (uVar5 != 0) {
        puVar4 = (uint *)((long)local_78 + uVar5);
        local_a0 = "x";
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          if (local_80 != (int *)0x0) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar6;
            if (uVar2 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar6[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar5 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar2 < 0xb) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                if ((ulong)puVar6[5] != 0) {
                  uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
                }
              }
              if ((uVar7 < *(ushort *)((long)local_80 - (long)*local_80)) &&
                 (uVar5 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar7),
                 uVar5 != 0)) {
                fVar10 = *(float *)((long)local_80 + uVar5);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar2) {
                fVar10 = 0.0;
                if ((ulong)puVar6[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
                }
              }
            }
          }
        }
      }
    }
    fVar11 = 0.0;
    *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_3 + 6);
    *(ulong *)(param_3 + 4) = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20),fVar10);
    if ((local_78 != (int *)0x0) && (6 < *(ushort *)((long)local_78 - (long)*local_78))) {
      uVar5 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3];
      if (uVar5 != 0) {
        puVar4 = (uint *)((long)local_78 + uVar5);
        local_a0 = "y";
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar4 != (uint *)0x0) && (local_80 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar2 = *puVar6;
          if (uVar2 < 7) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)0x0;
            if ((ulong)puVar6[3] != 0) {
              puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
              piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
             (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
          }
          if (*(long *)(puVar3 + uVar5 * 8) == 4) {
            fVar11 = 0.0;
            if (uVar2 < 0xb) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              if ((ulong)puVar6[5] != 0) {
                uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
              }
              if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
                fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
              }
            }
            if ((uVar7 < *(ushort *)((long)local_80 - (long)*local_80)) &&
               (uVar5 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar7),
               uVar5 != 0)) {
              fVar11 = *(float *)((long)local_80 + uVar5);
            }
          }
          else {
            if ((uVar2 < 0xf) || ((ulong)puVar6[7] == 0)) goto LAB_02a25d74;
            fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
          goto LAB_02a256e8;
        }
      }
LAB_02a25d74:
      fVar11 = 0.0;
    }
  }
LAB_02a256e8:
  pfVar9 = param_3 + 4;
  fVar10 = 0.0;
  *(undefined8 *)(param_3 + 6) = *(undefined8 *)(param_3 + 6);
  *(ulong *)pfVar9 = CONCAT44(fVar11,(int)*(undefined8 *)pfVar9);
  if ((local_78 == (int *)0x0) || (*(ushort *)((long)local_78 - (long)*local_78) < 7))
  goto LAB_02a25800;
  uVar5 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3];
  if (uVar5 == 0) {
LAB_02a25d9c:
    fVar10 = 0.0;
  }
  else {
    puVar4 = (uint *)((long)local_78 + uVar5);
    local_a0 = "z";
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 == (uint *)0x0) || (local_80 == (int *)0x0)) goto LAB_02a25d9c;
    piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
    puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
    uVar2 = *puVar6;
    if (uVar2 < 7) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)0x0;
      if ((ulong)puVar6[3] != 0) {
        puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
        piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
      }
    }
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
       (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
    }
    if (*(long *)(puVar3 + uVar5 * 8) == 4) {
      fVar10 = 0.0;
      if (uVar2 < 0xb) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        if ((ulong)puVar6[5] != 0) {
          uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
        }
        if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
          fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
        }
      }
      if ((uVar7 < *(ushort *)((long)local_80 - (long)*local_80)) &&
         (uVar5 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar7), uVar5 != 0)
         ) {
        fVar10 = *(float *)((long)local_80 + uVar5);
      }
    }
    else {
      if (uVar2 < 0xf) goto LAB_02a25d9c;
      fVar10 = 0.0;
      if ((ulong)puVar6[7] != 0) {
        fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
      }
    }
  }
LAB_02a25800:
  *(ulong *)(param_3 + 6) = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20),fVar10);
  *(undefined8 *)pfVar9 = *(undefined8 *)pfVar9;
  local_a0 = (char *)0x4623bf00b689a2de;
  pcStack_98 = "springRate";
  local_90 = 10;
  local_88 = (long *)0x0;
  FUN_00d996a8(&local_80,&local_68,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_78 == (int *)0x0) {
    fVar11 = 0.0;
    *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_3 + 10);
    *(ulong *)(param_3 + 8) = *(ulong *)(param_3 + 8) & 0xffffffff00000000;
  }
  else {
    fVar10 = 0.0;
    if (6 < *(ushort *)((long)local_78 - (long)*local_78)) {
      uVar5 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3];
      fVar10 = 0.0;
      if (uVar5 != 0) {
        puVar4 = (uint *)((long)local_78 + uVar5);
        local_a0 = "x";
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 == (uint *)0x0) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = 0.0;
          if (local_80 != (int *)0x0) {
            piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
            puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
            uVar2 = *puVar6;
            if (uVar2 < 7) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)0x0;
              if ((ulong)puVar6[3] != 0) {
                puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
                piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
              }
            }
            if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
               (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
              uVar5 = 0;
            }
            else {
              uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
            }
            if (*(long *)(puVar3 + uVar5 * 8) == 4) {
              fVar10 = 0.0;
              if (uVar2 < 0xb) {
                uVar7 = 0;
              }
              else {
                uVar7 = 0;
                if ((ulong)puVar6[5] != 0) {
                  uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
                }
                if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
                }
              }
              if ((uVar7 < *(ushort *)((long)local_80 - (long)*local_80)) &&
                 (uVar5 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar7),
                 uVar5 != 0)) {
                fVar10 = *(float *)((long)local_80 + uVar5);
              }
            }
            else {
              fVar10 = 0.0;
              if (0xe < uVar2) {
                fVar10 = 0.0;
                if ((ulong)puVar6[7] != 0) {
                  fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
                }
              }
            }
          }
        }
      }
    }
    fVar11 = 0.0;
    *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_3 + 10);
    *(ulong *)(param_3 + 8) = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20),fVar10);
    if ((local_78 != (int *)0x0) && (6 < *(ushort *)((long)local_78 - (long)*local_78))) {
      uVar5 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3];
      if (uVar5 != 0) {
        puVar4 = (uint *)((long)local_78 + uVar5);
        local_a0 = "y";
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar4 != (uint *)0x0) && (local_80 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar2 = *puVar6;
          if (uVar2 < 7) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)0x0;
            if ((ulong)puVar6[3] != 0) {
              puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
              piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
             (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
          }
          if (*(long *)(puVar3 + uVar5 * 8) == 4) {
            fVar11 = 0.0;
            if (uVar2 < 0xb) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              if ((ulong)puVar6[5] != 0) {
                uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
              }
              if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
                fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
              }
            }
            if ((uVar7 < *(ushort *)((long)local_80 - (long)*local_80)) &&
               (uVar5 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar7),
               uVar5 != 0)) {
              fVar11 = *(float *)((long)local_80 + uVar5);
            }
          }
          else {
            if ((uVar2 < 0xf) || ((ulong)puVar6[7] == 0)) goto LAB_02a25dd8;
            fVar11 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
          goto LAB_02a25a68;
        }
      }
LAB_02a25dd8:
      fVar11 = 0.0;
    }
  }
LAB_02a25a68:
  pfVar9 = param_3 + 8;
  fVar10 = 0.0;
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_3 + 10);
  *(ulong *)pfVar9 = CONCAT44(fVar11,(int)*(undefined8 *)pfVar9);
  if ((local_78 == (int *)0x0) || (*(ushort *)((long)local_78 - (long)*local_78) < 7))
  goto LAB_02a25b78;
  uVar5 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[3];
  if (uVar5 != 0) {
    puVar4 = (uint *)((long)local_78 + uVar5);
    local_a0 = "z";
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    puVar4 = bsearch(&local_a0,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
    if ((puVar4 != (uint *)0x0) && (local_80 != (int *)0x0)) {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      puVar6 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar2 = *puVar6;
      if (uVar2 < 7) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar4 = (uint *)((long)piVar1 + (ulong)puVar6[3]);
          piVar8 = (int *)((long)puVar4 + (ulong)*puVar4);
        }
      }
      if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar8 + uVar5) & 0xffffffff;
      }
      if (*(long *)(puVar3 + uVar5 * 8) == 4) {
        fVar10 = 0.0;
        if (uVar2 < 0xb) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          if ((ulong)puVar6[5] != 0) {
            uVar7 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar6[5]);
          }
          if ((0xe < uVar2) && ((ulong)puVar6[7] != 0)) {
            fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
          }
        }
        if ((uVar7 < *(ushort *)((long)local_80 - (long)*local_80)) &&
           (uVar5 = (ulong)*(ushort *)(((long)local_80 - (long)*local_80) + (ulong)uVar7),
           uVar5 != 0)) {
          fVar10 = *(float *)((long)local_80 + uVar5);
        }
        goto LAB_02a25b78;
      }
      if (0xe < uVar2) {
        fVar10 = 0.0;
        if ((ulong)puVar6[7] != 0) {
          fVar10 = (float)*(double *)((long)piVar1 + (ulong)puVar6[7]);
        }
        goto LAB_02a25b78;
      }
    }
  }
  fVar10 = 0.0;
LAB_02a25b78:
  *(ulong *)(param_3 + 10) = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20),fVar10);
  *(undefined8 *)pfVar9 = *(undefined8 *)pfVar9;
  return;
}


