/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7b52c; name: FUN_00d7b52c
 */


void FUN_00d7b52c(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = *(int *)(param_2 + 0x3c);
    if (*(int *)(param_2 + 0x38) <= iVar1) {
      puVar2 = (undefined8 *)
               (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x30,0x10);
      *(undefined4 *)(puVar2 + 4) = 0xff7fffff;
      *(undefined1 *)((long)puVar2 + 0x24) = 0xff;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[1] = param_1._8_8_;
      *puVar2 = param_1._0_8_;
      *(byte *)((long)puVar2 + 0x25) = *(byte *)((long)puVar2 + 0x25) & 0xf0 | 1;
      puVar2[5] = 0;
      *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      return;
    }
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar1 * 0x30);
    *(int *)(param_2 + 0x3c) = iVar1 + 1;
  }
  else {
    *(undefined8 *)(param_2 + 0x28) = puVar2[5];
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)(puVar2 + 4) = 0xff7fffff;
  *(undefined1 *)((long)puVar2 + 0x24) = 0xff;
  puVar2[1] = param_1._8_8_;
  *puVar2 = param_1._0_8_;
  *(byte *)((long)puVar2 + 0x25) = *(byte *)((long)puVar2 + 0x25) & 0xf0 | 1;
  puVar2[5] = 0;
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}


