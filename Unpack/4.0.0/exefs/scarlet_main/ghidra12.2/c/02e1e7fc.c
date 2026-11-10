/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e1e7fc; name: FUN_02e1e7fc
 */


ulong FUN_02e1e7fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x30);
  if (uVar3 == 0) {
LAB_02e1e844:
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = (ulong)(uVar3 - 1);
      if ((uVar3 - 1 & 0xff) == 0) goto LAB_02e1e844;
      uVar1 = (**(code **)(**(long **)(param_1 + (uVar2 & 0xff) * 8) + 0x208))();
      uVar3 = uVar3 - 1;
    } while ((uVar1 & 1) == 0);
  }
  return uVar2;
}


