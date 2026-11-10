/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0261473c; name: FUN_0261473c
 */


undefined1  [16] FUN_0261473c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = (uint *)FUN_02614778();
  uVar2 = 0;
  if ((puVar1 != (uint *)0x0) && (param_3 < *puVar1)) {
    uVar2 = *(ulong *)(puVar1 + (ulong)param_3 * 2 + 1);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


