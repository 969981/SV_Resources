/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c0e84; name: FUN_007c0e84
 */


long FUN_007c0e84(long param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)(param_1 + 0xe0) != param_1 + 0xd8) {
    lVar3 = (long)*(int *)(param_1 + 0xec);
    lVar8 = *(long *)(param_1 + 0xe0) - lVar3;
    uVar6 = (ulong)(param_3 - 1);
    lVar4 = -lVar3;
    lVar5 = (param_1 + 0xd8) - lVar3;
    uVar7 = ~uVar6;
    if (param_4 != 0) {
      if (param_4 == 1) {
        lVar2 = 0;
        do {
          uVar9 = *(ulong *)(lVar8 + 0x18);
          if (((param_2 <= uVar9) &&
              (lVar1 = lVar8 + (ulong)*(ushort *)(lVar8 + 0x12) + 0x20,
              (param_2 - lVar1) + (lVar1 + uVar6 & uVar7) <= uVar9)) &&
             ((lVar2 == 0 || (uVar9 < *(ulong *)(lVar2 + 0x18))))) {
            lVar2 = lVar8;
          }
          lVar8 = *(long *)(lVar8 + lVar3 + 8) + lVar4;
        } while (lVar8 != lVar5);
      }
      else {
        lVar2 = 0;
        do {
          uVar9 = *(ulong *)(lVar8 + 0x18);
          if (((param_2 <= uVar9) &&
              (lVar1 = lVar8 + (ulong)*(ushort *)(lVar8 + 0x12) + 0x20,
              (param_2 - lVar1) + (lVar1 + uVar6 & uVar7) <= uVar9)) &&
             ((lVar2 == 0 || ((param_4 == 2 && (*(ulong *)(lVar2 + 0x18) < uVar9)))))) {
            lVar2 = lVar8;
          }
          lVar8 = *(long *)(lVar8 + lVar3 + 8) + lVar4;
        } while (lVar8 != lVar5);
      }
      return lVar2;
    }
    do {
      if ((param_2 <= *(ulong *)(lVar8 + 0x18)) &&
         (lVar2 = lVar8 + (ulong)*(ushort *)(lVar8 + 0x12) + 0x20,
         (param_2 - lVar2) + (lVar2 + uVar6 & uVar7) <= *(ulong *)(lVar8 + 0x18))) {
        return lVar8;
      }
      lVar8 = *(long *)(lVar8 + lVar3 + 8) + lVar4;
    } while (lVar8 != lVar5);
  }
  return 0;
}


