/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c1120; name: FUN_007c1120
 */


long FUN_007c1120(long param_1,ulong param_2,int param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  
  if (0 < *(int *)(param_1 + 0xe8)) {
    plVar1 = (long *)(param_1 + 0xd8);
    if (*plVar1 != 0) {
      lVar5 = *plVar1 - (long)*(int *)(param_1 + 0xec);
      if (lVar5 != 0) {
        iVar6 = 0x20 - (int)param_2;
        uVar2 = param_3 - 1;
        if (param_4 == 1) {
          lVar3 = 0;
          lVar4 = lVar5;
          do {
            lVar5 = lVar3;
            uVar8 = *(ulong *)(lVar4 + 0x18);
            if (((param_2 <= uVar8) &&
                ((iVar6 + (int)lVar4 + (int)uVar8 + (uint)*(ushort *)(lVar4 + 0x12) & uVar2) +
                 param_2 <= uVar8)) && ((lVar5 == 0 || (uVar8 < *(ulong *)(lVar5 + 0x18))))) {
              lVar5 = lVar4;
            }
            plVar7 = *(long **)(lVar4 + *(int *)(param_1 + 0xec));
            lVar4 = 0;
            if (plVar7 != plVar1) {
              lVar4 = (long)plVar7 - (long)*(int *)(param_1 + 0xec);
            }
            lVar3 = lVar5;
          } while (lVar4 != 0);
        }
        else {
          lVar4 = lVar5;
          if (param_4 == 0) {
            do {
              uVar8 = *(ulong *)(lVar4 + 0x18);
              if ((param_2 <= uVar8) &&
                 ((iVar6 + (int)lVar4 + (int)uVar8 + (uint)*(ushort *)(lVar4 + 0x12) & uVar2) +
                  param_2 <= uVar8)) {
                return lVar4;
              }
              plVar7 = *(long **)(lVar4 + *(int *)(param_1 + 0xec));
              lVar4 = 0;
              if (plVar7 != plVar1) {
                lVar4 = (long)plVar7 - (long)*(int *)(param_1 + 0xec);
              }
              lVar5 = 0;
            } while (lVar4 != 0);
          }
          else {
            lVar3 = 0;
            do {
              lVar5 = lVar3;
              uVar8 = *(ulong *)(lVar4 + 0x18);
              if (((param_2 <= uVar8) &&
                  ((iVar6 + (int)lVar4 + (int)uVar8 + (uint)*(ushort *)(lVar4 + 0x12) & uVar2) +
                   param_2 <= uVar8)) &&
                 ((lVar5 == 0 || ((param_4 == 2 && (*(ulong *)(lVar5 + 0x18) < uVar8)))))) {
                lVar5 = lVar4;
              }
              plVar7 = *(long **)(lVar4 + *(int *)(param_1 + 0xec));
              lVar4 = 0;
              if (plVar7 != plVar1) {
                lVar4 = (long)plVar7 - (long)*(int *)(param_1 + 0xec);
              }
              lVar3 = lVar5;
            } while (lVar4 != 0);
          }
        }
      }
      return lVar5;
    }
  }
  return 0;
}


