/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033beb98; name: FUN_033beb98
 */


void FUN_033beb98(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x18))();
  if (param_1[0x12] != 0) {
    PTR_DAT_047e6970[(ulong)*(uint *)((long)param_1 + 0x8c) + 8] = 2;
    param_1[0x12] = 0;
  }
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[0x1a] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    param_1[0x1a] = 0;
  }
  if (param_1[0x18] != 0) {
    (**(code **)(puVar1 + 0x30))(5);
    param_1[0x18] = 0;
  }
  if ((*(char *)((long)param_1 + 0xe4) != '\0') && (param_1[0x1b] != 0)) {
    (**(code **)(puVar1 + 0x30))(5);
    *(undefined1 *)((long)param_1 + 0xe4) = 0;
  }
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x10))();
    param_1[0xb] = 0;
  }
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 != 0) {
      uVar4 = 1;
      lVar5 = 8;
      while( true ) {
        if (*(long *)(lVar2 + lVar5) != 0) {
          (**(code **)(puVar1 + 0x30))(5);
          *(undefined8 *)(param_1[9] + lVar5) = 0;
          uVar3 = *(uint *)(param_1 + 8);
        }
        if (uVar3 <= uVar4) break;
        lVar2 = param_1[9];
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
      }
      lVar2 = param_1[9];
    }
    (**(code **)(puVar1 + 0x30))(5,lVar2);
    param_1[9] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


