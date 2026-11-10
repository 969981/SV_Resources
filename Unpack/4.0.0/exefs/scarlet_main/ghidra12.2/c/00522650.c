/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00522650; name: FUN_00522650
 */


void FUN_00522650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_00524ad8();
  puVar1 = auVar2._0_8_;
  puVar1[2] = param_5;
  if ((auVar2._8_4_ & 0xff) != 0) {
    *(undefined1 *)(puVar1 + 1) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_1;
  return;
}


