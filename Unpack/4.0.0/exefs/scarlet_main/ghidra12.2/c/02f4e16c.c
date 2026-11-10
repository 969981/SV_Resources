/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f4e16c; name: FUN_02f4e16c
 */


void FUN_02f4e16c(long param_1,void *param_2)

{
  ushort *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  void *__dest;
  long lVar12;
  ulong *puVar13;
  long *plVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  uint local_58 [2];
  
  if (*(short *)((long)param_2 + 4) == 0) {
    uVar11 = *(uint *)(param_1 + 0x90);
    uVar10 = (ulong)uVar11;
    iVar7 = -1;
    if (*(char *)((long)param_2 + 0x1c) == '\0') {
      iVar7 = 1;
    }
    if (0 < (int)uVar11) {
      piVar9 = (int *)(*(long *)(param_1 + 0x88) + 0x28);
      do {
        if ((((*(long *)(piVar9 + -8) == *(long *)((long)param_2 + 8)) &&
             (*(long *)(piVar9 + -6) == *(long *)((long)param_2 + 0x10))) &&
            (piVar9[-2] == *(int *)((long)param_2 + 0x20))) &&
           (piVar9[-1] == *(int *)((long)param_2 + 0x24))) {
          *piVar9 = *piVar9 + iVar7;
          return;
        }
        piVar9 = piVar9 + 0xc;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    lVar8 = (long)(int)uVar11;
    memcpy(&local_80,param_2,0x28);
    if ((int)(*(uint *)(param_1 + 0x94) & 0x7fffffff) <= (int)uVar11) {
      FUN_02f4ecc8((long *)(param_1 + 0x88),lVar8 + 1);
      uVar11 = *(uint *)(param_1 + 0x90);
    }
    __dest = (void *)(*(long *)(param_1 + 0x88) + (long)(int)uVar11 * 0x30);
    memcpy(__dest,&local_80,0x28);
    *(int *)((long)__dest + 0x28) = iVar7;
    *(int *)(param_1 + 0x90) = (int)(lVar8 + 1);
  }
  else {
    local_80 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_70 = *(undefined8 *)(param_1 + 0x30);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    local_60 = 0;
    uVar5 = *(ushort *)(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x6a) = 1;
    if (uVar5 != 0xffff) {
      lVar8 = *(long *)(param_1 + 0x48);
      do {
        uVar10 = (ulong)uVar5;
        if (*(short *)((long)param_2 + 4) == *(short *)(lVar8 + uVar10 * 0x10 + 2)) {
          FUN_00dbb47c(lVar8 + uVar10 * 0x10 + 8,&local_80,param_2);
          lVar8 = *(long *)(param_1 + 0x48);
        }
        uVar5 = *(ushort *)(lVar8 + uVar10 * 0x10);
      } while (uVar5 != 0xffff);
    }
    if (*(ushort *)((long)param_2 + 4) < 0xd) {
      lVar8 = *(long *)((long)param_2 + 8);
      if (lVar8 < 0) {
        uVar11 = (uint)lVar8;
      }
      else {
        uVar10 = FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,lVar8,local_58);
        uVar11 = local_58[0];
        if ((uVar10 & 1) == 0) {
          uVar11 = 0xffffff;
        }
      }
      uVar2 = uVar11 & 0xffffff;
      if ((uVar2 != 0xffffff) && (uVar2 < *(uint *)(param_1 + 0x60))) {
        local_60 = 0;
        uVar5 = *(ushort *)(*(long *)(param_1 + 0x58) + (ulong)uVar2 * 2);
        if (uVar5 != 0xffff) {
          lVar8 = *(long *)(param_1 + 0x48);
          do {
            uVar10 = (ulong)uVar5;
            if (((uint)*(byte *)(lVar8 + uVar10 * 0x10 + 4) == uVar11 >> 0x18) &&
               (lVar12 = lVar8 + uVar10 * 0x10,
               *(short *)((long)param_2 + 4) == *(short *)(lVar12 + 2))) {
              FUN_00dbb47c(lVar12 + 8,&local_80,param_2);
              lVar8 = *(long *)(param_1 + 0x48);
            }
            uVar5 = *(ushort *)(lVar8 + uVar10 * 0x10);
          } while (uVar5 != 0xffff);
        }
      }
      lVar8 = *(long *)((long)param_2 + 0x10);
      if (lVar8 < 0) {
        local_58[0] = (uint)lVar8;
      }
      else {
        uVar10 = FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,lVar8,local_58);
        if ((uVar10 & 1) == 0) {
          local_58[0] = 0xffffff;
        }
      }
      uVar11 = local_58[0] & 0xffffff;
      if ((uVar11 != 0xffffff) && (uVar11 < *(uint *)(param_1 + 0x60))) {
        local_60 = 1;
        uVar5 = *(ushort *)(*(long *)(param_1 + 0x58) + (ulong)uVar11 * 2);
        if (uVar5 != 0xffff) {
          lVar8 = *(long *)(param_1 + 0x48);
          do {
            uVar10 = (ulong)uVar5;
            if (((uint)*(byte *)(lVar8 + uVar10 * 0x10 + 4) == local_58[0] >> 0x18) &&
               (lVar12 = lVar8 + uVar10 * 0x10,
               *(short *)((long)param_2 + 4) == *(short *)(lVar12 + 2))) {
              FUN_00dbb47c(lVar12 + 8,&local_80,param_2);
              lVar8 = *(long *)(param_1 + 0x48);
            }
            uVar5 = *(ushort *)(lVar8 + uVar10 * 0x10);
          } while (uVar5 != 0xffff);
        }
      }
    }
    else if (*(ushort *)((long)param_2 + 4) - 0xe < 0xc) {
      lVar8 = *(long *)((long)param_2 + 8);
      if (lVar8 < 0) {
        local_58[0] = (uint)lVar8;
      }
      else {
        uVar10 = FUN_00dbb6c8(*(long *)(param_1 + 0x20) + 0x960,lVar8,local_58);
        if ((uVar10 & 1) == 0) {
          local_58[0] = 0xffffff;
        }
      }
      uVar11 = local_58[0] & 0xffffff;
      if ((uVar11 != 0xffffff) && (uVar11 < *(uint *)(param_1 + 0x60))) {
        local_60 = 0;
        uVar5 = *(ushort *)(*(long *)(param_1 + 0x58) + (ulong)uVar11 * 2);
        if (uVar5 != 0xffff) {
          lVar8 = *(long *)(param_1 + 0x48);
          do {
            uVar10 = (ulong)uVar5;
            if (((uint)*(byte *)(lVar8 + uVar10 * 0x10 + 4) == local_58[0] >> 0x18) &&
               (lVar12 = lVar8 + uVar10 * 0x10,
               *(short *)((long)param_2 + 4) == *(short *)(lVar12 + 2))) {
              FUN_00dbb47c(lVar12 + 8,&local_80,param_2);
              lVar8 = *(long *)(param_1 + 0x48);
            }
            uVar5 = *(ushort *)(lVar8 + uVar10 * 0x10);
          } while (uVar5 != 0xffff);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x6a) = 0;
    if (0 < *(int *)(param_1 + 0x78)) {
      lVar8 = 0;
      do {
        uVar6 = *(ushort *)(*(long *)(param_1 + 0x70) + lVar8 * 2);
        uVar5 = uVar6;
        do {
          lVar12 = *(long *)(param_1 + 0x48);
          puVar13 = (ulong *)(lVar12 + (ulong)uVar5 * 0x10 + 8);
          plVar14 = (long *)(*puVar13 & 0xfffffffffffffffc);
          if (plVar14 != (long *)0x0) {
            if ((*puVar13 & 3) == 0) {
              *puVar13 = (ulong)plVar14 | 1;
              do {
                lVar4 = *plVar14;
                plVar14 = (long *)(plVar14[1] & 0xfffffffffffffffc);
                (**(code **)(lVar4 + 8))();
              } while (plVar14 != (long *)0x0);
              *puVar13 = 0;
            }
            else {
              do {
                plVar3 = (long *)(plVar14[1] & 0xfffffffffffffffc);
                plVar14[1] = (ulong)plVar3 | 1;
                plVar14 = plVar3;
              } while (plVar3 != (long *)0x0);
            }
          }
          puVar1 = (ushort *)(lVar12 + (ulong)uVar5 * 0x10);
          uVar5 = *puVar1;
        } while (uVar5 != 0xffff);
        *puVar1 = *(ushort *)(param_1 + 0x40);
        lVar8 = lVar8 + 1;
        *(ushort *)(param_1 + 0x40) = uVar6;
      } while (lVar8 < *(int *)(param_1 + 0x78));
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}


