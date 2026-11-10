/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123fcc8; name: FUN_0123fcc8
 */


undefined1 FUN_0123fcc8(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 local_30 [8];
  long local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  local_18 = 0;
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + 0x95);
  local_28 = 0;
  if (bVar1 < 5) {
    local_28 = *(long *)(*(long *)(param_1 + 0x10) + 0x30) + (ulong)bVar1 * 0x38 + 0x28;
  }
  local_30[0] = 0;
  uStack_20 = param_2;
  FUN_01461214();
  uVar2 = FUN_0123fd24();
  FUN_01241994(uVar2,local_30,&local_28);
  return local_30[0];
}


