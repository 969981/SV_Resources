/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034916b4; name: FUN_034916b4
 */


void FUN_034916b4(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047e2fd0;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x20) != 0) {
    puVar4 = puVar2 + (ulong)*(uint *)(param_1 + 0x20) * 6;
    do {
      puVar3 = (undefined8 *)puVar2[3];
      if (*(uint *)(puVar2 + 4) != 0) {
        lVar5 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
        do {
          FUN_034917f0(puVar3);
          puVar3 = puVar3 + 6;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        puVar3 = (undefined8 *)puVar2[3];
      }
      if (puVar3 != (undefined8 *)0x0) {
        if (*(uint *)(puVar2 + 4) != 0) {
          lVar5 = (ulong)*(uint *)(puVar2 + 4) * 0x30;
          do {
            (**(code **)*puVar3)(puVar3);
            lVar5 = lVar5 + -0x30;
            puVar3 = puVar3 + 6;
          } while (lVar5 != 0);
          puVar3 = (undefined8 *)puVar2[3];
        }
        *(undefined4 *)(puVar2 + 4) = 0;
        (**(code **)(puVar1 + 0x30))(0,puVar3);
        puVar2[3] = 0;
        *(undefined4 *)((long)puVar2 + 0x24) = 0;
      }
      puVar2 = puVar2 + 6;
    } while (puVar2 != puVar4);
    puVar2 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x20) * 0x30;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar5 = lVar5 + -0x30;
        puVar2 = puVar2 + 6;
      } while (lVar5 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


