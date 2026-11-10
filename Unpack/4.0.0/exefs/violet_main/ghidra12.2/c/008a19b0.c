/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a19b0; name: FUN_008a19b0
 */


void FUN_008a19b0(long param_1,long param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  ulong local_78;
  byte local_64 [4];
  
  puVar10 = PTR_DAT_047d2368;
  puVar9 = PTR_DAT_047d2358;
  puVar8 = PTR_DAT_047d2248;
  bVar6 = *(byte *)(param_1 + 0x14);
  if ((bVar6 & 3) != 0) {
    local_78 = 0;
    lVar20 = *(long *)(param_2 + 0x18);
    lVar18 = *(long *)(param_1 + 0x18);
    uVar19 = 0;
    do {
      puVar2 = (ushort *)(lVar20 + uVar19 * 0x10);
      plVar21 = *(long **)(puVar2 + 4);
      if (((*PTR_DAT_047d2370 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d2370), iVar11 != 0)) {
        if (((*PTR_DAT_047d2378 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d2378), iVar11 != 0)) {
          *(undefined8 *)PTR_DAT_047d2380 = 0;
          __cxa_guard_release(PTR_DAT_047d2378);
        }
        *(undefined **)puVar10 = PTR_DAT_047d2380;
        __cxa_guard_release(PTR_DAT_047d2370);
      }
      if (plVar21 != (long *)0x0) {
        for (plVar12 = (long *)(**(code **)*plVar21)(plVar21); plVar12 != (long *)0x0;
            plVar12 = (long *)*plVar12) {
          if (plVar12 == (long *)puVar10) {
            *(ushort *)(lVar18 + uVar19 * 0x10) =
                 *(ushort *)(lVar18 + uVar19 * 0x10) & 0xe0ff | 0x1000;
            lVar17 = plVar21[2];
            lVar13 = FUN_00896e5c(0x18,0x10);
            if (lVar13 != 0) {
              FUN_008b409c(lVar13,lVar17);
            }
            *(long *)(lVar18 + uVar19 * 0x10 + 8) = lVar13;
            goto LAB_008a1a58;
          }
        }
      }
      lVar13 = (**(code **)(*plVar21 + 0x48))(plVar21);
      if (lVar13 != 0) {
        puVar14 = (undefined8 *)(**(code **)(*plVar21 + 0x48))(plVar21);
        if (((*PTR_DAT_047d2240 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d2240), iVar11 != 0)) {
          if (((*PTR_DAT_047d2108 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar11 != 0)) {
            *(undefined8 *)PTR_DAT_047d2110 = 0;
            __cxa_guard_release(PTR_DAT_047d2108);
          }
          *(undefined **)puVar8 = PTR_DAT_047d2110;
          __cxa_guard_release(PTR_DAT_047d2240);
        }
        if (puVar14 != (undefined8 *)0x0) {
          for (plVar12 = (long *)(**(code **)*puVar14)(puVar14); plVar12 != (long *)0x0;
              plVar12 = (long *)*plVar12) {
            if (plVar12 == (long *)puVar8) goto LAB_008a1b08;
          }
          puVar14 = (undefined8 *)0x0;
        }
LAB_008a1b08:
        puVar15 = (undefined8 *)(**(code **)(*plVar21 + 0x48))(plVar21);
        if (((*PTR_DAT_047d2350 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d2350), iVar11 != 0)) {
          if (((*PTR_DAT_047d2108 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d2108), iVar11 != 0)) {
            *(undefined8 *)PTR_DAT_047d2110 = 0;
            __cxa_guard_release(PTR_DAT_047d2108);
          }
          *(undefined **)puVar9 = PTR_DAT_047d2110;
          __cxa_guard_release(PTR_DAT_047d2350);
        }
        if (puVar15 != (undefined8 *)0x0) {
          for (plVar21 = (long *)(**(code **)*puVar15)(puVar15); plVar21 != (long *)0x0;
              plVar21 = (long *)*plVar21) {
            if (plVar21 == (long *)puVar9) goto LAB_008a1b58;
          }
          puVar15 = (undefined8 *)0x0;
        }
LAB_008a1b58:
        uVar16 = FUN_0089a654(param_3[3],*puVar2 >> 9 & 7);
        local_64[0] = 0;
        if (puVar14 == (undefined8 *)0x0) {
          if (puVar15 == (undefined8 *)0x0) {
            lVar13 = 0;
          }
          else {
            lVar13 = FUN_0089a314(uVar16,*param_3,param_3[2],puVar15);
            local_64[0] = 1;
            uVar4 = *(uint *)(param_1 + 0x10);
            uVar5 = *(uint *)(param_2 + 0x10);
            lVar17 = (local_78 & 0xff) * 0x20;
            puVar14 = (undefined8 *)
                      (*(long *)(param_2 + 0x18) +
                       (long)(int)((uVar5 >> 4 & 0x1c) + (uVar5 >> 8 & 0xc) + (uVar5 >> 0xc & 8) +
                                   (uVar5 >> 0xc & 1) * 0xc + (uVar5 >> 0x10 & 1) * 0x1c +
                                   (uVar5 >> 0xc & 0x10) * (uVar5 >> 6 & 7) +
                                   (uVar5 >> 0x11 & 1) * 0x74 +
                                   ((uVar5 & 3) * 0x10 + (uVar5 & 0x30) | uVar5 >> 6 & 8) +
                                  ((uVar5 >> 0xd & 3) + (uVar5 >> 2 & 3)) * 0x14) + lVar17);
            puVar15 = (undefined8 *)
                      (*(long *)(param_1 + 0x18) +
                       (long)(int)((uVar4 >> 4 & 0x1c) + (uVar4 >> 8 & 0xc) + (uVar4 >> 0xc & 8) +
                                   (uVar4 >> 0xc & 1) * 0xc + (uVar4 >> 0x10 & 1) * 0x1c +
                                   (uVar4 >> 0xc & 0x10) * (uVar4 >> 6 & 7) +
                                   (uVar4 >> 0x11 & 1) * 0x74 +
                                   ((uVar4 & 3) * 0x10 + (uVar4 & 0x30) | uVar4 >> 6 & 8) +
                                  ((uVar4 >> 0xd & 3) + (uVar4 >> 2 & 3)) * 0x14) + lVar17);
            uVar16 = puVar14[1];
            uVar3 = puVar14[2];
            *puVar15 = *puVar14;
            puVar15[1] = uVar16;
            local_78 = (ulong)((int)local_78 + 1);
            puVar15[2] = uVar3;
            puVar15[3] = lVar13;
            uVar16 = *(undefined8 *)((long)puVar15 + 0xc);
            *(undefined8 *)(lVar13 + 0x140) = *(undefined8 *)((long)puVar15 + 4);
            *(undefined8 *)(lVar13 + 0x148) = uVar16;
          }
        }
        else {
          lVar13 = FUN_0089a180(uVar16,local_64,puVar14);
        }
        puVar1 = (ushort *)(lVar18 + uVar19 * 0x10);
        uVar7 = *puVar1 & 0xfeff | (ushort)local_64[0] << 8;
        *puVar1 = uVar7;
        *puVar1 = uVar7 & 0xf1ff | *puVar2 & 0xe00;
        *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(lVar13 + 8);
      }
LAB_008a1a58:
      uVar19 = uVar19 + 1;
    } while (uVar19 != (bVar6 & 3));
  }
  return;
}


