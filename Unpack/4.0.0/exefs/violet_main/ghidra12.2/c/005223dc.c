/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005223dc; name: FUN_005223dc
 */


void FUN_005223dc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_00524ad8();
  puVar1 = auVar2._0_8_;
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((auVar2._8_4_ & 0xff) != 0) {
    *(undefined1 *)(puVar1 + 2) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_1;
  return;
}


