/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea53d4; name: FUN_01ea53d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01ea53d4(long param_1,short param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  undefined1 auVar3 [16];
  
  uVar2 = DAT_03cab620;
  uVar4 = DAT_03cab628;
  if (param_2 != -1) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x148); puVar1 != *(undefined8 **)(param_1 + 0x150);
        puVar1 = puVar1 + 10) {
      if (*(short *)(puVar1 + 8) == param_2) {
        uVar4 = puVar1[1];
        uVar2 = *puVar1;
        break;
      }
    }
  }
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


