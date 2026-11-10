/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027029a4; name: FUN_027029a4
 */


void FUN_027029a4(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)(*(long *)*param_2 + 0x20))((long *)*param_2,1);
  (**(code **)(*(long *)*param_2 + 0xd0))(param_1);
  *(undefined1 *)((long)param_2 + 0x31) = 0;
  if ((undefined1 *)param_2[7] != (undefined1 *)0x0) {
    *(undefined1 *)param_2[7] = 1;
  }
  return;
}


