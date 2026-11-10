/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de478; name: FUN_027de478
 */


void FUN_027de478(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != param_2) {
    lVar3 = 0;
    do {
      lVar1 = lVar2 + lVar3;
      FUN_027de528(lVar1 + -0x20);
      if ((*(byte *)(lVar1 + -0x48) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x30) + 0x18))
                  (*(long **)(lVar1 + -0x30),*(undefined8 *)(lVar1 + -0x38),
                   *(ulong *)(lVar1 + -0x48) & 0xfffffffffffffffe,1);
      }
      FUN_01cfa410(lVar1 + -0x68);
      if ((*(byte *)(lVar1 + -0x88) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x70) + 0x18))
                  (*(long **)(lVar1 + -0x70),*(undefined8 *)(lVar1 + -0x78),
                   *(ulong *)(lVar1 + -0x88) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar3 + -0x88;
    } while (param_2 - lVar2 != lVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


