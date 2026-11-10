/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026347bc; name: FUN_026347bc
 */


void FUN_026347bc(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)FUN_026348ec();
  FUN_0263496c(&local_40,*puVar1,puVar1[1]);
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  return;
}


