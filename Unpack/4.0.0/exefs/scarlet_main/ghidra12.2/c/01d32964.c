/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d32964; name: FUN_01d32964
 */


void FUN_01d32964(long param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xff) < 4) {
    uVar1 = FUN_00cf5fe0(param_3,0);
    FUN_00eee5f0(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
    FUN_00eee290(*(undefined8 *)(param_1 + 0x70),param_2,0);
    FUN_00eedf30(*(undefined8 *)(param_1 + 0x70),param_2,uVar1);
    return;
  }
  return;
}


