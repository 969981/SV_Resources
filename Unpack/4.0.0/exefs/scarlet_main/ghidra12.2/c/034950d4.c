/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034950d4; name: FUN_034950d4
 */


undefined8 FUN_034950d4(float param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  switch(param_3) {
  case 8:
    dVar2 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    dVar3 = 0.5;
    if (dVar2 * (double)param_1 <= 0.0) {
      dVar3 = -0.5;
    }
    *(int *)(param_2 + 0x16) = (int)(dVar3 + dVar2 * (double)param_1);
    goto LAB_0349519c;
  case 9:
    *(float *)((long)param_2 + 0xb4) = param_1 * 0.01;
    break;
  case 10:
    dVar2 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    dVar3 = 0.5;
    if (dVar2 * (double)param_1 <= 0.0) {
      dVar3 = -0.5;
    }
    *(int *)((long)param_2 + 0xbc) = (int)(dVar3 + dVar2 * (double)param_1);
LAB_0349519c:
    (**(code **)(*param_2 + 0x28))();
    break;
  case 0xb:
    *(float *)(param_2 + 0x17) = param_1 * 0.01;
    break;
  case 0xc:
    if (0.0 <= param_1) {
      dVar2 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
      dVar3 = 0.5;
      if (dVar2 * (double)param_1 <= 0.0) {
        dVar3 = -0.5;
      }
      iVar1 = *(int *)((long)param_2 + 0xbc) + (int)param_2[0x16] +
              (int)(dVar3 + dVar2 * (double)param_1);
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(int *)((long)param_2 + 0x6c) = iVar1;
    break;
  case 0xd:
    dVar2 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    dVar3 = 0.5;
    if (dVar2 * (double)param_1 <= 0.0) {
      dVar3 = -0.5;
    }
    *(int *)(param_2 + 0x18) = (int)(dVar3 + dVar2 * (double)param_1);
    break;
  default:
    return 0;
  }
  return 1;
}


