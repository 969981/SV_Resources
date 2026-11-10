/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e75268; name: FUN_02e75268
 */


void FUN_02e75268(long param_1,long param_2,long param_3,byte param_4,undefined8 param_5,
                 long param_6)

{
  short *psVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  short sVar10;
  undefined *puVar11;
  undefined2 uVar12;
  short sVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  int *piVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long local_88;
  undefined8 local_80;
  undefined2 local_78 [4];
  undefined1 auStack_70 [16];
  
  *(long *)(*(long *)(param_1 + 8) + 0x10) = param_2 + 0x28;
  *(long *)(*(long *)(param_1 + 8) + 0x18) = param_3;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x20) = param_5;
  *(byte *)(*(long *)(param_1 + 8) + 0x78) = param_4;
  lVar18 = *(long *)(param_1 + 8);
  lVar21 = param_6 + 0x18;
  uVar5 = *(uint *)(param_6 + 0x20);
  uVar15 = uVar5;
  if ((int)(*(uint *)(param_6 + 0x24) & 0x7fffffff) <= (int)uVar5) {
    FUN_0323ff70(lVar21,PTR_PTR_047d1a50,(long)(int)uVar5 + 1);
    uVar15 = *(uint *)(param_6 + 0x20);
  }
  plVar19 = (long *)(*(long *)(param_6 + 0x18) + (long)(int)uVar15 * 0x18);
  *(int *)(param_6 + 0x20) = (int)((long)(int)uVar5 + 1);
  *plVar19 = lVar18 + 0x60;
  *(undefined1 *)((long)plVar19 + 10) = 0x40;
  plVar19[2] = 0;
  *(undefined2 *)(plVar19 + 1) = 1;
  lVar18 = *(long *)(param_1 + 8);
  iVar17 = *(int *)(param_6 + 0x20);
  iVar16 = iVar17;
  if ((int)(*(uint *)(param_6 + 0x24) & 0x7fffffff) <= iVar17) {
    FUN_0323ff70(lVar21,PTR_PTR_047d1a50,(long)iVar17 + 1);
    iVar16 = *(int *)(param_6 + 0x20);
  }
  plVar19 = (long *)(*(long *)(param_6 + 0x18) + (long)iVar16 * 0x18);
  *(int *)(param_6 + 0x20) = (int)((long)iVar17 + 1);
  *plVar19 = lVar18 + 0xb00;
  *(undefined2 *)(plVar19 + 1) = 1;
  *(undefined1 *)((long)plVar19 + 10) = 0x40;
  plVar19[2] = 0;
  sVar10 = (short)uVar5;
  if (((~uVar5 & 0xffff) != 0) && (sVar6 = *(short *)(param_6 + 0x4c8), sVar6 != -1)) {
    iVar16 = *(int *)(param_6 + 0x330);
    lVar18 = (long)iVar16;
    if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar16) {
      FUN_02e7f7cc(param_6 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
      iVar16 = *(int *)(param_6 + 0x330);
    }
    psVar1 = (short *)(*(long *)(param_6 + 0x328) + (long)iVar16 * 4);
    *(int *)(param_6 + 0x330) = (int)(lVar18 + 1);
    *psVar1 = sVar6;
    psVar1[1] = sVar10;
  }
  sVar6 = (short)iVar17;
  *(short *)(param_6 + 0x4cc) = sVar6;
  iVar17 = *(int *)(param_3 + 8);
  lVar18 = *(long *)(param_1 + 8);
  if (*(int *)(*(long *)(lVar18 + 0x10) + 0x34) == -1) {
    lVar28 = *(long *)(lVar18 + 8);
    iVar16 = 0;
  }
  else {
    lVar28 = *(long *)(lVar18 + 8);
    iVar16 = *(int *)(*(long *)(lVar18 + 0x10) + 0x34) + 1;
    if ((int)(*(uint *)(lVar28 + 300) & 0x7fffffff) < iVar16) {
      FUN_02e7f6a0(lVar28 + 0x120,PTR_PTR_047d1a50,(long)iVar16);
    }
  }
  if (*(int *)(lVar28 + 0x128) != iVar16) {
    *(int *)(lVar28 + 0x128) = iVar16;
  }
  lVar18 = *(long *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x18);
  if ((int)(*(uint *)(lVar18 + 0x8c) & 0x7fffffff) < (int)uVar5) {
    FUN_02e80588(lVar18 + 0x80,PTR_PTR_047d1a50,(long)(int)uVar5);
  }
  uVar15 = *(uint *)(lVar18 + 0x88);
  if ((int)uVar15 < (int)uVar5) {
    *(uint *)(lVar18 + 0x88) = uVar5;
    memset((void *)(*(long *)(lVar18 + 0x80) + (long)(int)uVar15 * 2),0xff,
           (ulong)(uVar5 + ~uVar15) * 2 + 2);
  }
  else if ((int)uVar5 < (int)uVar15) {
    *(uint *)(lVar18 + 0x88) = uVar5;
  }
  lVar28 = *(long *)(param_1 + 8);
  lVar18 = (long)iVar17;
  if ((int)(*(uint *)(lVar28 + 0x34) & 0x7fffffff) < iVar17) {
    FUN_02e80694(lVar28 + 0x28,lVar18);
  }
  iVar16 = *(int *)(lVar28 + 0x30);
  if (iVar16 < iVar17) {
    lVar22 = *(long *)(lVar28 + 0x28);
    puVar20 = (undefined8 *)(lVar22 + (long)iVar16 * 0x110);
    *(int *)(lVar28 + 0x30) = iVar17;
    do {
      *puVar20 = 0;
      *(undefined1 *)(puVar20 + 0x20) = 0;
      puVar20[2] = puVar20 + 6;
      puVar20[3] = 0x8000001800000000;
      puVar20 = puVar20 + 0x22;
    } while (puVar20 != (undefined8 *)(lVar22 + lVar18 * 0x110));
  }
  else if (iVar17 < iVar16) {
    lVar22 = *(long *)(lVar28 + 0x28);
    *(int *)(lVar28 + 0x30) = iVar17;
    puVar11 = PTR_PTR_047d1a50;
    plVar19 = (long *)(lVar22 + (long)iVar16 * 0x110);
    do {
      plVar27 = plVar19 + -0x22;
      if (*plVar27 != 0) {
        uVar15 = *(uint *)(plVar19 + -0x1f);
        if (*(char *)((long)plVar19 + -0x104) != '\0') {
          plVar23 = (long *)plVar19[-0x20];
          if ((int)uVar15 < 1) {
            plVar25 = plVar23;
          }
          else {
            uVar3 = uVar15 & 3;
            plVar25 = plVar23;
            if (2 < uVar15 - 1) {
              iVar16 = -(uVar15 & 0xfffffffc);
              do {
                plVar24 = plVar23;
                if (*plVar25 != 0) {
                  plVar24 = plVar23 + 1;
                  *plVar23 = *plVar25;
                }
                plVar23 = plVar24;
                if (plVar25[1] != 0) {
                  plVar23 = plVar24 + 1;
                  *plVar24 = plVar25[1];
                }
                plVar24 = plVar23;
                if (plVar25[2] != 0) {
                  plVar24 = plVar23 + 1;
                  *plVar23 = plVar25[2];
                }
                plVar23 = plVar24;
                if (plVar25[3] != 0) {
                  plVar23 = plVar24 + 1;
                  *plVar24 = plVar25[3];
                }
                plVar25 = plVar25 + 4;
                iVar16 = iVar16 + 4;
              } while (iVar16 != 0);
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              plVar24 = plVar23;
              if (*plVar25 != 0) {
                plVar24 = plVar23 + 1;
                *plVar23 = *plVar25;
              }
              plVar23 = plVar24;
              plVar25 = plVar25 + 1;
            }
            plVar25 = (long *)plVar19[-0x20];
          }
          uVar15 = (uint)((ulong)((long)plVar23 - (long)plVar25) >> 3);
          *(char *)((long)plVar19 + -0x104) = '\0';
        }
        if (uVar15 != 0) {
          (**(code **)(*(long *)*plVar27 + 0x28))((long *)*plVar27,plVar19[-0x20]);
        }
        *(undefined4 *)(plVar19 + -0x1f) = 0;
        *(undefined4 *)(plVar19 + -0x21) = 0;
      }
      *(undefined4 *)(plVar19 + -0x1f) = 0;
      if ((-1 < (int)*(uint *)((long)plVar19 + -0xf4)) && (plVar19[-0x20] != 0)) {
        (**(code **)(*(long *)puVar11 + 0x20))
                  (puVar11,plVar19[-0x20],(ulong)*(uint *)((long)plVar19 + -0xf4) << 3);
      }
      plVar19[-0x20] = 0;
      *(undefined4 *)((long)plVar19 + -0xf4) = 0x80000000;
      plVar19 = plVar27;
    } while (plVar27 != (long *)(lVar22 + lVar18 * 0x110));
  }
  puVar11 = PTR_DAT_047d1a08;
  if (0 < (int)uVar5) {
    uVar30 = 0;
    do {
      puVar20 = *(undefined8 **)(*(long *)(param_1 + 0x10) + uVar30 * 8);
      if ((param_4 & *(byte *)(puVar20 + 0x35e)) != 0) {
        if (*(int *)(puVar20 + 0xb) == 0) {
          if (*(char *)(puVar20 + 4) != '\0') {
            FUN_02e71630(puVar20);
          }
        }
        else if ((*(char *)((long)puVar20 + 0x1afc) != '\0') || (*(char *)(puVar20 + 0x35f) != '\0')
                ) {
          local_88 = 0x40;
          plVar19 = (long *)(**(code **)puVar11)(0,&local_88,0);
          if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
            (**(code **)(puVar11 + 0x10))(plVar19,"hkReferencedTask");
          }
          lVar18 = *(long *)(param_1 + 8);
          plVar27 = plVar19 + 2;
          *plVar27 = 1;
          *(uint *)(plVar19 + 7) = (uint)uVar30;
          *plVar19 = (long)&PTR_LAB_0460cf58;
          plVar19[1] = 0xffffffff;
          plVar19[4] = (long)&PTR_LAB_0460cfa0;
          plVar19[5] = param_1;
          plVar19[6] = lVar18;
          sVar13 = FUN_0323f360(param_6,plVar19,0x40);
          if ((plVar19 != (long *)0x0) && (plVar19[1] != 0)) {
            do {
              lVar18 = *plVar27;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar9) {
                *plVar27 = lVar18 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(*plVar19 + 0x18))(plVar19);
            }
          }
          iVar16 = *(int *)(param_6 + 0x330);
          lVar18 = (long)iVar16;
          if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar16) {
            FUN_02e7f7cc(param_6 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
            iVar16 = *(int *)(param_6 + 0x330);
          }
          psVar1 = (short *)(*(long *)(param_6 + 0x328) + (long)iVar16 * 4);
          *(int *)(param_6 + 0x330) = (int)(lVar18 + 1);
          psVar1[1] = sVar13;
          *psVar1 = sVar10;
          puVar20[0x35c] = *(undefined8 *)(param_1 + 0x140);
          iVar16 = *(int *)(param_6 + 0x20);
          lVar18 = (long)iVar16;
          FUN_032525f4(sVar13,param_1 + 0x120,puVar20 + 0x10,puVar20 + 5,puVar20 + 10,iVar17,0x40,
                       puVar20 + 1,param_6,auStack_70,local_78,"BroadPhase",0,0,0);
          if (iVar16 < *(int *)(param_6 + 0x20)) {
            lVar28 = lVar18 * 0x18;
            do {
              lVar22 = *(long *)(param_6 + 0x18);
              local_88 = 0x40;
              puVar14 = (undefined8 *)(**(code **)puVar11)(0,&local_88,0);
              if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
                (**(code **)(puVar11 + 0x10))(puVar14,"SimdTreeTask");
              }
              puVar14[2] = 1;
              puVar14[3] = 0;
              *puVar14 = &PTR_LAB_0460d2c8;
              puVar14[1] = 0xffffffff;
              puVar14[5] = 0;
              puVar14[6] = 0;
              puVar14[7] = 0;
              puVar14[4] = &PTR_LAB_0460d318;
              puVar14[5] = *(undefined8 *)(lVar22 + lVar28);
              puVar14[6] = param_3;
              puVar4 = (undefined8 *)0x0;
              if (puVar14 != (undefined8 *)0x0) {
                puVar4 = puVar14 + 4;
              }
              *(undefined8 **)(lVar22 + lVar28) = puVar4;
              iVar16 = *(int *)(param_6 + 0x3c0);
              lVar22 = (long)iVar16;
              if ((int)(*(uint *)(param_6 + 0x3c4) & 0x7fffffff) <= iVar16) {
                FUN_02e80ee8(param_6 + 0x3b8,PTR_PTR_047d1a50,lVar22 + 1);
                iVar16 = *(int *)(param_6 + 0x3c0);
              }
              *(undefined8 **)(*(long *)(param_6 + 0x3b8) + (long)iVar16 * 8) = puVar14;
              lVar18 = lVar18 + 1;
              lVar28 = lVar28 + 0x18;
              *(int *)(param_6 + 0x3c0) = (int)(lVar22 + 1);
            } while (lVar18 < *(int *)(param_6 + 0x20));
          }
          uVar12 = local_78[0];
          if ((*(uint *)((long)puVar20 + 0x1af4) >> (ulong)((uint)uVar30 & 0x1f) & 1) != 0) {
            puVar20[0x338] = FUN_02e74db8;
            puVar20[0x35d] = puVar20;
            *puVar20 = *(undefined8 *)(param_1 + 8);
            *(undefined4 *)(puVar20 + 0x380) = 0;
          }
          *(undefined1 *)((long)puVar20 + 0x1afd) = 1;
          *(undefined2 *)(*(long *)(*(long *)(param_1 + 8) + 0x80) + uVar30 * 2) = local_78[0];
          iVar16 = *(int *)(param_6 + 0x330);
          lVar18 = (long)iVar16;
          if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar16) {
            FUN_02e7f7cc(param_6 + 0x328,PTR_PTR_047d1a50,lVar18 + 1);
            iVar16 = *(int *)(param_6 + 0x330);
          }
          puVar2 = (undefined2 *)(*(long *)(param_6 + 0x328) + (long)iVar16 * 4);
          *(int *)(param_6 + 0x330) = (int)(lVar18 + 1);
          *puVar2 = uVar12;
          puVar2[1] = sVar6;
          *(undefined1 *)(puVar20 + 4) = 1;
        }
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 != uVar5);
  }
  local_88 = 0;
  local_80 = -0x8000000000000000;
  FUN_02e72f40(*(undefined8 *)(param_1 + 8),param_4,&local_88);
  if ((int)(*(uint *)(*(long *)(param_1 + 8) + 0xdc) & 0x7fffffff) < (int)local_80) {
    FUN_02e8109c(*(long *)(param_1 + 8) + 0xd0,(long)(int)local_80);
  }
  if ((int)local_80 != 0) {
    lVar18 = param_6 + 0x328;
    lVar28 = (long)(int)local_80 << 3;
    piVar26 = (int *)(local_88 + 4);
    do {
      if (piVar26[-1] != *piVar26) {
        lVar29 = *(long *)(param_1 + 8);
        iVar16 = *(int *)(lVar29 + 0xd8);
        lVar22 = (long)iVar16;
        if ((int)(*(uint *)(lVar29 + 0xdc) & 0x7fffffff) <= iVar16) {
          FUN_02e81240(lVar29 + 0xd0,lVar22 + 1);
          iVar16 = *(int *)(lVar29 + 0xd8);
        }
        puVar20 = (undefined8 *)(*(long *)(lVar29 + 0xd0) + (long)iVar16 * 0x50);
        *(int *)(lVar29 + 0xd8) = (int)(lVar22 + 1);
        puVar20[1] = 0xffffffff;
        puVar20[2] = 1;
        puVar20[5] = param_1;
        puVar20[6] = 0;
        *puVar20 = &PTR_LAB_0460d170;
        puVar20[4] = &PTR_LAB_0460d1b8;
        puVar20[6] = *(undefined8 *)(param_1 + 8);
        *(int *)(puVar20 + 7) = piVar26[-1];
        *(int *)((long)puVar20 + 0x3c) = *piVar26;
        *(undefined4 *)(puVar20 + 8) = 0;
        uVar5 = *(uint *)(param_6 + 0x20);
        uVar15 = uVar5;
        if ((int)(*(uint *)(param_6 + 0x24) & 0x7fffffff) <= (int)uVar5) {
          FUN_0323ff70(lVar21,PTR_PTR_047d1a50,(long)(int)uVar5 + 1);
          uVar15 = *(uint *)(param_6 + 0x20);
        }
        puVar14 = (undefined8 *)(*(long *)(param_6 + 0x18) + (long)(int)uVar15 * 0x18);
        *(int *)(param_6 + 0x20) = (int)((long)(int)uVar5 + 1);
        *puVar14 = puVar20 + 4;
        *(short *)(puVar14 + 1) = (short)iVar17;
        *(undefined2 *)((long)puVar14 + 10) = 0x140;
        puVar14[2] = 0;
        lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x80);
        sVar13 = (short)uVar5;
        if (((~uVar5 & 0xffff) != 0) &&
           (sVar7 = *(short *)(lVar22 + (long)*(int *)(puVar20 + 7) * 2), sVar7 != -1)) {
          iVar16 = *(int *)(param_6 + 0x330);
          lVar22 = (long)iVar16;
          if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar16) {
            FUN_02e7f7cc(lVar18,PTR_PTR_047d1a50,lVar22 + 1);
            iVar16 = *(int *)(param_6 + 0x330);
          }
          psVar1 = (short *)(*(long *)(param_6 + 0x328) + (long)iVar16 * 4);
          *(int *)(param_6 + 0x330) = (int)(lVar22 + 1);
          *psVar1 = sVar7;
          psVar1[1] = sVar13;
          lVar22 = *(long *)(*(long *)(param_1 + 8) + 0x80);
        }
        if (((~uVar5 & 0xffff) != 0) &&
           (sVar7 = *(short *)(lVar22 + (long)*(int *)((long)puVar20 + 0x3c) * 2), sVar7 != -1)) {
          iVar16 = *(int *)(param_6 + 0x330);
          lVar22 = (long)iVar16;
          if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar16) {
            FUN_02e7f7cc(lVar18,PTR_PTR_047d1a50,lVar22 + 1);
            iVar16 = *(int *)(param_6 + 0x330);
          }
          psVar1 = (short *)(*(long *)(param_6 + 0x328) + (long)iVar16 * 4);
          *(int *)(param_6 + 0x330) = (int)(lVar22 + 1);
          *psVar1 = sVar7;
          psVar1[1] = sVar13;
        }
        iVar16 = *(int *)(param_6 + 0x330);
        lVar22 = (long)iVar16;
        if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar16) {
          FUN_02e7f7cc(lVar18,PTR_PTR_047d1a50,lVar22 + 1);
          iVar16 = *(int *)(param_6 + 0x330);
        }
        psVar1 = (short *)(*(long *)(param_6 + 0x328) + (long)iVar16 * 4);
        *(int *)(param_6 + 0x330) = (int)(lVar22 + 1);
        *psVar1 = sVar13;
        psVar1[1] = sVar6;
      }
      lVar28 = lVar28 + -8;
      piVar26 = piVar26 + 2;
    } while (lVar28 != 0);
  }
  lVar21 = local_80;
  uVar30 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_88 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_88,uVar30 << 3);
  }
  iVar17 = *(int *)(param_6 + 0x330);
  lVar21 = (long)iVar17;
  if ((int)(*(uint *)(param_6 + 0x334) & 0x7fffffff) <= iVar17) {
    FUN_02e7f7cc(param_6 + 0x328,PTR_PTR_047d1a50,lVar21 + 1);
    iVar17 = *(int *)(param_6 + 0x330);
  }
  psVar1 = (short *)(*(long *)(param_6 + 0x328) + (long)iVar17 * 4);
  *(int *)(param_6 + 0x330) = (int)(lVar21 + 1);
  *psVar1 = sVar10;
  psVar1[1] = sVar6;
  return;
}


