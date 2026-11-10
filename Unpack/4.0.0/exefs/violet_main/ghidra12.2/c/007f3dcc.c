/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f3dcc; name: FUN_007f3dcc
 */


int FUN_007f3dcc(long param_1,byte param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 < *(byte *)(param_1 + 0x5a)) {
    uVar3 = *(uint *)(*(long *)(param_1 + 0x60) + (ulong)param_2 * 0x40);
    uVar7 = (ulong)uVar3;
    if (uVar3 != 0) {
      lVar1 = *(long *)(param_1 + 0x60) + (ulong)param_2 * 0x40;
      uVar8 = (ulong)*(uint *)(lVar1 + 0x10);
      uVar2 = (ulong)*(uint *)(lVar1 + 4) + (ulong)(uVar3 - 1);
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar2 / uVar8;
      }
      iVar6 = *(int *)(*(long *)(lVar1 + 8) + (uVar2 - uVar4 * uVar8) * 4);
      iVar5 = iVar6;
      if (uVar3 != 1) {
        do {
          iVar6 = (int)uVar7;
          uVar7 = uVar7 - 1;
          uVar2 = (ulong)(iVar6 - 2) + (ulong)*(uint *)(lVar1 + 4);
          uVar4 = 0;
          if (uVar8 != 0) {
            uVar4 = uVar2 / uVar8;
          }
          iVar6 = *(int *)(*(long *)(lVar1 + 8) + (uVar2 - uVar4 * uVar8) * 4);
          if (iVar5 <= iVar6) {
            iVar6 = iVar5;
          }
          iVar5 = iVar6;
        } while (uVar7 != 1);
      }
      return iVar6;
    }
  }
  return -1;
}


