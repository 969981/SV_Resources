/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119579c; name: FUN_0119579c
 */


undefined8 FUN_0119579c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar1 = FUN_01195c20();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_01195974(param_1);
  iVar6 = *(int *)(param_1 + 0x108);
  if (iVar6 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x1a0);
    lVar2 = FUN_01195854();
    uVar4 = (uint)*(byte *)(lVar2 + 0x570);
    uVar3 = 0;
    iVar6 = *(int *)(param_1 + 0x108);
  }
  else {
    uVar3 = 1;
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        return 0;
      }
      uVar3 = 2;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x1a0);
    uVar4 = *(uint *)(param_1 + 0x2a4);
  }
  uVar5 = uVar1 >> 0x20;
  if (iVar6 == 0) {
    uVar5 = (ulong)(uint)((int)uVar1 + (int)(uVar1 >> 0x20) * 6);
  }
  else if ((iVar6 != 1) && (iVar6 != 2)) {
    uVar5 = 1;
  }
  uVar7 = FUN_010f26f8(uVar7,uVar3,uVar4,uVar5);
  return uVar7;
}


