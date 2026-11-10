/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ba5a0; name: FUN_034ba5a0
 */


void FUN_034ba5a0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_047e2fd0;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x18) != 0) {
    puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 0x18) * 5;
    do {
      puVar2 = (undefined8 *)puVar3[2];
      if (*(uint *)(puVar3 + 3) != 0) {
        lVar5 = (ulong)*(uint *)(puVar3 + 3) * 0x28;
        plVar6 = puVar2 + 2;
        do {
          if (*plVar6 != 0) {
            *(undefined4 *)(plVar6 + 1) = 0;
            (**(code **)(puVar1 + 0x30))(0);
            *plVar6 = 0;
            *(undefined4 *)((long)plVar6 + 0xc) = 0;
          }
          lVar5 = lVar5 + -0x28;
          plVar6 = plVar6 + 5;
        } while (lVar5 != 0);
        puVar2 = (undefined8 *)puVar3[2];
      }
      if (puVar2 != (undefined8 *)0x0) {
        if (*(uint *)(puVar3 + 3) != 0) {
          lVar5 = (ulong)*(uint *)(puVar3 + 3) * 0x28;
          do {
            (**(code **)*puVar2)(puVar2);
            lVar5 = lVar5 + -0x28;
            puVar2 = puVar2 + 5;
          } while (lVar5 != 0);
          puVar2 = (undefined8 *)puVar3[2];
        }
        *(undefined4 *)(puVar3 + 3) = 0;
        (**(code **)(puVar1 + 0x30))(0,puVar2);
        puVar3[2] = 0;
        *(undefined4 *)((long)puVar3 + 0x1c) = 0;
      }
      puVar3 = puVar3 + 5;
    } while (puVar3 != puVar4);
    puVar3 = *(undefined8 **)(param_1 + 0x10);
  }
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x18) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + -0x28;
        puVar3 = puVar3 + 5;
      } while (lVar5 != 0);
      puVar3 = *(undefined8 **)(param_1 + 0x10);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar3);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}


