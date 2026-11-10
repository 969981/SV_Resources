/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027de574; name: FUN_027de574
 */


void FUN_027de574(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != param_2) {
    lVar3 = 0;
    do {
      lVar1 = lVar2 + lVar3;
      if ((*(byte *)(lVar1 + -0x20) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -8) + 0x18))
                  (*(long **)(lVar1 + -8),*(undefined8 *)(lVar1 + -0x10),
                   *(ulong *)(lVar1 + -0x20) & 0xfffffffffffffffe,1);
      }
      if ((*(byte *)(lVar1 + -0x48) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x30) + 0x18))
                  (*(long **)(lVar1 + -0x30),*(undefined8 *)(lVar1 + -0x38),
                   *(ulong *)(lVar1 + -0x48) & 0xfffffffffffffffe,1);
      }
      FUN_01cfa410(lVar1 + -0x50);
      if ((*(byte *)(lVar1 + -0x70) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x58) + 0x18))
                  (*(long **)(lVar1 + -0x58),*(undefined8 *)(lVar1 + -0x60),
                   *(ulong *)(lVar1 + -0x70) & 0xfffffffffffffffe,1);
      }
      if ((*(byte *)(lVar1 + -0x90) & 1) != 0) {
        (**(code **)(**(long **)(lVar1 + -0x78) + 0x18))
                  (*(long **)(lVar1 + -0x78),*(undefined8 *)(lVar1 + -0x80),
                   *(ulong *)(lVar1 + -0x90) & 0xfffffffffffffffe,1);
      }
      lVar3 = lVar3 + -0x90;
    } while (param_2 - lVar2 != lVar3);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


