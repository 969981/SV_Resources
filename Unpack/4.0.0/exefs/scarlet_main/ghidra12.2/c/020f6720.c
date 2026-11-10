/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f6720; name: FUN_020f6720
 */


void FUN_020f6720(long param_1,ulong param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  
  if (param_3 < 0xb) {
    uVar2 = 0;
    if ((param_3 != 0) && (param_3 != 6)) {
      uVar2 = (uint)(byte)(&DAT_03d60c38)[(ulong)param_3 * 4];
    }
  }
  else {
    uVar2 = 0;
  }
  puVar3 = (ushort *)(param_1 + (param_2 & 0xffff) * 0x18 + 0x4a);
  *puVar3 = *puVar3 | (ushort)(1 << (ulong)(uVar2 & 0x1f));
  bVar1 = FUN_0168d1c0();
  if (bVar1 < 0xb) {
    uVar2 = 0;
    if ((bVar1 != 0) && (bVar1 != 6)) {
      uVar2 = (uint)(byte)(&DAT_03d60c38)[(ulong)bVar1 * 4];
    }
  }
  else {
    uVar2 = 0;
  }
  *puVar3 = *puVar3 | (ushort)(1 << (ulong)(uVar2 & 0x1f));
  return;
}


