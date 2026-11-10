/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01faa4e0; name: FUN_01faa4e0
 */


void FUN_01faa4e0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 auStack_60 [8];
  long local_58;
  
  if (*(char *)(param_1 + 0x11a) != '\0') {
    FUN_028bab80(&local_b8,*param_2,param_1 + 0x178);
    if (((local_58 == 0) || ((*(byte *)(local_58 + 0x1e8) & 1) != 0)) &&
       ((local_98 == 0 || ((*(byte *)(local_98 + 0x1e8) & 1) != 0)))) {
      local_d0 = local_b8;
      local_c8 = uStack_b0;
      local_c0 = local_a8;
    }
    else {
      local_c8 = 0;
      local_c0 = 0;
      local_d0 = 0;
    }
    *(undefined8 *)(param_1 + 0x128) = local_c8;
    *(undefined8 *)(param_1 + 0x130) = local_c0;
    *(undefined8 *)(param_1 + 0x120) = local_d0;
    if (*(long *)(param_1 + 0x1d0) != *(long *)(param_1 + 0x1d8)) {
      if (((local_58 == 0) || ((*(byte *)(local_58 + 0x1e8) & 1) != 0)) &&
         ((local_98 == 0 || ((*(byte *)(local_98 + 0x1e8) & 1) != 0)))) {
        local_d0 = local_b8;
        local_c8 = uStack_b0;
        local_c0 = local_a8;
      }
      else {
        local_c8 = 0;
        local_c0 = 0;
        local_d0 = 0;
      }
      puVar1 = *(undefined8 **)(param_1 + 0x1d0);
      puVar1[1] = local_c8;
      puVar1[2] = local_c0;
      *puVar1 = local_d0;
    }
    FUN_00db239c(auStack_60);
    FUN_00db239c(auStack_a0);
  }
  return;
}


