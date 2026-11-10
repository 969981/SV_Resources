/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02943f70; name: FUN_02943f70
 */


undefined2 FUN_02943f70(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  
  puVar1 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                 (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 8) + 0x50));
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if (4 < (int)uVar3) {
      uVar3 = 0;
    }
  }
  lVar2 = FUN_0123f5b0(*(undefined8 *)(param_1 + 8));
  if ((uVar3 & 0xff) < 5) {
    return *(undefined2 *)(lVar2 + (ulong)(byte)uVar3 * 2 + 0x2e0);
  }
  return 0;
}


