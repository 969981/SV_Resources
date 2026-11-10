/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02add878; name: FUN_02add878
 */


void FUN_02add878(short *param_1,long param_2,uint param_3,long *param_4)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  void *__src;
  short sVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *local_160 [10];
  undefined1 local_110 [76];
  undefined1 local_c4;
  undefined1 local_c0 [76];
  undefined1 local_74;
  long *local_70 [2];
  
  lVar17 = *param_4;
  lVar8 = *(long *)(lVar17 + 8);
  puVar10 = *(undefined8 **)(lVar17 + 0x10);
  *param_1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x14] = 0x7fff;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x7fff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x4f) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x32] = 0x7fff;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  param_1[0x4e] = 0x7fff;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)((long)param_1 + 0xa7) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x58] = 0;
  memset(param_1 + 0x5a,0,0x48);
  sVar5 = *(short *)((long)puVar10 + 2);
  *param_1 = sVar5;
  iVar7 = *(int *)((long)puVar10 + 4);
  *(int *)(param_1 + 2) = iVar7;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar8 + 8);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)puVar10;
  *(undefined1 *)((long)param_1 + 0xd) = *(undefined1 *)((long)puVar10 + 0x15);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)puVar10 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar17 + 0x20);
  uVar9 = puVar10[2];
  uVar11 = *puVar10;
  uVar12 = puVar10[1];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar10 + 3);
  *(undefined8 *)(param_1 + 0x14) = uVar12;
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  *(undefined8 *)(param_1 + 0x10) = uVar11;
  cVar1 = '\x02';
  if (*(char *)(lVar17 + 0x18) != '\0') {
    cVar1 = *(char *)(lVar17 + 0x18);
  }
  *(char *)(param_1 + 0x48) = cVar1;
  if (param_3 < 0xfffffffe) {
    local_c0[0] = 0;
    local_74 = 0;
    FUN_02ade750(param_2,param_3,local_c0);
    if (param_3 == 1) {
      __src = (void *)(param_2 + 0x90);
    }
    else if (param_3 == 2) {
      __src = (void *)(param_2 + 0xdc);
    }
    else {
      __src = (void *)(param_2 + 0x44);
    }
    memcpy(param_1 + 0x58,__src,0x4c);
    puVar6 = *(undefined8 **)(*param_4 + 0x10);
    uVar9 = puVar6[2];
    uVar11 = *puVar6;
    uVar12 = puVar6[1];
    *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(puVar6 + 3);
    *(undefined8 *)(param_1 + 0x4e) = uVar12;
    *(undefined8 *)(param_1 + 0x52) = uVar9;
    *(undefined8 *)(param_1 + 0x4a) = uVar11;
    sVar5 = *param_1;
    iVar7 = *(int *)(param_1 + 2);
  }
  lVar8 = *(long *)(param_2 + 0x2d8);
  lVar17 = *(long *)(param_2 + 0x2e0);
  if ((lVar8 != lVar17) && ((*(short *)(lVar8 + 2) != sVar5 || (*(int *)(lVar8 + 4) != iVar7)))) {
    do {
      lVar16 = lVar8;
      if (lVar17 + -0x1c == lVar16) goto LAB_02addad4;
      lVar8 = lVar16 + 0x1c;
    } while ((*(short *)(lVar16 + 0x1e) != sVar5) || (*(int *)(lVar16 + 0x20) != iVar7));
  }
  if ((lVar8 != lVar17) && (1 < *(byte *)(lVar8 + 0x15) - 1)) {
    cVar1 = *(char *)(param_2 + 0x1c4) + '\x01';
    *(char *)(param_2 + 0x1c4) = cVar1;
    *(undefined1 *)(param_2 + 0xb38) = 1;
    if ('\x14' < cVar1) {
      *(undefined1 *)(param_2 + 0x1c4) = 0x14;
    }
  }
LAB_02addad4:
  if (*(char *)((long)puVar10 + 0x15) == '\x02') {
    *(int *)(param_2 + 0x1cc) = *(int *)(param_2 + 0x1cc) + 1;
  }
  else {
    *(int *)(param_2 + 0x1c8) = *(int *)(param_2 + 0x1c8) + 1;
  }
  if (*(char *)(param_2 + 0x1c4) < '\n') {
LAB_02addb08:
    if (param_3 == 0xfffffffe) {
      puVar10 = *(undefined8 **)(param_2 + 0x2b8);
      *(undefined2 *)(param_2 + 0x348) = *(undefined2 *)(puVar10[2] + 2);
      *(undefined8 *)(param_2 + 0x2b8) = 0;
      if (puVar10 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        iVar3 = *(int *)(lVar8 + 0x12c8);
        iVar7 = iVar3 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar7;
        if (*(int *)(lVar8 + 0x12cc) <= iVar3) {
          *(int *)(lVar8 + 0x12cc) = iVar7;
        }
        (**(code **)*puVar10)(puVar10);
        plVar14 = *(long **)(param_2 + 0x2c0);
        uVar11 = *(undefined8 *)(param_2 + 0x2c8);
        uVar12 = *(undefined8 *)(param_2 + 0x2d0);
        uVar4 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar4 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,puVar10,uVar11,uVar12);
        }
        else {
          FUN_00c48fe8(plVar14,puVar10,uVar11,uVar12);
        }
        lVar8 = FUN_00c4e600();
        iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar14 = (long *)FUN_00c4e600();
          if (plVar14[600] != 0) {
            local_70[0] = plVar14 + plVar14[600] * 3;
            local_160[0] = plVar14;
            FUN_00c4ea30(local_160,local_70);
            plVar13 = (long *)*plVar14;
            plVar2 = plVar14;
            if (plVar14[600] != 0) {
              plVar2 = plVar14 + plVar14[600] * 3;
            }
            if (plVar2 == plVar14) {
              lVar16 = 0;
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              lVar16 = 0;
              plVar15 = plVar14;
              do {
                (**(code **)(*(long *)*plVar15 + 0xd0))();
                if ((long *)*plVar15 != plVar13) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar14 + lVar16 * 3,plVar15);
                  plVar13 = (long *)*plVar15;
                  lVar16 = lVar17;
                }
                plVar15 = plVar15 + 3;
                lVar17 = lVar17 + 1;
              } while (plVar2 != plVar15);
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar14 + lVar16 * 3,plVar14 + lVar17 * 3);
            plVar14[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
      memset((void *)((ulong)local_160 | 2),0,0x48);
      *(undefined2 *)(param_2 + 300) = 0;
      memcpy((void *)(param_2 + 0x12e),local_160,0x4a);
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 0x2b8);
    if (lVar8 != 0) {
      if ((((*(long *)(lVar8 + 0x10) == 0) || (*(long *)(lVar8 + 8) == 0)) ||
          (sVar5 = *(short *)(*(long *)(lVar8 + 0x10) + 8), sVar5 == 0)) ||
         (*(float *)(*(long *)(lVar8 + 8) + 4) < (float)(int)sVar5)) goto LAB_02addb08;
      if (param_3 != 0xfffffffe) {
        return;
      }
    }
    local_110[0] = 0;
    local_c4 = 0;
    FUN_02adf0b8(param_2,local_110);
    *(char *)(param_2 + 0x1c4) = *(char *)(param_2 + 0x1c4) + -10;
    lVar8 = *(long *)(param_2 + 0x2b8);
    puVar10 = *(undefined8 **)(lVar8 + 0x10);
    uVar9 = puVar10[2];
    uVar11 = *puVar10;
    uVar12 = puVar10[1];
    *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(puVar10 + 3);
    *(undefined8 *)(param_1 + 0x22) = uVar12;
    *(undefined8 *)(param_1 + 0x26) = uVar9;
    *(undefined8 *)(param_1 + 0x1e) = uVar11;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(long *)(lVar8 + 8) + 8);
    *(undefined2 *)(param_2 + 0x348) = 0;
  }
  return;
}


