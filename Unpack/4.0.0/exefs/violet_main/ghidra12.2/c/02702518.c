/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02702518; name: FUN_02702518
 */


void FUN_02702518(long param_1,undefined1 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x170);
  *(undefined1 *)(lVar1 + 0x3a1) = param_2;
  if (*(long *)(lVar1 + 0x3a8) != 0) {
    *(uint *)(*(long *)(lVar1 + 0x3a8) + 0xf0) =
         (uint)CONCAT11(param_2,*(undefined1 *)(lVar1 + 0x3a2));
  }
  return;
}


