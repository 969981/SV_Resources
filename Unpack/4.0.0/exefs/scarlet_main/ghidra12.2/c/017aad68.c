/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017aad68; name: FUN_017aad68
 */


void FUN_017aad68(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  long local_40;
  undefined1 local_38;
  
  FUN_017422e4(param_1 + 0x30);
  *(undefined1 **)(param_1 + 0x268) = &LAB_021f9b60;
  pcVar1 = *(code **)(param_1 + 0x288);
  *(undefined1 **)(param_1 + 0x270) = &LAB_021f9bf0;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    (*pcVar1)(param_1 + 0x2a0);
  }
  *(undefined1 **)(param_1 + 0x2a0) = &LAB_02b720e0;
  *(undefined1 **)(param_1 + 0x290) = &LAB_02b72308;
  pcVar1 = *(code **)(param_1 + 0x308);
  *(undefined1 **)(param_1 + 0x280) = &LAB_02b722f8;
  *(undefined1 **)(param_1 + 0x288) = &LAB_02b72304;
  *(undefined1 **)(param_1 + 0x298) = &LAB_02b72314;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    (*pcVar1)(param_1 + 800);
  }
  *(undefined1 **)(param_1 + 800) = &LAB_02b72140;
  *(undefined1 **)(param_1 + 0x300) = &LAB_02b72320;
  *(undefined1 **)(param_1 + 0x308) = &LAB_02b7232c;
  *(undefined1 **)(param_1 + 0x310) = &LAB_02b72330;
  *(undefined1 **)(param_1 + 0x318) = &LAB_02b7233c;
  if ((param_3 & 1) == 0) {
    FUN_01741afc(*(undefined8 *)(param_1 + 8),param_1 + 0x30,0);
    return;
  }
  local_38 = 1;
  local_40 = param_1;
  FUN_017aaeac(&local_40);
  return;
}


