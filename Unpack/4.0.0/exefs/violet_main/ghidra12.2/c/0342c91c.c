/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0342c91c; name: FUN_0342c91c
 */


void FUN_0342c91c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x50) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 0x50) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar3 = lVar3 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    (**(code **)(puVar1 + 0x30))(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 != 0) {
    if (*(uint *)(param_1 + 0x88) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x88) * 0x90;
      do {
        FUN_03411470(lVar3);
        lVar3 = lVar3 + 0x90;
        lVar4 = lVar4 + -0x90;
      } while (lVar4 != 0);
      lVar3 = *(long *)(param_1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    (**(code **)(puVar1 + 0x30))(9,lVar3);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}


