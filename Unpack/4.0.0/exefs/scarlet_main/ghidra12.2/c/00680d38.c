/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00680d38; name: FUN_00680d38
 */


void FUN_00680d38(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  puVar1 = PTR_DAT_047cbe60;
  if (*(undefined **)(param_2 + 0x28) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 0x28);
  }
  if (*(long *)(puVar1 + 0x10) < 1) {
    *param_1 = 0;
    return;
  }
  uVar2 = FUN_0025da00();
  *param_1 = uVar2;
  return;
}


