/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6ea90; name: FUN_01f6ea90
 */


void FUN_01f6ea90(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x78) == 0) || (*(short *)(*(long *)(param_2 + 0x78) + 0x1a) == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(long *)(param_2 + 0x78) == 0) {
    FUN_027c91d0(0);
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0x78) + 0x10);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + -0x28;
  }
  FUN_027c91d0(lVar1);
  return;
}


