/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a9a6c; name: FUN_016a9a6c
 */


void FUN_016a9a6c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)FUN_016a9ae0(*param_2,param_2[1]);
  if ((undefined8 *)param_2[1] != puVar1) {
    (**(code **)(*(long *)*puVar1 + 0xa8))();
    *(undefined **)(lVar2 + 0xa8) = PTR_FUN_047d9428;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
  }
  return;
}


