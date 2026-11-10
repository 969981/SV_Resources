/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f8edf0; name: FUN_02f8edf0
 */


void FUN_02f8edf0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long *plVar13;
  long *plVar12;
  int iVar14;
  
  do {
    uVar1 = param_2 + param_3 >> 1;
    lVar8 = *(long *)(param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
    iVar14 = param_2;
    iVar6 = param_3;
    do {
      uVar5 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x9a);
      plVar10 = (long *)(param_1 + -0x10 + (long)iVar14 * 0x10);
      do {
        iVar11 = iVar14;
        plVar9 = plVar10;
        plVar10 = plVar9 + 2;
        iVar14 = iVar11 + 1;
      } while (*(ushort *)(*(long *)(*plVar10 + 0x20) + 0x9a) < uVar5);
      plVar12 = (long *)(param_1 + 0x10 + (long)iVar6 * 0x10);
      iVar6 = iVar6 + 1;
      do {
        iVar7 = iVar6;
        plVar13 = plVar12;
        plVar12 = plVar13 + -2;
        iVar6 = iVar7 + -1;
      } while (uVar5 < *(ushort *)(*(long *)(*plVar12 + 0x20) + 0x9a));
      iVar14 = iVar11;
      if (iVar11 <= iVar6) {
        if (iVar11 != iVar6) {
          lVar2 = *plVar12;
          lVar3 = plVar13[-1];
          lVar4 = plVar9[3];
          *plVar12 = *plVar10;
          plVar13[-1] = lVar4;
          *plVar10 = lVar2;
          plVar9[3] = lVar3;
        }
        iVar6 = iVar7 + -2;
        iVar14 = iVar11 + 1;
      }
    } while (iVar14 <= iVar6);
    if (param_2 < iVar6) {
      FUN_02f8edf0(param_1);
    }
    param_2 = iVar14;
  } while (iVar14 < param_3);
  return;
}


