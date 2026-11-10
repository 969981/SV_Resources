/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d931c; name: FUN_007d931c
 */


void FUN_007d931c(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if ((param_3 == 0x19) && (lVar7 = FUN_007ec50c(), lVar7 != 0)) {
    lVar7 = FUN_007ec50c(param_1);
    lVar8 = FUN_007ec4a8(param_1);
    if (lVar7 == lVar8) {
      uVar10 = (*(ulong *)(param_2 + 0xd) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2 + 0xd) & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar11 = *(ulong *)(param_2 + 1);
      uVar1 = *(uint *)(param_2 + 9);
      bVar2 = *(byte *)(param_2 + 0x15);
      bVar3 = *(byte *)(param_2 + 0x16);
      bVar4 = *(byte *)(param_2 + 0x17);
      bVar5 = *(byte *)(param_2 + 0x18);
      lVar7 = *(long *)PTR_DAT_047d0a08;
      uVar9 = FUN_007e5328(lVar7 + 0x178);
      if (((uVar9 == (uVar10 >> 0x20 | uVar10 << 0x20)) &&
          (uVar6 = FUN_007e5330(lVar7 + 0x178),
          ((uint)bVar2 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8 | (uint)bVar5) ==
          (uVar6 & 0xffff))) &&
         (uVar10 = FUN_0078cdf4(*(undefined8 *)(param_1 + 0xb8)), (uVar10 & 1) != 0)) {
        uVar10 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        FUN_007ded94(*(undefined8 *)(param_1 + 0xb8),uVar10 >> 0x20 | uVar10 << 0x20,
                     uVar1 >> 0x10 | uVar1 << 0x10);
        return;
      }
    }
  }
  return;
}


