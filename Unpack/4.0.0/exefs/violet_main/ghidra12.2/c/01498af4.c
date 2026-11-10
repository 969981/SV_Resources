/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01498af4; name: FUN_01498af4
 */


void FUN_01498af4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0136b004(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0298fe0c(*(undefined8 *)(param_1 + 0x90),0);
  FUN_01091028(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),uVar2);
  return;
}


