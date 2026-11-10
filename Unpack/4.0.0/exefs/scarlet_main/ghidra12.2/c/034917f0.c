/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034917f0; name: FUN_034917f0
 */


void FUN_034917f0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_047e2fd0;
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x20) != 0) {
    puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 0x20) * 6;
    do {
      puVar2 = (undefined8 *)puVar3[3];
      if (*(uint *)(puVar3 + 4) != 0) {
        lVar5 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
        plVar6 = puVar2 + 3;
        do {
          if (*plVar6 != 0) {
            *(undefined4 *)(plVar6 + 1) = 0;
            (**(code **)(puVar1 + 0x30))(0);
            *plVar6 = 0;
            *(undefined4 *)((long)plVar6 + 0xc) = 0;
          }
          lVar5 = lVar5 + -0x30;
          plVar6 = plVar6 + 6;
        } while (lVar5 != 0);
        puVar2 = (undefined8 *)puVar3[3];
      }
      if (puVar2 != (undefined8 *)0x0) {
        if (*(uint *)(puVar3 + 4) != 0) {
          lVar5 = (ulong)*(uint *)(puVar3 + 4) * 0x30;
          do {
            (**(code **)*puVar2)(puVar2);
            lVar5 = lVar5 + -0x30;
            puVar2 = puVar2 + 6;
          } while (lVar5 != 0);
          puVar2 = (undefined8 *)puVar3[3];
        }
        *(undefined4 *)(puVar3 + 4) = 0;
        (**(code **)(puVar1 + 0x30))(0,puVar2);
        puVar3[3] = 0;
        *(undefined4 *)((long)puVar3 + 0x24) = 0;
      }
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
    puVar3 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x20) * 0x30;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + -0x30;
        puVar3 = puVar3 + 6;
      } while (lVar5 != 0);
      puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar3);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


