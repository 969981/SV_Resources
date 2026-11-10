/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033cd650; name: FUN_033cd650
 */


int FUN_033cd650(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  long alStack_410 [128];
  
  uVar3 = *(uint *)(param_1 + 5);
  uVar5 = (ulong)uVar3;
  plVar7 = (long *)((long)alStack_410 + (0x400 - (uVar5 * 8 + 0xf & 0xffffffff0)));
  if (uVar3 == 0) {
    uVar6 = 0;
    iVar8 = 0;
  }
  else {
    uVar2 = *(uint *)((long)param_1 + 0x2c);
    lVar4 = param_1[6];
    uVar6 = uVar3 << 3;
    iVar10 = 1;
    uVar9 = (ulong)uVar6;
    plVar11 = plVar7;
    do {
      uVar1 = (int)uVar9 + 0xfU & 0xfffffff0;
      uVar9 = (ulong)uVar1;
      *plVar11 = uVar9 + (long)plVar7;
      switch(*param_2) {
      case 0:
        uVar9 = (ulong)(uVar1 + (uVar2 >> ((int)lVar4 == 1)) * 8);
        break;
      case 1:
      case 5:
        iVar10 = iVar10 << 3;
        break;
      case 2:
      case 6:
        uVar9 = (ulong)(uVar1 + iVar10 * 0x10);
        iVar10 = iVar10 * 3;
        break;
      case 3:
      case 7:
      case 9:
        uVar9 = (ulong)(uVar1 + iVar10 * 0x18);
        iVar10 = iVar10 << 2;
        break;
      case 4:
      case 8:
        uVar9 = (ulong)(uVar1 + iVar10 * 0x20);
        iVar10 = iVar10 * 5;
        break;
      case 10:
        uVar9 = (ulong)(uVar1 + uVar2 * 8);
      }
      iVar8 = (int)uVar9;
      uVar5 = uVar5 - 1;
      param_2 = param_2 + 1;
      plVar11 = plVar11 + 1;
    } while (uVar5 != 0);
  }
  uVar2 = iVar8 + 0x40U + uVar3 * 4;
  *param_1 = (long)(param_1 + 8);
  param_1[1] = (ulong)(iVar8 + 0x40U) + (long)param_1;
  uVar1 = uVar2 + uVar3 * 4 + 7 & 0xfffffff8;
  uVar3 = uVar1 + uVar6;
  param_1[2] = (ulong)uVar2 + (long)param_1;
  param_1[3] = (ulong)uVar1 + (long)param_1;
  param_1[4] = (ulong)uVar3 + (long)param_1;
  return uVar3 + uVar6;
}


