/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346c9b8; name: FUN_0346c9b8
 */


void FUN_0346c9b8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_FUN_047c1b90;
  puVar1 = PTR_DAT_047e2fd0;
  lVar2 = param_1[0x1c];
  lVar3 = lVar2;
  if ((int)param_1[0x1d] != 0) {
    do {
      if (*(long *)(lVar3 + 0x18) != 0) {
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      *(undefined8 *)(lVar3 + 0x20) = 0;
      lVar2 = param_1[0x1c];
      lVar3 = lVar3 + 0x30;
    } while (lVar3 != lVar2 + (ulong)*(uint *)(param_1 + 0x1d) * 0x30);
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    (**(code **)(puVar1 + 0x30))(0,lVar2);
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[6] = 0;
  }
  param_1[7] = 0;
  if (param_1[9] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[9] = 0;
  }
  param_1[10] = 0;
  if (param_1[0xc] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0xc] = 0;
  }
  param_1[0xd] = 0;
  if (param_1[0xf] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0xf] = 0;
  }
  param_1[0x10] = 0;
  if (param_1[0x12] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x12] = 0;
  }
  param_1[0x13] = 0;
  if (param_1[0x15] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x15] = 0;
  }
  param_1[0x16] = 0;
  if (param_1[0x18] != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    param_1[0x18] = 0;
  }
  puVar1 = PTR_DAT_047e70a0;
  param_1[0x19] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


