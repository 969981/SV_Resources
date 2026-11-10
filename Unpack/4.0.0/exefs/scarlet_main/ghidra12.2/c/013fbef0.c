/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013fbef0; name: FUN_013fbef0
 */


void FUN_013fbef0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_28 [8];
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != *(undefined8 **)(param_1 + 0x48)) {
    do {
      local_28[0] = FUN_013fcabc(*puVar1);
      FUN_013fc644(param_1,param_2,local_28);
      puVar1 = *(undefined8 **)(param_1 + 0x40);
    } while (puVar1 != *(undefined8 **)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x240) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x270);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x350);
  return;
}


