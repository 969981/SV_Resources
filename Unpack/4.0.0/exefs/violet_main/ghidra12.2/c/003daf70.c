/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003daf70; name: FUN_003daf70
 */


bool FUN_003daf70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_40 [48];
  
  iVar1 = FUN_00464e30(auStack_40,0x30);
  if (iVar1 < 1) {
    return false;
  }
  uVar2 = FUN_003eba50(auStack_40,0x30,*(undefined8 *)(param_1 + 0x910));
  *(undefined8 *)(param_1 + 0x910) = uVar2;
  FUN_00453300(auStack_40,0x30);
  lVar3 = FUN_0047d460(*(undefined8 *)(param_1 + 0x910),*(undefined8 *)(param_1 + 0x8e8),
                       *(undefined8 *)(param_1 + 0x8f0));
  *(long *)(param_1 + 0x908) = lVar3;
  return lVar3 != 0;
}


