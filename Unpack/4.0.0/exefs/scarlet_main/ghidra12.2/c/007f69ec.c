/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f69ec; name: FUN_007f69ec
 */


void FUN_007f69ec(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (DAT_047fb468 != 0) {
    lVar1 = FUN_0078bb34();
    if (lVar1 != 0) {
      FUN_0078bb34();
      FUN_0078c184();
    }
    FUN_01913dc4(param_1 + 0x10,DAT_047fb460);
    DAT_047fb468 = 0;
  }
  DAT_047fb460 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_007f98c4();
    }
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
      (**(code **)(**(long **)(param_1 + 8) + 0x58))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_007bfaa0(puVar3);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar1 != 0) {
      FUN_007e9d28(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x88);
    if (lVar1 != 0) {
      FUN_007e9d28(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 != 0) {
      FUN_007e9d28(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 != 0) {
      FUN_007e9d28(lVar1);
      FUN_007bfaa0(lVar1);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
    }
    FUN_007ec750(param_1 + 0x10);
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      puVar3 = *(undefined8 **)(param_1 + 0x58);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        FUN_007bfaa0(puVar3);
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    (**(code **)(**(long **)(param_1 + 8) + 200))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x40))(plVar2,plVar2);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


