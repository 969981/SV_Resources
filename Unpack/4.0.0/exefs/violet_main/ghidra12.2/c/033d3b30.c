/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033d3b30; name: FUN_033d3b30
 */


void FUN_033d3b30(long param_1,long param_2,undefined4 param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long alStack_410 [128];
  
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar12 = (ulong)uVar8;
  lVar5 = -(uVar12 * 8 + 0xf & 0xffffffff0);
  lVar6 = (long)alStack_410 + lVar5 + 0x400;
  if (uVar8 != 0) {
    uVar7 = uVar12 & 3;
    if (uVar12 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      plVar11 = (long *)((long)alStack_410 + lVar5 + 0x410);
      do {
        uVar2 = param_4 + uVar10;
        uVar1 = (ulong)uVar10;
        uVar3 = param_4 * 2 + uVar10;
        uVar4 = param_4 * 3 + uVar10;
        uVar9 = uVar9 + 4;
        uVar10 = uVar10 + param_4 * 4;
        plVar11[-2] = param_2 + uVar1 * 4;
        plVar11[-1] = param_2 + (ulong)uVar2 * 4;
        *plVar11 = param_2 + (ulong)uVar3 * 4;
        plVar11[1] = param_2 + (ulong)uVar4 * 4;
        plVar11 = plVar11 + 4;
      } while ((uVar12 & 0xfffffffc) != uVar9);
    }
    if ((uVar8 & 3) != 0) {
      uVar8 = param_4 * (int)uVar9;
      plVar11 = (long *)(lVar6 + uVar9 * 8);
      do {
        uVar12 = (ulong)uVar8;
        uVar7 = uVar7 - 1;
        uVar8 = uVar8 + param_4;
        *plVar11 = param_2 + uVar12 * 4;
        plVar11 = plVar11 + 1;
      } while (uVar7 != 0);
    }
  }
  FUN_033d44e0(lVar6,param_3,param_1 + 0x10,param_1);
  return;
}


