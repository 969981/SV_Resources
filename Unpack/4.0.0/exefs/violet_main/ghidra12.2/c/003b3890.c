/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b3890; name: FUN_003b3890
 */


void FUN_003b3890(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_003c3920();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x30);
  if (*(long *)(param_1 + 0x500) != 0) {
    FUN_00439e00();
    *(undefined8 *)(param_1 + 0x500) = 0;
  }
  if (*(long *)(param_1 + 0x530) != 0) {
    FUN_00439e00();
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  FUN_003f4080(*(undefined8 *)(param_1 + 0x528));
  *(undefined8 *)(param_1 + 0x528) = 0;
  FUN_003f4080(*(undefined8 *)(param_1 + 0x520));
  *(undefined8 *)(param_1 + 0x520) = 0;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x518));
  *(undefined8 *)(param_1 + 0x518) = 0;
  FUN_0042bbe0(*(undefined8 *)(param_1 + 0x548));
  *(undefined8 *)(param_1 + 0x548) = 0;
  return;
}


