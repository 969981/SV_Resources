/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03427db4; name: FUN_03427db4
 */


void FUN_03427db4(long *param_1,undefined4 *param_2,long *param_3,undefined8 param_4,long param_5,
                 long param_6,long param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  uint *puVar21;
  undefined4 *puVar22;
  long *plVar23;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  *(undefined8 *)((long)param_8 + 0x14) = 0;
  (**(code **)*param_8)(param_8);
  if ((int)param_1[1] == 0) {
    return;
  }
  uVar19 = 0;
LAB_03427e20:
  lVar8 = *param_1;
  plVar23 = (long *)(lVar8 + uVar19 * 0x90);
  uVar9 = (ulong)(*(uint *)(plVar23 + 0x10) - 1);
  if (((*(long *)(plVar23[uVar9] + 0x68) == param_6) &&
      (*(long *)(*(long *)(lVar8 + uVar19 * 0x90 + uVar9 * 8 + 0x40) + 0x70) != param_7)) &&
     (uVar13 = *(uint *)(param_3 + 1), uVar13 != 0)) {
    iVar14 = 0;
    uVar9 = *(ulong *)(*plVar23 + 0x68);
    lVar10 = *param_3;
    do {
      iVar1 = iVar14 + (uVar13 >> 1);
      lVar16 = (long)iVar1;
      uVar17 = *(ulong *)(lVar10 + (long)iVar1 * 0x90);
      if (uVar17 == uVar9) {
        puVar15 = (uint *)(lVar10 + lVar16 * 0x90 + 0x30);
        if ((*puVar15 != 0) && (*(char *)(lVar10 + lVar16 * 0x90 + 0x22) == '\0')) {
          plVar11 = (long *)(lVar10 + lVar16 * 0x90 + 0x28);
          lVar10 = *plVar11;
          if (*(uint *)(plVar23 + 0x10) < 2) goto LAB_03428288;
          lVar8 = lVar8 + uVar19 * 0x90;
          goto LAB_03427ef4;
        }
        break;
      }
      if (uVar17 < uVar9) {
        iVar14 = iVar1 + 1;
      }
      uVar13 = uVar13 - (uVar17 < uVar9) >> 1;
    } while (uVar13 != 0);
  }
  goto LAB_034283dc;
LAB_03428288:
  do {
    uVar2 = *(uint *)(param_8 + 5);
    uVar13 = *(uint *)((long)param_8 + 0x2c);
    if (uVar2 < uVar13) {
LAB_034282d4:
      if (uVar2 < uVar13) {
        uVar13 = *(uint *)(param_8 + 5);
        lVar8 = param_8[4];
        *(uint *)(param_8 + 5) = uVar13 + 1;
        if (lVar8 != 0) {
          puVar22 = (undefined4 *)(lVar8 + (ulong)uVar13 * 0x160);
          lVar8 = lVar8 + (ulong)uVar13 * 0x160;
          memset(puVar22,0,0x8c);
          *(undefined8 *)(lVar8 + 0x8c) = 0x42c80000;
          memset((void *)(lVar8 + 0xb8),0xff,0x80);
          *(undefined8 *)(lVar8 + 0x94) = 0;
          *(undefined8 *)(lVar8 + 0x9c) = 0;
          *(undefined8 *)(lVar8 + 0xa4) = 0;
          *(undefined8 *)(lVar8 + 0xac) = 0;
          uVar3 = param_2[1];
          uVar5 = param_2[2];
          *puVar22 = *param_2;
          *(undefined4 *)(lVar8 + 4) = uVar3;
          *(undefined4 *)(lVar8 + 8) = uVar5;
          *(undefined4 *)(lVar8 + 0x80) = 0;
          *(undefined4 *)(lVar8 + 0x8c) = 0x42c80000;
          local_c0 = *(undefined4 *)(lVar10 + 0x74);
          local_c8 = *(undefined8 *)(lVar10 + 0x6c);
          FUN_03425e28(puVar22,lVar10,&local_c8,param_4);
          local_d8 = *(undefined4 *)(param_5 + 0x18);
          uStack_d4 = *(undefined4 *)(param_5 + 0x1c);
          local_d0 = *(undefined4 *)(param_5 + 0x20);
          FUN_034263b8(puVar22,plVar23,0,&local_d8,1);
          FUN_03426b48(0,0,puVar22,param_5);
        }
      }
    }
    else {
      iVar14 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar14 = 1;
      }
      uVar13 = iVar14 + uVar13;
      lVar8 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(9,param_8[4],(ulong)uVar13 * 0x160,0x10);
      if (lVar8 != 0) {
        param_8[4] = lVar8;
        *(uint *)((long)param_8 + 0x2c) = uVar13;
        goto LAB_034282d4;
      }
    }
    lVar10 = lVar10 + 0x94;
  } while (lVar10 != *plVar11 + (ulong)*puVar15 * 0x94);
LAB_034283dc:
  uVar19 = uVar19 + 1;
  if (*(uint *)(param_1 + 1) <= uVar19) {
    if (*(uint *)(param_1 + 1) == 0) {
      return;
    }
    if (*(int *)(param_8 + 5) == 0) {
      *(undefined1 *)((long)param_8 + 0x1a) = 1;
      return;
    }
    return;
  }
  goto LAB_03427e20;
LAB_03427ef4:
  lVar16 = *(long *)(lVar8 + 0x48);
  uVar12 = *(ulong *)(*(long *)(lVar8 + 8) + 0x68);
  uVar13 = *(uint *)(lVar16 + 0x88);
  uVar17 = uVar12;
  if (uVar12 <= uVar9) {
    uVar17 = uVar9;
    uVar9 = uVar12;
  }
  if (uVar13 != 0) {
    lVar16 = *(long *)(lVar16 + 0x80);
    iVar14 = 0;
    do {
      iVar1 = iVar14 + (uVar13 >> 1);
      puVar18 = (ulong *)(lVar16 + (long)iVar1 * 0x48);
      uVar12 = *puVar18;
      uVar4 = puVar18[1];
      if (uVar12 == uVar9 && uVar4 == uVar17) {
        if (*(float *)(lVar16 + (long)iVar1 * 0x48 + 0x14) != 3.4028235e+38) {
          lVar16 = lVar16 + (long)iVar1 * 0x48;
          puVar21 = (uint *)(lVar16 + 0x40);
          if (*puVar21 == 0) goto LAB_03428254;
          plVar20 = (long *)(lVar16 + 0x38);
          lVar16 = *plVar20;
          goto LAB_034280d4;
        }
        break;
      }
      bVar6 = uVar4 < uVar17;
      if (uVar12 != uVar9) {
        bVar6 = uVar12 < uVar9;
      }
      if (bVar6 != 0) {
        iVar14 = iVar1 + 1;
      }
      uVar13 = uVar13 - bVar6 >> 1;
    } while (uVar13 != 0);
  }
  uVar2 = *(uint *)(param_8 + 5);
  uVar13 = *(uint *)((long)param_8 + 0x2c);
  if (uVar2 < uVar13) {
LAB_03427fd0:
    if (uVar2 < uVar13) {
      uVar13 = *(uint *)(param_8 + 5);
      lVar16 = param_8[4];
      *(uint *)(param_8 + 5) = uVar13 + 1;
      if (lVar16 != 0) {
        puVar22 = (undefined4 *)(lVar16 + (ulong)uVar13 * 0x160);
        lVar16 = lVar16 + (ulong)uVar13 * 0x160;
        memset(puVar22,0,0x8c);
        *(undefined8 *)(lVar16 + 0x8c) = 0x42c80000;
        memset((void *)(lVar16 + 0xb8),0xff,0x80);
        *(undefined8 *)(lVar16 + 0x94) = 0;
        *(undefined8 *)(lVar16 + 0x9c) = 0;
        *(undefined8 *)(lVar16 + 0xa4) = 0;
        *(undefined8 *)(lVar16 + 0xac) = 0;
        uVar3 = param_2[1];
        uVar5 = param_2[2];
        *puVar22 = *param_2;
        *(undefined4 *)(lVar16 + 4) = uVar3;
        *(undefined4 *)(lVar16 + 8) = uVar5;
        *(undefined4 *)(lVar16 + 0x80) = 0;
        *(undefined4 *)(lVar16 + 0x8c) = 0x42c80000;
        local_a0 = *(undefined4 *)(lVar10 + 0x74);
        local_a8 = *(undefined8 *)(lVar10 + 0x6c);
        FUN_03425e28(puVar22,lVar10,&local_a8,param_4);
        local_b8 = *(undefined4 *)(param_5 + 0x18);
        uStack_b4 = *(undefined4 *)(param_5 + 0x1c);
        local_b0 = *(undefined4 *)(param_5 + 0x20);
        FUN_034263b8(puVar22,plVar23,0,&local_b8,0);
        FUN_03426b48(0,0,puVar22,param_5);
      }
    }
  }
  else {
    iVar14 = uVar13 + (uVar13 >> 1);
    if (uVar13 == 0) {
      iVar14 = 1;
    }
    uVar13 = iVar14 + uVar13;
    lVar16 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(9,param_8[4],(ulong)uVar13 * 0x160,0x10);
    if (lVar16 != 0) {
      param_8[4] = lVar16;
      *(uint *)((long)param_8 + 0x2c) = uVar13;
      goto LAB_03427fd0;
    }
  }
  goto LAB_03428254;
LAB_034280d4:
  do {
    uVar2 = *(uint *)(param_8 + 5);
    uVar13 = *(uint *)((long)param_8 + 0x2c);
    if (uVar2 < uVar13) {
LAB_03428120:
      if (uVar2 < uVar13) {
        uVar13 = *(uint *)(param_8 + 5);
        lVar7 = param_8[4];
        *(uint *)(param_8 + 5) = uVar13 + 1;
        if (lVar7 != 0) {
          puVar22 = (undefined4 *)(lVar7 + (ulong)uVar13 * 0x160);
          lVar7 = lVar7 + (ulong)uVar13 * 0x160;
          memset(puVar22,0,0x8c);
          *(undefined8 *)(lVar7 + 0x8c) = 0x42c80000;
          memset((void *)(lVar7 + 0xb8),0xff,0x80);
          *(undefined8 *)(lVar7 + 0x94) = 0;
          *(undefined8 *)(lVar7 + 0x9c) = 0;
          *(undefined8 *)(lVar7 + 0xa4) = 0;
          *(undefined8 *)(lVar7 + 0xac) = 0;
          uVar3 = param_2[1];
          uVar5 = param_2[2];
          *puVar22 = *param_2;
          *(undefined4 *)(lVar7 + 4) = uVar3;
          *(undefined4 *)(lVar7 + 8) = uVar5;
          *(undefined4 *)(lVar7 + 0x80) = 0;
          *(undefined4 *)(lVar7 + 0x8c) = 0x42c80000;
          local_80 = *(undefined4 *)(lVar10 + 0x74);
          local_88 = *(undefined8 *)(lVar10 + 0x6c);
          FUN_03425e28(puVar22,lVar10,&local_88,param_4);
          FUN_034260b4(puVar22,lVar16,*plVar23,*(long *)(lVar8 + 8),
                       *(undefined8 *)(*(long *)(lVar8 + 0x40) + 0x70),
                       *(undefined8 *)(*(long *)(lVar8 + 0x48) + 0x70));
          local_98 = *(undefined4 *)(param_5 + 0x18);
          uStack_94 = *(undefined4 *)(param_5 + 0x1c);
          local_90 = *(undefined4 *)(param_5 + 0x20);
          FUN_034263b8(puVar22,plVar23,1,&local_98,1);
          FUN_03426b48(0,0,puVar22,param_5);
        }
      }
    }
    else {
      iVar14 = uVar13 + (uVar13 >> 1);
      if (uVar13 == 0) {
        iVar14 = 1;
      }
      uVar13 = iVar14 + uVar13;
      lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(9,param_8[4],(ulong)uVar13 * 0x160,0x10);
      if (lVar7 != 0) {
        param_8[4] = lVar7;
        *(uint *)((long)param_8 + 0x2c) = uVar13;
        goto LAB_03428120;
      }
    }
    lVar16 = lVar16 + 0x94;
  } while (lVar16 != *plVar20 + (ulong)*puVar21 * 0x94);
LAB_03428254:
  lVar10 = lVar10 + 0x94;
  if (lVar10 == *plVar11 + (ulong)*puVar15 * 0x94) goto LAB_034283dc;
  uVar9 = *(ulong *)(*plVar23 + 0x68);
  goto LAB_03427ef4;
}


