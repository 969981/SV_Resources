/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352a73c; name: FUN_0352a73c
 */


void FUN_0352a73c(long *param_1,int param_2,undefined8 *param_3,uint *param_4,int *param_5,
                 long param_6,int param_7,long param_8,byte param_9,long *param_10)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  double dVar18;
  double dVar19;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  lVar6 = *(long *)(*(long *)(param_6 + 0x108) + 0x18);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x78);
  }
  lVar17 = param_1[0x12];
  if ((*(byte *)(lVar17 + 0x50) & 6) == 4) {
    uVar3 = (int)param_8 - param_2;
    uVar4 = param_2 - *(int *)(lVar17 + 0x38);
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    local_6c = *(undefined4 *)(lVar17 + 0x44);
    local_68 = 0;
    dVar19 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    dVar19 = ((double)(int)uVar4 * 1000.0) / dVar19;
    dVar18 = 0.5;
    if (dVar19 <= 0.0) {
      dVar18 = -0.5;
    }
    local_70 = (int)(dVar18 + dVar19);
    FUN_0351ca80(*(undefined8 *)(lVar17 + 8),&local_70);
    bVar5 = *(byte *)(lVar17 + 0x50);
  }
  else {
    bVar5 = *(byte *)(lVar17 + 0x50) & 0xfd;
    *(byte *)(lVar17 + 0x50) = bVar5;
  }
  *(byte *)(lVar17 + 0x50) = bVar5 & 0xfb;
  *(undefined1 *)(lVar17 + 0x18) = 0;
  uVar4 = *param_4;
  if ((lVar6 == 0) || ((int)uVar4 < 1)) {
    if (((byte)param_4[4] >> 5 & 1) != 0) {
      lVar9 = *(long *)(*(long *)(param_6 + 0x108) + 0x18);
      if (lVar9 != 0) {
        uVar3 = *(uint *)(param_6 + 0x100);
        if (uVar3 == 0) {
          iVar16 = 0;
        }
        else {
          if (uVar3 == 1) {
            uVar11 = 0;
            iVar16 = 0;
          }
          else {
            uVar11 = 0;
            lVar14 = 0;
            do {
              plVar7 = (long *)(param_6 + uVar11 * 8);
              uVar11 = uVar11 + 2;
              lVar14 = *(long *)(*(long *)(plVar7[1] + 8) + 0x68) +
                       *(long *)(*(long *)(*plVar7 + 8) + 0x68) + lVar14;
              iVar16 = (int)lVar14;
            } while (((ulong)uVar3 & 0xfffffffe) != uVar11);
          }
          if ((uVar3 & 1) != 0) {
            iVar16 = (int)*(undefined8 *)(*(long *)(*(long *)(param_6 + uVar11 * 8) + 8) + 0x68) +
                     iVar16;
          }
        }
        lVar9 = *(long *)(lVar9 + 0x78);
        lVar14 = *(long *)(lVar9 + 0x130);
        if (*(int *)(lVar14 + (ulong)*(uint *)(lVar9 + 0x138) * 0x10 + -0xc) - *(int *)(lVar14 + 4)
            == *(int *)(*(long *)(param_6 + 0x110) + 0x88) +
               (((int)param_8 - iVar16) - *(int *)(*(long *)(param_6 + 0x108) + 8))) {
          bVar1 = true;
          lVar6 = (ulong)(uint)(*(int *)(lVar6 + 0x140) -
                               *(int *)(*(long *)(lVar6 + 0x130) +
                                        (ulong)*(uint *)(lVar6 + 0x138) * 0x10 + -0xc)) + param_8;
          goto LAB_0352a970;
        }
      }
    }
    bVar1 = true;
    lVar6 = param_8;
  }
  else {
    bVar1 = (int)param_4[2] < 1;
    lVar6 = param_8 - (int)((int)(((ulong)*(uint *)PTR_DAT_047e6fa0 * (ulong)uVar4) / 1000) -
                           param_4[2]);
  }
LAB_0352a970:
  uVar3 = param_4[1];
  *(long *)(lVar17 + 0x38) = lVar6;
  *(byte *)(lVar17 + 0x50) = bVar5 | 6;
  *(uint *)(lVar17 + 0x40) = uVar4;
  *(uint *)(lVar17 + 0x44) = uVar3;
  if ((bVar1) && ((param_9 & 1) == 0)) {
    *(long *)(lVar17 + 0x10) = param_8;
    *(undefined1 *)(lVar17 + 0x18) = 1;
  }
  lVar6 = *(long *)(param_6 + 0x108);
  if ((*(long *)(lVar6 + 0x18) != 0) && (*(int *)(lVar6 + 0x38) == 0)) {
    lVar17 = *(long *)(*(long *)(lVar6 + 0x18) + 0x78);
    if (((byte)param_4[4] >> 5 & 1) == 0) {
      iVar16 = *(int *)(*(long *)(lVar17 + 0x130) + (ulong)*(uint *)(lVar17 + 0x138) * 0x10 + -0xc);
    }
    else {
      iVar16 = *(int *)(lVar17 + 0x140);
    }
    *(int *)(lVar6 + 0x34) = iVar16 - *(int *)(*(long *)(lVar17 + 0x130) + 4);
  }
  *(long *)(param_3[1] + 0x68) = param_8;
  param_3[4] = param_8 - param_7;
  iVar16 = param_5[2];
  param_3[5] = *(undefined8 *)param_5;
  *(int *)(param_3 + 6) = iVar16;
  lVar6 = (**(code **)(*(long *)param_3[1] + 0xd0))();
  if (lVar6 == 0) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  if (0 < *param_5) {
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  }
  *(byte *)(param_3 + 10) = *(byte *)(param_3 + 10) | 1;
  lVar6 = *(long *)(param_6 + 0x108);
  if (lVar6 == 0) {
    lVar17 = 0x7fffffffffffffff;
  }
  else {
    uVar4 = *(uint *)(param_6 + 0x100);
    if (uVar4 == 0) {
      lVar17 = 0;
    }
    else {
      if (uVar4 == 1) {
        uVar11 = 0;
        lVar17 = 0;
      }
      else {
        uVar11 = 0;
        lVar17 = 0;
        do {
          plVar7 = (long *)(param_6 + uVar11 * 8);
          uVar11 = uVar11 + 2;
          lVar17 = *(long *)(*(long *)(plVar7[1] + 8) + 0x68) +
                   *(long *)(*(long *)(*plVar7 + 8) + 0x68) + lVar17;
        } while (((ulong)uVar4 & 0xfffffffe) != uVar11);
      }
      if ((uVar4 & 1) != 0) {
        lVar17 = *(long *)(*(long *)(*(long *)(param_6 + uVar11 * 8) + 8) + 0x68) + lVar17;
      }
    }
    uVar11 = *(long *)(lVar6 + 8) - (ulong)*(uint *)(*(long *)(param_6 + 0x110) + 0x88);
    lVar17 = (uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU)) + lVar17;
  }
  plVar7 = (long *)(lVar6 + 0x10);
  if ((long *)*plVar7 != (long *)0x0) {
    plVar15 = (long *)*plVar7;
    plVar13 = (long *)0x0;
    do {
      plVar10 = plVar15;
      if ((param_8 - lVar17 < *plVar10) ||
         ((*plVar10 == param_8 - lVar17 && ((int)plVar10[1] == 0)))) {
        plVar15 = (long *)plVar10[3];
        plVar2 = plVar7;
        if ((long *)*plVar7 != plVar10) {
          plVar2 = plVar13 + 3;
        }
        *plVar2 = (long)plVar15;
        if (*param_10 == 0) {
          *param_10 = (long)plVar10;
          plVar10[3] = 0;
        }
        else {
          plVar10[3] = *param_10;
          *param_10 = (long)plVar10;
        }
        plVar10 = plVar13;
      }
      else {
        plVar15 = (long *)plVar10[3];
      }
      plVar13 = plVar10;
    } while (plVar15 != (long *)0x0);
  }
  if (*(char *)(param_6 + 0x128) == '\0') {
    do {
      (**(code **)(*param_1 + 0xb8))(param_1,param_6,1);
      lVar6 = *(long *)(param_6 + 0x108);
      if (lVar6 == 0) {
        lVar17 = 0x7fffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(param_6 + 0x100);
        uVar11 = (ulong)uVar4;
        if (uVar4 == 0) {
          lVar17 = 0;
        }
        else {
          uVar8 = uVar11 & 3;
          if (uVar11 - 1 < 3) {
            uVar12 = 0;
            lVar17 = 0;
          }
          else {
            uVar12 = 0;
            lVar17 = 0;
            plVar7 = (long *)(param_6 + 0x10);
            do {
              uVar12 = uVar12 + 4;
              lVar17 = *(long *)(*(long *)(plVar7[1] + 8) + 0x68) +
                       *(long *)(*(long *)(*plVar7 + 8) + 0x68) +
                       *(long *)(*(long *)(plVar7[-1] + 8) + 0x68) +
                       *(long *)(*(long *)(plVar7[-2] + 8) + 0x68) + lVar17;
              plVar7 = plVar7 + 4;
            } while ((uVar11 & 0xfffffffc) != uVar12);
          }
          if ((uVar4 & 3) != 0) {
            plVar7 = (long *)(param_6 + uVar12 * 8);
            do {
              uVar8 = uVar8 - 1;
              lVar17 = *(long *)(*(long *)(*plVar7 + 8) + 0x68) + lVar17;
              plVar7 = plVar7 + 1;
            } while (uVar8 != 0);
          }
        }
        uVar11 = *(long *)(lVar6 + 8) - (ulong)*(uint *)(*(long *)(param_6 + 0x110) + 0x88);
        lVar17 = (uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU)) + lVar17;
      }
      plVar7 = (long *)(lVar6 + 0x10);
      if ((long *)*plVar7 != (long *)0x0) {
        plVar15 = (long *)*plVar7;
        plVar13 = (long *)0x0;
        do {
          plVar10 = plVar15;
          if ((param_8 - lVar17 < *plVar10) ||
             ((*plVar10 == param_8 - lVar17 && ((int)plVar10[1] == 0)))) {
            plVar15 = (long *)plVar10[3];
            plVar2 = plVar7;
            if ((long *)*plVar7 != plVar10) {
              plVar2 = plVar13 + 3;
            }
            *plVar2 = (long)plVar15;
            if (*param_10 == 0) {
              *param_10 = (long)plVar10;
              plVar10[3] = 0;
            }
            else {
              plVar10[3] = *param_10;
              *param_10 = (long)plVar10;
            }
            plVar10 = plVar13;
          }
          else {
            plVar15 = (long *)plVar10[3];
          }
          plVar13 = plVar10;
        } while (plVar15 != (long *)0x0);
      }
    } while (*(char *)(param_6 + 0x128) == '\0');
  }
  *param_3 = 0;
  plVar7 = param_1 + 0x13;
  if (*plVar7 != 0) {
    plVar7 = (long *)param_1[0x12];
  }
  *plVar7 = (long)param_3;
  param_1[0x12] = (long)param_3;
  return;
}


