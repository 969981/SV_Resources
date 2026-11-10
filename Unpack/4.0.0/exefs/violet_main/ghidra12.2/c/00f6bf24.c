/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6bf24; name: FUN_00f6bf24
 */


void FUN_00f6bf24(long param_1)

{
  long lVar1;
  float extraout_s0;
  float fVar2;
  float extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x30))(*(long **)(param_1 + 0x10),param_1 + 0x58);
  fVar2 = (float)(**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                           (*(long **)(param_1 + 0x10),param_1 + 0x78);
  fVar2 = fVar2 - extraout_s0;
  if (*(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    lVar1 = param_1 + 0x38;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),lVar1);
    local_30 = CONCAT44(extraout_var_01,fVar2);
    uStack_28 = extraout_var_04;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x58))(*(long **)(param_1 + 0x10),lVar1,&local_30);
    *(undefined8 *)(param_1 + 0xe0) = local_30;
    *(undefined8 *)(param_1 + 0xe8) = uStack_28;
    local_40 = CONCAT44(extraout_var,extraout_s0 + fVar2 * 0.5);
    uStack_38 = extraout_var_02;
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),lVar1,&local_40);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x70))(*(long **)(param_1 + 0x10),param_1 + 0x18,0);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x60))(*(long **)(param_1 + 0x10),param_1 + 0x38);
  *(undefined8 *)(param_1 + 0xe8) = extraout_var_03;
  *(ulong *)(param_1 + 0xe0) = CONCAT44(extraout_var_00,extraout_s0_00);
  if (*(int *)(param_1 + 0xd4) == 0) {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xcc));
    fVar4 = fVar2 + fVar2 * -0.05 * fVar3;
    if (fVar4 <= 40.0) {
      fVar4 = 40.0;
    }
    *(undefined8 *)(param_1 + 0xe8) = extraout_var_03;
    *(ulong *)(param_1 + 0xe0) = CONCAT44(extraout_var_00,fVar4);
  }
  else {
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xcc));
    fVar4 = extraout_s0_00;
  }
  *(float *)(param_1 + 0x100) = (fVar2 - fVar4) / fVar3;
                    /* WARNING: Could not recover jumptable at 0x00f6c000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x58))
            (*(long **)(param_1 + 0x10),param_1 + 0x38,param_1 + 0xe0);
  return;
}


