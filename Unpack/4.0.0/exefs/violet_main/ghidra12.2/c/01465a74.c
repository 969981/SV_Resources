/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


