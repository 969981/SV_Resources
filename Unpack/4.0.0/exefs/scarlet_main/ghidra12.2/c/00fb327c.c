/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb327c; name: FUN_00fb327c
 */


void FUN_00fb327c(long param_1)

{
  int iVar1;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  
  iVar1 = *(int *)(param_1 + 0x204);
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x48) + 0x1e8) & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      return;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x88) + 0x1e8) & 1) == 0) {
      return;
    }
    *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = 3;
    goto LAB_00fb3378;
  }
  FUN_00fb9e50(&local_c8,param_1 + 0x80,param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xc0) = local_c8;
  *(undefined8 *)(param_1 + 200) = uStack_c0;
  *(undefined8 *)(param_1 + 0xd0) = local_b8;
  FUN_00fb9ce0(param_1 + 0xd8,auStack_b0);
  FUN_00fb9ce0(param_1 + 0x118,auStack_70);
  FUN_00db239c(auStack_70);
  FUN_00db239c(auStack_b0);
  FUN_00fb4dd0(auStack_e0,(undefined8 *)(param_1 + 0xc0));
  FUN_00fc0434(param_1 + 0x160,auStack_e0);
  iVar1 = *(int *)(param_1 + 0x204) + 2;
  *(int *)(param_1 + 0x204) = *(int *)(param_1 + 0x204) + 1;
LAB_00fb3378:
  *(undefined1 *)(param_1 + 0x200) = 1;
  *(int *)(param_1 + 0x204) = iVar1;
  return;
}


