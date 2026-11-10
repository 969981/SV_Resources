/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143b2e0; name: FUN_0143b2e0
 */


void FUN_0143b2e0(undefined8 param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (*(char *)(param_2 + 8) == '\0') {
    return;
  }
  uVar1 = (**(code **)(*param_3 + 0x1a0))(param_3);
  puVar2 = (undefined1 *)FUN_0143b454(param_1,param_2,0);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0xe8))(param_3,0,*puVar2);
  }
  puVar2 = (undefined1 *)FUN_0143b454(param_1,param_2,1);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0xe8))(param_3,1,*puVar2);
  }
  puVar2 = (undefined1 *)FUN_0143b454(param_1,param_2,2);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0xe8))(param_3,2,*puVar2);
  }
  puVar2 = (undefined1 *)FUN_0143b454(param_1,param_2,3);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0xe8))(param_3,3,*puVar2);
  }
  puVar2 = (undefined1 *)FUN_0143b454(param_1,param_2,4);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0xe8))(param_3,4,*puVar2);
  }
  puVar2 = (undefined1 *)FUN_0143b454(param_1,param_2,5);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*param_3 + 0xe8))(param_3,5,*puVar2);
  }
  *(undefined1 *)(param_2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0143b440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x1a8))(param_3,uVar1 & 1);
  return;
}


