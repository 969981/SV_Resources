/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03494fdc; name: FUN_03494fdc
 */


undefined8 FUN_03494fdc(float param_1,long *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  
  switch(param_3) {
  case 0:
    *(float *)(param_2 + 0x16) = param_1 * 0.01;
    return 1;
  case 1:
    dVar1 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
    dVar2 = 0.5;
    if (dVar1 * (double)param_1 <= 0.0) {
      dVar2 = -0.5;
    }
    *(int *)((long)param_2 + 0xb4) = (int)(dVar2 + dVar1 * (double)param_1);
    return 1;
  case 2:
    *(float *)(param_2 + 0x18) = param_1;
    *(undefined1 *)(param_2 + 0x1e) = 1;
    (**(code **)(*param_2 + 0x28))();
    return 1;
  case 3:
    *(int *)((long)param_2 + 0xbc) = (int)param_1;
    break;
  case 4:
    *(float *)((long)param_2 + 0xc4) = param_1 * 0.01;
    break;
  case 5:
    *(float *)(param_2 + 0x19) = param_1 * 0.01;
    break;
  default:
    return 0;
  }
  *(undefined1 *)(param_2 + 0x1e) = 1;
  return 1;
}


