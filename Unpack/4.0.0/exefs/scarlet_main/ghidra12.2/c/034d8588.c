/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034d8588; name: FUN_034d8588
 */


void FUN_034d8588(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  ushort local_60;
  int local_58;
  undefined4 local_54;
  int local_34;
  
  if ((*(byte *)(param_1 + 0xdc) >> 6 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(lVar5 + 10) >> 6 & 1) != 0) {
      plVar6 = *(long **)(param_1 + 0x40);
      iVar4 = *(int *)(param_1 + 0x60);
      iVar2 = (**(code **)(*plVar6 + 0x58))(plVar6,&local_34);
      local_58 = 0;
      if (iVar2 == 2) {
        local_54 = 2;
      }
      else {
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_78);
        uVar8 = local_34 + iVar4;
        local_58 = (int)((float)uVar8 / (float)local_78);
        local_54 = 0x11;
        if (iVar2 != 0x11) {
          uVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
          local_54 = 0x11;
          if (uVar8 < uVar3) {
            local_54 = 1;
          }
        }
      }
      FUN_034b49fc(*(undefined8 *)PTR_DAT_047e6988,
                   *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x228),param_1,&local_58);
      lVar5 = *(long *)(param_1 + 0x18);
    }
    *(char *)(param_1 + 0x48) = (char)(int)*(float *)(lVar5 + 0x2c0);
    local_70 = *(undefined4 *)(lVar5 + 0x25c);
    local_6c = 0x2b;
    local_78 = 0;
    local_60 = 0;
    iVar4 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))
                      (*(long **)(param_1 + 0xb8),param_1 + 0x40,*(undefined2 *)(param_2 + 2),
                       &local_78);
    if (iVar4 != 2) {
      if (local_6c._6_2_ == 0) {
        *(undefined2 *)((long)param_2 + 0x12) = 0;
        *(int *)((long)param_2 + 0x2c) = iVar4;
        return;
      }
      *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfd;
      *param_2 = local_78;
      *(undefined2 *)(param_2 + 2) = local_6c._4_2_;
      *(ushort *)((long)param_2 + 0x12) = local_6c._6_2_;
      uVar9 = *(undefined4 *)(param_1 + 0x24);
      uVar1 = *(undefined4 *)(param_1 + 0x2c);
      *(ulong *)((long)param_2 + 0x1c) =
           CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 0x28));
      *(ulong *)((long)param_2 + 0x24) = CONCAT44(uVar9,uVar1);
      uVar8 = (uint)local_60;
      if ((*(byte *)(param_1 + 0xd4) >> 2 & 1) != 0) {
        *(float *)(param_2 + 4) = (float)uVar8 / (float)local_6c._6_2_;
      }
      if (local_60 == 0) {
        return;
      }
      do {
        if (*(short *)(param_1 + 0x38) == 1) {
          uVar3 = *(uint *)(param_1 + 0x2c);
        }
        else {
          uVar3 = *(int *)(param_1 + 0x34) + 1;
        }
        iVar4 = *(int *)(param_1 + 0x28);
        uVar7 = uVar8;
        if ((uVar3 < iVar4 + uVar8) && (uVar7 = uVar3 - iVar4, uVar7 == 0)) {
          return;
        }
        FUN_0348994c(param_1 + 0xa0,*(long *)(*(long *)(param_1 + 0x18) + 0x250) + 0x138,
                     *(long *)(param_1 + 0x18),param_2,iVar4,uVar7);
        uVar3 = *(int *)(param_1 + 0x28) + uVar7;
        iVar4 = *(ushort *)(param_1 + 0x38) - 1;
        *(uint *)(param_1 + 0x28) = uVar3;
        if (iVar4 == 0) {
          uVar9 = 0x2d;
          if (*(uint *)(param_1 + 0x2c) <= uVar3) {
            uVar9 = 0x11;
          }
        }
        else {
          uVar9 = 0x2d;
          if (*(uint *)(param_1 + 0x34) < uVar3) {
            *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x30);
            uVar9 = 0x2d;
            if (1 < *(ushort *)(param_1 + 0x38)) {
              *(short *)(param_1 + 0x38) = (short)iVar4;
              uVar9 = 0x2d;
            }
          }
        }
        uVar8 = uVar8 - uVar7;
        *(undefined4 *)((long)param_2 + 0x2c) = uVar9;
      } while (uVar8 != 0);
      return;
    }
  }
  *(undefined2 *)((long)param_2 + 0x12) = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 2;
  *(undefined4 *)((long)param_2 + 0x2c) = 2;
  return;
}


