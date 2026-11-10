/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008c8e74; name: FUN_008c8e74
 */


undefined8 FUN_008c8e74(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + (long)param_2 * 0x20;
  lVar2 = *(long *)(param_1 + 0x700);
  *(undefined8 *)(lVar1 + 0x720) = param_3;
  *(long *)(lVar1 + 0x718) = lVar2;
  uVar3 = FUN_008c9960(lVar2,param_3,*(undefined8 *)(lVar2 + 0x1c8));
  *(undefined8 *)(lVar1 + 0x708) = uVar3;
  return 1;
}


