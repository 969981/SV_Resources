/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033996e8; name: FUN_033996e8
 */


void FUN_033996e8(long param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  size_t __n;
  void *__dest;
  uint uVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  long *plVar10;
  long lVar11;
  size_t sVar12;
  undefined8 *puVar13;
  char *pcVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  uint local_78 [4];
  long local_68;
  
  if (((*(int *)(param_1 + 0xf8) <= *(int *)(param_1 + 0x100)) &&
      (*(int *)(param_1 + 0x128) <= *(int *)(param_1 + 0x140))) &&
     (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x40))) {
    return;
  }
  FUN_033a67a0(param_2,0,0x54595045);
  if (*(char *)(param_1 + 0x290) != '\0') {
    FUN_033a67a0(param_2,1,0x54505452);
    uVar3 = (*(int *)(param_1 + 0x210) + 1) * *(int *)(param_1 + 0x220);
    if (0 < (int)uVar3) {
      sVar12 = (size_t)uVar3;
      do {
        pvVar6 = (void *)*param_3;
        __n = sVar12;
        if (0xfff < (long)sVar12) {
          __n = 0x1000;
        }
        if (param_3[1] < __n + (long)pvVar6) {
          plVar5 = (long *)param_3[6];
          pvVar6 = (void *)0x0;
          if (plVar5 != (long *)0x0) {
            pvVar6 = (void *)(**(code **)(*plVar5 + 0x40))(plVar5,param_3,__n);
          }
        }
        else {
          *param_3 = __n + (long)pvVar6;
        }
        memset(pvVar6,0,__n);
        sVar12 = sVar12 - __n;
      } while (0 < (long)sVar12);
    }
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(char *)(param_1 + 0x291) == '\0') {
    *(undefined4 *)(param_1 + 0x35c) = 1;
    goto LAB_03399a58;
  }
  if (((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x38)) &&
      (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x50))) &&
     (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0xf8))) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x118);
  }
  else {
    uVar3 = FUN_033a4724(param_1 + 0x18);
  }
  FUN_033a67a0(param_2,1,0x54534841);
  local_78[0] = *(uint *)(param_1 + 0x35c);
  puVar9 = (uint *)*param_3;
  puVar7 = puVar9 + 1;
  if ((uint *)param_3[1] < puVar7) {
    plVar5 = (long *)param_3[6];
    if (plVar5 == (long *)0x0) {
      memcpy(puVar9,local_78,(long)param_3[1] - (long)puVar9);
      puVar7 = (uint *)param_3[1];
      goto LAB_0339995c;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78,4);
    puVar7 = (uint *)*param_3;
  }
  else {
    *puVar9 = local_78[0];
LAB_0339995c:
    *param_3 = (ulong)puVar7;
  }
  puVar9 = puVar7 + 1;
  if ((uint *)param_3[1] < puVar9) {
    plVar5 = (long *)param_3[6];
    local_78[0] = uVar3;
    if (plVar5 == (long *)0x0) {
      memcpy(puVar7,local_78,(long)param_3[1] - (long)puVar7);
      puVar9 = (uint *)param_3[1];
      goto LAB_033999b4;
    }
    (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78,4);
  }
  else {
    *puVar7 = uVar3;
LAB_033999b4:
    *param_3 = (ulong)puVar9;
  }
  lVar11 = (long)(int)param_2[1] + -1;
  plVar5 = (long *)param_2[0x22];
  piVar16 = (int *)(*param_2 + lVar11 * 0x10);
  iVar4 = *piVar16;
  lVar8 = *(long *)(piVar16 + 2);
  *(int *)(param_2 + 1) = (int)lVar11;
  uVar2 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
  lVar11 = lVar8 - plVar5[4];
  uVar2 = (uVar2 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar2 & 0xff00ff) << 8;
  local_78[0] = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
    if ((long *)plVar5[6] == (long *)0x0) {
      pvVar6 = (void *)(*plVar5 + lVar8);
      memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
    }
    else {
      (**(code **)(*(long *)plVar5[6] + 0x38))();
    }
  }
  else {
    *puVar7 = local_78[0];
  }
  *(uint *)(param_1 + 0x35c) = uVar3;
LAB_03399a58:
  if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x50)) {
    FUN_033a67a0(param_2,1,0x54535431);
    iVar4 = *(int *)(param_1 + 0x50);
    iVar15 = *(int *)(param_1 + 0x68);
    if (iVar15 != iVar4) {
      lVar11 = (long)iVar4 * 8 + (long)iVar15 * -8;
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar15 * 8);
      do {
        pcVar14 = (char *)*puVar13;
        sVar12 = strlen(pcVar14);
        iVar4 = (int)sVar12 + 1;
        pvVar6 = (void *)*param_3;
        uVar1 = (long)pvVar6 + (long)iVar4;
        if (param_3[1] < uVar1) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,pcVar14,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,pcVar14);
          }
        }
        else {
          memcpy(pvVar6,pcVar14,(long)iVar4);
          *param_3 = uVar1;
        }
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      iVar4 = *(int *)(param_1 + 0x50);
    }
    *(int *)(param_1 + 0x68) = iVar4;
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0xff,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1c4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0xff,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)) {
    FUN_033a67a0(param_2,1,0x544e4131);
    local_68 = (long)*(int *)(param_1 + 0xf8);
    iVar4 = FUN_03398a74(&local_68,local_78);
    pvVar6 = (void *)*param_3;
    if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
      plVar5 = (long *)param_3[6];
      if (plVar5 == (long *)0x0) {
        memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
        *param_3 = param_3[1];
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
      }
    }
    else {
      memcpy(pvVar6,local_78,(long)iVar4);
      *param_3 = (long)pvVar6 + (long)iVar4;
    }
    lVar11 = (long)*(int *)(param_1 + 0x100);
    iVar4 = *(int *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0x100) < iVar4) {
      do {
        lVar8 = *(long *)(param_1 + 0xf0);
        local_68 = (long)*(int *)(lVar8 + lVar11 * 0x18);
        iVar4 = FUN_03398a74(&local_68,local_78);
        pvVar6 = (void *)*param_3;
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
          }
        }
        else {
          memcpy(pvVar6,local_78,(long)iVar4);
          *param_3 = (long)pvVar6 + (long)iVar4;
        }
        piVar16 = (int *)(lVar8 + lVar11 * 0x18 + 0x10);
        local_68 = (long)*piVar16;
        iVar4 = FUN_03398a74(&local_68,local_78);
        pvVar6 = (void *)*param_3;
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
          }
        }
        else {
          memcpy(pvVar6,local_78,(long)iVar4);
          *param_3 = (long)pvVar6 + (long)iVar4;
        }
        if (0 < *piVar16) {
          lVar17 = 0;
          lVar18 = 0;
          plVar5 = (long *)(lVar8 + lVar11 * 0x18 + 8);
          do {
            local_68 = *(long *)(*plVar5 + lVar17);
            iVar4 = FUN_03398a74(&local_68,local_78);
            pvVar6 = (void *)*param_3;
            if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
              plVar10 = (long *)param_3[6];
              if (plVar10 == (long *)0x0) {
                memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
                *param_3 = param_3[1];
              }
              else {
                (**(code **)(*plVar10 + 0x30))(plVar10,param_3,local_78);
              }
            }
            else {
              memcpy(pvVar6,local_78,(long)iVar4);
              *param_3 = (long)pvVar6 + (long)iVar4;
            }
            local_68 = *(long *)(*plVar5 + lVar17 + 8);
            iVar4 = FUN_03398a74(&local_68,local_78);
            pvVar6 = (void *)*param_3;
            if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
              plVar10 = (long *)param_3[6];
              if (plVar10 == (long *)0x0) {
                memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
                *param_3 = param_3[1];
              }
              else {
                (**(code **)(*plVar10 + 0x30))(plVar10,param_3,local_78);
              }
            }
            else {
              memcpy(pvVar6,local_78,(long)iVar4);
              *param_3 = (long)pvVar6 + (long)iVar4;
            }
            lVar18 = lVar18 + 1;
            lVar17 = lVar17 + 0x10;
          } while (lVar18 < *piVar16);
        }
        iVar4 = *(int *)(param_1 + 0xf8);
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar4);
    }
    *(int *)(param_1 + 0x100) = iVar4;
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1e4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0x88)) {
    FUN_033a67a0(param_2,1,0x46535431);
    iVar4 = *(int *)(param_1 + 0x88);
    iVar15 = *(int *)(param_1 + 0xa0);
    if (iVar15 != iVar4) {
      lVar11 = (long)iVar4 * 8 + (long)iVar15 * -8;
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x80) + (long)iVar15 * 8);
      do {
        pcVar14 = (char *)*puVar13;
        sVar12 = strlen(pcVar14);
        iVar4 = (int)sVar12 + 1;
        pvVar6 = (void *)*param_3;
        uVar1 = (long)pvVar6 + (long)iVar4;
        if (param_3[1] < uVar1) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,pcVar14,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,pcVar14);
          }
        }
        else {
          memcpy(pvVar6,pcVar14,(long)iVar4);
          *param_3 = uVar1;
        }
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      iVar4 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0xa0) = iVar4;
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0xff,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1c4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0xff,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xc0)) {
    FUN_033a67a0(param_2,1,0x41535431);
    iVar4 = *(int *)(param_1 + 0xc0);
    iVar15 = *(int *)(param_1 + 0xd8);
    if (iVar15 != iVar4) {
      lVar11 = (long)iVar4 * 8 + (long)iVar15 * -8;
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0xb8) + (long)iVar15 * 8);
      do {
        pcVar14 = (char *)*puVar13;
        sVar12 = strlen(pcVar14);
        iVar4 = (int)sVar12 + 1;
        pvVar6 = (void *)*param_3;
        uVar1 = (long)pvVar6 + (long)iVar4;
        if (param_3[1] < uVar1) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,pcVar14,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,pcVar14);
          }
        }
        else {
          memcpy(pvVar6,pcVar14,(long)iVar4);
          *param_3 = uVar1;
        }
        puVar13 = puVar13 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      iVar4 = *(int *)(param_1 + 0xc0);
    }
    *(int *)(param_1 + 0xd8) = iVar4;
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0xff,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1c4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0xff,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
    FUN_033a67a0(param_2,1,0x54424459);
    pvVar6 = (void *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x40));
    sVar12 = (long)*(int *)(param_1 + 0x38) - (long)*(int *)(param_1 + 0x40);
    __dest = (void *)*param_3;
    uVar1 = (long)__dest + sVar12;
    if (param_3[1] < uVar1) {
      plVar5 = (long *)param_3[6];
      if (plVar5 == (long *)0x0) {
        memcpy(__dest,pvVar6,param_3[1] - (long)__dest);
        *param_3 = param_3[1];
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_3,pvVar6);
      }
    }
    else {
      memcpy(__dest,pvVar6,sVar12);
      *param_3 = uVar1;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1e4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
    FUN_033a67a0(param_2,1,0x54485348);
    FUN_0339b024(param_1 + 0x18,param_3);
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1e4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0x140) < *(int *)(param_1 + 0x128)) {
    FUN_033a67a0(param_2,1,0x5450524f);
    local_68 = (long)*(int *)(param_1 + 0x128);
    iVar4 = FUN_03398a74(&local_68,local_78);
    pvVar6 = (void *)*param_3;
    if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
      plVar5 = (long *)param_3[6];
      if (plVar5 == (long *)0x0) {
        memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
        *param_3 = param_3[1];
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
      }
    }
    else {
      memcpy(pvVar6,local_78,(long)iVar4);
      *param_3 = (long)pvVar6 + (long)iVar4;
    }
    lVar11 = (long)*(int *)(param_1 + 0x140);
    iVar4 = *(int *)(param_1 + 0x128);
    if (*(int *)(param_1 + 0x140) < iVar4) {
      lVar8 = lVar11 * 0xc;
      do {
        lVar18 = *(long *)(param_1 + 0x120);
        local_68 = (long)*(int *)(lVar18 + lVar8);
        iVar4 = FUN_03398a74(&local_68,local_78);
        pvVar6 = (void *)*param_3;
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
          }
        }
        else {
          memcpy(pvVar6,local_78,(long)iVar4);
          *param_3 = (long)pvVar6 + (long)iVar4;
        }
        lVar18 = lVar18 + lVar8;
        local_68 = (long)*(int *)(lVar18 + 4);
        iVar4 = FUN_03398a74(&local_68,local_78);
        pvVar6 = (void *)*param_3;
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
          }
        }
        else {
          memcpy(pvVar6,local_78,(long)iVar4);
          *param_3 = (long)pvVar6 + (long)iVar4;
        }
        local_68 = (long)*(int *)(lVar18 + 8);
        iVar4 = FUN_03398a74(&local_68,local_78);
        pvVar6 = (void *)*param_3;
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar4)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memcpy(pvVar6,local_78,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,local_78);
          }
        }
        else {
          memcpy(pvVar6,local_78,(long)iVar4);
          *param_3 = (long)pvVar6 + (long)iVar4;
        }
        iVar4 = *(int *)(param_1 + 0x128);
        lVar11 = lVar11 + 1;
        lVar8 = lVar8 + 0xc;
      } while (lVar11 < iVar4);
    }
    *(int *)(param_1 + 0x140) = iVar4;
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1e4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  if (*(int *)(param_1 + 0x158) < *(int *)(param_1 + 0x150)) {
    FUN_033a67a0(param_2,1,0x54504853);
    FUN_0339b024(param_1 + 0x148,param_3);
    pvVar6 = (void *)*param_3;
    uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
    if (uVar3 != 0) {
      iVar4 = 4 - uVar3;
      while( true ) {
        iVar15 = iVar4;
        if (0x1f < iVar4) {
          iVar15 = 0x20;
        }
        if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
          plVar5 = (long *)param_3[6];
          if (plVar5 == (long *)0x0) {
            memset(pvVar6,0,param_3[1] - (long)pvVar6);
            *param_3 = param_3[1];
          }
          else {
            (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1e4,(long)iVar15);
          }
        }
        else {
          memset(pvVar6,0,(long)iVar15);
          *param_3 = (long)pvVar6 + (long)iVar15;
        }
        iVar4 = iVar4 - iVar15;
        if (iVar4 == 0) break;
        pvVar6 = (void *)*param_3;
      }
    }
    iVar4 = *(int *)(param_1 + 0x358);
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    *(int *)(param_1 + 0x358) = iVar4;
    lVar11 = (long)(int)param_2[1] + -1;
    plVar5 = (long *)param_2[0x22];
    piVar16 = (int *)(*param_2 + lVar11 * 0x10);
    iVar4 = *piVar16;
    lVar8 = *(long *)(piVar16 + 2);
    *(int *)(param_2 + 1) = (int)lVar11;
    uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
    lVar11 = lVar8 - plVar5[4];
    uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
      if ((long *)plVar5[6] == (long *)0x0) {
        pvVar6 = (void *)(*plVar5 + lVar8);
        memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
      }
      else {
        (**(code **)(*(long *)plVar5[6] + 0x38))();
      }
    }
    else {
      *puVar7 = local_78[0];
    }
  }
  FUN_033a67a0(param_2,1,0x54504144);
  pvVar6 = (void *)*param_3;
  uVar3 = ((int)pvVar6 - (int)param_3[2]) + (int)param_3[4] & 3;
  if (uVar3 != 0) {
    iVar4 = 4 - uVar3;
    while( true ) {
      iVar15 = iVar4;
      if (0x1f < iVar4) {
        iVar15 = 0x20;
      }
      if (param_3[1] < (ulong)((long)pvVar6 + (long)iVar15)) {
        plVar5 = (long *)param_3[6];
        if (plVar5 == (long *)0x0) {
          memset(pvVar6,0,param_3[1] - (long)pvVar6);
          *param_3 = param_3[1];
        }
        else {
          (**(code **)(*plVar5 + 0x30))(plVar5,param_3,&DAT_03d7e1e4,(long)iVar15);
        }
      }
      else {
        memset(pvVar6,0,(long)iVar15);
        *param_3 = (long)pvVar6 + (long)iVar15;
      }
      iVar4 = iVar4 - iVar15;
      if (iVar4 == 0) break;
      pvVar6 = (void *)*param_3;
    }
  }
  iVar4 = *(int *)(param_1 + 0x358);
  if (iVar4 < 5) {
    iVar4 = 4;
  }
  *(int *)(param_1 + 0x358) = iVar4;
  lVar11 = (long)(int)param_2[1] + -1;
  plVar5 = (long *)param_2[0x22];
  piVar16 = (int *)(*param_2 + lVar11 * 0x10);
  iVar4 = *piVar16;
  lVar8 = *(long *)(piVar16 + 2);
  *(int *)(param_2 + 1) = (int)lVar11;
  uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
  lVar11 = lVar8 - plVar5[4];
  uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
  if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
    if ((long *)plVar5[6] == (long *)0x0) {
      pvVar6 = (void *)(*plVar5 + lVar8);
      memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
    }
    else {
      (**(code **)(*(long *)plVar5[6] + 0x38))();
    }
  }
  else {
    *puVar7 = local_78[0];
  }
  lVar11 = (long)(int)param_2[1] + -1;
  plVar5 = (long *)param_2[0x22];
  piVar16 = (int *)(*param_2 + lVar11 * 0x10);
  iVar4 = *piVar16;
  lVar8 = *(long *)(piVar16 + 2);
  *(int *)(param_2 + 1) = (int)lVar11;
  uVar3 = ((int)*plVar5 - ((int)plVar5[2] + (int)lVar8)) + (int)plVar5[4];
  lVar11 = lVar8 - plVar5[4];
  uVar3 = (uVar3 & 0xff00ff00 | iVar4 << 0x1e) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_78[0] = uVar3 >> 0x10 | uVar3 << 0x10;
  if ((lVar11 < 0) || (puVar7 = (uint *)(lVar11 + plVar5[2]), (uint *)plVar5[1] < puVar7 + 1)) {
    if ((long *)plVar5[6] == (long *)0x0) {
      pvVar6 = (void *)(*plVar5 + lVar8);
      memcpy(pvVar6,local_78,plVar5[1] - (long)pvVar6);
    }
    else {
      (**(code **)(*(long *)plVar5[6] + 0x38))();
    }
  }
  else {
    *puVar7 = local_78[0];
  }
  return;
}


