/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323eaa0; name: FUN_0323eaa0
 */


void FUN_0323eaa0(long param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  long local_90 [3];
  int local_78;
  long *local_70;
  undefined8 local_68;
  
  local_70 = (long *)0x0;
  local_68 = -0x8000000000000000;
  if (*(int *)(param_1 + 0x10) < 1) {
    uVar14 = 0;
  }
  else {
    plVar7 = (long *)0x0;
    uVar14 = 0;
    lVar13 = 0;
    do {
      lVar15 = *(long *)(param_1 + 8);
      lVar8 = *(long *)(lVar15 + lVar13 * 8);
      if (*(int *)(lVar8 + 0xc) == 0) {
        uVar2 = uVar14 + 1;
        uVar5 = uVar14;
        if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)uVar14) {
          FUN_0323f0e0(&local_70,(long)(int)uVar2);
          lVar8 = *(long *)(lVar15 + lVar13 * 8);
          plVar7 = local_70;
          uVar5 = (uint)local_68;
        }
        plVar7[(int)uVar5] = lVar8;
        local_68 = CONCAT44(local_68._4_4_,uVar2);
        if (0 < (int)uVar14) {
          do {
            uVar5 = (int)(uVar14 - 1) >> 1;
            lVar8 = plVar7[(int)uVar14];
            if (*(byte *)(plVar7[uVar5] + 8) < *(byte *)(lVar8 + 8)) break;
            plVar7[(int)uVar14] = plVar7[uVar5];
            plVar7[uVar5] = lVar8;
            bVar1 = 2 < (int)uVar14;
            uVar14 = uVar5;
          } while (bVar1);
        }
        uVar14 = uVar2;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x10));
  }
  do {
    plVar7 = local_70;
    if (uVar14 == 0) break;
    uVar2 = uVar14 - 1;
    plVar16 = (long *)*local_70;
    if (uVar2 == 0) {
      local_68 = (ulong)local_68._4_4_ << 0x20;
    }
    else {
      lVar13 = local_70[(int)uVar2];
      bVar3 = *(byte *)(lVar13 + 8);
      bVar4 = *(byte *)(plVar16 + 1);
      *local_70 = lVar13;
      local_68 = CONCAT44(local_68._4_4_,uVar2);
      if (bVar4 <= bVar3) {
        if ((int)uVar14 < 4) {
          uVar9 = 1;
        }
        else {
          uVar14 = 1;
          if (*(byte *)(local_70[2] + 8) <= *(byte *)(local_70[1] + 8)) {
            uVar14 = 2;
          }
          uVar9 = (ulong)uVar14;
        }
        if ((int)uVar9 < (int)uVar2) {
          iVar10 = 0;
          do {
            iVar6 = (int)uVar9;
            if (*(byte *)(lVar13 + 8) <= *(byte *)(local_70[iVar6] + 8)) break;
            local_70[iVar10] = local_70[iVar6];
            lVar8 = (long)iVar6;
            uVar9 = lVar8 << 1 | 1;
            local_70[lVar8] = lVar13;
            uVar14 = (int)(lVar8 << 1) + 2;
            if ((int)uVar14 < (int)uVar2) {
              uVar5 = (uint)uVar9;
              if (*(byte *)(local_70[(int)uVar14] + 8) <= *(byte *)(local_70[uVar9] + 8)) {
                uVar5 = uVar14;
              }
              uVar9 = (ulong)uVar5;
            }
            iVar10 = iVar6;
          } while ((int)uVar9 < (int)uVar2);
        }
      }
    }
    if (*plVar16 != 0) {
      local_78 = 0;
      local_90[1] = 0;
      local_90[2] = 0;
      local_90[0] = param_1;
      if (0 < (int)plVar16[2]) {
        iVar10 = 0;
        do {
          local_78 = iVar10;
          (**(code **)(*(long *)*plVar16 + 0x18))((long *)*plVar16,local_90);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)plVar16[2]);
      }
    }
    *(undefined1 *)((long)plVar16 + 0x14) = 1;
    uVar14 = uVar2;
    if (0 < (int)plVar16[4]) {
      lVar13 = 0;
      do {
        lVar8 = *(long *)(plVar16[3] + lVar13 * 8);
        iVar10 = *(int *)(lVar8 + 0xc) + -1;
        *(int *)(lVar8 + 0xc) = iVar10;
        if (iVar10 == 0) {
          uVar2 = uVar14 + 1;
          uVar5 = uVar14;
          if ((int)(local_68._4_4_ & 0x7fffffff) <= (int)uVar14) {
            FUN_0323f0e0(&local_70,(long)(int)uVar2);
            plVar7 = local_70;
            uVar5 = (uint)local_68;
          }
          plVar7[(int)uVar5] = lVar8;
          local_68 = CONCAT44(local_68._4_4_,uVar2);
          if (0 < (int)uVar14) {
            do {
              uVar5 = (int)(uVar14 - 1) >> 1;
              lVar8 = plVar7[(int)uVar14];
              if (*(byte *)(plVar7[uVar5] + 8) < *(byte *)(lVar8 + 8)) break;
              plVar7[(int)uVar14] = plVar7[uVar5];
              plVar7[uVar5] = lVar8;
              bVar1 = 2 < (int)uVar14;
              uVar14 = uVar5;
            } while (bVar1);
          }
          uVar14 = uVar2;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)plVar16[4]);
    }
  } while (plVar16 != param_2);
  uVar14 = local_68._4_4_;
  iVar10 = *(int *)(param_1 + 0x10);
  if (iVar10 == 0) {
    iVar6 = 0;
    iVar10 = 0;
  }
  else {
    plVar7 = *(long **)(param_1 + 8);
    iVar6 = 0;
    plVar16 = (long *)0x0;
    plVar11 = plVar7 + (long)iVar10 + -1;
    do {
      if (*(char *)(*plVar11 + 0x14) == '\0') {
        plVar12 = plVar7;
        if (plVar16 != (long *)0x0) {
          plVar12 = plVar11 + 1;
          plVar11 = plVar16;
        }
        plVar16 = plVar11;
      }
      else {
        iVar6 = iVar6 + 1;
        if (plVar16 == (long *)0x0) {
          plVar12 = plVar11 + -1;
        }
        else {
          if (plVar11 != plVar16) {
            *plVar11 = *plVar16;
          }
          plVar7 = plVar11 + 1;
          plVar12 = plVar16 + -1;
          plVar16 = (long *)0x0;
        }
      }
      iVar10 = iVar10 + -1;
      plVar11 = plVar12;
    } while (iVar10 != 0);
    iVar10 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar10 - iVar6;
  uVar9 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < (int)uVar14) && (local_70 != (long *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_70,uVar9 << 3);
  }
  return;
}


