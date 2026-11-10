/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02173c40; name: FUN_02173c40
 */


void FUN_02173c40(undefined8 *param_1,undefined8 *param_2)

{
  FUN_015514e4(*param_1,*param_2);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(ushort *)((long)param_1 + 0x12) =
       *(ushort *)((long)param_1 + 0x12) & 0xfffe | *(ushort *)((long)param_2 + 0x12) & 1;
  return;
}


