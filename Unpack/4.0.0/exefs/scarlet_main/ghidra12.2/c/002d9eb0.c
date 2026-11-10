/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d9eb0; name: FUN_002d9eb0
 */


void FUN_002d9eb0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[8];
  *param_1 = (long)(PTR_DAT_047cc8b8 + 0x10);
  if (lVar3 != 0) {
    FUN_002d0428(lVar3);
    FUN_0049e790(PTR_LAB_047cba48,lVar3);
  }
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[0x11];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[0xf];
  param_1[0xf] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  lVar3 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_002dd080(param_1);
  return;
}


