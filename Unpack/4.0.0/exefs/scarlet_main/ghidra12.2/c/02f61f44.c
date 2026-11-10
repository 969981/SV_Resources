/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f61f44; name: FUN_02f61f44
 */


void FUN_02f61f44(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_LAB_04610070;
  param_1[4] = (long)&PTR_LAB_046100b0;
  puVar1 = PTR_DAT_047d1a08;
  if (param_1[7] != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1[7],0);
  }
  if (param_1[9] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[9],0);
  }
  if (param_1[0xb] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0xb],0);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0xd],0);
  }
  if (param_1[0xf] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0xf],0);
  }
  if (param_1[0x11] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x11],0);
  }
  if (param_1[0x13] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x13],0);
  }
  if (param_1[0x15] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x15],0);
  }
  if (param_1[0x17] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x17],0);
  }
  if (param_1[0x19] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x19],0);
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x1b],0);
  }
  if (param_1[0x1d] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x1d],0);
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x1f],0);
  }
  if (param_1[0x21] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x21],0);
  }
  if (param_1[0x23] != 0) {
    (**(code **)(puVar1 + 8))(0,param_1[0x23],0);
  }
  *(undefined4 *)(param_1 + 0x558) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2ac4)) && (param_1[0x557] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x557],(ulong)*(uint *)((long)param_1 + 0x2ac4) << 2);
  }
  *(undefined4 *)((long)param_1 + 0x2ac4) = 0x80000000;
  param_1[0x557] = 0;
  if ((int)param_1[0x556] != 0) {
    lVar2 = param_1[0x555];
    lVar3 = (long)(int)param_1[0x556] * 0x610;
    do {
      FUN_02f63808(lVar2 + -0x610 + lVar3);
      lVar3 = lVar3 + -0x610;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x556) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2ab4)) && (param_1[0x555] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x555],(ulong)*(uint *)((long)param_1 + 0x2ab4) * 0x610);
  }
  param_1[0x555] = 0;
  *(undefined4 *)((long)param_1 + 0x2ab4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5cc)) && (param_1[0xb8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb8],(ulong)*(uint *)((long)param_1 + 0x5cc) << 6);
  }
  param_1[0xb8] = 0;
  *(undefined4 *)((long)param_1 + 0x5cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x2e],(ulong)*(uint *)((long)param_1 + 0x17c) << 6);
  }
  param_1[0x2e] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


