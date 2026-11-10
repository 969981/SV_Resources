/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0084d3ac; name: FUN_0084d3ac
 */


long FUN_0084d3ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  void *pvVar4;
  void *__src;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  ulong local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  FUN_0084da34();
  uVar10 = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x35) = uVar10;
  puVar6 = PTR_DAT_047d1a08;
  if (param_2 != param_1) {
    lVar14 = 0;
    if (*(long *)(param_2 + 0x40) != 0) {
      lVar14 = *(long *)(param_2 + 0x40) + param_2 + 0x40;
    }
    plVar18 = (long *)(param_1 + 0x40);
    uVar9 = *(uint *)(param_2 + 0x48);
    lVar13 = *plVar18;
    uVar12 = *(uint *)(param_2 + 0x4c) & 0x7fffffff;
    uVar5 = uVar12;
    if ((int)uVar12 <= (int)uVar9) {
      uVar5 = uVar9;
    }
    if ((lVar14 == 0) || (uVar5 == 0)) {
      uVar16 = (ulong)*(uint *)(param_1 + 0x48);
      if (0 < (int)*(uint *)(param_1 + 0x48)) {
        lVar14 = 0;
        if (lVar13 != 0) {
          lVar14 = lVar13 + (long)plVar18;
        }
        plVar2 = (long *)(lVar14 + uVar16 * 0x60);
        do {
          plVar17 = plVar2 + -0xc;
          if (*(int *)((long)plVar2 + -0x54) < 0) {
            lVar14 = 0;
            if (*plVar17 != 0) {
              lVar14 = *plVar17 + (long)plVar17;
            }
            (**(code **)(puVar6 + 8))(0,lVar14,0);
          }
          uVar12 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar12;
          plVar2 = plVar17;
        } while (uVar12 != 0);
      }
      if (*(int *)(param_1 + 0x4c) < 0) {
        lVar14 = 0;
        if (*plVar18 != 0) {
          lVar14 = *plVar18 + (long)plVar18;
        }
        (**(code **)(puVar6 + 8))(0,lVar14,0);
      }
      *plVar18 = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x48);
      uVar16 = (ulong)uVar15;
      lVar7 = 0;
      if (lVar13 != 0) {
        lVar7 = lVar13 + (long)plVar18;
      }
      if (0 < (int)uVar15) {
        plVar2 = (long *)(lVar7 + uVar16 * 0x60);
        do {
          plVar17 = plVar2 + -0xc;
          if (*(int *)((long)plVar2 + -0x54) < 0) {
            lVar13 = 0;
            if (*plVar17 != 0) {
              lVar13 = *plVar17 + (long)plVar17;
            }
            (**(code **)(puVar6 + 8))(0,lVar13,0);
          }
          uVar12 = (int)uVar16 - 1;
          uVar16 = (ulong)uVar12;
          plVar2 = plVar17;
        } while (uVar12 != 0);
        uVar9 = *(uint *)(param_2 + 0x48);
        uVar12 = *(uint *)(param_2 + 0x4c) & 0x7fffffff;
        uVar15 = *(uint *)(param_1 + 0x48);
      }
      if ((int)uVar12 <= (int)uVar9) {
        uVar12 = uVar9;
      }
      uVar3 = *(uint *)(param_1 + 0x4c) & 0x7fffffff;
      if ((int)uVar3 <= (int)uVar15) {
        uVar3 = uVar15;
      }
      if (uVar12 != uVar3) {
        if ((int)*(uint *)(param_1 + 0x4c) < 0) {
          lVar13 = 0;
          if (*plVar18 != 0) {
            lVar13 = *plVar18 + (long)plVar18;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar13,0);
        }
        local_78 = (ulong)uVar5 * 0x60;
        lVar7 = (**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
        uVar9 = *(uint *)(param_2 + 0x48);
      }
      if (0 < (int)uVar9) {
        lVar13 = 0;
        do {
          puVar1 = (undefined8 *)(lVar7 + lVar13);
          plVar2 = (long *)(lVar14 + lVar13);
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar11 = plVar2[5];
          puVar1[3] = plVar2[3];
          puVar1[5] = lVar11;
          lVar11 = plVar2[2];
          puVar1[4] = plVar2[4];
          puVar1[2] = lVar11;
          uVar12 = *(uint *)(plVar2 + 1);
          pvVar4 = (void *)0x0;
          if (*plVar2 != 0) {
            pvVar4 = (void *)(*plVar2 + (long)plVar2);
          }
          if ((0 < (int)uVar12) && (pvVar4 != (void *)0x0)) {
            uVar5 = uVar12 - 1 | (int)(uVar12 - 1) >> 0x10;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = (uVar5 | (int)uVar5 >> 1) + 1;
            if ((int)uVar5 < (int)uVar12) {
              local_78 = 0;
              local_70 = PTR_DAT_047d1b38;
              uStack_68 = 0;
              FUN_01f9d9b0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                           "Capacity reservation overflow",&local_78);
            }
            local_78 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
            pvVar8 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
            if (0 < (int)*(uint *)(puVar1 + 1)) {
              __src = (void *)0x0;
              if (*(long *)(lVar7 + lVar13) != 0) {
                __src = (void *)(*(long *)(lVar7 + lVar13) + (long)puVar1);
              }
              memcpy(pvVar8,__src,(ulong)*(uint *)(puVar1 + 1) << 2);
            }
            if (*(int *)((long)puVar1 + 0xc) < 0) {
              lVar11 = 0;
              if (*(long *)(lVar7 + lVar13) != 0) {
                lVar11 = *(long *)(lVar7 + lVar13) + (long)puVar1;
              }
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar11,0);
            }
            lVar11 = 0;
            if (pvVar8 != (void *)0x0) {
              lVar11 = (long)pvVar8 - (long)puVar1;
            }
            *(long *)(lVar7 + lVar13) = lVar11;
            *(uint *)(puVar1 + 1) = uVar12;
            *(uint *)((long)puVar1 + 0xc) = uVar5 | 0x80000000;
            memcpy((void *)(lVar11 + (long)puVar1),pvVar4,(ulong)uVar12 << 2);
          }
          *(int *)(puVar1 + 9) = (int)plVar2[9];
          *(undefined4 *)((long)puVar1 + 0x4c) = *(undefined4 *)((long)plVar2 + 0x4c);
          *(int *)(puVar1 + 10) = (int)plVar2[10];
          *(undefined4 *)((long)puVar1 + 0x54) = *(undefined4 *)((long)plVar2 + 0x54);
          *(char *)(puVar1 + 0xb) = (char)plVar2[0xb];
          *(undefined1 *)((long)puVar1 + 0x59) = *(undefined1 *)((long)plVar2 + 0x59);
          *(undefined1 *)((long)puVar1 + 0x5a) = *(undefined1 *)((long)plVar2 + 0x5a);
          *(undefined1 *)((long)puVar1 + 0x5b) = *(undefined1 *)((long)plVar2 + 0x5b);
          *(undefined2 *)((long)puVar1 + 0x5c) = *(undefined2 *)((long)plVar2 + 0x5c);
          *(undefined1 *)((long)puVar1 + 0x5e) = *(undefined1 *)((long)plVar2 + 0x5e);
          *(undefined1 *)((long)puVar1 + 0x5f) = *(undefined1 *)((long)plVar2 + 0x5f);
          memcpy(puVar1 + 6,plVar2 + 6,0x18);
          lVar13 = lVar13 + 0x60;
        } while ((ulong)uVar9 * 0x60 != lVar13);
      }
      lVar14 = 0;
      if (lVar7 != 0) {
        lVar14 = lVar7 - (long)plVar18;
      }
      *(long *)(param_1 + 0x40) = lVar14;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      uVar12 = *(uint *)(param_2 + 0x4c) & 0x7fffffff;
      if ((int)uVar12 <= (int)*(uint *)(param_2 + 0x48)) {
        uVar12 = *(uint *)(param_2 + 0x48);
      }
      *(uint *)(param_1 + 0x4c) = uVar12 | 0x80000000;
    }
    if (param_2 != param_1) {
      pvVar4 = (void *)0x0;
      if (*(long *)(param_2 + 0x50) != 0) {
        pvVar4 = (void *)(*(long *)(param_2 + 0x50) + param_2 + 0x50);
      }
      plVar18 = (long *)(param_1 + 0x50);
      uVar5 = *(uint *)(param_2 + 0x58);
      lVar14 = *plVar18;
      uVar12 = *(uint *)(param_2 + 0x5c) & 0x7fffffff;
      if ((int)uVar12 <= (int)uVar5) {
        uVar12 = uVar5;
      }
      if ((pvVar4 == (void *)0x0) || (uVar12 == 0)) {
        if (*(int *)(param_1 + 0x5c) < 0) {
          lVar13 = 0;
          if (lVar14 != 0) {
            lVar13 = lVar14 + (long)plVar18;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar13,0);
        }
        *plVar18 = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        pvVar8 = (void *)0x0;
        if (lVar14 != 0) {
          pvVar8 = (void *)(lVar14 + (long)plVar18);
        }
        uVar9 = *(uint *)(param_1 + 0x5c) & 0x7fffffff;
        if ((int)uVar9 <= (int)*(uint *)(param_1 + 0x58)) {
          uVar9 = *(uint *)(param_1 + 0x58);
        }
        if (uVar12 != uVar9) {
          if ((int)*(uint *)(param_1 + 0x5c) < 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar8,0);
          }
          local_78 = (ulong)uVar12 << 2;
          pvVar8 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
          uVar5 = *(uint *)(param_2 + 0x58);
        }
        memcpy(pvVar8,pvVar4,-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
        lVar14 = 0;
        if (pvVar8 != (void *)0x0) {
          lVar14 = (long)pvVar8 - (long)plVar18;
        }
        *(long *)(param_1 + 0x50) = lVar14;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
        uVar12 = *(uint *)(param_2 + 0x5c) & 0x7fffffff;
        if ((int)uVar12 <= (int)*(uint *)(param_2 + 0x58)) {
          uVar12 = *(uint *)(param_2 + 0x58);
        }
        *(uint *)(param_1 + 0x5c) = uVar12 | 0x80000000;
      }
      plVar18 = (long *)(param_1 + 0x60);
      lVar14 = *plVar18;
      lVar13 = *(long *)(param_2 + 0x60);
      uVar12 = *(uint *)(param_2 + 0x68);
      pvVar4 = (void *)0x0;
      if (lVar13 != 0) {
        pvVar4 = (void *)(lVar13 + param_2 + 0x60);
      }
      uVar5 = *(uint *)(param_2 + 0x6c) & 0x7fffffff;
      if ((int)uVar5 <= (int)uVar12) {
        uVar5 = uVar12;
      }
      if ((pvVar4 == (void *)0x0) || (uVar5 == 0)) {
        if (*(int *)(param_1 + 0x6c) < 0) {
          lVar13 = 0;
          if (lVar14 != 0) {
            lVar13 = lVar14 + (long)plVar18;
          }
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar13,0);
        }
        *plVar18 = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      else {
        pvVar8 = (void *)0x0;
        if (lVar14 != 0) {
          pvVar8 = (void *)(lVar14 + (long)plVar18);
        }
        uVar9 = *(uint *)(param_1 + 0x6c) & 0x7fffffff;
        if ((int)uVar9 <= (int)*(uint *)(param_1 + 0x68)) {
          uVar9 = *(uint *)(param_1 + 0x68);
        }
        if (uVar5 != uVar9) {
          if ((int)*(uint *)(param_1 + 0x6c) < 0) {
            pvVar8 = (void *)0x0;
            if (lVar14 != 0) {
              pvVar8 = (void *)(lVar14 + (long)plVar18);
            }
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,pvVar8,0);
          }
          local_78 = (ulong)(uVar5 << 1);
          pvVar8 = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_78,0);
          uVar12 = *(uint *)(param_2 + 0x68);
        }
        memcpy(pvVar8,pvVar4,-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1);
        lVar14 = 0;
        if (pvVar8 != (void *)0x0) {
          lVar14 = (long)pvVar8 - (long)plVar18;
        }
        *(long *)(param_1 + 0x60) = lVar14;
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
        uVar12 = *(uint *)(param_2 + 0x6c) & 0x7fffffff;
        if ((int)uVar12 <= (int)*(uint *)(param_2 + 0x68)) {
          uVar12 = *(uint *)(param_2 + 0x68);
        }
        *(uint *)(param_1 + 0x6c) = uVar12 | 0x80000000;
      }
    }
  }
  return param_1;
}


