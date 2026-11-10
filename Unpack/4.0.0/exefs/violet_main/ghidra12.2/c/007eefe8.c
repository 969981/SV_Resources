/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eefe8; name: FUN_007eefe8
 */


void FUN_007eefe8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x58) != *(int *)PTR_DAT_047d0e88) {
    lVar3 = *(long *)(param_1 + 0x20);
    *(int *)(param_1 + 0x58) = *(int *)PTR_DAT_047d0e88;
    if (lVar3 != 0) {
      FUN_007bfae0(lVar3);
      FUN_007bfaa0(lVar3);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    lVar3 = *(long *)(param_1 + 0x40);
    *(undefined2 *)(param_1 + 0x28) = 0;
    if (lVar3 != 0) {
      FUN_007bfae0(lVar3);
      FUN_007bfaa0(lVar3);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if (puVar4 != (undefined8 *)0x0) {
      lVar3 = puVar4[1];
      if (lVar3 == 0) {
        *(undefined2 *)(puVar4 + 2) = 0;
        uVar1 = FUN_007bfae0(puVar4);
        puVar2 = puVar4;
      }
      else {
        FUN_007bfae0(lVar3);
        FUN_007bfaa0(lVar3);
        puVar4[1] = 0;
        puVar2 = *(undefined8 **)(param_1 + 0x38);
        *(undefined2 *)(puVar4 + 2) = 0;
        if (puVar2 == (undefined8 *)0x0) {
          return;
        }
        uVar1 = FUN_007bfae0(puVar2);
      }
      if (0x27 < uVar1) {
        uVar5 = 0;
        puVar4 = puVar2;
        do {
          (**(code **)*puVar4)(puVar4);
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 5;
        } while (uVar5 < uVar1 / 0x28);
      }
      FUN_007bfaa0(puVar2);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}


