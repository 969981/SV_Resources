/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03527670; name: FUN_03527670
 */


void FUN_03527670(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 auStack_210 [128];
  
  uVar2 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulong)uVar2;
  lVar3 = (long)auStack_210 + (0x200 - (uVar4 * 4 + 0xf & 0x7fffffff0));
  if (uVar2 != 0) {
    lVar5 = *(long *)(param_1 + 0x80);
    if (uVar2 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      puVar7 = (undefined4 *)(lVar5 + 0x20);
      do {
        puVar1 = (undefined4 *)(lVar3 + uVar6 * 4);
        uVar6 = uVar6 + 2;
        *puVar1 = puVar7[-6];
        puVar1[1] = *puVar7;
        puVar7 = puVar7 + 0xc;
      } while ((uVar4 & 0xfffffffe) != uVar6);
    }
    if ((uVar2 & 1) != 0) {
      *(undefined4 *)(lVar3 + uVar6 * 4) = *(undefined4 *)(lVar5 + uVar6 * 0x18 + 8);
    }
  }
  FUN_03478f5c(*(long *)(param_1 + 0x78) + 0x158,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x18),
               lVar3,uVar4,0,0,0);
  return;
}


