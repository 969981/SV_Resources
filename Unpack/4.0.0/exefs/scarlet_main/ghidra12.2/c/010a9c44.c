/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a9c44; name: FUN_010a9c44
 */


void FUN_010a9c44(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x50) = param_2[2];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  local_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_20 = *(undefined8 *)(param_1 + 0x48);
  local_18 = *(undefined1 *)(param_1 + 0x50);
  FUN_010a9edc(*(undefined8 *)(param_1 + 0x38),&local_28);
  return;
}


