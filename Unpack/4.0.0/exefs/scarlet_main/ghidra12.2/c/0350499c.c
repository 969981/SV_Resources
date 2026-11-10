/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350499c; name: FUN_0350499c
 */


void FUN_0350499c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*param_1 != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    *param_1 = 0;
    *(undefined2 *)((long)param_1 + 0x12) = 0;
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x68) != 0) {
      *(undefined4 *)(lVar2 + 0x70) = 0;
      (**(code **)(**(long **)(lVar2 + 0x60) + 0x18))();
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined4 *)(lVar2 + 0x74) = 0;
    }
    if ((*(long *)(lVar2 + 0x88) != 0) && (*(char *)(lVar2 + 0x90) != '\0')) {
      (**(code **)(**(long **)(lVar2 + 0x80) + 0x18))();
      *(undefined1 *)(lVar2 + 0x90) = 0;
    }
    *(undefined8 *)(lVar2 + 0x88) = 0;
    (**(code **)(puVar1 + 0x30))(0,lVar2);
  }
  puVar3 = (undefined8 *)param_1[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(puVar1 + 0x30))(0xe,puVar3);
    param_1[5] = 0;
  }
  return;
}


