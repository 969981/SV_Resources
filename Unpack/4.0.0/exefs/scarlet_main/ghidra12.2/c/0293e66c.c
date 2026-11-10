/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293e66c; name: FUN_0293e66c
 */


void FUN_0293e66c(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  plVar2 = (long *)FUN_014813f4(param_1,*param_3);
  uVar3 = (**(code **)(*plVar2 + 0x200))();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_01243584(param_1);
    bVar1 = FUN_0298426c(uVar4,*param_3);
    *param_2 = bVar1 & 1;
  }
  return;
}


