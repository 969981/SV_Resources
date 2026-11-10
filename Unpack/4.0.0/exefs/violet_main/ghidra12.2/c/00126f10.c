/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00126f10; name: FUN_00126f10
 */


void FUN_00126f10(long param_1)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_1 + 0x10);
  while (uVar3 = uVar4, lVar6 != 0) {
    puVar1 = (ulong *)(lVar6 + 8);
    lVar6 = *(long *)(lVar6 + 0x10);
    uVar4 = *puVar1;
    if (*puVar1 <= uVar3) {
      uVar4 = uVar3;
    }
  }
  iVar5 = (int)(uVar3 - *(long *)(param_1 + 0x30) >> 4);
  iVar7 = 0x14;
  if (0x13 < iVar5) {
    iVar7 = iVar5 + 1;
  }
  iVar2 = iVar7 * 3;
  iVar5 = 1000000;
  if (iVar2 < 0xf4241 || iVar7 < 0x7a121) {
    iVar5 = iVar7 * 2;
  }
  if (iVar7 < 0xf4241) {
    iVar7 = 1000000;
    if (iVar2 < 0xf4241) {
      iVar7 = iVar2;
    }
    if (iVar7 < (int)((ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30)) >> 4)) {
      FUN_00126ce0(param_1,iVar5,0);
    }
  }
  FUN_0013af50(param_1);
  return;
}


