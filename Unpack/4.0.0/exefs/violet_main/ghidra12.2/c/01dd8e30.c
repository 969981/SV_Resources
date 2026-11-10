/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd8e30; name: FUN_01dd8e30
 */


bool FUN_01dd8e30(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  lVar8 = *(long *)(param_1 + 0x1b0);
  uVar3 = FUN_01195974();
  iVar2 = *(int *)(param_1 + 0x108);
  if (iVar2 == 0) {
    lVar4 = FUN_01195854();
    uVar6 = (uint)*(byte *)(lVar4 + 0x570);
    uVar5 = 0;
    iVar2 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar5 = 1;
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        uVar6 = 0xffffffff;
        uVar5 = 3;
        goto LAB_01dd8e6c;
      }
      uVar5 = 2;
    }
    uVar6 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd8e6c:
  iVar9 = (int)((ulong)uVar3 >> 0x20);
  iVar7 = iVar9;
  if (iVar2 != 2) {
    iVar7 = 1;
  }
  iVar1 = iVar9;
  if (iVar2 != 1) {
    iVar1 = iVar7;
  }
  iVar7 = (int)uVar3 + iVar9 * 6;
  if (iVar2 != 0) {
    iVar7 = iVar1;
  }
  iVar2 = FUN_01dc7abc(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(lVar8 + 0xbf0),
                       *(undefined1 *)(lVar8 + 0xbf4),*(undefined1 *)(lVar8 + 0xbf5),uVar5,uVar6,
                       iVar7);
  return iVar2 != 0;
}


