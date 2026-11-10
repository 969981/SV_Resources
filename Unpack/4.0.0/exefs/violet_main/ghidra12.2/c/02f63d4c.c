/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f63d4c; name: FUN_02f63d4c
 */


void FUN_02f63d4c(long *param_1,ulong param_2)

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
  undefined8 *puVar18;
  long lVar19;
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
                     (PTR_PTR_047d1a50,uVar10 * 0x610,&local_68);
  puVar5 = PTR_DAT_047e48c8;
  iVar13 = (int)param_1[1];
  if (0 < iVar13) {
    lVar19 = *param_1;
    iVar15 = 0;
    lVar17 = lVar19;
    puVar18 = puVar6;
    do {
      *puVar18 = 0;
      puVar18[2] = puVar18 + 6;
      *(undefined4 *)(puVar18 + 3) = 0;
      *(undefined4 *)((long)puVar18 + 0x1c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar18[0x20] = 0;
      puVar18[0x22] = puVar18 + 0x26;
      *(undefined4 *)(puVar18 + 0x23) = 0;
      *(undefined4 *)((long)puVar18 + 0x11c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar18[0x40] = 0;
      puVar18[0x42] = puVar18 + 0x46;
      *(undefined4 *)(puVar18 + 0x43) = 0;
      *(undefined4 *)((long)puVar18 + 0x21c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar18[0x60] = 0;
      puVar18[0x62] = puVar18 + 0x66;
      *(undefined4 *)(puVar18 + 99) = 0;
      *(undefined4 *)((long)puVar18 + 0x31c) = 0x80000018;
      uVar7 = FUN_0220e630(puVar5,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      uVar12 = *(undefined8 *)(lVar17 + 0x400);
      *(undefined8 *)((long)puVar18 + 0x406) = *(undefined8 *)(lVar17 + 0x406);
      puVar18[0x80] = uVar12;
      puVar18[0x82] = 0;
      puVar18[0x83] = 0x8000000000000000;
      uVar4 = *(uint *)(lVar17 + 0x418);
      if ((int)uVar4 < 1) {
        puVar18[0x82] = 0;
        puVar18[0x83] = 0x8000000000000000;
      }
      else {
        puVar14 = *(undefined8 **)(lVar17 + 0x410);
        puVar8 = (undefined8 *)
                 (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar4 << 3)
        ;
        uVar3 = uVar4 & 7;
        puVar18[0x82] = puVar8;
        *(uint *)(puVar18 + 0x83) = uVar4;
        *(uint *)((long)puVar18 + 0x41c) = uVar4;
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
      memcpy(puVar18 + 0x84,(void *)(lVar17 + 0x420),0xd0);
      uVar12 = *(undefined8 *)(lVar17 + 0x4f0);
      puVar18[0xa0] = 0;
      puVar18[0x9e] = uVar12;
      puVar18[0xa2] = puVar18 + 0xa6;
      *(undefined4 *)(puVar18 + 0xa3) = 0;
      *(undefined4 *)((long)puVar18 + 0x51c) = 0x80000018;
      uVar7 = FUN_0220e630(&DAT_04610120,"Not implemented");
      if ((uVar7 & 1) != 0) {
        CallSupervisor(0x26);
      }
      puVar1 = (undefined1 *)(lVar17 + 0x600);
      iVar15 = iVar15 + 1;
      lVar17 = lVar17 + 0x610;
      *(undefined1 *)(puVar18 + 0xc0) = *puVar1;
      puVar18 = puVar18 + 0xc2;
    } while (iVar15 != iVar13);
    do {
      FUN_02f63808(lVar19);
      lVar19 = lVar19 + 0x610;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  iVar13 = (int)uVar10;
  uVar7 = uVar10 * 0x610 + 0x610;
  if (uVar7 <= local_68) {
    local_68 = local_68 - 0x610;
    iVar13 = iVar13 + 1;
    if (uVar7 <= local_68) {
      iVar13 = iVar13 + (int)((local_68 + uVar10 * -0x610) / 0x610);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,*param_1,uVar16 * 0x610);
  }
  *(int *)((long)param_1 + 0xc) = iVar13;
  *param_1 = (long)puVar6;
  return;
}


