/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c53bc; name: FUN_034c53bc
 */


void FUN_034c53bc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  FUN_034c54b4(param_1,0);
  FUN_034c570c(param_1,0xfffffffffffffffe);
  puVar1 = PTR_DAT_047e2fd0;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x30);
      plVar2 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        do {
          plVar2 = (long *)*plVar2;
          (**(code **)(puVar1 + 0x30))(0);
        } while (plVar2 != (long *)0x0);
        lVar3 = *(long *)(param_1 + 0x30);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_034c462c(param_1);
  (**(code **)(puVar1 + 0x30))(DAT_048b02c8,DAT_048b02b8);
  DAT_048b02b8 = 0;
  DAT_048b02c0 = 0;
  if (DAT_048b02d8 != 0) {
    DAT_048b02e0 = 0;
    (**(code **)(puVar1 + 0x30))(0);
    DAT_048b02d8 = 0;
    DAT_048b02e4 = 0;
  }
  return;
}


