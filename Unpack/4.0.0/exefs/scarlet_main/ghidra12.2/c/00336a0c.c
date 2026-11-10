/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00336a0c; name: FUN_00336a0c
 */


void FUN_00336a0c(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_LAB_047cba48;
  uVar4 = *param_1;
  uVar2 = uVar4 & 1;
  if ((uVar4 & 1) == 0) {
    puVar3 = param_1 + 1;
  }
  else {
    puVar3 = (ulong *)param_1[1];
  }
  if ((uVar4 >> 1 != 0) && (uVar4 = uVar4 >> 1, puVar3 != (ulong *)0x0)) {
    do {
      uVar2 = uVar4 - 1;
      puVar5 = (undefined8 *)puVar3[uVar4 - 1];
      puVar3[uVar4 - 1] = 0;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5);
        FUN_0049e790(puVar1,puVar5);
      }
      uVar4 = uVar2;
    } while (uVar2 != 0);
    uVar2 = *param_1 & 1;
  }
  if (uVar2 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
  return;
}


