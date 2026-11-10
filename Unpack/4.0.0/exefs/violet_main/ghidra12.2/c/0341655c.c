/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0341655c; name: FUN_0341655c
 */


void FUN_0341655c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047e2fd0;
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(puVar1 + 0x30))(10);
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      uVar3 = *(ushort *)(param_1 + 0x34);
      if (uVar3 != 0) {
        uVar4 = 1;
        lVar5 = 8;
        while( true ) {
          if (*(long *)(lVar2 + lVar5) != 0) {
            (**(code **)(puVar1 + 0x30))(10);
            uVar3 = *(ushort *)(param_1 + 0x34);
          }
          if (uVar3 <= uVar4) break;
          lVar2 = *(long *)(param_1 + 0x18);
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x10;
        }
        lVar2 = *(long *)(param_1 + 0x18);
      }
      (**(code **)(puVar1 + 0x30))(10,lVar2);
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (**(code **)(puVar1 + 0x30))(9);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


