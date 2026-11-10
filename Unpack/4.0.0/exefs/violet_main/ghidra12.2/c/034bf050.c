/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bf050; name: FUN_034bf050
 */


void FUN_034bf050(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,ulong *param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  
  lVar6 = *(long *)(param_3 + 8);
  uVar9 = 1L << (param_4 & 0x3f);
  lVar3 = *(long *)(lVar6 + 0x10);
  uVar4 = *(uint *)(lVar6 + 0x18);
  uVar7 = (ulong)uVar4;
  if ((*(ulong *)(lVar6 + 8) & uVar9) == 0) {
    if (lVar3 == 0) {
      puVar10 = (ulong *)0x0;
    }
    else {
      if (0 < (int)uVar4) {
        iVar8 = 0;
        do {
          iVar1 = iVar8 + uVar4;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          uVar2 = iVar1 >> 1;
          lVar6 = *(long *)(lVar3 + (long)(int)uVar2 * 0x10 + 8);
          if ((*(ulong *)(lVar6 + 0x10) < *param_5) ||
             ((*(ulong *)(lVar6 + 0x10) == *param_5 &&
              ((*(uint *)(lVar6 + 0x18) < (uint)param_5[1] ||
               ((*(uint *)(lVar6 + 0x18) == (uint)param_5[1] &&
                ((*(uint *)(lVar6 + 0x20) < (uint)param_5[2] ||
                 ((*(uint *)(lVar6 + 0x20) == (uint)param_5[2] &&
                  (((*(char *)(lVar6 + 0x28) + 1U & 0x1f) < ((char)param_5[3] + 1U & 0x1f) ||
                   ((*(char *)(lVar6 + 0x28) == (char)param_5[3] &&
                    (((byte)(*(char *)(lVar6 + 0x30) + 1U) < (byte)((char)param_5[4] + 1U) ||
                     ((*(char *)(lVar6 + 0x30) == (char)param_5[4] &&
                      (*(ulong *)(lVar6 + 0x38) < param_5[5])))))))))))))))))))) {
            iVar8 = uVar2 + 1;
          }
          else {
            uVar4 = uVar2;
          }
        } while (iVar8 < (int)uVar4);
      }
      puVar10 = (ulong *)(lVar3 + (long)(int)uVar4 * 0x10);
    }
    for (; puVar10 != (ulong *)(lVar3 + uVar7 * 0x10); puVar10 = puVar10 + 2) {
      plVar5 = (long *)puVar10[1];
      if ((*param_5 != 0) && (plVar5[2] != *param_5)) {
        return;
      }
      if (((int)param_5[1] != 0) && ((int)plVar5[3] != (int)param_5[1])) {
        return;
      }
      if (((int)param_5[2] != 0) && ((int)plVar5[4] != (int)param_5[2])) {
        return;
      }
      if (((char)param_5[3] != -1) && ((char)plVar5[5] != (char)param_5[3])) {
        return;
      }
      if (((char)param_5[4] != -1) && ((char)plVar5[6] != (char)param_5[4])) {
        return;
      }
      if ((param_5[5] != 0) && (plVar5[7] != param_5[5])) {
        return;
      }
      if ((*puVar10 & uVar9) != 0) {
        (**(code **)(*plVar5 + 0x10))
                  (param_1,param_2,plVar5,*(undefined4 *)(param_3 + 0x10),param_4 & 0xffffffff);
      }
    }
  }
  else {
    if (lVar3 == 0) {
      lVar6 = 0;
    }
    else {
      if (0 < (int)uVar4) {
        iVar8 = 0;
        do {
          iVar1 = iVar8 + uVar4;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          uVar2 = iVar1 >> 1;
          lVar6 = *(long *)(lVar3 + (long)(int)uVar2 * 0x10 + 8);
          if ((*(ulong *)(lVar6 + 0x10) < *param_5) ||
             ((*(ulong *)(lVar6 + 0x10) == *param_5 &&
              ((*(uint *)(lVar6 + 0x18) < (uint)param_5[1] ||
               ((*(uint *)(lVar6 + 0x18) == (uint)param_5[1] &&
                ((*(uint *)(lVar6 + 0x20) < (uint)param_5[2] ||
                 ((*(uint *)(lVar6 + 0x20) == (uint)param_5[2] &&
                  (((*(char *)(lVar6 + 0x28) + 1U & 0x1f) < ((char)param_5[3] + 1U & 0x1f) ||
                   ((*(char *)(lVar6 + 0x28) == (char)param_5[3] &&
                    (((byte)(*(char *)(lVar6 + 0x30) + 1U) < (byte)((char)param_5[4] + 1U) ||
                     ((*(char *)(lVar6 + 0x30) == (char)param_5[4] &&
                      (*(ulong *)(lVar6 + 0x38) < param_5[5])))))))))))))))))))) {
            iVar8 = uVar2 + 1;
          }
          else {
            uVar4 = uVar2;
          }
        } while (iVar8 < (int)uVar4);
      }
      lVar6 = lVar3 + (long)(int)uVar4 * 0x10;
    }
    for (; lVar6 != lVar3 + uVar7 * 0x10; lVar6 = lVar6 + 0x10) {
      plVar5 = *(long **)(lVar6 + 8);
      if ((*param_5 != 0) && (plVar5[2] != *param_5)) {
        return;
      }
      if (((int)param_5[1] != 0) && ((int)plVar5[3] != (int)param_5[1])) {
        return;
      }
      if (((int)param_5[2] != 0) && ((int)plVar5[4] != (int)param_5[2])) {
        return;
      }
      if (((char)param_5[3] != -1) && ((char)plVar5[5] != (char)param_5[3])) {
        return;
      }
      if (((char)param_5[4] != -1) && ((char)plVar5[6] != (char)param_5[4])) {
        return;
      }
      if ((param_5[5] != 0) && (plVar5[7] != param_5[5])) {
        return;
      }
      (**(code **)(*plVar5 + 0x10))
                (param_1,param_2,plVar5,*(undefined4 *)(param_3 + 0x10),param_4 & 0xffffffff);
    }
  }
  return;
}


