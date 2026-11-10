/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f10314; name: FUN_02f10314
 */


undefined1  [16] FUN_02f10314(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = (**(code **)(*(long *)PTR_DAT_047e4050 + (ulong)*(byte *)(param_1 + 0x20) * 0x80 + 0x90))
                    ();
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = param_1;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


