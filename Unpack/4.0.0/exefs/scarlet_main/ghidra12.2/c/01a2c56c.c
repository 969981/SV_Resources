/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2c56c; name: FUN_01a2c56c
 */


void FUN_01a2c56c(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*(long *)*param_3 + 0x300))((long *)*param_3,7);
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_01246e90(param_1);
    bVar1 = FUN_01a2c5d0(uVar3,*param_3);
    bVar1 = bVar1 & 1;
  }
  else {
    bVar1 = 1;
  }
  *param_2 = bVar1;
  return;
}


