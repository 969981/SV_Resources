/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015f9df0; name: FUN_015f9df0
 */


void FUN_015f9df0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  ulong local_50 [2];
  void *local_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  uVar1 = FUN_0126a9c0();
  FUN_0135d328(auStack_38,uVar1,0);
  local_50[1] = 0;
  local_40 = (void *)0x0;
  local_50[0] = 0;
  if (*(long *)(param_2 + 0x88) != 0) {
    FUN_015f9e88(auStack_28,local_50);
    if ((local_50[0] & 1) != 0) {
      pvVar2 = local_40;
      goto LAB_015f9e48;
    }
  }
  pvVar2 = (void *)((ulong)local_50 | 1);
LAB_015f9e48:
  FUN_00ddaef8(param_1,pvVar2,0);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_0135d2ec(auStack_38);
  return;
}


