/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f2c780; name: FUN_02f2c780
 */


/* WARNING: Removing unreachable block (ram,0x02f2c87c) */

void FUN_02f2c780(long param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 1:
    fVar2 = param_2[7];
    fVar5 = *(float *)(*(long *)(param_2 + 2) + 0xc);
    fVar1 = fVar2 * *(float *)(param_1 + 0x2c) * fVar5;
    fVar3 = fVar5 * *(float *)(param_1 + 0x30);
    fVar4 = fVar2 - fVar1;
    fVar6 = fVar3;
    if (fVar4 <= 0.0) {
      fVar6 = -(fVar5 * *(float *)(param_1 + 0x30));
    }
    fVar6 = fVar1 + fVar6;
    if (ABS(fVar4) <= fVar3) {
      fVar6 = fVar2;
    }
    fVar1 = param_2[5];
    fVar5 = ABS(fVar2) - fVar1;
    fVar2 = -ABS(fVar2) - fVar1;
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    if (fVar2 <= fVar6) {
      fVar2 = fVar5;
    }
    fVar3 = *(float *)(*(long *)(param_2 + 2) + 0x10) * (param_2[6] + fVar2);
    break;
  case 2:
    if (*(char *)(param_1 + 0x30) == '\0') {
      fVar3 = *(float *)(param_1 + 0x2c);
    }
    else {
      fVar3 = (param_2[6] + param_2[7]) * *(float *)(*(long *)(param_2 + 2) + 0x10);
    }
    fVar1 = param_2[5];
    break;
  case 3:
    fVar1 = param_2[6] + param_2[7];
    fVar6 = **(float **)(param_2 + 2);
    fVar2 = (1.0 / *param_2) * fVar6 * fVar6 * *(float *)(param_1 + 0x24);
    fVar5 = (1.0 / *param_2) * fVar6 * *(float *)(param_1 + 0x28);
    fVar6 = fVar2;
    if (1.0 < fVar2) {
      fVar6 = 1.0;
    }
    fVar3 = 0.0;
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar6;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    goto LAB_02f2c8a4;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x02f2c894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x28))();
    return;
  default:
    goto switchD_02f2c7a4_default;
  }
  fVar4 = *(float *)(param_1 + 0x24);
  fVar6 = *(float *)(param_1 + 0x28);
LAB_02f2c8a4:
  fVar2 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 0x20);
  *param_3 = fVar1;
  param_3[1] = fVar3;
  param_3[2] = fVar5;
  param_3[3] = fVar2;
  param_3[4] = fVar4;
  param_3[5] = fVar6;
switchD_02f2c7a4_default:
  return;
}


