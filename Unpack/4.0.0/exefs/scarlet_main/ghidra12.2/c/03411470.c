/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03411470; name: FUN_03411470
 */


void FUN_03411470(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if (puVar2 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x58) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 0x58) * 0x50;
      do {
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + -0x50;
        puVar2 = puVar2 + 10;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 0x50);
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(puVar1 + 0x30))(0xb,puVar2);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x68);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        do {
          plVar3 = (long *)*plVar3;
          (**(code **)(puVar1 + 0x30))(0xb);
        } while (plVar3 != (long *)0x0);
        lVar4 = *(long *)(param_1 + 0x68);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x70));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    (**(code **)(puVar1 + 0x30))(0xb);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


