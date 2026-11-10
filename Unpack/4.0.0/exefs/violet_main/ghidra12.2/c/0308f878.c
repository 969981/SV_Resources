/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308f878; name: FUN_0308f878
 */


void FUN_0308f878(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int local_68 [2];
  undefined4 local_60 [2];
  int local_58 [2];
  
  plVar4 = (long *)(param_1 + 0x20);
  lVar6 = *(long *)(*plVar4 + 0x168);
  iVar2 = *(int *)(*plVar4 + 0x170);
  iVar7 = *param_2;
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar5 = *(long **)(param_1 + 0x38);
    lVar9 = (long)*(int *)(param_1 + 0x40) * 0x18;
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        if ((char)plVar5[2] != '\x01') {
          lVar3 = FUN_03065a74(plVar5);
        }
        local_58[0] = iVar7;
        FUN_03077488(lVar3,param_1,local_58);
      }
      plVar5 = plVar5 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
    iVar7 = *param_2;
  }
  uVar1 = *(uint *)(lVar6 + (long)iVar7 * 4);
  uVar8 = (ulong)uVar1;
  if (-1 < (int)uVar1) {
    do {
      if (*(int *)(param_1 + 0x40) != 0) {
        plVar5 = *(long **)(param_1 + 0x38);
        lVar9 = (long)*(int *)(param_1 + 0x40) * 0x18;
        do {
          lVar3 = *plVar5;
          if (lVar3 != 0) {
            if ((char)plVar5[2] != '\x01') {
              lVar3 = FUN_03065a74(plVar5);
            }
            local_60[0] = (undefined4)uVar8;
            FUN_03077488(lVar3,param_1,local_60);
          }
          plVar5 = plVar5 + 3;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
      }
      uVar8 = uVar8 + 1;
    } while (((long)uVar8 < (long)iVar2) && (*(int *)(lVar6 + uVar8 * 4) == *param_2));
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar6 = *plVar4;
  }
  else {
    lVar6 = FUN_0307d71c(plVar4);
  }
  local_68[0] = *param_2;
  FUN_030930f4(lVar6,local_68);
  return;
}


