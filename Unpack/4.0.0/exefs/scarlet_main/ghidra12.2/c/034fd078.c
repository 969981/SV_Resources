/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034fd078; name: FUN_034fd078
 */


void FUN_034fd078(long *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_047e71e0;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)PTR_PTR_047e71e0 + 0x18))(PTR_PTR_047e71e0);
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
  if (*param_1 != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)((long)param_2 + 0xc) = 0;
  if (param_1[6] != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(int *)(param_1 + 7) = (int)param_2[7];
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)((long)param_2 + 0x3c) = 0;
  if (param_1[4] != 0) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  lVar2 = param_2[8];
  *(undefined4 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x47) = *(undefined8 *)((long)param_2 + 0x47);
  param_1[8] = lVar2;
  lVar2 = param_2[10];
  *(undefined8 *)((long)param_1 + 0x57) = *(undefined8 *)((long)param_2 + 0x57);
  param_1[10] = lVar2;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  return;
}


