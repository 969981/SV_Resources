/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03368094; name: FUN_03368094
 */


undefined8
FUN_03368094(long param_1,undefined8 *param_2,ulong *param_3,ulong param_4,int param_5,
            undefined8 *param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  char *__s1;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong *local_78;
  char *pcStack_70;
  int local_68;
  uint uStack_64;
  
  __s1 = (char *)FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*param_2,
                              *(int *)(param_2 + 1) - (int)*param_2,1);
  uVar10 = (uint)((ulong)(param_7 - (long)param_6) >> 4);
  if ((int)uVar10 < 1) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = 0;
    uVar18 = (ulong)(param_7 - (long)param_6) >> 4 & 0xffffffff;
    puVar9 = param_6;
    do {
      uVar5 = (int)*puVar9 * -0x61c8864f;
      uVar17 = (int)((ulong)*puVar9 >> 0x20) * -0x61c8864f;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar15 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = (uVar17 & 0xff00ff00) >> 8 | (uVar17 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = uVar15 + 0x9e3779b9 + (uVar15 >> 2) + uVar5 * 0x40 ^ uVar5;
      uStack_64 = uStack_64 * 0x40 + -0x61c88647 + uVar5 + (uVar5 >> 2) ^ uStack_64;
      uVar18 = uVar18 - 1;
      puVar9 = puVar9 + 2;
    } while (uVar18 != 0);
  }
  plVar1 = (long *)(param_1 + 0x20);
  local_78 = param_3;
  pcStack_70 = __s1;
  local_68 = param_5;
  uVar5 = FUN_0336f0f8(plVar1,&local_78);
  if (*(uint *)(param_1 + 0x28) == uVar5) {
    if (param_5 == 0) {
      plVar8 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x60))();
      uVar7 = (**(code **)(**(long **)(param_1 + 0x60) + 0x20))();
      pcVar11 = *(code **)(*plVar8 + 0x18);
      if ((param_4 & 1) == 0) {
        if ((int)uVar10 < 1) {
          puVar9 = (undefined8 *)(*pcVar11)(plVar8,0x40);
          *puVar9 = 0x30000f;
          puVar9[1] = 0;
          puVar9[2] = 8;
          puVar9[3] = param_3;
          puVar9[4] = uVar7;
          puVar9[5] = __s1;
          puVar9[6] = 0x80018;
          puVar9[7] = 0x1000;
        }
        else {
          puVar9 = (undefined8 *)(*pcVar11)(plVar8,0x98);
          puVar9[2] = 8;
          puVar9[3] = param_3;
          *puVar9 = 0x30800f;
          puVar9[1] = 0;
          puVar9[7] = 0x80018;
          puVar9[8] = 0x1000;
          if (3 < (int)uVar10) {
            uVar10 = 4;
          }
          puVar9[0xb] = (long)(int)uVar10;
          puVar9[4] = uVar7;
          puVar9[5] = __s1;
          puVar9[10] = 0;
          puVar9[6] = puVar9 + 10;
          uVar17 = uVar10;
          if ((int)uVar10 < 2) {
            uVar17 = 1;
          }
          puVar9[0xc] = *param_6;
          puVar9[0xd] = param_6[1];
          if (1 < (int)uVar10) {
            puVar9[0xe] = param_6[2];
            puVar9[0xf] = param_6[3];
            if (uVar17 != 2) {
              puVar9[0x10] = param_6[4];
              *(undefined8 *)(puVar9[6] + 0x38) = param_6[5];
              if (uVar17 != 3) {
                lVar13 = 0;
                lVar12 = (ulong)uVar17 - 3;
                do {
                  *(undefined8 *)(puVar9[6] + lVar13 + 0x40) =
                       *(undefined8 *)((long)param_6 + lVar13 + 0x30);
                  lVar3 = lVar13 + 0x38;
                  lVar2 = puVar9[6] + lVar13;
                  lVar12 = lVar12 + -1;
                  lVar13 = lVar13 + 0x10;
                  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)((long)param_6 + lVar3);
                } while (lVar12 != 0);
              }
            }
          }
        }
      }
      else {
        puVar9 = (undefined8 *)(*pcVar11)(plVar8,0x78);
        *puVar9 = 0x30800f;
        puVar9[1] = 0;
        puVar9[2] = 8;
        puVar9[3] = param_3;
        puVar9[4] = uVar7;
        puVar9[5] = __s1;
        puVar9[7] = 0x80018;
        puVar9[8] = 0x1000;
        iVar6 = strcmp(__s1,"hkDefaultFreeListArrayStorage");
        if ((iVar6 == 0) || (iVar6 = strcmp(__s1,"hkFreeListRelArrayStorage"), iVar6 == 0)) {
          puVar9[10] = 0;
          puVar9[0xb] = 1;
          puVar9[0xc] = param_3;
          puVar9[6] = puVar9 + 10;
          puVar9[0xd] = &DAT_03c4f61e;
        }
        else {
          puVar9[10] = 0;
          puVar9[6] = puVar9 + 10;
          puVar4 = PTR_DAT_047e4b78;
          puVar9[0xb] = 2;
          puVar9[0xc] = param_3;
          puVar9[0xd] = &DAT_03c4f61e;
          puVar9[0xe] = puVar4;
          puVar9[0xf] = "tAllocator";
        }
      }
    }
    else {
      iVar6 = -1;
      puVar16 = param_3;
      while( true ) {
        uVar17 = (uint)*puVar16;
        if ((uVar17 >> 0x14 & 1) != 0) break;
        if (((*puVar16 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
        goto LAB_033683c0;
      }
      if (puVar16 == (ulong *)0x0) {
        iVar6 = -1;
      }
      else {
        uVar18 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
        iVar6 = (ushort)puVar16[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))
                                             + POPCOUNT((char)(uVar18 >> 0x10))) + 2] - 1;
      }
LAB_033683c0:
      puVar16 = param_3;
      do {
        uVar17 = (uint)*puVar16;
        if ((uVar17 >> 0x14 & 1) != 0) {
          uVar15 = 0;
          if (puVar16 != (ulong *)0x0) {
            uVar18 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
            uVar15 = *(ushort *)
                      ((long)puVar16 +
                      (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                   POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12) & 0xfff;
          }
          goto LAB_0336840c;
        }
        if ((*puVar16 & 1) != 0) {
          uVar15 = 0;
          goto LAB_0336840c;
        }
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
      uVar15 = 0;
LAB_0336840c:
      puVar16 = param_3;
      do {
        uVar17 = (uint)*puVar16;
        if ((uVar17 >> 0x14 & 1) != 0) {
          uVar14 = 0;
          if (puVar16 != (ulong *)0x0) {
            uVar18 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
            uVar14 = *(ushort *)
                      ((long)puVar16 +
                      (ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8)) +
                                   POPCOUNT((char)(uVar18 >> 0x10))) * 8 + 0x12) & 0xfff;
          }
          goto LAB_03368460;
        }
        if ((*puVar16 & 1) != 0) {
          uVar14 = 0;
          goto LAB_03368460;
        }
        puVar16 = (ulong *)puVar16[1];
      } while (puVar16 != (ulong *)0x0);
      uVar14 = 0;
LAB_03368460:
      plVar8 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x60))();
      uVar17 = (uVar15 + iVar6 & -uVar14) * param_5;
      puVar16 = param_3;
      while( true ) {
        uVar15 = (uint)*puVar16;
        if ((uVar15 >> 0x14 & 1) != 0) break;
        if (((*puVar16 & 1) != 0) || (puVar16 = (ulong *)puVar16[1], puVar16 == (ulong *)0x0))
        goto LAB_033684c4;
      }
      if (puVar16 != (ulong *)0x0) {
        uVar18 = CONCAT44(uVar15,uVar15) & 0xfffff000fffff;
        uVar15 = (uint)puVar16[(ulong)(byte)(POPCOUNT((char)uVar18) + POPCOUNT((char)(uVar18 >> 8))
                                            + POPCOUNT((char)(uVar18 >> 0x10))) + 2] & 0xfff0000;
        goto LAB_033684c8;
      }
LAB_033684c4:
      uVar15 = 0;
LAB_033684c8:
      pcVar11 = *(code **)(*plVar8 + 0x18);
      if ((param_4 & 1) == 0) {
        if ((int)uVar10 < 1) {
          puVar9 = (undefined8 *)(*pcVar11)(plVar8,0x40);
          *puVar9 = 0x30000f;
          puVar9[1] = 0;
          puVar9[2] = (long)(int)(param_5 << 8 | 0x28);
          puVar9[3] = param_3;
          puVar9[4] = PTR_DAT_047e66f8;
          puVar9[5] = __s1;
          puVar9[6] = (ulong)(uVar15 | uVar17 & 0xffff);
          puVar9[7] = 0x1000;
        }
        else {
          puVar9 = (undefined8 *)(*pcVar11)(plVar8,0x98);
          *puVar9 = 0x30800f;
          puVar9[1] = 0;
          puVar4 = PTR_DAT_047e66f8;
          puVar9[2] = (long)(int)(param_5 << 8 | 0x28);
          puVar9[3] = param_3;
          puVar9[7] = (ulong)(uVar15 | uVar17 & 0xffff);
          puVar9[8] = 0x1000;
          puVar9[4] = puVar4;
          puVar9[5] = __s1;
          if (3 < (int)uVar10) {
            uVar10 = 4;
          }
          puVar9[0xb] = (long)(int)uVar10;
          puVar9[10] = 0;
          puVar9[6] = puVar9 + 10;
          puVar9[0xc] = *param_6;
          uVar17 = uVar10;
          if ((int)uVar10 < 2) {
            uVar17 = 1;
          }
          puVar9[0xd] = param_6[1];
          if (1 < (int)uVar10) {
            puVar9[0xe] = param_6[2];
            puVar9[0xf] = param_6[3];
            if (uVar17 != 2) {
              puVar9[0x10] = param_6[4];
              *(undefined8 *)(puVar9[6] + 0x38) = param_6[5];
              if (uVar17 != 3) {
                lVar13 = 0;
                lVar12 = (ulong)uVar17 - 3;
                do {
                  *(undefined8 *)(puVar9[6] + lVar13 + 0x40) =
                       *(undefined8 *)((long)param_6 + lVar13 + 0x30);
                  lVar3 = lVar13 + 0x38;
                  lVar2 = puVar9[6] + lVar13;
                  lVar12 = lVar12 + -1;
                  lVar13 = lVar13 + 0x10;
                  *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)((long)param_6 + lVar3);
                } while (lVar12 != 0);
              }
            }
          }
        }
      }
      else {
        puVar9 = (undefined8 *)(*pcVar11)(plVar8,0x68);
        *puVar9 = 0x30800f;
        puVar9[1] = 0;
        puVar9[2] = (long)(int)(param_5 << 8 | 0x28);
        puVar9[3] = param_3;
        puVar9[4] = PTR_DAT_047e66f8;
        puVar9[5] = __s1;
        puVar9[0xb] = 1;
        puVar9[0xc] = param_3;
        puVar9[7] = (ulong)(uVar15 | uVar17 & 0xffff);
        puVar9[8] = 0x1000;
        puVar9[10] = 0;
        puVar9[6] = puVar9 + 10;
        puVar9[0xd] = &DAT_03c4f61e;
      }
    }
    iVar6 = *(int *)(param_1 + 0x28);
    lVar13 = (long)iVar6;
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) <= iVar6) {
      FUN_0336f2a4(plVar1,lVar13 + 1);
      iVar6 = *(int *)(param_1 + 0x28);
    }
    plVar8 = (long *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 0x20);
    *plVar8 = (long)local_78;
    plVar8[1] = (long)pcStack_70;
    plVar8[2] = CONCAT44(uStack_64,local_68);
    plVar8[3] = (long)puVar9;
    *(int *)(param_1 + 0x28) = (int)(lVar13 + 1);
  }
  return *(undefined8 *)(*plVar1 + ((long)((ulong)uVar5 << 0x20) >> 0x1b) + 0x18);
}


