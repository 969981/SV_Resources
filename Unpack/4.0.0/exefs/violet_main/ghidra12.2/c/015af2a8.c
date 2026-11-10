/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015af2a8; name: FUN_015af2a8
 */


void FUN_015af2a8(long param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  uint uVar2;
  
  *param_2 = param_3;
  *(byte *)(param_2 + 1) = param_4;
  *(bool *)((long)param_2 + 9) = *(byte *)(param_1 + 0x213) < param_4;
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  *(undefined8 *)((long)param_2 + 0x14) = 0;
  *(undefined2 *)((long)param_2 + 10) = 0x101;
  uVar1 = FUN_015af33c(*(undefined8 *)(param_1 + 0x48));
  if (((uVar1 & 1) == 0) ||
     (uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x30), uVar2 == 1)) {
    *(undefined1 *)((long)param_2 + 10) = 0;
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x30);
  }
  if ((uVar2 & 0xfffffffe) == 2) {
    *(undefined4 *)(param_2 + 2) = 2;
    *(undefined1 *)((long)param_2 + 10) = 0;
  }
  return;
}


