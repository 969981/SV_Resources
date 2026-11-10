/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dece4; name: FUN_007dece4
 */


void FUN_007dece4(long param_1)

{
  int *piVar1;
  undefined4 local_70 [16];
  undefined1 auStack_30 [16];
  undefined4 local_18 [2];
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_70[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
      FUN_00cbd7c0(auStack_30,local_70);
      FUN_0078cb28(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_007e5190(local_70);
  FUN_007e51d8(param_1 + 0x68,local_70);
  FUN_007e51d0(local_70);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  local_70[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 0xb4,local_70);
  return;
}


