/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003384c0; name: FUN_003384c0
 */


void FUN_003384c0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_LAB_047cba48;
  if (param_2 != 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      puVar5 = *(ulong **)(param_2 + param_3 * 8);
      *(undefined8 *)(param_2 + param_3 * 8) = 0;
      if (puVar5 != (ulong *)0x0) {
        uVar4 = *puVar5;
        uVar2 = uVar4 & 1;
        if ((uVar4 & 1) == 0) {
          puVar3 = puVar5 + 1;
          if (uVar4 >> 1 != 0 && puVar3 != (ulong *)0x0) {
LAB_00338548:
            uVar2 = uVar4 >> 1;
            do {
              uVar4 = uVar2 - 1;
              puVar6 = (undefined8 *)puVar3[uVar2 - 1];
              puVar3[uVar2 - 1] = 0;
              if (puVar6 != (undefined8 *)0x0) {
                (**(code **)*puVar6)(puVar6);
                FUN_0049e790(puVar1,puVar6);
              }
              uVar2 = uVar4;
            } while (uVar4 != 0);
            uVar2 = *puVar5 & 1;
          }
        }
        else {
          puVar3 = (ulong *)puVar5[1];
          if (uVar4 >> 1 != 0 && puVar3 != (ulong *)0x0) goto LAB_00338548;
        }
        if (uVar2 != 0) {
          FUN_0049e790(puVar1,puVar5[1]);
        }
        FUN_0049e790(puVar1,puVar5);
      }
    }
  }
  return;
}


