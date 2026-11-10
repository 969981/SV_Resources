/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc4b40; name: FUN_00bc4b40
 */


void FUN_00bc4b40(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  while (plVar5 != (long *)(param_1 + 0x10)) {
    FUN_00c1ffb4(plVar5 + 5);
    plVar1 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar1 = plVar5 + 2;
      if (*(long **)*plVar1 == plVar5) {
        plVar5 = (long *)*plVar1;
      }
      else {
        do {
          lVar3 = *plVar1;
          plVar1 = (long *)(lVar3 + 0x10);
          plVar5 = (long *)*plVar1;
        } while (*plVar5 != lVar3);
      }
    }
    else {
      do {
        plVar5 = plVar1;
        plVar1 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  if ((*(byte *)(param_1 + 0x30) & 0x3f) != 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0x48);
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    do {
      puVar2 = puVar2 + 1;
      (**(code **)(*(long *)*puVar2 + 0x38))();
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (((*(ulong *)(param_1 + 0x28) & 1) == 0) ||
     (*(long *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe) == 0)) {
    return;
  }
  FUN_00bfee44();
  return;
}


