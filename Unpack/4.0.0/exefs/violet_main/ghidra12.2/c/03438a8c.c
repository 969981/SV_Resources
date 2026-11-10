/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03438a8c; name: FUN_03438a8c
 */


void FUN_03438a8c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_047bf6e0;
  puVar1 = PTR_DAT_047e2fd0;
  lVar2 = param_1[1];
  lVar3 = lVar2;
  if (*(int *)(param_1 + 2) != 0) {
    do {
      (**(code **)(*(long *)**(undefined8 **)(lVar3 + 0x10) + 0x10))();
      **(undefined8 **)(lVar3 + 0x10) = 0;
      lVar2 = *(long *)(lVar3 + 0x10);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x18) != 0) {
          *(undefined4 *)(lVar2 + 0x20) = 0;
          if (lVar2 + 0x10 != *(long *)(lVar2 + 0x18)) {
            (**(code **)(puVar1 + 0x30))(0);
          }
          *(undefined8 *)(lVar2 + 0x18) = 0;
          *(undefined4 *)(lVar2 + 0x24) = 0;
          lVar2 = *(long *)(lVar3 + 0x10);
        }
        (**(code **)(puVar1 + 0x30))(0,lVar2);
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      lVar2 = param_1[1];
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar2 + (ulong)*(uint *)(param_1 + 2) * 0x18);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(7,lVar2);
    param_1[1] = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
  }
  DAT_048af938 = 0;
  return;
}


