/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bfd30; name: FUN_034bfd30
 */


void FUN_034bfd30(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long **)(param_1 + 0x110) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x110) + 0x40))();
      *(ushort *)(param_1 + 0x145) = *(ushort *)(param_1 + 0x145) & 0xfff7;
      if (*(int *)(param_1 + 0x120) != 0) {
        lVar2 = *(long *)(param_1 + 0x118);
        do {
          (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
          lVar2 = lVar2 + 0x10;
        } while (lVar2 != *(long *)(param_1 + 0x118) + (ulong)*(uint *)(param_1 + 0x120) * 0x10);
      }
      *(undefined4 *)(param_1 + 0x120) = 0;
      if (*(long **)(param_1 + 0x128) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x128) + 0x10))();
        *(undefined8 *)(param_1 + 0x128) = 0;
      }
    }
    (**(code **)(**(long **)(param_1 + 0x110) + 0x18))();
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(undefined4 *)(param_1 + 0x120) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  return;
}


