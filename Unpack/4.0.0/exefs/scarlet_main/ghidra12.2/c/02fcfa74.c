/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fcfa74; name: FUN_02fcfa74
 */


void FUN_02fcfa74(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong local_68;
  
  puVar4 = PTR_PTR_047d1a50;
  uVar16 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar16 * 2;
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  puVar5 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar9 * 0x500,&local_68)
  ;
  iVar14 = (int)param_1[1];
  if (0 < iVar14) {
    lVar15 = *param_1;
    iVar13 = 0;
    puVar12 = puVar5;
    lVar17 = lVar15;
    do {
      *puVar12 = 0;
      puVar12[2] = puVar12 + 6;
      puVar12[3] = 0x8000001800000000;
      uVar6 = FUN_0220e630(&DAT_04612258,"Not implemented");
      if ((uVar6 & 1) != 0) {
        CallSupervisor(0x26);
      }
      uVar11 = *(undefined8 *)(lVar17 + 0x100);
      *(undefined8 *)((long)puVar12 + 0x106) = *(undefined8 *)(lVar17 + 0x106);
      puVar12[0x20] = uVar11;
      puVar12[0x22] = 0;
      puVar12[0x23] = 0x8000000000000000;
      uVar3 = *(uint *)(lVar17 + 0x118);
      if ((int)uVar3 < 1) {
        puVar12[0x22] = 0;
        puVar12[0x23] = 0x8000000000000000;
      }
      else {
        puVar18 = *(undefined8 **)(lVar17 + 0x110);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 3);
        uVar2 = uVar3 & 7;
        puVar12[0x22] = puVar7;
        *(uint *)(puVar12 + 0x23) = uVar3;
        *(uint *)((long)puVar12 + 0x11c) = uVar3;
        if (6 < uVar3 - 1) {
          iVar10 = -(uVar3 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            puVar8[2] = puVar18[2];
            puVar8[3] = puVar18[3];
            puVar8[4] = puVar18[4];
            puVar8[5] = puVar18[5];
            puVar8[6] = puVar18[6];
            puVar1 = puVar18 + 7;
            puVar7 = puVar8 + 8;
            puVar18 = puVar18 + 8;
            iVar10 = iVar10 + 8;
            puVar8[7] = *puVar1;
            puVar8 = puVar7;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar18;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      memcpy(puVar12 + 0x24,(void *)(lVar17 + 0x120),0xd0);
      puVar12[0x3e] = *(undefined8 *)(lVar17 + 0x1f0);
      uVar11 = *(undefined8 *)(lVar17 + 0x200);
      *(undefined8 *)((long)puVar12 + 0x206) = *(undefined8 *)(lVar17 + 0x206);
      puVar12[0x40] = uVar11;
      puVar12[0x42] = 0;
      puVar12[0x43] = 0x8000000000000000;
      uVar3 = *(uint *)(lVar17 + 0x218);
      if ((int)uVar3 < 1) {
        puVar12[0x42] = 0;
        puVar12[0x43] = 0x8000000000000000;
      }
      else {
        puVar18 = *(undefined8 **)(lVar17 + 0x210);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 3);
        uVar2 = uVar3 & 7;
        puVar12[0x42] = puVar7;
        *(uint *)(puVar12 + 0x43) = uVar3;
        *(uint *)((long)puVar12 + 0x21c) = uVar3;
        if (6 < uVar3 - 1) {
          iVar10 = -(uVar3 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            puVar8[2] = puVar18[2];
            puVar8[3] = puVar18[3];
            puVar8[4] = puVar18[4];
            puVar8[5] = puVar18[5];
            puVar8[6] = puVar18[6];
            puVar1 = puVar18 + 7;
            puVar7 = puVar8 + 8;
            puVar18 = puVar18 + 8;
            iVar10 = iVar10 + 8;
            puVar8[7] = *puVar1;
            puVar8 = puVar7;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar18;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      memcpy(puVar12 + 0x44,(void *)(lVar17 + 0x220),0xd0);
      puVar12[0x5e] = *(undefined8 *)(lVar17 + 0x2f0);
      uVar11 = *(undefined8 *)(lVar17 + 0x300);
      *(undefined8 *)((long)puVar12 + 0x306) = *(undefined8 *)(lVar17 + 0x306);
      puVar12[0x60] = uVar11;
      puVar12[0x62] = 0;
      puVar12[99] = 0x8000000000000000;
      uVar3 = *(uint *)(lVar17 + 0x318);
      if ((int)uVar3 < 1) {
        puVar12[0x62] = 0;
        puVar12[99] = 0x8000000000000000;
      }
      else {
        puVar18 = *(undefined8 **)(lVar17 + 0x310);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 3);
        uVar2 = uVar3 & 7;
        puVar12[0x62] = puVar7;
        *(uint *)(puVar12 + 99) = uVar3;
        *(uint *)((long)puVar12 + 0x31c) = uVar3;
        if (6 < uVar3 - 1) {
          iVar10 = -(uVar3 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            puVar8[2] = puVar18[2];
            puVar8[3] = puVar18[3];
            puVar8[4] = puVar18[4];
            puVar8[5] = puVar18[5];
            puVar8[6] = puVar18[6];
            puVar1 = puVar18 + 7;
            puVar7 = puVar8 + 8;
            puVar18 = puVar18 + 8;
            iVar10 = iVar10 + 8;
            puVar8[7] = *puVar1;
            puVar8 = puVar7;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar18;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      memcpy(puVar12 + 100,(void *)(lVar17 + 800),0xd0);
      puVar12[0x7e] = *(undefined8 *)(lVar17 + 0x3f0);
      uVar11 = *(undefined8 *)(lVar17 + 0x400);
      *(undefined8 *)((long)puVar12 + 0x406) = *(undefined8 *)(lVar17 + 0x406);
      puVar12[0x80] = uVar11;
      puVar12[0x82] = 0;
      puVar12[0x83] = 0x8000000000000000;
      uVar3 = *(uint *)(lVar17 + 0x418);
      if ((int)uVar3 < 1) {
        puVar12[0x82] = 0;
        puVar12[0x83] = 0x8000000000000000;
      }
      else {
        puVar18 = *(undefined8 **)(lVar17 + 0x410);
        puVar7 = (undefined8 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,(ulong)uVar3 << 3);
        uVar2 = uVar3 & 7;
        puVar12[0x82] = puVar7;
        *(uint *)(puVar12 + 0x83) = uVar3;
        *(uint *)((long)puVar12 + 0x41c) = uVar3;
        if (6 < uVar3 - 1) {
          iVar10 = -(uVar3 & 0xfffffff8);
          puVar8 = puVar7;
          do {
            *puVar8 = *puVar18;
            puVar8[1] = puVar18[1];
            puVar8[2] = puVar18[2];
            puVar8[3] = puVar18[3];
            puVar8[4] = puVar18[4];
            puVar8[5] = puVar18[5];
            puVar8[6] = puVar18[6];
            puVar1 = puVar18 + 7;
            puVar7 = puVar8 + 8;
            puVar18 = puVar18 + 8;
            iVar10 = iVar10 + 8;
            puVar8[7] = *puVar1;
            puVar8 = puVar7;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *puVar18;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      memcpy(puVar12 + 0x84,(void *)(lVar17 + 0x420),0xd0);
      puVar7 = (undefined8 *)(lVar17 + 0x4f0);
      iVar13 = iVar13 + 1;
      lVar17 = lVar17 + 0x500;
      puVar12[0x9e] = *puVar7;
      puVar12 = puVar12 + 0xa0;
    } while (iVar13 != iVar14);
    do {
      FUN_02fcf60c(lVar15);
      lVar15 = lVar15 + 0x500;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  iVar14 = (int)uVar9;
  uVar6 = uVar9 * 0x500 + 0x500;
  if (uVar6 <= local_68) {
    local_68 = local_68 - 0x500;
    iVar14 = iVar14 + 1;
    if (uVar6 <= local_68) {
      iVar14 = iVar14 + (int)((local_68 + uVar9 * -0x500) / 0x500);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,*param_1,uVar16 * 0x500);
  }
  *(int *)((long)param_1 + 0xc) = iVar14;
  *param_1 = (long)puVar5;
  return;
}


