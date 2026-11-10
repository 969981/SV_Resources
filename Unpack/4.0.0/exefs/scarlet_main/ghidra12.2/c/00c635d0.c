/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c635d0; name: FUN_00c635d0
 */


long FUN_00c635d0(long param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  int *piVar3;
  void *pvVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  if (DAT_04859d40 == 0) {
    FUN_01671900();
  }
  if (((((*(byte *)(param_1 + 0x370) & 1) == 0) || (param_2 < DAT_04859d58)) ||
      (*(long *)(param_1 + 0x10) == 0)) || (lVar8 = FUN_02705b00(param_1,param_2), lVar8 == 0)) {
    uVar13 = param_2 + DAT_04859d50 + 0x5f & -DAT_04859d50;
    if (param_2 < uVar13) {
      if (*(ulong *)(param_1 + 0x368) != 0) {
        uVar11 = *(ulong *)(param_1 + 0x358) + uVar13;
        if (uVar11 <= *(ulong *)(param_1 + 0x358)) {
          return 0;
        }
        if (*(ulong *)(param_1 + 0x368) < uVar11) {
          return 0;
        }
      }
      pvVar2 = mmap((void *)0x0,uVar13,3,0x22,-1,0);
      if (pvVar2 != (void *)0xffffffffffffffff) {
        uVar11 = *(long *)(param_1 + 0x358) + uVar13;
        *(ulong *)(param_1 + 0x358) = uVar11;
        if (*(ulong *)(param_1 + 0x360) < uVar11) {
          *(ulong *)(param_1 + 0x360) = uVar11;
        }
        pvVar4 = *(void **)(param_1 + 0x28);
        if (pvVar4 == (void *)0x0) {
          if ((*(void **)(param_1 + 0x18) == (void *)0x0) || (pvVar2 < *(void **)(param_1 + 0x18)))
          {
            *(void **)(param_1 + 0x18) = pvVar2;
          }
          *(void **)(param_1 + 0x398) = pvVar2;
          *(ulong *)(param_1 + 0x3a0) = uVar13;
          *(undefined4 *)(param_1 + 0x3b0) = 1;
          lVar8 = DAT_04859d40;
          *(long *)(param_1 + 0x60) = param_1 + 0x48;
          *(undefined8 *)(param_1 + 0x38) = 0xfff;
          *(long *)(param_1 + 0x40) = lVar8;
          plVar12 = (long *)(param_1 + 0x58);
          *plVar12 = param_1 + 0x48;
          *(long **)(param_1 + 0x70) = plVar12;
          puVar7 = (undefined8 *)(param_1 + 0x68);
          *puVar7 = plVar12;
          *(undefined8 **)(param_1 + 0x80) = puVar7;
          puVar10 = (undefined8 *)(param_1 + 0x78);
          *puVar10 = puVar7;
          *(undefined8 **)(param_1 + 0x90) = puVar10;
          puVar7 = (undefined8 *)(param_1 + 0x88);
          *puVar7 = puVar10;
          *(undefined8 **)(param_1 + 0xa0) = puVar7;
          puVar10 = (undefined8 *)(param_1 + 0x98);
          *puVar10 = puVar7;
          *(undefined8 **)(param_1 + 0xb0) = puVar10;
          puVar7 = (undefined8 *)(param_1 + 0xa8);
          *puVar7 = puVar10;
          *(undefined8 **)(param_1 + 0xc0) = puVar7;
          puVar10 = (undefined8 *)(param_1 + 0xb8);
          *puVar10 = puVar7;
          *(undefined8 **)(param_1 + 0xd0) = puVar10;
          puVar7 = (undefined8 *)(param_1 + 200);
          *puVar7 = puVar10;
          *(undefined8 **)(param_1 + 0xe0) = puVar7;
          puVar10 = (undefined8 *)(param_1 + 0xd8);
          *puVar10 = puVar7;
          *(undefined8 **)(param_1 + 0xf0) = puVar10;
          puVar7 = (undefined8 *)(param_1 + 0xe8);
          *puVar7 = puVar10;
          *(undefined8 **)(param_1 + 0x100) = puVar7;
          puVar10 = (undefined8 *)(param_1 + 0xf8);
          *puVar10 = puVar7;
          *(long *)(param_1 + 0x118) = param_1 + 0x108;
          *(long *)(param_1 + 0x120) = param_1 + 0x108;
          *(long *)(param_1 + 0x138) = param_1 + 0x128;
          *(long *)(param_1 + 0x140) = param_1 + 0x128;
          *(long *)(param_1 + 0x158) = param_1 + 0x148;
          *(long *)(param_1 + 0x160) = param_1 + 0x148;
          *(long *)(param_1 + 0x178) = param_1 + 0x168;
          *(long *)(param_1 + 0x180) = param_1 + 0x168;
          *(long *)(param_1 + 0x198) = param_1 + 0x188;
          *(long *)(param_1 + 0x1a0) = param_1 + 0x188;
          *(long *)(param_1 + 0x1b8) = param_1 + 0x1a8;
          *(long *)(param_1 + 0x1c0) = param_1 + 0x1a8;
          *(undefined8 **)(param_1 + 0x108) = puVar10;
          *(undefined8 **)(param_1 + 0x110) = puVar10;
          *(long *)(param_1 + 0x1d8) = param_1 + 0x1c8;
          *(long *)(param_1 + 0x1e0) = param_1 + 0x1c8;
          *(long *)(param_1 + 0x128) = param_1 + 0x118;
          *(long *)(param_1 + 0x130) = param_1 + 0x118;
          *(long *)(param_1 + 0x1f8) = param_1 + 0x1e8;
          *(long *)(param_1 + 0x200) = param_1 + 0x1e8;
          *(long *)(param_1 + 0x220) = param_1 + 0x208;
          *(long *)(param_1 + 0x218) = param_1 + 0x208;
          *(long *)(param_1 + 0x240) = param_1 + 0x228;
          *(long *)(param_1 + 0x238) = param_1 + 0x228;
          uVar11 = param_1 + (*(ulong *)(param_1 + -8) & 0xfffffffffffffff8);
          uVar1 = 0;
          if ((uVar11 & 0xf) != 0) {
            uVar1 = (ulong)(uint)-(int)uVar11 & 0xf;
          }
          *(long *)(param_1 + 0x148) = param_1 + 0x138;
          *(long *)(param_1 + 0x150) = param_1 + 0x138;
          *(long *)(param_1 + 0x168) = param_1 + 0x158;
          *(long *)(param_1 + 0x170) = param_1 + 0x158;
          *(long *)(param_1 + 0x188) = param_1 + 0x178;
          *(long *)(param_1 + 400) = param_1 + 0x178;
          *(long *)(param_1 + 0x1a8) = param_1 + 0x198;
          *(long *)(param_1 + 0x1b0) = param_1 + 0x198;
          *(long *)(param_1 + 0x1c8) = param_1 + 0x1b8;
          *(long *)(param_1 + 0x1d0) = param_1 + 0x1b8;
          *(long *)(param_1 + 0x1e8) = param_1 + 0x1d8;
          *(long *)(param_1 + 0x1f0) = param_1 + 0x1d8;
          *(long *)(param_1 + 0x210) = param_1 + 0x1f8;
          *(long *)(param_1 + 0x208) = param_1 + 0x1f8;
          *(long *)(param_1 + 0x230) = param_1 + 0x218;
          *(long *)(param_1 + 0x228) = param_1 + 0x218;
          *(long *)(param_1 + 0x250) = param_1 + 0x238;
          *(long *)(param_1 + 0x248) = param_1 + 0x238;
          lVar8 = (uVar11 - 0x10) + uVar1;
          uVar11 = (long)pvVar2 + ((uVar13 - (uVar11 - 0x10)) - uVar1) + -0x50;
          *(ulong *)(param_1 + 0x10) = uVar11;
          *(long *)(param_1 + 0x28) = lVar8;
          *(ulong *)(lVar8 + 8) = uVar11 | 1;
          *(undefined8 *)((long)pvVar2 + (uVar13 - 0x48)) = 0x50;
LAB_00c638e8:
          *(undefined8 *)(param_1 + 0x30) = DAT_04859d60;
        }
        else {
          puVar6 = (ulong *)(param_1 + 0x398);
          puVar9 = puVar6;
          do {
            if (pvVar2 == (void *)((long)*puVar9 + puVar9[1])) {
              if (((((uint)puVar9[3] >> 3 & 1) == 0) && (((uint)puVar9[3] & 1) == 1)) &&
                 ((pvVar4 < pvVar2 && ((void *)*puVar9 <= pvVar4)))) {
                puVar9[1] = puVar9[1] + uVar13;
                lVar5 = *(long *)(param_1 + 0x28);
                lVar8 = *(long *)(param_1 + 0x10) + uVar13;
                uVar13 = 0;
                if ((lVar5 + 0x10U & 0xf) != 0) {
                  uVar13 = (ulong)(uint)-(int)(lVar5 + 0x10U) & 0xf;
                }
                uVar11 = lVar8 - uVar13;
                *(ulong *)(param_1 + 0x10) = uVar11;
                *(ulong *)(param_1 + 0x28) = lVar5 + uVar13;
                *(ulong *)(lVar5 + uVar13 + 8) = uVar11 | 1;
                *(undefined8 *)(lVar5 + lVar8 + 8) = 0x50;
                goto LAB_00c638e8;
              }
              break;
            }
            puVar9 = (ulong *)puVar9[2];
          } while (puVar9 != (ulong *)0x0);
          if (pvVar2 < *(void **)(param_1 + 0x18)) {
            *(void **)(param_1 + 0x18) = pvVar2;
          }
          do {
            if (*puVar6 == (long)pvVar2 + uVar13) {
              if ((((uint)puVar6[3] >> 3 & 1) == 0) && (((uint)puVar6[3] & 1) == 1)) {
                *puVar6 = (ulong)pvVar2;
                puVar6[1] = puVar6[1] + uVar13;
                lVar8 = FUN_02705eb0(param_1,pvVar2,(long)pvVar2 + uVar13,param_2);
                return lVar8;
              }
              break;
            }
            puVar6 = (ulong *)puVar6[2];
          } while (puVar6 != (ulong *)0x0);
          FUN_02705c00(param_1);
        }
        uVar13 = *(ulong *)(param_1 + 0x10) - param_2;
        if (param_2 <= *(ulong *)(param_1 + 0x10) && uVar13 != 0) {
          lVar8 = *(long *)(param_1 + 0x28);
          *(ulong *)(param_1 + 0x10) = uVar13;
          *(ulong *)(param_1 + 0x28) = lVar8 + param_2;
          *(ulong *)(lVar8 + param_2 + 8) = uVar13 | 1;
          *(ulong *)(lVar8 + 8) = param_2 | 3;
          return lVar8 + 0x10;
        }
      }
      piVar3 = __errno_location();
      lVar8 = 0;
      *piVar3 = 0xc;
    }
    else {
      lVar8 = 0;
    }
  }
  return lVar8;
}


