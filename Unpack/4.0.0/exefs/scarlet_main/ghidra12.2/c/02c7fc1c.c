/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c7fc1c; name: FUN_02c7fc1c
 */


void FUN_02c7fc1c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint local_24;
  
  uVar2 = nn::oe::TryPopNotificationMessage(&local_24);
  if ((uVar2 & 1) != 0) {
    if ((int)local_24 < 0x10) {
      if (local_24 == 4) {
        puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x48) + 0x48);
        for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x48) + 0x40); puVar3 != puVar1;
            puVar3 = puVar3 + 1) {
          (**(code **)(*(long *)*puVar3 + 8))();
        }
      }
      else if (local_24 == 0xf) {
        puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x48);
        for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x40); puVar3 != puVar1;
            puVar3 = puVar3 + 1) {
          (**(code **)(*(long *)*puVar3 + 8))();
        }
      }
    }
    else if (local_24 == 0x10) {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x48);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x40); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
    }
    else if (local_24 == 0x1e) {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x38) + 0x48);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x38) + 0x40); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
    }
    else if (local_24 == 0x1f) {
      puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x48);
      for (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x40); puVar3 != puVar1;
          puVar3 = puVar3 + 1) {
        (**(code **)(*(long *)*puVar3 + 8))();
      }
    }
  }
  return;
}


