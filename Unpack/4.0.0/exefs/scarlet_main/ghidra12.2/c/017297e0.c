/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017297e0; name: FUN_017297e0
 */


void FUN_017297e0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a0 [128];
  undefined1 *local_8;
  
  if (*param_2 == 0) {
    lVar2 = 5;
  }
  else {
    lVar2 = *(long *)(*param_2 + 0x40) + 5;
  }
  lVar3 = 0;
  if (*param_3 != 0) {
    lVar3 = *(long *)(*param_3 + 0x40);
  }
  puVar1 = auStack_a0 + (0x80 - (lVar2 + lVar3 + 0xfU & 0xfffffffffffffff0));
  local_8 = puVar1;
  *puVar1 = 0;
  FUN_0172985c(puVar1,param_2);
  FUN_00cf9768(param_1,&local_8);
  return;
}


