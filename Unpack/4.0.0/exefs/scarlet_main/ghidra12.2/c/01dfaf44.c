/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfaf44; name: FUN_01dfaf44
 */


void FUN_01dfaf44(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
  puVar1 = *(undefined8 **)(param_1 + 0x328);
  if (puVar1 == *(undefined8 **)(param_1 + 0x330)) {
    *(undefined8 *)(param_1 + 0x360) = 0xffffffff;
  }
  else {
    *(undefined8 *)(param_1 + 0x360) = *puVar1;
    *(undefined8 **)(param_1 + 0x330) = puVar1;
  }
  local_18 = param_2;
  uStack_14 = param_3;
  FUN_010e5df0(param_1 + 0x328,&local_18);
  return;
}


