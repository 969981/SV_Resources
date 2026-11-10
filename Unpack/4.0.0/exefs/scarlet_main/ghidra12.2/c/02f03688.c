/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f03688; name: FUN_02f03688
 */


int FUN_02f03688(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong *extraout_x1;
  undefined1 **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong *puVar15;
  long *plVar16;
  long lVar17;
  undefined1 *local_100;
  ulong local_f8;
  undefined1 local_f0 [128];
  undefined4 local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_047d19f0;
  uVar4 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar2 = uVar4;
  }
  iVar14 = uVar2 * 8 + 0x10;
  plVar16 = (long *)0x0;
  if (*param_1 != 0) {
    plVar16 = (long *)(*param_1 + (long)param_1);
  }
  if (uVar4 != 0) {
    lVar17 = *(long *)PTR_DAT_047d19f0;
    plVar1 = plVar16 + (int)uVar4;
    do {
      lVar11 = 0;
      if (*plVar16 != 0) {
        lVar11 = *plVar16 + (long)plVar16;
      }
      uVar5 = *(ushort *)(lVar11 + 0x18);
      local_100 = (undefined1 *)0x0;
      uVar2 = *(uint *)(lVar17 + 0x4234);
      if ((int)uVar2 < 1) {
LAB_02f03788:
        ppuVar9 = &local_100;
      }
      else {
        uVar4 = ((uint)uVar5 * -0x61c8864f & 0xff00ff00) >> 8 |
                ((uint)uVar5 * -0x61c8864f & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        uVar12 = (ulong)(uVar4 + (uVar4 >> 2) + 0x9e3779b9 & uVar2);
        lVar11 = *(long *)(lVar17 + 0x4228);
        uVar13 = *(ulong *)(lVar11 + uVar12 * 0x10);
        if (uVar13 == 0xffffffffffffffff) goto LAB_02f03788;
        if (uVar13 != uVar5) {
          do {
            uVar12 = (ulong)((int)uVar12 + 1U & uVar2);
            uVar13 = *(ulong *)(lVar11 + uVar12 * 0x10);
            if (uVar13 == 0xffffffffffffffff) goto LAB_02f03788;
          } while (uVar13 != uVar5);
        }
        ppuVar9 = (undefined1 **)(lVar11 + uVar12 * 0x10 + 8);
      }
      if ((code *)*ppuVar9 == (code *)0x0) {
        local_f0[0] = 0;
        local_100 = local_f0;
        local_f8 = 0x8000008000000001;
        local_70 = 1;
        plVar3 = (long *)0x0;
        if (*plVar16 != 0) {
          plVar3 = (long *)(*plVar16 + (long)plVar16);
        }
        uVar5 = *(ushort *)(plVar3 + 3);
        local_68 = 0;
        uVar2 = *(uint *)(*(long *)puVar6 + 0x4224);
        if ((int)uVar2 < 1) {
LAB_02f03864:
          puVar10 = &local_68;
        }
        else {
          uVar4 = ((uint)uVar5 * -0x61c8864f & 0xff00ff00) >> 8 |
                  ((uint)uVar5 * -0x61c8864f & 0xff00ff) << 8;
          uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
          lVar11 = *(long *)(*(long *)puVar6 + 0x4218);
          uVar12 = (ulong)(uVar4 + (uVar4 >> 2) + 0x9e3779b9 & uVar2);
          uVar13 = *(ulong *)(lVar11 + uVar12 * 0x10);
          if (uVar13 == 0xffffffffffffffff) goto LAB_02f03864;
          if (uVar13 != uVar5) {
            do {
              uVar12 = (ulong)((int)uVar12 + 1U & uVar2);
              uVar13 = *(ulong *)(lVar11 + uVar12 * 0x10);
              if (uVar13 == 0xffffffffffffffff) goto LAB_02f03864;
            } while (uVar13 != uVar5);
          }
          puVar10 = (undefined8 *)(lVar11 + uVar12 * 0x10 + 8);
        }
        if ((code *)*puVar10 == (code *)0x0) {
          puVar8 = (ulong *)0x0;
        }
        else {
          puVar8 = (ulong *)(*(code *)*puVar10)();
        }
        puVar15 = puVar8;
        if ((undefined8 *)*plVar3 != (undefined8 *)0x0) {
          (**(code **)*plVar3)(plVar3);
          puVar15 = extraout_x1;
          if (puVar8 != (ulong *)0x0) {
            puVar15 = puVar8;
          }
        }
        while (uVar12 = *puVar15, ((uint)uVar12 >> 3 & 1) == 0) {
          if (((uVar12 & 1) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_02f038dc;
        }
        if (puVar15 != (ulong *)0x0) {
          uVar12 = puVar15[(ulong)(byte)POPCOUNT((byte)uVar12 & 7) + 2];
          goto LAB_02f038e0;
        }
LAB_02f038dc:
        uVar12 = 0;
LAB_02f038e0:
        FUN_031c6c18(&local_100,"Shape property %s has no getMemoryFootprint() registered, skipping"
                     ,uVar12);
        uVar12 = local_f8;
        local_f8 = local_f8 & 0xffffffff00000000;
        if ((-1 < (long)uVar12) && (local_100 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
      }
      else {
        lVar11 = 0;
        if (*plVar16 != 0) {
          lVar11 = *plVar16 + (long)plVar16;
        }
        iVar7 = (*(code *)*ppuVar9)(lVar11);
        iVar14 = iVar7 + iVar14;
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar1);
  }
  return iVar14;
}


