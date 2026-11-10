/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a0dc8; name: FUN_034a0dc8
 */


void FUN_034a0dc8(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047e2fd0;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar4 + lVar5;
        if (*(long *)(lVar1 + 0xb8) != 0) {
          (**(code **)(puVar3 + 0x30))(0);
          *(undefined8 *)(lVar1 + 0xb8) = 0;
        }
        if (*(long *)(lVar1 + 0x68) != 0) {
          *(undefined4 *)(lVar1 + 0x70) = 0;
          (**(code **)(**(long **)(lVar1 + 0x60) + 0x18))();
          *(undefined8 *)(lVar1 + 0x68) = 0;
          *(undefined4 *)(lVar1 + 0x74) = 0;
        }
        if ((*(long *)(lVar1 + 0x88) != 0) && (*(char *)(lVar1 + 0x90) != '\0')) {
          (**(code **)(**(long **)(lVar1 + 0x80) + 0x18))();
          *(undefined1 *)(lVar1 + 0x90) = 0;
        }
        lVar5 = lVar5 + 0xc0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
      } while ((ulong)uVar2 * 0xc0 != lVar5);
      lVar4 = *param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar3 + 0x30))(0,lVar4);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 3);
    if (uVar2 != 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar4 + lVar5;
        if (*(long *)(lVar1 + 0xb8) != 0) {
          (**(code **)(puVar3 + 0x30))(0);
          *(undefined8 *)(lVar1 + 0xb8) = 0;
        }
        if (*(long *)(lVar1 + 0x68) != 0) {
          *(undefined4 *)(lVar1 + 0x70) = 0;
          (**(code **)(**(long **)(lVar1 + 0x60) + 0x18))();
          *(undefined8 *)(lVar1 + 0x68) = 0;
          *(undefined4 *)(lVar1 + 0x74) = 0;
        }
        if ((*(long *)(lVar1 + 0x88) != 0) && (*(char *)(lVar1 + 0x90) != '\0')) {
          (**(code **)(**(long **)(lVar1 + 0x80) + 0x18))();
          *(undefined1 *)(lVar1 + 0x90) = 0;
        }
        lVar5 = lVar5 + 0xc0;
        *(undefined8 *)(lVar1 + 0x88) = 0;
      } while ((ulong)uVar2 * 0xc0 != lVar5);
      lVar4 = param_1[2];
    }
    *(undefined4 *)(param_1 + 3) = 0;
    (**(code **)(puVar3 + 0x30))(0,lVar4);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


