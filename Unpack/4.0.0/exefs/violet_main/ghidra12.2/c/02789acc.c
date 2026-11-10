/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789acc; name: FUN_02789acc
 */


void FUN_02789acc(long param_1)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x78);
  if (lVar7 != 0) {
    uVar1 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
    if (uVar1 != 0) {
      uVar2 = (uint)uVar1;
      if (uVar1 < 2) {
        uVar2 = 1;
      }
      uVar6 = (ulong)uVar2;
      uVar3 = uVar6 & 3;
      if (uVar6 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined4 *)(lVar7 + uVar4) = 0;
          uVar4 = uVar4 + 4;
        } while ((uVar6 & 0xfffc) != uVar4);
      }
      if ((uVar2 & 3) != 0) {
        puVar5 = (undefined1 *)(lVar7 + uVar4);
        do {
          uVar3 = uVar3 - 1;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        } while (uVar3 != 0);
      }
    }
    FUN_007bfae0(lVar7);
    FUN_007bfaa0(lVar7);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x60);
  if (lVar7 != 0) {
    FUN_007bfae0(lVar7);
    FUN_007bfaa0(lVar7);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}


