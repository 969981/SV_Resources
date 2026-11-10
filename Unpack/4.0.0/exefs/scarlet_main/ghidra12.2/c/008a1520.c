/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a1520; name: FUN_008a1520
 */


void FUN_008a1520(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 & 0xc00) == 0) {
      iVar2 = *(int *)PTR_DAT_047d2348;
    }
    else {
      lVar4 = (((ulong)(uVar1 << 4) & 0x30) + ((ulong)uVar1 & 0x30) | (ulong)(uVar1 >> 6) & 8) +
              ((ulong)(uVar1 >> 2) & 3) * 0x14;
      lVar5 = *(long *)(param_1 + 0x18) + lVar4;
      lVar4 = *(long *)(param_1 + 0x18) + (ulong)((int)lVar4 + 4);
      if ((uVar1 & 0xc00) != 0x800) {
        lVar4 = lVar5;
      }
      iVar2 = FUN_00893a20(lVar5,lVar4);
    }
    if (iVar2 == 7) {
      uVar3 = FUN_008f2164(*(undefined8 *)(param_1 + 0x40));
      FUN_0110a1ec(*(undefined8 *)(param_1 + 0x40),param_2);
      FUN_00896e98(uVar3);
      lVar5 = *(long *)(param_1 + 0x40);
      if (lVar5 != 0) {
        FUN_0110a1d8(lVar5);
        FUN_00896e98(lVar5);
      }
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


