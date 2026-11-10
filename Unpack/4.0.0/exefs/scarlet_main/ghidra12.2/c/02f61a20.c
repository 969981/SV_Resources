/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f61a20; name: FUN_02f61a20
 */


void FUN_02f61a20(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long local_88;
  undefined8 *local_80;
  uint *local_78;
  uint local_70;
  uint uStack_6c;
  ulong local_48;
  
  local_80 = *(undefined8 **)(param_2 + 0x4e0);
  lVar10 = *(long *)(param_2 + 8);
  local_78 = *(uint **)(*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) * 8 + -8);
  uVar13 = *local_78 >> 0x10;
  uVar12 = *local_78 & 0xffff;
  *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) - (*local_78 & 0xffff);
  uVar2 = *(uint *)(param_1 + 0x948);
  local_88 = param_3;
  local_70 = uVar13;
  uStack_6c = uVar12;
  if (0 < (int)uVar2) {
    lVar14 = 0;
    do {
      lVar15 = *(long *)(param_1 + 0x940);
      local_48 = *(ulong *)(lVar15 + lVar14);
      uVar7 = local_48 >> 0x20 & 0xffffff;
      if ((uint)uVar7 != 0xffffff) {
        if ((uint)uVar7 < *(uint *)(lVar10 + 0x40)) {
          lVar8 = *(long *)(lVar10 + 0x38);
          if ((*(byte *)(lVar8 + uVar7 * 0xc0 + 0x54) & 3) != 0) {
            if (*(int *)(lVar8 + uVar7 * 0xc0 + 0x50) == (int)(local_48 >> 0x20)) {
              if ((*(byte *)(lVar8 + uVar7 * 0xc0 + 0x88) & 1) != 0) {
                uVar1 = (uint)local_48 & 0xffffff;
                if (uVar1 != 0xffffff) {
                  if (uVar1 < *(uint *)(lVar10 + 0x40)) {
                    if ((*(byte *)(lVar8 + (ulong)uVar1 * 0xc0 + 0x54) & 3) != 0) {
                      if (*(uint *)(lVar8 + (ulong)uVar1 * 0xc0 + 0x50) == (uint)local_48) {
                        uVar9 = local_48 & 0xffffff;
                        if ((*(byte *)(lVar8 + uVar9 * 0xc0 + 0x88) & 1) != 0) {
                          if (*(long *)(lVar8 + uVar7 * 0xc0 + 0x78) != 0) {
                            if (*(long *)(lVar8 + uVar9 * 0xc0 + 0x78) != 0) {
                              if (*(int *)(lVar8 + uVar7 * 0xc0 + 0x80) !=
                                  *(int *)(lVar8 + uVar9 * 0xc0 + 0x80)) {
                                if (((*(uint *)(lVar8 + uVar9 * 0xc0 + 0x54) |
                                     *(uint *)(lVar8 + uVar7 * 0xc0 + 0x54)) >> 5 & 1) == 0) {
                                  plVar5 = *(long **)(lVar10 + 0x4b8);
                                  if (plVar5 != (long *)0x0) {
                                    iVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,lVar10,&local_48,1)
                                    ;
                                    if (iVar4 == 0) goto LAB_02f61bd4;
                                  }
                                  if ((int)uVar13 < 0xf99) {
                                    puVar6 = (undefined8 *)
                                             ((long)local_78 + (long)(int)uVar13 + 0x20);
                                  }
                                  else {
                                    puVar6 = (undefined8 *)FUN_031c36f4(&local_88);
                                  }
                                  *puVar6 = *(undefined8 *)(lVar15 + lVar14);
                                  uVar13 = local_70 + 8;
                                  uVar12 = uStack_6c + 1;
                                  local_70 = uVar13;
                                  uStack_6c = uVar12;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_02f61bd4:
      lVar14 = lVar14 + 8;
    } while ((ulong)uVar2 * 8 != lVar14);
  }
  puVar6 = local_80;
  if (uVar12 == 0) {
    piVar11 = (int *)(local_88 + 0x18);
    iVar4 = *piVar11;
    if (1 < iVar4) {
      lVar10 = local_80[1];
      lVar14 = *(long *)(*(long *)(local_88 + 0x10) + (long)(iVar4 + -2) * 8);
      iVar3 = *(int *)(local_80 + 0xb);
      *(undefined8 *)(lVar10 + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(local_88 + 0x10) + (long)(iVar4 + -1) * 8);
      *(int *)(local_80 + 0xb) = iVar3 + 1;
      if (*(int *)((long)local_80 + 0x5c) <= iVar3 + 1) {
        (**(code **)(*(long *)*local_80 + 0x28))
                  ((long *)*local_80,lVar10 + (long)(iVar3 + -5) * 8,6);
        *(int *)(puVar6 + 0xb) = iVar3 + -5;
      }
      *(undefined8 *)(lVar14 + 8) = 0;
      uVar12 = 0xffffffff;
      goto LAB_02f61c8c;
    }
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *local_78 = *local_78 & 0xffff0000 | uVar12 & 0xffff;
  piVar11 = (int *)(local_88 + 8);
  *local_78 = *local_78 & 0xffff | uVar13 << 0x10;
LAB_02f61c8c:
  *piVar11 = *piVar11 + uVar12;
  *(undefined4 *)(param_1 + 0x948) = 0;
  return;
}


