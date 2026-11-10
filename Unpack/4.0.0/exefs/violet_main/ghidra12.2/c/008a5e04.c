/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a5e04; name: FUN_008a5e04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a5e04(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,float *param_5)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  long lVar8;
  void *pvVar9;
  void *__dest;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  uint *puVar20;
  void *__src;
  char *pcVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_a0 [2];
  undefined8 local_98;
  float local_88;
  float local_84;
  undefined4 uStack_80;
  undefined5 uStack_7c;
  
  lVar8 = _UNK_03cabe68;
  lVar13 = _DAT_03cabe60;
  lVar1 = DAT_03cab628;
  lVar12 = DAT_03cab620;
  param_1[3] = 0;
  param_1[0xf] = lVar1;
  param_1[0xe] = lVar12;
  param_1[0x11] = lVar8;
  param_1[0x10] = lVar13;
  lVar1 = _UNK_03caa5b8;
  lVar12 = _DAT_03caa5b0;
  pcVar18 = (char *)(param_4 + 0x2c);
  pcVar17 = (char *)(param_4 + 0x38);
  pfVar23 = (float *)(param_4 + 0x44);
  pfVar22 = (float *)(param_4 + 0x4c);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  pcVar21 = (char *)(param_4 + 10);
  pcVar19 = (char *)(param_4 + 0x24);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x13] = lVar1;
  param_1[0x12] = lVar12;
  pcVar10 = *(char **)(param_5 + 0x12);
  if (pcVar10 != (char *)0x0) {
    uVar7 = *(ushort *)((long)param_5 + 0x42);
    if ((uVar7 & 8) != 0) {
      pcVar18 = pcVar10 + 8;
    }
    if ((uVar7 & 0x40) != 0) {
      pcVar17 = pcVar10 + 0x14;
    }
    if ((uVar7 & 0x20) != 0) {
      pfVar23 = (float *)(pcVar10 + 0x20);
    }
    if ((uVar7 & 0x10) != 0) {
      pfVar22 = (float *)(pcVar10 + 0x28);
    }
    if ((uVar7 & 0x80) != 0) {
      pcVar21 = pcVar10 + 0x30;
    }
    if ((uVar7 & 4) != 0) {
      pcVar19 = pcVar10;
    }
  }
  *(undefined1 *)((long)param_1 + 0x5b) = *(undefined1 *)(param_4 + 9);
  pvVar9 = (void *)FUN_010ec5e8(param_1,param_4 + 0xc);
  if (*pcVar19 == '\0') {
    plVar11 = (long *)((long)param_1 + 0xc9);
  }
  else {
    *(char *)((long)param_1 + 0xc9) = *pcVar19;
    pcVar10 = pcVar19 + 1;
    if (*pcVar10 == '\0') {
      plVar11 = (long *)((long)param_1 + 0xca);
    }
    else {
      *(char *)((long)param_1 + 0xca) = *pcVar10;
      pcVar10 = pcVar19 + 2;
      if (*pcVar10 == '\0') {
        plVar11 = (long *)((long)param_1 + 0xcb);
      }
      else {
        *(char *)((long)param_1 + 0xcb) = *pcVar10;
        pcVar10 = pcVar19 + 3;
        if (*pcVar10 == '\0') {
          plVar11 = (long *)((long)param_1 + 0xcc);
        }
        else {
          *(char *)((long)param_1 + 0xcc) = *pcVar10;
          pcVar10 = pcVar19 + 4;
          if (*pcVar10 == '\0') {
            plVar11 = (long *)((long)param_1 + 0xcd);
          }
          else {
            *(char *)((long)param_1 + 0xcd) = *pcVar10;
            pcVar10 = pcVar19 + 5;
            if (*pcVar10 == '\0') {
              plVar11 = (long *)((long)param_1 + 0xce);
            }
            else {
              *(char *)((long)param_1 + 0xce) = *pcVar10;
              pcVar10 = pcVar19 + 6;
              if (*pcVar10 == '\0') {
                plVar11 = (long *)((long)param_1 + 0xcf);
              }
              else {
                *(char *)((long)param_1 + 0xcf) = *pcVar10;
                pcVar10 = pcVar19 + 7;
                if (*pcVar10 != '\0') {
                  plVar11 = (long *)((long)param_1 + 0xd1);
                  *(char *)(param_1 + 0x1a) = *pcVar10;
                  pcVar19 = pcVar19 + 8;
                  goto LAB_008a5fb0;
                }
                plVar11 = param_1 + 0x1a;
              }
            }
          }
        }
      }
    }
    pcVar19 = pcVar10;
  }
LAB_008a5fb0:
  *(undefined1 *)plVar11 = 0;
  do {
    cVar5 = *pcVar19;
    pcVar19 = pcVar19 + 1;
  } while (cVar5 != '\0');
  bVar6 = *(byte *)(param_4 + 0xb);
  *(byte *)((long)param_1 + 0x5c) = bVar6;
  if (((bVar6 >> 2 & 1) == 0) || (__src = *(void **)(param_5 + 0x30), __src == (void *)0x0)) {
    *(byte *)((long)param_1 + 0x5c) = bVar6 & 0xfb;
    lVar12 = *(long *)(param_5 + 0x30);
    param_1[0x15] = lVar12;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (lVar12 == 0) goto LAB_008a6170;
    if (*(char *)(lVar12 + 0x16) == '\x03') {
      uVar15 = (ulong)*(uint *)(lVar12 + 0x10);
      lVar1 = lVar12 + 0xc;
      uVar14 = (ulong)*(ushort *)(lVar1 + uVar15 + 2);
      if (uVar14 != 0) {
        piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + uVar15 + 4) + *(uint *)(lVar12 + 0x10)));
        uVar16 = 0;
        lVar13 = 0;
        while( true ) {
          uVar15 = (ulong)(uint)(*(int *)(lVar12 + 0x10 + uVar15 + lVar13 * 4) + (int)uVar15);
          *(uint *)(param_1 + 0xc) = 1 << (ulong)(*(uint *)(lVar1 + uVar15) & 0x1f) | uVar16;
          if (*piVar2 == 0x15) {
            iVar4 = *(int *)(lVar1 + uVar15);
            iVar3 = iVar4 + -9;
            if (iVar4 < 0x10) {
              iVar3 = iVar4;
            }
            *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)lVar13;
          }
          if (uVar14 - 1 == lVar13) break;
          uVar15 = (ulong)*(uint *)(lVar12 + 0x10);
          lVar13 = lVar13 + 1;
          uVar16 = *(uint *)(param_1 + 0xc);
        }
      }
    }
  }
  else {
    __dest = (void *)FUN_00896e78(*(undefined4 *)((long)__src + 4));
    pvVar9 = memcpy(__dest,__src,(ulong)*(uint *)((long)__src + 4));
    param_1[0x15] = (long)__dest;
    if (__dest == (void *)0x0) goto LAB_008a6170;
    if (*(char *)((long)__dest + 0x16) == '\x03') {
      puVar20 = (uint *)((long)__dest + 0x10);
      uVar15 = (ulong)*puVar20;
      uVar14 = (ulong)*(ushort *)((long)__dest + uVar15 + 0xe);
      if (uVar14 != 0) {
        piVar2 = (int *)((long)__dest +
                        (ulong)(*(int *)((long)__dest + uVar15 + 0x10) + *puVar20) + 0xc);
        lVar12 = 0;
        while( true ) {
          uVar15 = (ulong)(uint)(*(int *)((long)puVar20 + lVar12 * 4 + uVar15) + (int)uVar15);
          *(uint *)(param_1 + 0xc) =
               *(uint *)(param_1 + 0xc) |
               1 << (ulong)(*(uint *)((long)__dest + uVar15 + 0xc) & 0x1f);
          if (*piVar2 == 0x15) {
            iVar4 = *(int *)((long)__dest + uVar15 + 0xc);
            iVar3 = iVar4 + -9;
            if (iVar4 < 0x10) {
              iVar3 = iVar4;
            }
            *(char *)((long)piVar2 + (long)iVar3 + 4) = (char)lVar12;
          }
          if (uVar14 - 1 == lVar12) break;
          uVar15 = (ulong)*puVar20;
          lVar12 = lVar12 + 1;
        }
      }
    }
  }
  if ((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x16) == '\x03')) {
    local_88 = 2.94273e-44;
    local_84 = -NAN;
    uStack_80 = 0xffffffff;
    uStack_7c = 0xffffffffff;
    pvVar9 = (void *)FUN_008a7990(param_1,0x15,&local_88,0x14,1);
  }
LAB_008a6170:
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)pcVar18;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(pcVar18 + 4);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(pcVar18 + 8);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)pcVar17;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pcVar17 + 4);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(pcVar17 + 8);
  *(float *)(param_1 + 9) = *pfVar23;
  *(float *)((long)param_1 + 0x4c) = pfVar23[1];
  if ((*(long *)(param_5 + 0xe) == 0) ||
     (((*param_5 == 1.0 && (param_5[1] == 1.0)) || ((*(byte *)(param_4 + 0xb) & 1) != 0)))) {
    *(float *)(param_1 + 10) = *pfVar22;
    *(float *)((long)param_1 + 0x54) = pfVar22[1];
  }
  else if ((*(byte *)(param_4 + 0xb) >> 1 & 1) == 0) {
    *(float *)(param_1 + 10) = *param_5 * *pfVar22;
    *(float *)((long)param_1 + 0x54) = pfVar22[1] * param_5[1];
  }
  else {
    fVar26 = 1.0;
    if ((*(byte *)((long)param_1 + 0x5b) & 3) != 0) {
      fVar26 = 0.5;
    }
    fVar27 = 1.0;
    if ((*(byte *)((long)param_1 + 0x5b) & 0xc) != 0) {
      fVar27 = 0.5;
    }
    FUN_008a645c(pvVar9,&local_88,*(undefined8 *)(param_5 + 0x26));
    fVar24 = param_5[3];
    fVar25 = param_5[1];
    *(float *)(param_1 + 10) =
         *pfVar22 + (fVar26 * (param_5[2] * *param_5 - param_5[2])) / (local_88 * *pfVar23);
    *(float *)((long)param_1 + 0x54) =
         pfVar22[1] + (fVar27 * (fVar24 * fVar25 - fVar24)) / (local_84 * pfVar23[1]);
  }
  cVar5 = *pcVar21;
  *(char *)((long)param_1 + 0x59) = cVar5;
  *(char *)((long)param_1 + 0x5a) = cVar5;
  bVar6 = *(byte *)(param_4 + 8);
  *(byte *)(param_1 + 0xb) = bVar6;
  if ((*(long *)(param_5 + 0xe) != 0) && ((*(ushort *)((long)param_5 + 0x42) & 1) != 0)) {
    *(byte *)(param_1 + 0xb) = bVar6 & 0xfe | (byte)(*(ushort *)((long)param_5 + 0x42) >> 1) & 1;
  }
  FUN_008a6550(param_1,param_5);
  if (((*(uint *)(param_1 + 0xc) != 0) &&
      (lVar12 = param_1[0x15] + 0xc, uVar16 = *(uint *)(param_1[0x15] + 0x10),
      piVar2 = (int *)(lVar12 + (ulong)(*(int *)((ulong)uVar16 + lVar12 + 4) + uVar16)),
      *piVar2 == 0x15)) && (-1 < *(char *)((long)piVar2 + 10))) {
    local_a0[0] = 0x12;
    if ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0) {
      local_88 = 2.94273e-44;
      local_84 = -NAN;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffffff;
      FUN_008a7990(param_1,0x15,&local_88,0x14,1);
    }
    FUN_008a7990(param_1,0x12,local_a0,0x14,0);
  }
  if ((*(char *)(param_5 + 0x36) != '\0') &&
     (((*(uint *)(param_1 + 0xc) == 0 ||
       (lVar12 = param_1[0x15] + 0xc, uVar16 = *(uint *)(param_1[0x15] + 0x10),
       piVar2 = (int *)(lVar12 + (ulong)(*(int *)((ulong)uVar16 + lVar12 + 4) + uVar16)),
       *piVar2 != 0x15)) || (*(char *)((long)piVar2 + 0xf) < '\0')))) {
    local_a0[0] = 0x14;
    local_98 = 0;
    if ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0) {
      local_88 = 2.94273e-44;
      local_84 = -NAN;
      uStack_80 = 0xffffffff;
      uStack_7c = 0xffffffffff;
      FUN_008a7990(param_1,0x15,&local_88,0x14,1);
    }
    FUN_008a7990(param_1,0x14,local_a0,0x10,0);
  }
  (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,param_5);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  return;
}


