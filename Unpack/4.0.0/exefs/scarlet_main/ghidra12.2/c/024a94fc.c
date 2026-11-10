/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a94fc; name: FUN_024a94fc
 */


void FUN_024a94fc(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  for (lVar2 = *(long *)(param_2 + 8); lVar2 != param_2; lVar2 = *(long *)(lVar2 + 8)) {
    FUN_024a95f8(param_1,lVar2 + 0x10);
  }
  return;
}


