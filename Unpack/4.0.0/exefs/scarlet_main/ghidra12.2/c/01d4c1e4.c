/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4c1e4; name: FUN_01d4c1e4
 */


void FUN_01d4c1e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  FUN_01d4b5b4();
  FUN_01d4b5b4(param_1 + 0x38,param_2 + 0x38);
  lVar5 = 0;
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  do {
    lVar1 = param_2 + lVar5;
    lVar2 = param_1 + lVar5;
    *(undefined1 *)(lVar2 + 0x80) = *(undefined1 *)(lVar1 + 0x80);
    *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar1 + 0x90);
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar1 + 0x98);
    plVar4 = *(long **)(lVar1 + 0xa0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar3 = *(long **)(lVar2 + 0xa0);
    *(long **)(lVar2 + 0xa0) = plVar4;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(lVar1 + 0xb8);
    lVar5 = lVar5 + 0x40;
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(lVar1 + 0xb0);
  } while (lVar5 != 0x500);
  lVar5 = 0;
  *(undefined2 *)(param_1 + 0x580) = *(undefined2 *)(param_2 + 0x580);
  do {
    lVar1 = param_2 + lVar5;
    lVar2 = param_1 + lVar5;
    *(undefined8 *)(lVar2 + 0x588) = *(undefined8 *)(lVar1 + 0x588);
    *(undefined8 *)(lVar2 + 0x590) = *(undefined8 *)(lVar1 + 0x590);
    *(undefined8 *)(lVar2 + 0x598) = *(undefined8 *)(lVar1 + 0x598);
    plVar4 = *(long **)(lVar1 + 0x5a0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    plVar3 = *(long **)(lVar2 + 0x5a0);
    *(long **)(lVar2 + 0x5a0) = plVar4;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x280);
  return;
}


