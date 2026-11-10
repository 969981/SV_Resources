/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00129fa0; name: FUN_00129fa0
 */


void FUN_00129fa0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(byte *)((long)param_2 + 9) = *(byte *)((long)param_2 + 9) & 0xc0 | 4;
  *(undefined8 *)(lVar1 + 0x70) = *param_2;
  *param_2 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 **)(lVar1 + 0xb8) = param_2;
  return;
}


