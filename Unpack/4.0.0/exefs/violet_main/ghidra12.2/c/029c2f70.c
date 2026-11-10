/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029c2f70; name: FUN_029c2f70
 */


undefined4 FUN_029c2f70(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (lVar2 = FUN_029c2fbc(param_1 + 0x40), lVar2 != 0)) {
    puVar1 = (undefined4 *)(lVar2 + 0x30);
    if (*(long *)(lVar2 + 0x38) != 0) {
      puVar1 = (undefined4 *)(*(long *)(lVar2 + 0x38) + 0x28);
    }
    uVar3 = *puVar1;
  }
  return uVar3;
}


