/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216d608; name: FUN_0216d608
 */


void FUN_0216d608(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_00885a7c(*(undefined8 *)(param_1 + 0x80));
  lVar2 = 0;
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x260) + lVar3);
    (*param_2)(puVar1,*(long *)(param_1 + 600) + lVar2,param_3);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + 0x78;
    *puVar1 = 0xffffffffffffffff;
  } while (lVar3 != 0x128);
  return;
}


