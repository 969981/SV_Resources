/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03435348; name: FUN_03435348
 */


void FUN_03435348(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 == 0) {
    lVar10 = *(long *)(param_1 + 0x18);
LAB_034353dc:
    uVar11 = 0x1d;
    goto LAB_034353e0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_2 / uVar1;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  uVar11 = (ulong)(param_2 - uVar3 * uVar1);
  plVar8 = *(long **)(lVar10 + uVar11 * 8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8;
    do {
      if (*(uint *)(plVar9 + 1) == param_2) {
        *(int *)((long)plVar9 + 0xc) = *(int *)((long)plVar9 + 0xc) + 1;
        return;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x28));
  if (fVar12 / (float)uVar1 <= 0.9) goto joined_r0x034354f4;
  if (uVar1 < 0x1d) goto LAB_034353dc;
  if (uVar1 < 0x35) {
    uVar11 = 0x35;
LAB_034353e0:
    *(long *)(param_1 + 0x18) = 0;
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x20) = 0;
    puVar5 = PTR_DAT_047e2fd0;
    lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0xb,0,uVar11 << 3);
    if (lVar6 != 0) {
      iVar7 = (int)uVar11;
      *(long *)(param_1 + 0x18) = lVar6;
      *(int *)(param_1 + 0x24) = iVar7;
      while( true ) {
        iVar7 = iVar7 + -1;
        uVar3 = *(uint *)(param_1 + 0x20);
        if (uVar3 < (uint)uVar11) {
          *(uint *)(param_1 + 0x20) = uVar3 + 1;
          if (*(long *)(param_1 + 0x18) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8) = 0;
          }
        }
        if (iVar7 == 0) break;
        uVar11 = (ulong)*(uint *)(param_1 + 0x24);
      }
      if (uVar1 != 0) {
        uVar11 = 0;
        do {
          plVar8 = (long *)*(long *)(lVar10 + uVar11 * 8);
          while (plVar8 != (long *)0x0) {
            uVar3 = *(uint *)(param_1 + 0x20);
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = *(uint *)(plVar8 + 1) / uVar3;
            }
            uVar3 = *(uint *)(plVar8 + 1) - uVar4 * uVar3;
            lVar6 = *plVar8;
            *plVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8);
            *(long **)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8) = plVar8;
            plVar8 = (long *)lVar6;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar1);
      }
      if (lVar10 != 0) {
        (**(code **)(puVar5 + 0x30))(0xb,lVar10);
      }
      goto LAB_034354ac;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      (**(code **)(puVar5 + 0x30))(0xb);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(long *)(param_1 + 0x18) = lVar10;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x24) = uVar2;
  }
  else {
    if (uVar1 < 0x61) {
      uVar11 = 0x61;
      goto LAB_034353e0;
    }
    if (uVar1 < 0xc1) {
      uVar11 = 0xc1;
      goto LAB_034353e0;
    }
    if (uVar1 < 0x185) {
      uVar11 = 0x185;
      goto LAB_034353e0;
    }
    if (uVar1 < 0x301) {
      uVar11 = 0x301;
      goto LAB_034353e0;
    }
    if (uVar1 < 0x607) {
      uVar11 = 0x607;
      goto LAB_034353e0;
    }
    if (uVar1 < 0xc07) {
      uVar11 = 0xc07;
      goto LAB_034353e0;
    }
    uVar11 = 0x1807;
    if (uVar1 < 0x1807) goto LAB_034353e0;
    if (uVar1 < 0x3001) {
      uVar11 = 0x3001;
      goto LAB_034353e0;
    }
    uVar11 = 0x6011;
    if ((((uVar1 < 0x6011) || (uVar11 = 0xc005, uVar1 < 0xc005)) ||
        (uVar11 = 0x1800d, uVar1 < 0x1800d)) ||
       ((uVar11 = 0x30005, uVar1 < 0x30005 || (uVar11 = 0x60019, uVar1 < 0x60019))))
    goto LAB_034353e0;
    if (uVar1 < 0xc0001) {
      uVar11 = 0xc0001;
      goto LAB_034353e0;
    }
    uVar11 = 0x180005;
    if (((((uVar1 < 0x180005) || (uVar11 = 0x30000b, uVar1 < 0x30000b)) ||
         ((uVar11 = 0x60000d, uVar1 < 0x60000d ||
          (((uVar11 = 0xc00005, uVar1 < 0xc00005 || (uVar11 = 0x1800013, uVar1 < 0x1800013)) ||
           (uVar11 = 0x3000005, uVar1 < 0x3000005)))))) ||
        ((uVar11 = 0x6000017, uVar1 < 0x6000017 || (uVar11 = 0xc000013, uVar1 < 0xc000013)))) ||
       ((uVar11 = 0x18000005, uVar1 < 0x18000005 ||
        ((uVar11 = 0x30000059, uVar1 < 0x30000059 || (uVar11 = 0x60000005, uVar1 < 0x60000005))))))
    goto LAB_034353e0;
LAB_034354ac:
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if (uVar1 == 0) {
    return;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_2 / uVar1;
  }
  uVar11 = (ulong)(param_2 - uVar3 * uVar1);
  plVar8 = *(long **)(*(long *)(param_1 + 0x18) + uVar11 * 8);
joined_r0x034354f4:
  for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
    if (*(uint *)(plVar8 + 1) == param_2) goto LAB_03435568;
  }
  plVar8 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0xb,0x10);
  if (plVar8 != (undefined8 *)0x0) {
    *plVar8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar11 * 8);
    *(uint *)(plVar8 + 1) = param_2;
    *(long **)(*(long *)(param_1 + 0x18) + uVar11 * 8) = plVar8;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_03435568:
    *(undefined4 *)((long)plVar8 + 0xc) = 1;
  }
  return;
}


