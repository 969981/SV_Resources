/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dbac0; name: FUN_001dbac0
 */


/* WARNING: Removing unreachable block (ram,0x001dbb14) */
/* WARNING: Removing unreachable block (ram,0x001dbb1c) */

undefined4
FUN_001dbac0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(param_1 + (ulong)(*(int *)(param_1 + 0x25c) == param_2) * 8 + 0x280))();
  uVar1 = 0;
  *param_5 = lVar2;
  if (lVar2 < 0) {
    uVar1 = 0x37;
  }
  return uVar1;
}


