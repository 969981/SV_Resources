/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336c5bc; name: FUN_0336c5bc
 */


void FUN_0336c5bc(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  short *psVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined **ppuVar16;
  char *pcVar17;
  ulong *puVar18;
  long *plVar19;
  char *pcVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined **local_120;
  byte *pbStack_118;
  undefined **local_110;
  byte *local_108;
  undefined **local_100;
  ulong local_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined4 local_70;
  
  puVar18 = (ulong *)param_2[1];
  if (puVar18 != (ulong *)0x0) {
    *(int *)((long)param_1 + 0x9c) = (int)param_1[8];
    local_f0 = 0;
    local_100 = (undefined **)&local_f0;
    local_f8 = 0x8000008000000001;
    local_70 = 1;
    FUN_031e12d8(puVar18,&local_100,0,0);
    local_108 = (byte *)((long)local_100 + (long)(int)local_f8 + -1);
    local_110 = local_100;
    do {
      uVar14 = *puVar18;
      if (((uint)uVar14 >> 4 & 1) != 0) {
        uVar7 = (undefined4)puVar18[(ulong)(byte)POPCOUNT((byte)uVar14 & 0xf) + 2];
        goto LAB_0336c68c;
      }
    } while (((uVar14 & 9) == 0) && (puVar18 = (ulong *)puVar18[1], puVar18 != (ulong *)0x0));
    uVar7 = 0;
LAB_0336c68c:
    uVar4 = (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,&local_110,uVar7);
    iVar8 = (int)param_1[8];
    lVar10 = (long)iVar8;
    if ((int)(*(uint *)((long)param_1 + 0x44) & 0x7fffffff) <= iVar8) {
      FUN_033607b0(param_1 + 7,PTR_PTR_047d1a50,lVar10 + 1);
      iVar8 = (int)param_1[8];
    }
    uVar14 = local_f8;
    *(undefined8 *)(param_1[7] + (long)iVar8 * 8) = uVar4;
    *(int *)(param_1 + 8) = (int)(lVar10 + 1);
    *(undefined1 *)((long)param_1 + 0x99) = 1;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((-1 < (long)uVar14) && (local_100 != (undefined **)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  uVar9 = (uint)*param_2;
  puVar18 = param_2;
  if ((uVar9 >> 0x17 & 1) != 0) {
    uVar14 = CONCAT44(uVar9,uVar9) & 0x7fffff007fffff;
    psVar11 = (short *)param_2[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))
                                            + POPCOUNT((char)(uVar14 >> 0x10))) + 2];
    if ((psVar11 != (short *)0x0) && ((long)psVar11[1] + (long)*psVar11 != 0)) {
      plVar19 = (long *)(psVar11 + 4);
      plVar5 = plVar19 + (long)psVar11[1] + (long)*psVar11;
      if ((param_3 & 1) == 0) {
        do {
          puVar12 = (ulong *)*plVar19;
          uVar14 = *puVar12;
          uVar9 = (uint)uVar14;
          if ((uVar9 >> 0x11 & 1) == 0) {
            if (puVar12 == (ulong *)0x0) {
LAB_0336c840:
              local_108 = (byte *)0x0;
              local_110 = (undefined **)0x0;
            }
            else {
joined_r0x0336c870:
              while ((uVar9 >> 0x10 & 1) == 0) {
                if (((uVar14 & 1) != 0) || (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0))
                goto LAB_0336c840;
                uVar14 = *puVar12;
                uVar9 = (uint)uVar14;
              }
              ppuVar16 = (undefined **)
                         puVar12[(ulong)(byte)(POPCOUNT((char)(uVar9 & 0xffff)) +
                                              POPCOUNT((char)((uVar9 & 0xffff) >> 8))) + 2];
              local_110 = ppuVar16;
              if (ppuVar16 == (undefined **)0x0) {
                local_108 = (byte *)0x0;
              }
              else {
                sVar6 = strlen((char *)ppuVar16);
                local_108 = (byte *)((long)ppuVar16 + sVar6);
              }
            }
            local_100 = &PTR_FUN_047ad620;
            local_f8 = *param_1;
            lVar10 = FUN_03367258(&local_100,&local_110,*plVar19,1);
            if (lVar10 != 0) {
              iVar8 = (int)param_1[6];
              lVar13 = (long)iVar8;
              if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= iVar8) {
                FUN_0336facc(param_1 + 5,lVar13 + 1);
                iVar8 = (int)param_1[6];
              }
              *(int *)(param_1 + 6) = (int)(lVar13 + 1);
              *(long *)(param_1[5] + (long)iVar8 * 8) = lVar10;
            }
          }
          else {
            uVar22 = CONCAT44(uVar9,uVar9) & 0x1ffff0001ffff;
            if (((uint)puVar12[(ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8))
                                            + POPCOUNT((char)(uVar22 >> 0x10))) + 2] >> 0x10 & 1) ==
                0) goto joined_r0x0336c870;
          }
          plVar19 = plVar19 + 1;
        } while (plVar19 != plVar5);
      }
      else {
        do {
          for (puVar12 = (ulong *)*plVar19; puVar12 != (ulong *)0x0; puVar12 = (ulong *)puVar12[1])
          {
            uVar9 = (uint)*puVar12;
            if ((uVar9 >> 0x10 & 1) != 0) {
              uVar9 = uVar9 & 0xffff;
              ppuVar16 = (undefined **)
                         puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)))
                                 + 2];
              local_110 = ppuVar16;
              if (ppuVar16 == (undefined **)0x0) {
                local_108 = (byte *)0x0;
              }
              else {
                sVar6 = strlen((char *)ppuVar16);
                local_108 = (byte *)((long)ppuVar16 + sVar6);
              }
              goto LAB_0336c784;
            }
            if ((*puVar12 & 1) != 0) break;
          }
          local_108 = (byte *)0x0;
          local_110 = (undefined **)0x0;
LAB_0336c784:
          local_100 = &PTR_FUN_047ad620;
          local_f8 = *param_1;
          lVar10 = FUN_03367258(&local_100,&local_110,*plVar19,1);
          if (lVar10 != 0) {
            iVar8 = (int)param_1[6];
            lVar13 = (long)iVar8;
            if ((int)(*(uint *)((long)param_1 + 0x34) & 0x7fffffff) <= iVar8) {
              FUN_0336facc(param_1 + 5,lVar13 + 1);
              iVar8 = (int)param_1[6];
            }
            *(int *)(param_1 + 6) = (int)(lVar13 + 1);
            *(long *)(param_1[5] + (long)iVar8 * 8) = lVar10;
          }
          plVar19 = plVar19 + 1;
        } while (plVar19 != plVar5);
      }
    }
  }
  while( true ) {
    uVar9 = (uint)*puVar18;
    if ((uVar9 >> 0xf & 1) != 0) break;
    if (((*puVar18 & 9) != 0) ||
       (puVar12 = puVar18 + 1, puVar18 = (ulong *)*puVar12, (ulong *)*puVar12 == (ulong *)0x0))
    goto LAB_0336cb24;
  }
  uVar14 = CONCAT44(uVar9,uVar9) & 0x7fff00007fff;
  puVar21 = (undefined8 *)
            puVar18[(ulong)(byte)(POPCOUNT((char)uVar14) + POPCOUNT((char)(uVar14 >> 8))) + 2];
  if ((puVar21 != (undefined8 *)0x0) && (*(short *)(puVar21 + 1) != 0)) {
    uVar14 = 0;
    puVar1 = puVar21;
    do {
      puVar15 = puVar1 + 2;
      if (*(char *)puVar1[3] == 't') {
        local_108 = (byte *)*param_1;
        local_110 = &PTR_FUN_047ad620;
        local_f8 = 0x8000008000000001;
        local_70 = 1;
        local_f0 = 0;
        local_100 = (undefined **)&local_f0;
        FUN_031e12d8(*puVar15,&local_100,0,0);
        pbStack_118 = (byte *)((long)local_100 + (long)(int)local_f8 + -1);
        local_120 = local_100;
        uVar4 = FUN_03367258(&local_110,&local_120,*puVar15,1);
        pcVar17 = (char *)(puVar1[3] + 1);
        sVar6 = strlen(pcVar17);
        iVar8 = (int)param_1[0xe];
        lVar10 = (long)iVar8;
        if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= iVar8) {
          FUN_0336fcfc(param_1 + 0xd,lVar10 + 1);
          iVar8 = (int)param_1[0xe];
        }
        lVar13 = param_1[0xd] + (long)iVar8 * 0x28;
        FUN_031ca554(lVar13,pcVar17,pcVar17 + sVar6);
        uVar22 = local_f8;
        *(undefined8 *)(lVar13 + 8) = uVar4;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined1 *)(lVar13 + 0x20) = 0;
        *(int *)(param_1 + 0xe) = (int)(lVar10 + 1);
        local_f8 = local_f8 & 0xffffffff00000000;
        if ((-1 < (long)uVar22) && (local_100 != (undefined **)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
      }
      else {
        pcVar17 = (char *)puVar1[3] + 1;
        sVar6 = strlen(pcVar17);
        iVar8 = (int)param_1[0xe];
        lVar10 = (long)iVar8;
        uVar4 = *puVar15;
        if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= iVar8) {
          FUN_0336fcfc(param_1 + 0xd,lVar10 + 1);
          iVar8 = (int)param_1[0xe];
        }
        lVar13 = param_1[0xd] + (long)iVar8 * 0x28;
        FUN_031ca554(lVar13,pcVar17,pcVar17 + sVar6);
        *(undefined8 *)(lVar13 + 8) = 0;
        *(undefined8 *)(lVar13 + 0x10) = uVar4;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined1 *)(lVar13 + 0x20) = 1;
        *(int *)(param_1 + 0xe) = (int)(lVar10 + 1);
      }
      uVar14 = uVar14 + 1;
      puVar1 = puVar15;
    } while (uVar14 < *(ushort *)(puVar21 + 1));
  }
LAB_0336cb24:
  FUN_031e1bb4(&local_100,param_2,PTR_DAT_047e67b0);
  ppuVar16 = local_100;
  if ((local_f0 & 1) != 0) {
    plVar5 = (long *)(CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe);
    plVar19 = plVar5 + 1;
    do {
      lVar10 = *plVar19;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar3) {
        *(int *)plVar19 = (int)lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar5 != (long *)0x0) && ((int)lVar10 == 1)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (ppuVar16 != (undefined **)0x0) {
    puVar21 = (undefined8 *)*ppuVar16;
    puVar1 = (undefined8 *)ppuVar16[1];
    if (puVar21 != puVar1) {
      do {
        local_f8 = *param_1;
        local_100 = &PTR_FUN_047ad620;
        ppuVar16 = (undefined **)*puVar21;
        local_110 = ppuVar16;
        if (ppuVar16 == (undefined **)0x0) {
          local_108 = (byte *)0x0;
        }
        else {
          sVar6 = strlen((char *)ppuVar16);
          local_108 = (byte *)((long)ppuVar16 + sVar6);
        }
        uVar4 = FUN_03367258(&local_100,&local_110,puVar21[1],1);
        pcVar17 = (char *)*puVar21;
        if (pcVar17 == (char *)0x0) {
          pcVar20 = (char *)0x0;
        }
        else {
          sVar6 = strlen(pcVar17);
          pcVar20 = pcVar17 + sVar6;
        }
        iVar8 = (int)param_1[0x10];
        lVar10 = (long)iVar8;
        if ((int)(*(uint *)((long)param_1 + 0x84) & 0x7fffffff) <= iVar8) {
          FUN_0336fcfc(param_1 + 0xf,lVar10 + 1);
          iVar8 = (int)param_1[0x10];
        }
        lVar13 = param_1[0xf] + (long)iVar8 * 0x28;
        FUN_031ca554(lVar13,pcVar17,pcVar20);
        puVar21 = puVar21 + 2;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 8) = uVar4;
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined1 *)(lVar13 + 0x20) = 0;
        *(int *)(param_1 + 0x10) = (int)(lVar10 + 1);
      } while (puVar21 != puVar1);
    }
  }
  return;
}


