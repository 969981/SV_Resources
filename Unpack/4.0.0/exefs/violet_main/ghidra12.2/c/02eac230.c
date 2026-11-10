/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02eac230; name: FUN_02eac230
 */


int FUN_02eac230(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  long local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  puVar7 = PTR_DAT_047d19f0;
  local_78 = 0;
  local_70 = -0x8000000000000000;
  local_68 = 0;
  iVar9 = *(int *)(param_1 + 0x50);
  plVar2 = &local_78;
  if (param_2 != (long *)0x0) {
    plVar2 = param_2;
  }
  iVar14 = iVar9 << 6;
  if (0 < iVar9) {
    uVar15 = 0;
    plVar1 = (long *)(param_1 + 0x48);
    plVar3 = &local_78;
    if (param_2 != (long *)0x0) {
      plVar3 = param_2;
    }
    do {
      lVar4 = (ulong)(uVar15 & 0xffff) * 0x40 + *plVar1;
      if ((*(byte *)((long)plVar1 + lVar4 + 0x1e) & 1) == 0) {
        plVar16 = (long *)((long)plVar1 + lVar4 + 0x30);
        iVar8 = (int)plVar3[1];
        lVar4 = 0;
        if (*plVar16 != 0) {
          lVar4 = *plVar16 + (long)plVar16;
        }
        if (1 < iVar8) {
          uVar11 = (int)lVar4 * -0x61c8864f;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar6 = uVar11 >> 0x10 | uVar11 << 0x10;
          uVar11 = (int)((ulong)lVar4 >> 0x20) * -0x61c8864f;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
          uVar11 = uVar6 + (uVar6 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11;
          while( true ) {
            uVar11 = uVar11 & iVar8 - 1U;
            lVar13 = *(long *)(*plVar3 + (long)(int)uVar11 * 8);
            if (lVar13 == -1) break;
            if (lVar13 == lVar4) {
              if ((int)uVar11 < iVar8) goto LAB_02eac41c;
              break;
            }
            uVar11 = uVar11 + 1;
          }
        }
        iVar8 = (**(code **)(*(long *)puVar7 + (ulong)*(byte *)(lVar4 + 0x18) * 0x200 + 0x130))
                          (lVar4,plVar2);
        iVar9 = (int)plVar3[1];
        lVar4 = 0;
        if (*plVar16 != 0) {
          lVar4 = *plVar16 + (long)plVar16;
        }
        if (iVar9 <= (int)plVar3[2] * 2) {
          FUN_02eaf394(plVar2,iVar9 << 1);
          iVar9 = (int)plVar3[1];
        }
        uVar11 = (int)lVar4 * -0x61c8864f;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        uVar6 = uVar11 >> 0x10 | uVar11 << 0x10;
        uVar11 = (int)((ulong)lVar4 >> 0x20) * -0x61c8864f;
        uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
        uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
        uVar11 = iVar9 - 1U & (uVar6 + (uVar6 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
        lVar13 = *plVar3;
        plVar16 = (long *)(lVar13 + (long)(int)uVar11 * 8);
        iVar14 = iVar8 + iVar14;
        if (*plVar16 == -1) {
          iVar9 = 1;
        }
        else if (*plVar16 == lVar4) {
          iVar9 = 0;
        }
        else {
          do {
            uVar11 = uVar11 + 1 & iVar9 - 1U;
            lVar12 = *(long *)(lVar13 + (long)(int)uVar11 * 8);
            if (lVar12 == -1) {
              iVar9 = 1;
              goto LAB_02eac400;
            }
          } while (lVar12 != lVar4);
          iVar9 = 0;
LAB_02eac400:
          plVar16 = (long *)(lVar13 + (long)(int)uVar11 * 8);
        }
        *(int *)(plVar3 + 2) = (int)plVar3[2] + iVar9;
        *plVar16 = lVar4;
        iVar9 = *(int *)(param_1 + 0x50);
      }
LAB_02eac41c:
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar9);
  }
  uVar6 = *(uint *)(param_1 + 0xf0);
  uVar15 = *(uint *)(param_1 + 0xf4) & 0x7fffffff;
  uVar5 = *(uint *)(param_1 + 0x68);
  iVar9 = *(int *)(param_1 + 0xdc);
  uVar11 = *(uint *)(param_1 + 0x6c) & 0x7fffffff;
  iVar8 = FUN_02f03688(param_1 + 0x30);
  lVar4 = local_70;
  uVar10 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_78 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar10 << 3);
  }
  if ((int)uVar15 <= (int)uVar6) {
    uVar15 = uVar6;
  }
  if ((int)uVar11 <= (int)uVar5) {
    uVar11 = uVar5;
  }
  return iVar14 + iVar9 * 0x40 + (uVar15 << 7 | 0x18) + iVar8 + uVar11 * 0x20 + 0x100;
}


