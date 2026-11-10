/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ffa6d8; name: FUN_00ffa6d8
 */


void FUN_00ffa6d8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  float fVar3;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  long lStack_78;
  
  if (*(int *)(param_1 + 0x128) == 5) {
    lVar2 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
    fVar3 = *(float *)(param_1 + 0x220) +
            *(float *)(param_1 + 0x224) * (float)((double)*(long *)(lVar2 + 8) / 1000000000.0) *
            30.0;
    *(float *)(param_1 + 0x220) = fVar3;
    fVar3 = fmodf(fVar3,*(float *)(param_1 + 0x228));
    *(float *)(param_1 + 0x220) = fVar3;
    if (*(long *)(param_1 + 0x120) != 0) {
      local_80 = DAT_0485a0d8 + 0x38;
      local_a0 = &LAB_02781578;
      local_98 = FUN_02bda814;
      local_90 = &LAB_02bda818;
      puStack_88 = &LAB_02bda824;
      lStack_78 = param_1;
      FUN_00ffa7c4(*(long *)(param_1 + 0x120),&local_a0);
      pcVar1 = local_98;
      if (local_98 != (code *)0x0) {
        local_90 = (undefined1 *)0x0;
        puStack_88 = (undefined1 *)0x0;
        local_a0 = (undefined1 *)0x0;
        local_98 = (code *)0x0;
        (*pcVar1)(&local_80);
      }
    }
  }
  return;
}


