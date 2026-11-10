/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fc35c0; name: FUN_02fc35c0
 */


void FUN_02fc35c0(long param_1,uint *param_2,long param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,long param_7,long *param_8,long param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_PTR_047d1a50;
  if ((param_4 & 1) == 0) {
    puVar16 = param_2 + 1;
    piVar10 = (int *)(param_3 + 0xa4);
    puVar11 = (undefined4 *)(param_3 + 0xa0);
  }
  else {
    piVar10 = (int *)(param_3 + 0xa0);
    puVar11 = (undefined4 *)(param_3 + 0xa4);
    puVar16 = param_2;
    param_2 = param_2 + 1;
  }
  uVar1 = *puVar11;
  iVar2 = *piVar10;
  if (*(float *)(*(long *)(param_3 + 0x98) + 0x9c) == (float)*(undefined8 *)(param_1 + 0x2d0)) {
    lVar20 = *(long *)(param_1 + 0x298);
    uVar13 = (ulong)*param_2 & 0xffffff;
    if ((int)uVar13 == 0xffffff) {
      uVar14 = 0xffffffffffffffff;
    }
    else {
      uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 8) + 0x38) + uVar13 * 0xc0 + 0xb0);
    }
    uVar12 = (ulong)*puVar16 & 0xffffff;
    if ((int)uVar12 == 0xffffff) {
      uVar15 = 0xffffffffffffffff;
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar20 + 8) + 0x38) + uVar12 * 0xc0 + 0xb0);
    }
    puVar16 = *(uint **)(*(long *)(lVar20 + 0x540) + (long)*(int *)(lVar20 + 0x548) * 8 + -8);
    puVar18 = *(undefined8 **)(lVar20 + 0x4e0);
    uVar6 = *puVar16;
    if (0xf0 < uVar6 >> 0x14) {
      puVar17 = puVar16;
      do {
        uVar6 = *(int *)(puVar18 + 0xb) - 1;
        if (*(int *)(puVar18 + 0xb) < 1) {
          lVar19 = puVar18[1];
          (**(code **)(*(long *)*puVar18 + 0x20))((long *)*puVar18,lVar19,6);
          puVar9 = (undefined8 *)(lVar19 + 0x28);
          *(undefined4 *)(puVar18 + 0xb) = 5;
        }
        else {
          *(uint *)(puVar18 + 0xb) = uVar6;
          puVar9 = (undefined8 *)(puVar18[1] + (ulong)uVar6 * 8);
        }
        puVar16 = (uint *)*puVar9;
        puVar16[4] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[0] = 0;
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        puVar16[1] = *(uint *)(lVar20 + 0x548);
        iVar8 = *(int *)(lVar20 + 0x548);
        lVar19 = (long)iVar8;
        if ((int)(*(uint *)(lVar20 + 0x54c) & 0x7fffffff) <= iVar8) {
          FUN_031c25b4(lVar20 + 0x540,puVar5,lVar19 + 1);
          iVar8 = *(int *)(lVar20 + 0x548);
        }
        *(uint **)(*(long *)(lVar20 + 0x540) + (long)iVar8 * 8) = puVar16;
        *(int *)(lVar20 + 0x548) = (int)(lVar19 + 1);
        *(uint **)(puVar17 + 2) = puVar16;
        uVar6 = *puVar16;
        puVar17 = puVar16;
      } while (0xf0 < uVar6 >> 0x14);
    }
    uVar6 = uVar6 >> 0x10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar16,0x10);
      if (bVar4) {
        *puVar16 = *puVar16 + 0x900001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)(lVar20 + 0x538) = *(int *)(lVar20 + 0x538) + 1;
    uVar23 = *(undefined8 *)(param_3 + 0x18);
    uVar21 = *(undefined8 *)(param_3 + 0x10);
    uVar24 = *(undefined4 *)(param_3 + 0x30);
    uVar25 = *(undefined8 *)(param_1 + 0x2b0);
    puVar18 = *(undefined8 **)(param_1 + 0x2a8);
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x20) = 0x604000090;
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x28) = uVar14;
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x30) = uVar15;
    uVar14 = *(undefined8 *)(param_3 + 0x48);
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x40) = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x48) = uVar14;
    *(ulong *)((long)puVar16 + (ulong)uVar6 + 0x58) = CONCAT44(uVar24,(int)uVar23);
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x50) = uVar21;
    dVar22 = (double)puVar18[2];
    dVar26 = (double)puVar18[3];
    dVar27 = (double)puVar18[4];
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x68) = puVar18[1];
    uVar14 = *puVar18;
    *(ulong *)((long)puVar16 + (ulong)uVar6 + 0x78) = (ulong)(uint)(float)dVar27;
    *(ulong *)((long)puVar16 + (ulong)uVar6 + 0x70) = CONCAT44((float)dVar26,(float)dVar22);
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x60) = uVar14;
    uVar14 = puVar18[0xd];
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x80) = puVar18[0xc];
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x88) = uVar14;
    uVar14 = puVar18[0xc];
    uVar15 = puVar18[0xd];
    *(int *)((long)puVar16 + (ulong)uVar6 + 0xa0) = (int)uVar25;
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x90) = uVar14;
    *(undefined8 *)((long)puVar16 + (ulong)uVar6 + 0x98) = uVar15;
    *(int *)((long)puVar16 + (ulong)uVar6 + 0xa4) = iVar2;
    *(undefined4 *)((long)puVar16 + (ulong)uVar6 + 0xa8) = uVar1;
  }
  else {
    uVar13 = (ulong)(*param_2 & 0xffffff);
    uVar12 = (ulong)(*puVar16 & 0xffffff);
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x298) + 8);
  lVar20 = plVar7[7];
  lVar19 = lVar20 + uVar13 * 0xc0;
  lVar20 = lVar20 + uVar12 * 0xc0;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))();
  if (plVar7 == (long *)0x0) {
    uVar6 = 0x24;
  }
  else {
    uVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,lVar19,lVar20);
  }
  if (lVar19 == *param_8) {
    if (iVar2 == (int)param_8[3]) goto LAB_02fc3924;
  }
  else {
    FUN_02fc2fe0(param_1,lVar19,uVar6 >> 5 & 7,0,&local_70,&local_a0,param_7,param_8);
    param_8[6] = param_7;
  }
  FUN_02fc3370(param_8,param_5,param_3,~param_4 & 1,
               *(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4a0),iVar2);
LAB_02fc3924:
  FUN_02fc2fe0(param_1,lVar20,uVar6 >> 2 & 7,1,&local_70,&local_a0,param_6,param_9);
  FUN_02fc3370(param_9,param_6,param_3,param_4 & 1,
               *(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4a8),uVar1);
  puVar18 = *(undefined8 **)(param_9 + 8);
  uVar1 = *(undefined4 *)(puVar18 + 1);
  uVar24 = *(undefined4 *)((long)puVar18 + 0xc);
  *param_10 = *puVar18;
  *(undefined4 *)(param_10 + 1) = uVar1;
  *(undefined4 *)((long)param_10 + 0xc) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 3);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x1c);
  param_10[2] = puVar18[2];
  *(undefined4 *)(param_10 + 3) = uVar1;
  *(undefined4 *)((long)param_10 + 0x1c) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 5);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x2c);
  param_10[4] = puVar18[4];
  *(undefined4 *)(param_10 + 5) = uVar1;
  *(undefined4 *)((long)param_10 + 0x2c) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 7);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x3c);
  param_10[6] = puVar18[6];
  *(undefined4 *)(param_10 + 7) = uVar1;
  *(undefined4 *)((long)param_10 + 0x3c) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 9);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x4c);
  param_10[8] = puVar18[8];
  *(undefined4 *)(param_10 + 9) = uVar1;
  *(undefined4 *)((long)param_10 + 0x4c) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 0xb);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x5c);
  param_10[10] = puVar18[10];
  *(undefined4 *)(param_10 + 0xb) = uVar1;
  *(undefined4 *)((long)param_10 + 0x5c) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 0xd);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x6c);
  param_10[0xc] = puVar18[0xc];
  *(undefined4 *)(param_10 + 0xd) = uVar1;
  *(undefined4 *)((long)param_10 + 0x6c) = uVar24;
  uVar1 = *(undefined4 *)(puVar18 + 0xf);
  uVar24 = *(undefined4 *)((long)puVar18 + 0x7c);
  param_10[0xe] = puVar18[0xe];
  *(undefined4 *)(param_10 + 0xf) = uVar1;
  *(undefined4 *)((long)param_10 + 0x7c) = uVar24;
  param_10[2] = local_a0;
  param_10[3] = local_98;
  param_10[4] = local_90;
  param_10[1] = uStack_68;
  *param_10 = local_70;
  *(undefined8 **)(param_9 + 8) = param_10;
  return;
}


