/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336cc74; name: FUN_0336cc74
 */


void FUN_0336cc74(ulong *param_1,ulong *param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  size_t sVar5;
  void *__dest;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  short *psVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  ulong *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined **local_120;
  char *pcStack_118;
  undefined **local_110;
  char *local_108;
  undefined **local_100;
  ulong local_f8;
  undefined1 local_f0 [128];
  undefined4 local_70;
  
  puVar15 = (ulong *)param_2[1];
  if (puVar15 != (ulong *)0x0) {
    *(int *)((long)param_1 + 0x9c) = (int)param_1[8];
    local_f0[0] = 0;
    local_100 = (undefined **)local_f0;
    local_f8 = 0x8000008000000001;
    local_70 = 1;
    FUN_031e12d8(puVar15,&local_100,0,0);
    local_108 = (char *)((long)local_100 + (long)(int)local_f8 + -1);
    local_110 = local_100;
    do {
      uVar13 = *puVar15;
      if (((uint)uVar13 >> 4 & 1) != 0) {
        uVar6 = (undefined4)puVar15[(ulong)(byte)POPCOUNT((byte)uVar13 & 0xf) + 2];
        goto LAB_0336cd44;
      }
    } while (((uVar13 & 9) == 0) && (puVar15 = (ulong *)puVar15[1], puVar15 != (ulong *)0x0));
    uVar6 = 0;
LAB_0336cd44:
    uVar4 = (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&local_110,uVar6);
    iVar7 = (int)param_1[8];
    lVar8 = (long)iVar7;
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= iVar7) {
      FUN_033607b0(param_1 + 7,PTR_PTR_047d1a50,lVar8 + 1);
      iVar7 = (int)param_1[8];
    }
    uVar13 = local_f8;
    *(undefined8 *)(param_1[7] + (long)iVar7 * 8) = uVar4;
    *(int *)(param_1 + 8) = (int)(lVar8 + 1);
    *(undefined1 *)((long)param_1 + 0x99) = 1;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((-1 < (long)uVar13) && (local_100 != (undefined **)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  if (((uint)*param_2 >> 0x17 & 1) != 0) {
    uVar12 = (uint)*param_2 & 0x7fffff;
    psVar9 = (short *)param_2[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8)) +
                                           POPCOUNT((char)(uVar12 >> 0x10))) + 2];
    if ((psVar9 != (short *)0x0) && ((long)psVar9[1] + (long)*psVar9 != 0)) {
      plVar17 = (long *)(psVar9 + 4);
      plVar1 = plVar17 + (long)psVar9[1] + (long)*psVar9;
      if ((param_3 & 1) == 0) {
        do {
          puVar15 = (ulong *)*plVar17;
          uVar13 = *puVar15;
          uVar12 = (uint)uVar13;
          if ((uVar12 >> 0x11 & 1) == 0) {
            if (puVar15 == (ulong *)0x0) {
LAB_0336cef8:
              local_108 = (char *)0x0;
              local_110 = (undefined **)0x0;
            }
            else {
joined_r0x0336cf28:
              while ((uVar12 >> 0x10 & 1) == 0) {
                if (((uVar13 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
                goto LAB_0336cef8;
                uVar13 = *puVar15;
                uVar12 = (uint)uVar13;
              }
              ppuVar14 = (undefined **)
                         puVar15[(ulong)(byte)(POPCOUNT((char)(uVar12 & 0xffff)) +
                                              POPCOUNT((char)((uVar12 & 0xffff) >> 8))) + 2];
              local_110 = ppuVar14;
              if (ppuVar14 == (undefined **)0x0) {
                local_108 = (char *)0x0;
              }
              else {
                sVar5 = strlen((char *)ppuVar14);
                local_108 = (char *)((long)ppuVar14 + sVar5);
              }
            }
            local_100 = &PTR_FUN_047ad620;
            local_f8 = *param_1;
            lVar8 = FUN_03367258(&local_100,&local_110,*plVar17,1);
            if (lVar8 != 0) {
              iVar7 = (int)param_1[6];
              lVar10 = (long)iVar7;
              if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= iVar7) {
                FUN_0336facc(param_1 + 5,lVar10 + 1);
                iVar7 = (int)param_1[6];
              }
              *(int *)(param_1 + 6) = (int)(lVar10 + 1);
              *(long *)(param_1[5] + (long)iVar7 * 8) = lVar8;
            }
          }
          else {
            uVar2 = uVar12 & 0x1ffff;
            if (((uint)puVar15[(ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8)) +
                                            POPCOUNT((char)(uVar2 >> 0x10))) + 2] >> 0x10 & 1) == 0)
            goto joined_r0x0336cf28;
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar1);
      }
      else {
        do {
          for (puVar15 = (ulong *)*plVar17; puVar15 != (ulong *)0x0; puVar15 = (ulong *)puVar15[1])
          {
            uVar12 = (uint)*puVar15;
            if ((uVar12 >> 0x10 & 1) != 0) {
              uVar12 = uVar12 & 0xffff;
              ppuVar14 = (undefined **)
                         puVar15[(ulong)(byte)(POPCOUNT((char)uVar12) +
                                              POPCOUNT((char)(uVar12 >> 8))) + 2];
              local_110 = ppuVar14;
              if (ppuVar14 == (undefined **)0x0) {
                local_108 = (char *)0x0;
              }
              else {
                sVar5 = strlen((char *)ppuVar14);
                local_108 = (char *)((long)ppuVar14 + sVar5);
              }
              goto LAB_0336ce3c;
            }
            if ((*puVar15 & 1) != 0) break;
          }
          local_108 = (char *)0x0;
          local_110 = (undefined **)0x0;
LAB_0336ce3c:
          local_100 = &PTR_FUN_047ad620;
          local_f8 = *param_1;
          lVar8 = FUN_03367258(&local_100,&local_110,*plVar17,1);
          if (lVar8 != 0) {
            iVar7 = (int)param_1[6];
            lVar10 = (long)iVar7;
            if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= iVar7) {
              FUN_0336facc(param_1 + 5,lVar10 + 1);
              iVar7 = (int)param_1[6];
            }
            *(int *)(param_1 + 6) = (int)(lVar10 + 1);
            *(long *)(param_1[5] + (long)iVar7 * 8) = lVar8;
          }
          plVar17 = plVar17 + 1;
        } while (plVar17 != plVar1);
      }
    }
  }
  while( true ) {
    uVar12 = (uint)*param_2;
    if ((uVar12 >> 0xf & 1) != 0) {
      uVar12 = uVar12 & 0x7fff;
      puVar11 = (undefined8 *)
                param_2[(ulong)(byte)(POPCOUNT((char)uVar12) + POPCOUNT((char)(uVar12 >> 8))) + 2];
      if ((puVar11 != (undefined8 *)0x0) && (*(short *)(puVar11 + 1) != 0)) {
        uVar13 = 0;
        puVar3 = puVar11;
        do {
          puVar19 = puVar3 + 2;
          iVar7 = (int)param_1[0xe];
          lVar8 = (long)iVar7;
          if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= iVar7) {
            FUN_0336fcfc(param_1 + 0xd,lVar8 + 1);
            iVar7 = (int)param_1[0xe];
          }
          uVar18 = param_1[0xd];
          puVar15 = (ulong *)(uVar18 + (long)iVar7 * 0x28);
          *(int *)(param_1 + 0xe) = (int)(lVar8 + 1);
          *(undefined1 *)(puVar15 + 4) = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          lVar10 = (long)iVar7;
          lVar8 = puVar3[3];
          sVar5 = strlen((char *)(lVar8 + 1));
          sVar5 = (size_t)((int)sVar5 + 1);
          __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar5);
          memcpy(__dest,(char *)(lVar8 + 1),sVar5);
          *puVar15 = (ulong)__dest | 1;
          if (*(char *)puVar3[3] == 't') {
            local_108 = (char *)*param_1;
            local_110 = &PTR_FUN_047ad620;
            local_f8 = 0x8000008000000001;
            local_70 = 1;
            local_f0[0] = 0;
            local_100 = (undefined **)local_f0;
            FUN_031e12d8(*puVar19,&local_100,0,0);
            pcStack_118 = (char *)((long)local_100 + (long)(int)local_f8 + -1);
            local_120 = local_100;
            uVar4 = FUN_03367258(&local_110,&local_120,*puVar19,1);
            lVar8 = uVar18 + lVar10 * 0x28;
            puVar15 = *(ulong **)(lVar8 + 8);
            *(undefined8 *)(lVar8 + 8) = uVar4;
            if (puVar15 != (ulong *)0x0) {
              if (((*(uint *)((long)puVar15 + 0x1c) < 6) &&
                  ((1 << (ulong)(*(uint *)((long)puVar15 + 0x1c) & 0x1f) & 0x32U) != 0)) &&
                 (uVar16 = puVar15[2], uVar16 != 0)) {
                FUN_03364aa0(uVar16);
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar16,0);
              }
              if ((puVar15[1] & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar15[1] - 1,0);
              }
              if ((*puVar15 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar15 - 1,0);
              }
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar15,0);
            }
            uVar16 = local_f8;
            *(undefined8 *)(uVar18 + lVar10 * 0x28 + 0x10) = 0;
            local_f8 = local_f8 & 0xffffffff00000000;
            if ((-1 < (long)uVar16) && (local_100 != (undefined **)0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
          }
          else {
            lVar8 = uVar18 + lVar10 * 0x28;
            uVar4 = *puVar19;
            puVar15 = *(ulong **)(lVar8 + 8);
            *(undefined1 *)(lVar8 + 0x20) = 1;
            *(undefined8 *)(lVar8 + 8) = 0;
            *(undefined8 *)(lVar8 + 0x10) = uVar4;
            if (puVar15 != (ulong *)0x0) {
              if ((*(uint *)((long)puVar15 + 0x1c) < 6 &&
                   (1 << (ulong)(*(uint *)((long)puVar15 + 0x1c) & 0x1f) & 0x32U) != 0) &&
                 (uVar18 = puVar15[2], uVar18 != 0)) {
                FUN_03364aa0(uVar18);
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar18,0);
              }
              if ((puVar15[1] & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar15[1] - 1,0);
              }
              if ((*puVar15 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar15 - 1,0);
              }
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar15,0);
            }
          }
          uVar13 = uVar13 + 1;
          puVar3 = puVar19;
        } while (uVar13 < *(ushort *)(puVar11 + 1));
      }
      return;
    }
    if ((*param_2 & 9) != 0) break;
    param_2 = (ulong *)param_2[1];
    if (param_2 == (ulong *)0x0) {
      return;
    }
  }
  return;
}


