/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008d4520; name: FUN_008d4520
 */


void FUN_008d4520(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_047d2558;
  puVar2 = PTR_DAT_047d2550;
  puVar1 = PTR_DAT_047d2540;
  if (0 < *(int *)PTR_DAT_047d2550) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)puVar1 + 0x18))
                (*(long **)puVar1,*(undefined8 *)(*(long *)puVar3 + lVar4 * 8));
      *(undefined8 *)(*(long *)puVar3 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)puVar2);
  }
  (**(code **)(**(long **)PTR_DAT_047d2530 + 0x18))
            (*(long **)PTR_DAT_047d2530,*(undefined8 *)puVar3);
  *(undefined8 *)puVar3 = 0;
  *(undefined4 *)puVar2 = 0;
  return;
}


