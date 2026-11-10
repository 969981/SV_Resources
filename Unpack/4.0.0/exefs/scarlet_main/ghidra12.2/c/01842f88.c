/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01842f88; name: FUN_01842f88
 */


void FUN_01842f88(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  uVar1 = FUN_01843004();
  uVar2 = FUN_01842ff0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18));
  FUN_01842ff8(uVar2,uVar1);
  thunk_FUN_0123bad8(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),9,0);
  *(undefined1 *)(param_1 + 0xa0) = local_28;
  *(undefined8 *)(param_1 + 0x90) = local_38;
  *(undefined8 *)(param_1 + 0x98) = uStack_30;
  return;
}


