/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cad08; name: FUN_001cad08
 */


undefined8 FUN_001cad08(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf20);
  *(int *)(lVar2 + 0x648) = *(int *)(lVar2 + 0x648) + -1;
  FUN_001db818(lVar2,"a DOH request is completed, %u to go\n");
  if (param_2 != 0) {
    uVar1 = FUN_001e0ba4(param_2);
    FUN_001db818(lVar2,"DOH request %s\n",uVar1);
  }
  if (*(int *)(lVar2 + 0x648) == 0) {
    FUN_001e04f0(*(undefined8 *)(lVar2 + 0x1f0));
    *(undefined8 *)(lVar2 + 0x1f0) = 0;
    FUN_001cea34(lVar2,0,6);
  }
  return 0;
}


