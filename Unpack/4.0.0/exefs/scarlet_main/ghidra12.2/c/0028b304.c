/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028b304; name: FUN_0028b304
 */


void FUN_0028b304(ulong *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    puVar2 = param_1 + 1;
  }
  else {
    puVar2 = (ulong *)param_1[1];
  }
  if ((uVar3 >> 1 != 0) && (uVar3 = uVar3 >> 1, puVar2 != (ulong *)0x0)) {
    puVar2 = puVar2 + uVar3 * 3;
    do {
      uVar3 = uVar3 - 1;
      FUN_0028bf34(puVar2 + -3,puVar2[-2]);
      puVar2 = puVar2 + -3;
    } while (uVar3 != 0);
    uVar1 = *param_1 & 1;
  }
  if (uVar1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
  return;
}


