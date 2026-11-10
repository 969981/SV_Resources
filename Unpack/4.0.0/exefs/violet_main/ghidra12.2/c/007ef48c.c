/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ef48c; name: FUN_007ef48c
 */


void FUN_007ef48c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar1 = PTR_DAT_047d0860;
  *(undefined8 *)(param_1 + 0x30) = 1;
  if (*(short *)(*(long *)puVar1 + 0x50) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + lVar2) + 0x10))();
      *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x28;
    } while (uVar3 < *(ushort *)(*(long *)puVar1 + 0x50));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0xfd;
  return;
}


