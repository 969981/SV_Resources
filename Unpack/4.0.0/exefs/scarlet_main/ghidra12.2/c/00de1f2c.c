/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00de1f2c; name: FUN_00de1f2c
 */


void FUN_00de1f2c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 + -0x28;
    }
  }
  local_30 = 0xe5b48ffbe15f5447;
  pcStack_28 = "ti_pokemonObject";
  local_20 = 0x10;
  local_18 = (long *)0x0;
  FUN_00de9954(lVar1,&local_30);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


