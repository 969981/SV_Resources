/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03460e6c; name: FUN_03460e6c
 */


void FUN_03460e6c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_03460fa0();
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x90);
      plVar3 = *(long **)(lVar2 + uVar4 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar3;
          if (plVar3[4] != 0) {
            *(undefined4 *)(plVar3 + 5) = 0;
            (**(code **)(puVar1 + 0x30))(0);
            plVar3[4] = 0;
            *(undefined4 *)((long)plVar3 + 0x2c) = 0;
          }
          (**(code **)(puVar1 + 0x30))(0,plVar3);
          plVar3 = plVar5;
        } while (plVar5 != (long *)0x0);
        lVar2 = *(long *)(param_1 + 0x90);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN_03461138(param_1);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


