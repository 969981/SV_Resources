/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005219f0; name: FUN_005219f0
 */


void FUN_005219f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  undefined1 auVar2 [12];
  
  auVar2 = FUN_00524ad8();
  puVar1 = auVar2._0_8_;
  *(undefined8 *)(puVar1 + 4) = param_5;
  if ((auVar2._8_4_ & 0xff) != 0) {
    *(undefined1 *)(puVar1 + 2) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = 0;
  }
  *(byte *)((long)puVar1 + 10) = *(byte *)((long)puVar1 + 10) & 0xf0;
  *puVar1 = param_4;
  return;
}


