/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03090238; name: FUN_03090238
 */


void FUN_03090238(long param_1,long *param_2,int *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar8 = *(long **)(param_1 + 0x38);
    plVar9 = plVar8 + (long)*(int *)(param_1 + 0x40) * 3;
    do {
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        if ((char)plVar8[2] != '\x01') {
          lVar4 = FUN_03065a74(plVar8);
        }
        if (*(float *)(lVar4 + 0x1c) + 0.001 < *(float *)(lVar4 + 0x18)) {
          iVar1 = *param_3;
          uVar5 = *(uint *)(lVar4 + 0x70);
          uVar2 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar2) {
            uVar6 = 0;
            do {
              uVar3 = *(uint *)(*param_2 + uVar6 * 4);
              if ((-1 < (int)uVar3) && (uVar7 = iVar1 + (int)uVar6, uVar7 != uVar3)) {
                *(undefined4 *)(*(long *)(lVar4 + 0x28) + (ulong)uVar3 * 4) =
                     *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar7 * 4);
                *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar7 * 4) = 0xffffffff;
                if ((*(int *)(*(long *)(lVar4 + 0x28) + (ulong)uVar3 * 4) == -1) &&
                   ((int)uVar3 <= (int)uVar5)) {
                  uVar5 = uVar3;
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
          }
          if ((int)param_4 <= (int)uVar5) {
            uVar5 = param_4;
          }
          *(uint *)(lVar4 + 0x70) = uVar5;
          if ((*(int *)(lVar4 + 0x30) < (int)param_4) || ((int)param_4 < *(int *)(lVar4 + 0x30))) {
            *(uint *)(lVar4 + 0x30) = param_4;
          }
        }
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar9);
  }
  return;
}


