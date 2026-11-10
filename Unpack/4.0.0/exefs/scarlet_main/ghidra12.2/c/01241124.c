/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01241124; name: FUN_01241124
 */


void FUN_01241124(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined4 local_18;
  
  local_20 = *(undefined8 *)(param_2 + 0x40);
  local_18 = *(undefined4 *)(param_2 + 0x48);
  uVar1 = FUN_02985a24(*(undefined8 *)(param_1 + 0x78));
  FUN_0297e6d0(uVar1,auStack_28,&local_20);
  return;
}


