/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050266c; name: FUN_0050266c
 */


void FUN_0050266c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[0xc];
  *param_1 = &PTR_FUN_044c64e8;
  puVar1 = PTR_LAB_047cba48;
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[10];
  param_1[10] = 0;
  if (lVar3 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  std::mutex::~mutex((mutex *)(param_1 + 6));
  puVar1 = PTR_LAB_047cba48;
  plVar2 = (long *)param_1[3];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    FUN_0049e790(puVar1);
  }
  lVar3 = param_1[1];
  param_1[1] = 0;
  if (lVar3 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


