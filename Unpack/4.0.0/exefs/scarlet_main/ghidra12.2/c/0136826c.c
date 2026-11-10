/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0136826c; name: FUN_0136826c
 */


undefined8 FUN_0136826c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  
  pcVar3 = *(code **)(param_1 + 0x68);
  uVar2 = *(ulong *)(param_1 + 0x70);
  if (pcVar3 == (code *)0x0 && (uVar2 == 0 || (uVar2 & 1) == 0 && pcVar3 == (code *)0x0)) {
    if (((*(byte *)(param_1 + 0x9e) & 1) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
      *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x30) = 5;
    }
  }
  else {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 0x78);
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 0x80);
    if (puVar5 != puVar1) {
      (**(code **)(*(long *)*puVar5 + 0x68))();
      if ((((puVar5 + 1 != puVar1) &&
           ((**(code **)(*(long *)puVar5[1] + 0x68))(), puVar5 + 2 != puVar1)) &&
          ((**(code **)(*(long *)puVar5[2] + 0x68))(), puVar5 + 3 != puVar1)) &&
         (((**(code **)(*(long *)puVar5[3] + 0x68))(), puVar5 + 4 != puVar1 &&
          ((**(code **)(*(long *)puVar5[4] + 0x68))(), puVar5 + 5 != puVar1)))) {
        (**(code **)(*(long *)puVar5[5] + 0x68))();
        for (puVar5 = puVar5 + 6; puVar5 != puVar1; puVar5 = puVar5 + 1) {
          (**(code **)(*(long *)*puVar5 + 0x68))();
        }
      }
      pcVar3 = *(code **)(param_1 + 0x68);
      uVar2 = *(ulong *)(param_1 + 0x70);
    }
    if ((pcVar3 != (code *)0x0) || (uVar2 != 0 && (uVar2 & 1) != 0)) {
      if ((uVar2 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + ((long)uVar2 >> 1)));
      }
      uVar2 = (*pcVar3)();
      if ((uVar2 & 1) == 0) {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 0x40);
        puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x118) + 0x48);
        if (((((puVar5 != puVar1) &&
              ((**(code **)(*(long *)*puVar5 + 0x68))(), puVar5 + 1 != puVar1)) &&
             ((**(code **)(*(long *)puVar5[1] + 0x68))(), puVar5 + 2 != puVar1)) &&
            (((**(code **)(*(long *)puVar5[2] + 0x68))(), puVar5 + 3 != puVar1 &&
             ((**(code **)(*(long *)puVar5[3] + 0x68))(), puVar5 + 4 != puVar1)))) &&
           ((**(code **)(*(long *)puVar5[4] + 0x68))(), puVar5 + 5 != puVar1)) {
          (**(code **)(*(long *)puVar5[5] + 0x68))();
          puVar4 = puVar5 + 6;
          if (puVar5 + 6 != puVar1) {
            do {
              puVar5 = puVar4 + 1;
              (**(code **)(*(long *)*puVar4 + 0x68))();
              puVar4 = puVar5;
            } while (puVar1 != puVar5);
            return 0;
          }
        }
        return 0;
      }
    }
    FUN_0136a1ac(param_1);
    FUN_013691a4(param_1);
  }
  return 1;
}


