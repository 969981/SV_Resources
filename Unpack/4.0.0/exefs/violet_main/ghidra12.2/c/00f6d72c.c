/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6d72c; name: FUN_00f6d72c
 */


void FUN_00f6d72c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined3 *puVar3;
  undefined3 *puVar4;
  uint uVar5;
  undefined3 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined4 local_120;
  ushort local_110;
  undefined1 local_10e;
  MutexType *local_108;
  char local_100;
  undefined1 auStack_f8 [56];
  undefined3 *local_c0;
  undefined3 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88 [5];
  
  if ((((*(char *)(param_1 + 0x70) != '\0') &&
       ((*(char *)(param_1 + 0x68) != '\0' ||
        ((*(long *)(param_1 + 0x50) != 0 && (*(short *)(*(long *)(param_1 + 0x50) + 0x1a) != 0))))))
      && (plVar14 = *(long **)(param_1 + 0x60), plVar14 != (long *)0x0)) &&
     (*(long *)PTR_DAT_047d0a08 != 0)) {
    bVar15 = *(byte *)(param_1 + 0x48);
    iVar7 = FUN_00f21480();
    if ((((iVar7 == 1) && (bVar15 < 3)) && (*(long *)PTR_DAT_047d0860 != 0)) &&
       (plVar8 = (long *)FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,(&DAT_0485ea68)[bVar15],0x7c)
       , plVar8 != (long *)0x0)) {
      uVar16 = 0;
      do {
        uVar17 = 1L << (uVar16 & 0x3f);
        if ((*(ulong *)(param_1 + 0x78) & uVar17) != 0) {
          local_c0 = (undefined3 *)CONCAT71(local_c0._1_7_,(char)uVar16);
          lVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
          if (lVar9 != 0) {
            plVar1 = (long *)(param_1 + 0x80);
            FUN_016947d8(local_88);
            uStack_a8 = *(undefined8 *)(param_1 + 8);
            local_c0 = (undefined3 *)0x0;
            puStack_b8 = (undefined3 *)0x0;
            local_90 = 0;
            local_b0 = 0;
            local_a0 = 0x5555555555555555;
            uStack_98 = 0;
            FUN_00f6ee1c(auStack_f8,plVar1);
            lVar12 = *(long *)(param_1 + 0x80);
            if (*(long *)(param_1 + 0x88) != lVar12) {
              lVar18 = 0;
              uVar19 = 0;
              do {
                lVar2 = lVar12 + lVar18;
                if (*(char *)(lVar2 + 0x10) == '\0') {
LAB_00f6d8f0:
                  uVar13 = *(ulong *)(lVar12 + lVar18 + 8);
                  if ((uVar13 & uVar17) != 0) {
                    *(ulong *)(lVar12 + lVar18 + 8) = uVar13 & (uVar17 ^ 0xffffffffffffffff);
                    local_110 = *(ushort *)(*plVar1 + lVar18);
                    local_10e = 0;
                    FUN_00f6da84(&local_c0,&local_110);
                    lVar12 = *plVar1;
                  }
                }
                else if ((*(ulong *)(lVar2 + 8) & uVar17) == 0) {
                  *(ulong *)(lVar2 + 8) = *(ulong *)(lVar2 + 8) | uVar17;
                  local_110 = *(ushort *)(*plVar1 + lVar18);
                  local_10e = 1;
                  FUN_00f6da84(&local_c0,&local_110);
                  lVar12 = *plVar1;
                  if (*(char *)(lVar12 + lVar18 + 0x10) == '\0') goto LAB_00f6d8f0;
                }
                uVar19 = uVar19 + 1;
                lVar18 = lVar18 + 0x18;
              } while (uVar19 < (ulong)((*(long *)(param_1 + 0x88) - lVar12 >> 3) *
                                       -0x5555555555555555));
            }
            if (local_c0 == puStack_b8) {
              bVar15 = 4;
            }
            else {
              local_120 = CONCAT31(local_120._1_3_,((char)puStack_b8 - (char)local_c0) * -0x55);
              puVar3 = local_c0;
              puVar4 = puStack_b8;
              if (local_88[0] != 0) {
                FUN_00f6ea4c(&local_110,&local_120,local_88[0] + 8);
                puVar3 = local_c0;
                puVar4 = puStack_b8;
              }
              for (; puVar6 = puStack_b8, puVar3 != puStack_b8;
                  puVar3 = (undefined3 *)((long)puVar3 + 3)) {
                uVar5 = (uint)local_120 >> 0x18;
                local_120 = CONCAT13((char)uVar5,*puVar3);
                puStack_b8 = puVar4;
                if (local_88[0] != 0) {
                  FUN_00f6dad8(&local_110,&local_120,local_88[0] + 8);
                }
                puVar4 = puStack_b8;
                puStack_b8 = puVar6;
              }
              puStack_b8 = puVar4;
              FUN_00f6e3b0(&local_110);
              uVar10 = FUN_014c27b0(local_88);
              uVar11 = FUN_014c27c8(local_88);
              (**(code **)(*plVar8 + 0x60))(&local_120,plVar8,lVar9,uVar10,uVar11);
              bVar15 = local_120 != 0;
              if ((bool)bVar15) {
                FUN_00f6e370(plVar1,auStack_f8);
              }
              if ((char)local_110 != '\0') {
                if (local_100 != '\0') {
                  nn::os::UnlockMutex(local_108);
                }
                local_110 = local_110 & 0xff00;
              }
            }
            FUN_00f6e230(auStack_f8);
            FUN_00f6e2d0(&local_c0);
            FUN_01694aa8(local_88);
            if ((bVar15 | 4) != 4) {
              return;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 8);
      *(undefined1 *)(param_1 + 0x70) = 0;
    }
  }
  return;
}


