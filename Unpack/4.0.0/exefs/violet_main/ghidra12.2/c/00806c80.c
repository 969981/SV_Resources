/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00806c80; name: FUN_00806c80
 */


void FUN_00806c80(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_047d1728 + 0x80;
  puVar2 = PTR_DAT_047d1728 + 0xa0;
  *param_1 = (long)(PTR_DAT_047d1728 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[0x13] = (long)puVar2;
  if (*(long **)(*(long *)PTR_DAT_047d11a0 + 0x60) == param_1 + 0x13) {
    *(undefined8 *)(*(long *)PTR_DAT_047d11a0 + 0x60) = 0;
    puVar4 = (undefined8 *)param_1[0x1c];
  }
  else {
    puVar4 = (undefined8 *)param_1[0x1c];
  }
  if (puVar4 == (undefined8 *)0x0) {
    lVar5 = param_1[0x1d];
  }
  else {
    uVar3 = FUN_007bfae0(puVar4);
    uVar3 = uVar3 >> 5;
    if (uVar3 != 0) {
      puVar6 = puVar4;
      do {
        (**(code **)*puVar6)(puVar6);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 4;
      } while (uVar3 != 0);
    }
    FUN_007bfaa0(puVar4);
    param_1[0x1c] = 0;
    lVar5 = param_1[0x1d];
  }
  if (lVar5 != 0) {
    FUN_007bfae0(lVar5);
    FUN_007bfaa0(lVar5);
    param_1[0x1d] = 0;
  }
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    FUN_008010c0(lVar5);
    FUN_007bfaa0(lVar5);
    param_1[0x14] = 0;
  }
  lVar5 = param_1[0x16];
  if (lVar5 != 0) {
    FUN_007bfae0(lVar5);
    FUN_007bfaa0(lVar5);
    param_1[0x16] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x17));
  FUN_007ae408(param_1);
  return;
}


