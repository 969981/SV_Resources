/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01465a74; name: FUN_01465a74
 */


undefined8 FUN_01465a74(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_01465adc(*(undefined8 *)(param_1 + 0x30));
  if ((cVar1 == '\0') && (*(int *)(*(long *)(param_1 + 0x38) + 0x36c) == 0)) {
    uVar2 = FUN_01465ae8(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),
                         *(undefined1 *)(param_1 + 0x1a4),0);
    uVar3 = FUN_0147ac98(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),uVar2,0);
    return uVar3;
  }
  return 0;
}


