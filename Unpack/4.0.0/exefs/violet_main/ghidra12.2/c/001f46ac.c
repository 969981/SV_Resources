/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f46ac; name: FUN_001f46ac
 */


void FUN_001f46ac(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined4 param_5)

{
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + 0xc) = param_3;
  *(undefined1 *)((long)param_1 + 0xd) = param_4;
  *(undefined4 *)(param_1 + 1) = param_5;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  return;
}


