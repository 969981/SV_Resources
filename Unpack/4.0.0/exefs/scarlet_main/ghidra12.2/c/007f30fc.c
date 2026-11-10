/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f30fc; name: FUN_007f30fc
 */


void FUN_007f30fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar3 != 0) {
    FUN_007bfae0(lVar3);
    FUN_007bfaa0(lVar3);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  puVar2 = PTR_DAT_047d1528;
  puVar1 = PTR_DAT_047d1520;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)puVar1 = 0;
  *(undefined2 *)puVar2 = 0;
  FUN_007935cc(param_1 + 0x68);
  return;
}


