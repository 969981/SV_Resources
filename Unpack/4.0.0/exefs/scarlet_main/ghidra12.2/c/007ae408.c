/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ae408; name: FUN_007ae408
 */


void FUN_007ae408(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_047d0d98 + 0x78;
  *param_1 = (long)(PTR_DAT_047d0d98 + 0x10);
  param_1[1] = (long)puVar1;
  puVar3 = (undefined8 *)param_1[0x10];
  param_1[0xb] = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_007bfae0(puVar3);
    uVar2 = uVar2 >> 5;
    if (uVar2 != 0) {
      puVar5 = puVar3;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 4;
      } while (uVar2 != 0);
    }
    FUN_007bfaa0(puVar3);
    param_1[0x10] = 0;
  }
  lVar4 = param_1[0x11];
  if (lVar4 != 0) {
    FUN_007bfae0(lVar4);
    FUN_007bfaa0(lVar4);
    param_1[0x11] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xc));
  FUN_00796c28(param_1 + 1);
  return;
}


