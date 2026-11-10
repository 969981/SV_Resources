/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012513ec; name: FUN_012513ec
 */


void FUN_012513ec(long param_1,long *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_02118394(*(undefined8 *)(param_1 + 0x20),0);
  *(undefined1 *)(param_1 + 0xc484) = *puVar1;
  *(undefined4 *)(param_1 + 0xc48c) = *(undefined4 *)(puVar1 + 4);
  puVar1 = (undefined1 *)FUN_02118394(*(undefined8 *)(param_1 + 0x20),1);
  *(undefined1 *)(param_1 + 0xc485) = *puVar1;
  *(undefined4 *)(param_1 + 0xc490) = *(undefined4 *)(puVar1 + 4);
  puVar1 = (undefined1 *)FUN_02118394(*(undefined8 *)(param_1 + 0x20),2);
  *(undefined1 *)(param_1 + 0xc486) = *puVar1;
  *(undefined4 *)(param_1 + 0xc494) = *(undefined4 *)(puVar1 + 4);
  puVar1 = (undefined1 *)FUN_02118394(*(undefined8 *)(param_1 + 0x20),3);
  *(undefined1 *)(param_1 + 0xc487) = *puVar1;
  *(undefined4 *)(param_1 + 0xc498) = *(undefined4 *)(puVar1 + 4);
  puVar1 = (undefined1 *)FUN_02118394(*(undefined8 *)(param_1 + 0x20),4);
  *(undefined1 *)(param_1 + 0xc488) = *puVar1;
  *(undefined4 *)(param_1 + 0xc49c) = *(undefined4 *)(puVar1 + 4);
  *param_2 = param_1 + 0xc484;
  *param_3 = 0x1c;
  return;
}


