/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e62618; name: FUN_01e62618
 */


void FUN_01e62618(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = FUN_01e62678();
  if ((uVar1 & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x68);
    if ((((*plVar2 != 0) && (plVar2 = (long *)(param_1 + 0x70), *plVar2 != 0)) &&
        (plVar2 = (long *)(param_1 + 0x78), *plVar2 != 0)) &&
       (plVar2 = (long *)(param_1 + 0x80), *plVar2 != 0)) {
      return;
    }
    *plVar2 = param_2;
  }
  return;
}


