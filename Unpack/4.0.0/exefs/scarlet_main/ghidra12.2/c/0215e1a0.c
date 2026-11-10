/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0215e1a0; name: FUN_0215e1a0
 */


void FUN_0215e1a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = 0;
  do {
    bVar1 = lVar2 != -0xe0;
    *(undefined4 *)((long)param_1 + lVar2 + 0xe8) = *(undefined4 *)((long)param_1 + lVar2 + 0xe0);
    *(undefined4 *)((long)param_1 + lVar2 + 0xec) = *(undefined4 *)((long)param_1 + lVar2 + 0xe4);
    lVar2 = lVar2 + -8;
  } while (bVar1);
  iVar3 = 0x1e;
  if ((int)param_1[0x3c] < 0x1e) {
    iVar3 = param_1[0x3c] + 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[0x3c] = iVar3;
  return;
}


