/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf6cd0; name: FUN_00cf6cd0
 */


void FUN_00cf6cd0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = FUN_0013ca00();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = uVar1;
  *(undefined1 *)(puVar2 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if ((param_2 < 1) && (param_3 < 1)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  else {
    FUN_0013c4e0(param_1,uVar1,param_2,param_3);
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if (lVar3 < 1) {
    return;
  }
  FUN_0012ac30(param_1);
  return;
}


