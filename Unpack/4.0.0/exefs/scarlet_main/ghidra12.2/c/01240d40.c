/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01240d40; name: FUN_01240d40
 */


void FUN_01240d40(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_20 [8];
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = FUN_01240d74(*(undefined8 *)(param_1 + 0x78));
  FUN_012424b8(uVar1,auStack_20,&local_18);
  return;
}


