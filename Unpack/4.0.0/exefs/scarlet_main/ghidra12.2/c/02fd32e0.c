/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fd32e0; name: FUN_02fd32e0
 */


void FUN_02fd32e0(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong local_68;
  
  uVar16 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar10 = uVar16 * 2;
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  puVar6 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                     (PTR_PTR_047d1a50,uVar10 * 0x710,&local_68);
  puVar5 = PTR_DAT_047e48c8;
  iVar13 = (int)param_1[1];
  if (0 < iVar13) {
    lVar18 = *param_1;
    iVar15 = 0;
    lVar17 = lVar18;
    puVar19 = puVar6;
    do {
      *puVar19 = 0;
      puVar19[2] = puVar19 + 6;
      *(undefined4 *)(puVar19 + 3) = 0;
      *(undefined4 *)((long)puVar19 + 0x1c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar19[0x20] = 0;
      puVar19[0x22] = puVar19 + 0x26;
      *(undefined4 *)(puVar19 + 0x23) = 0;
      *(undefined4 *)((long)puVar19 + 0x11c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar19[0x40] = 0;
      puVar19[0x42] = puVar19 + 0x46;
      *(undefined4 *)(puVar19 + 0x43) = 0;
      *(undefined4 *)((long)puVar19 + 0x21c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar19[0x60] = 0;
      puVar19[0x62] = puVar19 + 0x66;
      *(undefined4 *)(puVar19 + 99) = 0;
      *(undefined4 *)((long)puVar19 + 0x31c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar19[0x80] = 0;
      puVar19[0x82] = puVar19 + 0x86;
      *(undefined4 *)(puVar19 + 0x83) = 0;
      *(undefined4 *)((long)puVar19 + 0x41c) = 0x80000018;
      uVar7 = FUN_0220e630(&DAT_04612318,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      uVar12 = *(undefined8 *)(lVar17 + 0x500);
      *(undefined8 *)((long)puVar19 + 0x506) = *(undefined8 *)(lVar17 + 0x506);
      puVar19[0xa0] = uVar12;
      puVar19[0xa2] = 0;
      puVar19[0xa3] = 0x8000000000000000;
      uVar4 = *(uint *)(lVar17 + 0x518);
      if ((int)uVar4 < 1) {
        puVar19[0xa2] = 0;
        puVar19[0xa3] = 0x8000000000000000;
      }
      else {
        puVar14 = *(undefined8 **)(lVar17 + 0x510);
        puVar8 = (undefined8 *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 3)
        ;
        uVar3 = uVar4 & 7;
        puVar19[0xa2] = puVar8;
        *(uint *)(puVar19 + 0xa3) = uVar4;
        *(uint *)((long)puVar19 + 0x51c) = uVar4;
        if (6 < uVar4 - 1) {
          iVar11 = -(uVar4 & 0xfffffff8);
          puVar9 = puVar8;
          do {
            *puVar9 = *puVar14;
            puVar9[1] = puVar14[1];
            puVar9[2] = puVar14[2];
            puVar9[3] = puVar14[3];
            puVar9[4] = puVar14[4];
            puVar9[5] = puVar14[5];
            puVar9[6] = puVar14[6];
            puVar2 = puVar14 + 7;
            puVar8 = puVar9 + 8;
            puVar14 = puVar14 + 8;
            iVar11 = iVar11 + 8;
            puVar9[7] = *puVar2;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = *puVar14;
          puVar8 = puVar8 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      memcpy(puVar19 + 0xa4,(void *)(lVar17 + 0x520),0xd0);
      puVar19[0xbe] = *(undefined8 *)(lVar17 + 0x5f0);
      uVar12 = *(undefined8 *)(lVar17 + 0x600);
      *(undefined8 *)((long)puVar19 + 0x606) = *(undefined8 *)(lVar17 + 0x606);
      puVar19[0xc0] = uVar12;
      puVar19[0xc2] = 0;
      puVar19[0xc3] = 0x8000000000000000;
      uVar4 = *(uint *)(lVar17 + 0x618);
      if ((int)uVar4 < 1) {
        puVar19[0xc2] = 0;
        puVar19[0xc3] = 0x8000000000000000;
      }
      else {
        puVar14 = *(undefined8 **)(lVar17 + 0x610);
        puVar8 = (undefined8 *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 3)
        ;
        uVar3 = uVar4 & 7;
        puVar19[0xc2] = puVar8;
        *(uint *)(puVar19 + 0xc3) = uVar4;
        *(uint *)((long)puVar19 + 0x61c) = uVar4;
        if (6 < uVar4 - 1) {
          iVar11 = -(uVar4 & 0xfffffff8);
          puVar9 = puVar8;
          do {
            *puVar9 = *puVar14;
            puVar9[1] = puVar14[1];
            puVar9[2] = puVar14[2];
            puVar9[3] = puVar14[3];
            puVar9[4] = puVar14[4];
            puVar9[5] = puVar14[5];
            puVar9[6] = puVar14[6];
            puVar2 = puVar14 + 7;
            puVar8 = puVar9 + 8;
            puVar14 = puVar14 + 8;
            iVar11 = iVar11 + 8;
            puVar9[7] = *puVar2;
            puVar9 = puVar8;
          } while (iVar11 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar8 = *puVar14;
          puVar8 = puVar8 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      memcpy(puVar19 + 0xc4,(void *)(lVar17 + 0x620),0xd0);
      puVar19[0xde] = *(undefined8 *)(lVar17 + 0x6f0);
      puVar1 = (undefined1 *)(lVar17 + 0x700);
      iVar15 = iVar15 + 1;
      lVar17 = lVar17 + 0x710;
      *(undefined1 *)(puVar19 + 0xe0) = *puVar1;
      puVar19 = puVar19 + 0xe2;
    } while (iVar15 != iVar13);
    do {
      FUN_02fd2cc0(lVar18);
      lVar18 = lVar18 + 0x710;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  iVar13 = (int)uVar10;
  uVar7 = uVar10 * 0x710 + 0x710;
  if (uVar7 <= local_68) {
    local_68 = local_68 - 0x710;
    iVar13 = iVar13 + 1;
    if (uVar7 <= local_68) {
      iVar13 = iVar13 + (int)((local_68 + uVar10 * -0x710) / 0x710);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar16 * 0x710);
  }
  *(int *)((long)param_1 + 0xc) = iVar13;
  *param_1 = (long)puVar6;
  return;
}


