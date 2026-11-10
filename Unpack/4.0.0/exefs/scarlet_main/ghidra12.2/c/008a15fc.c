/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a15fc; name: FUN_008a15fc
 */


void FUN_008a15fc(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0xc00) == 0) {
    uVar3 = *(undefined4 *)PTR_DAT_047d2348;
  }
  else {
    lVar5 = (((ulong)(uVar2 << 4) & 0x30) + ((ulong)uVar2 & 0x30) | (ulong)(uVar2 >> 6) & 8) +
            ((ulong)(uVar2 >> 2) & 3) * 0x14;
    lVar1 = *(long *)(param_1 + 0x18) + lVar5;
    lVar5 = *(long *)(param_1 + 0x18) + (ulong)((int)lVar5 + 4);
    if ((uVar2 & 0xc00) != 0x800) {
      lVar5 = lVar1;
    }
    uVar3 = FUN_00893a20(lVar1,lVar5);
  }
  uVar4 = FUN_00893a10(*(undefined8 *)(param_2 + 0xb8),uVar3);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  return;
}


