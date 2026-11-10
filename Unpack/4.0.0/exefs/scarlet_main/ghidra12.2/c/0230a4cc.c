/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230a4cc; name: FUN_0230a4cc
 */


ulong FUN_0230a4cc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_00d8fb98(auStack_40,PTR_DAT_047de378);
  lVar1 = FUN_01ea74c4(param_1,auStack_40);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20)) >> 5;
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar2 & 0xffffffff;
}


