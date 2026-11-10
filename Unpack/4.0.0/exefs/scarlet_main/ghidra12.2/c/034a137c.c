/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a137c; name: FUN_034a137c
 */


undefined8 FUN_034a137c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 1);
  if (1 < *(uint *)(param_1 + 1)) {
    lVar5 = *param_1 + uVar3 * 0xc0;
    puVar4 = (undefined8 *)*param_2;
    *puVar4 = *(undefined8 *)(lVar5 + -0xc0);
    memcpy(puVar4 + 1,(void *)(lVar5 + -0xb8),0x50);
    puVar4[0xb] = *(undefined8 *)(lVar5 + -0x68);
    if (puVar4[0xd] != 0) {
      *(undefined4 *)(puVar4 + 0xe) = 0;
      (**(code **)(*(long *)puVar4[0xc] + 0x18))();
      puVar4[0xd] = 0;
      *(undefined4 *)((long)puVar4 + 0x74) = 0;
    }
    puVar4[0xd] = *(undefined8 *)(lVar5 + -0x58);
    puVar4[0xc] = *(undefined8 *)(lVar5 + -0x60);
    *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)(lVar5 + -0x50);
    *(undefined4 *)((long)puVar4 + 0x74) = *(undefined4 *)(lVar5 + -0x4c);
    *(undefined8 *)(lVar5 + -0x58) = 0;
    *(undefined8 *)(lVar5 + -0x50) = 0;
    *(undefined4 *)(puVar4 + 0xf) = *(undefined4 *)(lVar5 + -0x48);
    if ((puVar4[0x11] != 0) && (*(char *)(puVar4 + 0x12) != '\0')) {
      (**(code **)(*(long *)puVar4[0x10] + 0x18))();
      *(undefined1 *)(puVar4 + 0x12) = 0;
    }
    puVar4[0x11] = 0;
    puVar4[0x11] = *(undefined8 *)(lVar5 + -0x38);
    puVar4[0x10] = *(undefined8 *)(lVar5 + -0x40);
    *(undefined8 *)(lVar5 + -0x38) = 0;
    *(undefined1 *)(puVar4 + 0x12) = *(undefined1 *)(lVar5 + -0x30);
    uVar2 = *(undefined4 *)(lVar5 + -0x18);
    uVar1 = *(undefined8 *)(lVar5 + -0x20);
    *(undefined1 *)(lVar5 + -0x30) = 0;
    puVar4[0x13] = *(undefined8 *)(lVar5 + -0x28);
    puVar4[0x14] = uVar1;
    *(undefined4 *)(puVar4 + 0x15) = uVar2;
    *(undefined8 *)(lVar5 + -0x28) = 0;
    *(undefined8 *)(lVar5 + -0x1c) = 0x2b;
    *(undefined4 *)(puVar4 + 0x16) = *(undefined4 *)(lVar5 + -0x10);
    if (puVar4[0x17] != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    puVar4[0x17] = *(undefined8 *)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 1);
  }
  lVar5 = *param_1 + uVar3 * 0xc0;
  if (*(long *)(lVar5 + -8) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(undefined8 *)(lVar5 + -8) = 0;
  }
  if (*(long *)(lVar5 + -0x58) != 0) {
    *(undefined4 *)(lVar5 + -0x50) = 0;
    (**(code **)(**(long **)(lVar5 + -0x60) + 0x18))();
    *(undefined8 *)(lVar5 + -0x58) = 0;
    *(undefined4 *)(lVar5 + -0x4c) = 0;
  }
  if ((*(long *)(lVar5 + -0x38) != 0) && (*(char *)(lVar5 + -0x30) != '\0')) {
    (**(code **)(**(long **)(lVar5 + -0x40) + 0x18))();
    *(undefined1 *)(lVar5 + -0x30) = 0;
  }
  *(undefined8 *)(lVar5 + -0x38) = 0;
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return *param_2;
}


