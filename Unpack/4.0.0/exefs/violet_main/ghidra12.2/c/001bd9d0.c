/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001bd9d0; name: FUN_001bd9d0
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_001bd9d0(uint *param_1,long param_2,uint *param_3,char *param_4,int param_5,long param_6,
                  uint param_7,int param_8,long param_9)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar16;
  uint uVar15;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  
  uVar15 = *(uint *)(param_2 + 0x20);
  uVar5 = *param_3;
  uVar4 = *(uint *)((long)param_3 - (ulong)uVar15) ^ uVar5;
  if (uVar4 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar15) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bda2c:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001bdabc;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar4;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar4;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bda2c;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001bdabc:
    uVar8 = (int)uVar13 + 4;
  }
  else {
    uVar9 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      uVar9 = 3;
    }
    uVar8 = 0;
    if ((uVar4 & 0xffff) == 0) {
      uVar8 = uVar9;
    }
  }
  uVar4 = uVar8;
  if ((int)uVar15 <= (int)uVar8) {
    uVar4 = uVar15;
  }
  if (7 < uVar15) {
    uVar4 = uVar8;
  }
  uVar8 = *(uint *)(param_2 + 0x24);
  uVar15 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  iVar19 = -(uint)((int)uVar4 < 1);
  uVar4 = *(uint *)((long)param_3 - (ulong)uVar8) ^ uVar5;
  if (uVar4 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar8) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bdb20:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001bdbb0;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar4;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar4;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bdb20;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001bdbb0:
    uVar9 = (int)uVar13 + 4;
  }
  else {
    uVar7 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      uVar7 = 3;
    }
    uVar9 = 0;
    if ((uVar4 & 0xffff) == 0) {
      uVar9 = uVar7;
    }
  }
  uVar4 = uVar9;
  if ((int)uVar8 <= (int)uVar9) {
    uVar4 = uVar8;
  }
  if (7 < uVar8) {
    uVar4 = uVar9;
  }
  if ((int)uVar15 < (int)uVar4) {
    iVar19 = 1;
  }
  else {
    uVar4 = uVar15;
  }
  uVar8 = *(uint *)(param_2 + 0x28);
  uVar15 = *(uint *)((long)param_3 - (ulong)uVar8) ^ uVar5;
  if (uVar15 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar8) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bdc14:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001bdca4;
          uVar15 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar15;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar15;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bdc14;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001bdca4:
    uVar9 = (int)uVar13 + 4;
  }
  else {
    uVar7 = 2;
    if ((uVar15 & 0xffffff) == 0) {
      uVar7 = 3;
    }
    uVar9 = 0;
    if ((uVar15 & 0xffff) == 0) {
      uVar9 = uVar7;
    }
  }
  uVar15 = uVar9;
  if ((int)uVar8 <= (int)uVar9) {
    uVar15 = uVar8;
  }
  if (7 < uVar8) {
    uVar15 = uVar9;
  }
  uVar8 = uVar15;
  if ((int)uVar15 <= (int)uVar4) {
    uVar8 = uVar4;
  }
  iVar3 = 2;
  if ((int)uVar15 <= (int)uVar4) {
    iVar3 = iVar19;
  }
  uVar15 = *(uint *)(param_2 + 0x2c);
  uVar4 = *(uint *)((long)param_3 - (ulong)uVar15) ^ uVar5;
  if (uVar4 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar15) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bdd08:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001bdd98;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar4;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar4;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bdd08;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001bdd98:
    uVar9 = (int)uVar13 + 4;
  }
  else {
    uVar7 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      uVar7 = 3;
    }
    uVar9 = 0;
    if ((uVar4 & 0xffff) == 0) {
      uVar9 = uVar7;
    }
  }
  uVar4 = uVar9;
  if ((int)uVar15 <= (int)uVar9) {
    uVar4 = uVar15;
  }
  if (7 < uVar15) {
    uVar4 = uVar9;
  }
  uVar15 = uVar4;
  if ((int)uVar4 <= (int)uVar8) {
    uVar15 = uVar8;
  }
  iVar19 = 3;
  if ((int)uVar4 <= (int)uVar8) {
    iVar19 = iVar3;
  }
  uVar8 = *(uint *)(param_2 + 0x30);
  uVar4 = *(uint *)((long)param_3 - (ulong)uVar8) ^ uVar5;
  if (uVar4 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar8) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bde00:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001bde90;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar4;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar4;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bde00;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001bde90:
    uVar9 = (int)uVar13 + 4;
  }
  else {
    uVar7 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      uVar7 = 3;
    }
    uVar9 = 0;
    if ((uVar4 & 0xffff) == 0) {
      uVar9 = uVar7;
    }
  }
  uVar4 = uVar9;
  if ((int)uVar8 <= (int)uVar9) {
    uVar4 = uVar8;
  }
  if (7 < uVar8) {
    uVar4 = uVar9;
  }
  uVar8 = uVar4;
  if ((int)uVar4 <= (int)uVar15) {
    uVar8 = uVar15;
  }
  iVar3 = 4;
  if ((int)uVar4 <= (int)uVar15) {
    iVar3 = iVar19;
  }
  uVar15 = *(uint *)(param_2 + 0x34);
  uVar4 = *(uint *)((long)param_3 - (ulong)uVar15) ^ uVar5;
  if (uVar4 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar15) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bdef8:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001bdf88;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar4;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar4;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bdef8;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001bdf88:
    uVar9 = (int)uVar13 + 4;
  }
  else {
    uVar7 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      uVar7 = 3;
    }
    uVar9 = 0;
    if ((uVar4 & 0xffff) == 0) {
      uVar9 = uVar7;
    }
  }
  uVar4 = uVar9;
  if ((int)uVar15 <= (int)uVar9) {
    uVar4 = uVar15;
  }
  if (7 < uVar15) {
    uVar4 = uVar9;
  }
  uVar15 = uVar4;
  if ((int)uVar4 <= (int)uVar8) {
    uVar15 = uVar8;
  }
  iVar19 = 5;
  if ((int)uVar4 <= (int)uVar8) {
    iVar19 = iVar3;
  }
  uVar8 = *(uint *)(param_2 + 0x38);
  uVar4 = *(uint *)((long)param_3 - (ulong)uVar8) ^ uVar5;
  if (uVar4 == 0) {
    puVar1 = (ulong *)(param_3 + 1);
    puVar2 = (ulong *)((uint *)((long)param_3 - (ulong)uVar8) + 1);
    puVar10 = puVar1;
    if (param_4 + -8 < puVar1) {
LAB_001bdfe8:
      uVar13 = (long)puVar10 - (long)puVar1;
      pcVar12 = (char *)((long)puVar1 + (long)(int)uVar13);
      if (pcVar12 < param_4) {
        uVar13 = (long)(int)uVar13;
        do {
          if (*pcVar12 != *(char *)((long)puVar2 + uVar13)) goto LAB_001be088;
          uVar4 = (int)uVar13 + 1;
          uVar13 = (ulong)(int)uVar4;
          pcVar12 = (char *)((long)puVar1 + uVar13);
        } while (pcVar12 < param_4);
        uVar13 = (ulong)uVar4;
      }
    }
    else {
      uVar13 = *puVar2 ^ *puVar1;
      if (uVar13 == 0) {
        puVar6 = (ulong *)(param_3 + 3);
        do {
          puVar10 = puVar6;
          if (param_4 + -8 < puVar10) goto LAB_001bdfe8;
          uVar13 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
          puVar6 = puVar10 + 1;
        } while (uVar13 == 0);
      }
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = (ulong)(((int)puVar10 - (int)puVar1) +
                      ((uint)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3));
    }
LAB_001be088:
    uVar9 = (int)uVar13 + 4;
  }
  else if ((uVar4 & 0xffff) == 0) {
    uVar9 = 2;
    if ((uVar4 & 0xffffff) == 0) {
      uVar9 = 3;
    }
  }
  else {
    uVar9 = 0;
  }
  uVar4 = uVar9;
  if ((int)uVar8 <= (int)uVar9) {
    uVar4 = uVar8;
  }
  if (7 < uVar8) {
    uVar4 = uVar9;
  }
  uVar8 = uVar4;
  if ((int)uVar4 <= (int)uVar15) {
    uVar8 = uVar15;
  }
  iVar3 = 6;
  if ((int)uVar4 <= (int)uVar15) {
    iVar3 = iVar19;
  }
  if ((int)uVar8 < 4) {
    uVar13 = 0;
    uVar18 = 0;
    uVar15 = 0;
    lVar11 = (long)param_4 - (long)param_3;
    puVar1 = (ulong *)(param_3 + 1);
    uVar9 = 0;
    for (uVar4 = *param_1; param_5 <= (int)uVar4;
        uVar4 = *(uint *)((long)param_1 +
                         (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3))) {
      uVar7 = uVar4;
      if (lVar11 < (int)uVar4) {
        uVar7 = (uint)lVar11;
      }
      if (lVar11 < (int)uVar4 && (int)(uint)lVar11 < param_5) break;
      uVar4 = param_1[(long)(int)uVar13 * 2 + 1];
      uVar14 = (ulong)uVar4;
      if (uVar4 < param_7) {
        if (uVar4 < 8) {
          if (param_8 == 1) {
            if ((int)uVar4 <= (int)uVar7) {
              uVar7 = uVar4;
            }
            if ((((int)uVar7 < param_5) ||
                ((((0 < (int)*(uint *)(param_9 + 0x40) &&
                   (1 << (ulong)(*(uint *)(param_9 + 0x40) & 0x1f) <= (int)uVar4)) &&
                  ((int)uVar7 < *(int *)(param_9 + 0x3c))) ||
                 (((int)uVar7 < 6 && ((int)(&DAT_03cbfc6c)[(int)uVar7] <= (int)uVar4)))))) ||
               ((int)uVar7 < (int)uVar15)) goto LAB_001be1b4;
            if (uVar7 != uVar15) {
              if ((int)(uVar4 >> 7) <= (int)uVar18) {
                uVar17 = (ulong)uVar4;
                uVar4 = *(uint *)(&DAT_03cbf820 + uVar14 * 4);
                uVar9 = uVar7;
                goto joined_r0x001be348;
              }
              uVar17 = (ulong)uVar4;
              if ((int)uVar7 <= (int)(uVar15 + 1)) goto LAB_001be1b4;
              goto LAB_001be1bc;
            }
            if ((int)uVar18 <= (int)uVar4) goto LAB_001be1b4;
            uVar17 = (ulong)uVar4;
            uVar4 = *(uint *)(&DAT_03cbf820 + uVar14 * 4);
          }
          else {
LAB_001be1b4:
            uVar17 = uVar18;
            uVar7 = uVar9;
LAB_001be1bc:
            uVar4 = *(uint *)(&DAT_03cbf820 + uVar14 * 4);
            uVar9 = uVar7;
          }
joined_r0x001be348:
          uVar14 = (ulong)uVar4;
          uVar18 = uVar17;
          uVar15 = uVar9;
          uVar16 = uVar9;
          if ((long)uVar14 <= (long)param_3 - param_6) {
            uVar4 = *(uint *)((long)param_3 - uVar14) ^ uVar5;
            if (uVar4 == 0) {
              puVar2 = (ulong *)((uint *)((long)param_3 - uVar14) + 1);
              puVar10 = puVar1;
              if (param_4 + -8 < puVar1) {
LAB_001be260:
                uVar20 = (long)puVar10 - (long)puVar1;
                pcVar12 = (char *)((long)puVar1 + (long)(int)uVar20);
                if (pcVar12 < param_4) {
                  uVar20 = (long)(int)uVar20;
                  do {
                    if (*pcVar12 != *(char *)((long)puVar2 + uVar20)) goto LAB_001be2a0;
                    uVar4 = (int)uVar20 + 1;
                    uVar20 = (ulong)(int)uVar4;
                    pcVar12 = (char *)((long)puVar1 + uVar20);
                  } while (pcVar12 < param_4);
                  uVar20 = (ulong)uVar4;
                }
LAB_001be2a0:
                iVar19 = (int)uVar20;
              }
              else {
                uVar20 = *puVar2 ^ *puVar1;
                if (uVar20 == 0) {
                  puVar6 = (ulong *)(param_3 + 3);
                  do {
                    puVar10 = puVar6;
                    if (param_4 + -8 < puVar10) goto LAB_001be260;
                    uVar20 = *(ulong *)((long)puVar10 + ((long)puVar2 - (long)puVar1)) ^ *puVar10;
                    puVar6 = puVar10 + 1;
                  } while (uVar20 == 0);
                }
                uVar20 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
                uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
                uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
                uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
                iVar19 = ((int)puVar10 - (int)puVar1) +
                         ((uint)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
              }
              uVar7 = iVar19 + 4;
            }
            else {
              uVar7 = 3;
              if ((uVar4 & 0xffffff) != 0) {
                uVar7 = 0;
              }
            }
            if (param_5 <= (int)uVar7) goto LAB_001be1f4;
          }
        }
        else {
          uVar17 = uVar18;
LAB_001be1f4:
          iVar19 = (int)uVar14;
          if ((((int)*(uint *)(param_9 + 0x40) < 1) ||
              (iVar19 < 1 << (ulong)(*(uint *)(param_9 + 0x40) & 0x1f))) ||
             (*(int *)(param_9 + 0x3c) <= (int)uVar7)) {
            if (0xfffff < iVar19) {
              if (iVar19 < 0x400000) {
                if (iVar19 < 0x200000) {
                  if (4 < (int)uVar7) goto LAB_001be2b8;
                }
                else if (5 < (int)uVar7) goto LAB_001be2cc;
              }
              else if (7 < (int)uVar7) goto LAB_001be2cc;
              goto LAB_001be308;
            }
LAB_001be2b8:
            if (((int)uVar7 < 6) && ((int)(&DAT_03cbfc6c)[(int)uVar7] <= iVar19)) goto LAB_001be308;
LAB_001be2cc:
            if ((int)uVar7 < (int)uVar9) goto LAB_001be308;
            if (uVar7 != uVar9) {
              uVar18 = uVar14;
              uVar15 = uVar7;
              uVar16 = uVar7;
              if (((int)(uVar9 + 1) < (int)uVar7) || (iVar19 >> 7 <= (int)uVar17))
              goto LAB_001be10c;
              goto LAB_001be308;
            }
            if ((int)uVar17 <= iVar19) goto LAB_001be308;
          }
          else {
LAB_001be308:
            uVar14 = uVar17;
          }
          uVar18 = uVar14;
          uVar15 = uVar9;
          uVar16 = uVar9;
        }
      }
      else {
        uVar16 = uVar9;
      }
LAB_001be10c:
      uVar4 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar4;
      if (uVar4 == 4) break;
      uVar9 = uVar16;
    }
    if (((int)uVar8 < 2) ||
       ((((int)(uVar8 + 1) < (int)uVar15 &&
         (((int)(uVar8 + 2) < (int)uVar15 || ((int)uVar18 < 0x400)))) &&
        (((int)(uVar8 + 3) < (int)uVar15 || ((int)uVar18 < 0x10000)))))) goto LAB_001be41c;
  }
  uVar18 = (ulong)(uint)-iVar3;
  uVar15 = uVar8;
LAB_001be41c:
  return (ulong)uVar15 | uVar18 << 0x20;
}


