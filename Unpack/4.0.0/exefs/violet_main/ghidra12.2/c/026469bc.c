/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026469bc; name: FUN_026469bc
 */


ulong FUN_026469bc(undefined8 param_1,long param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *local_c8;
  char local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  uint7 uStack_6f;
  undefined8 local_68;
  undefined8 *local_60;
  char local_58;
  
  FUN_02640a8c(&local_60);
  local_68 = 0xffffffffffffffff;
  local_70 = 0;
  do {
    lVar2 = *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8);
    if (lVar2 == 0) {
      uVar4 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4;
      FUN_02640b38((long *)(param_2 + 0x48),&local_70);
      goto LAB_02646a2c;
    }
    uVar4 = *(ulong *)(*(long *)(param_2 + 0xc0) + -8);
    *(long *)(param_2 + 0xc0) = lVar2 + *(long *)(param_2 + 0xb8) + -8;
    uVar3 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(*(long *)(param_2 + 0x80) + uVar3) =
         *(ulong *)(*(long *)(param_2 + 0x80) + uVar3) &
         (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
  } while ((ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4) <= uVar4);
  plVar1 = (long *)(*(long *)(param_2 + 0x48) + uVar4 * 0x10);
  *plVar1 = (ulong)uStack_6f << 8;
  plVar1[1] = -1;
  if (*(ulong *)(param_2 + 0xf0) <= uVar4) {
LAB_02646a2c:
    *(ulong *)(param_2 + 0xf0) = uVar4 + 1;
  }
  if (local_58 != '\0') {
    *local_60 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
  }
  local_60 = (undefined8 *)0x0;
  local_58 = '\0';
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  FUN_02640b60(&local_c8,param_2);
  uStack_b0 = *param_3;
  local_a8 = param_3[1];
  local_98 = 0;
  uStack_a0 = 0;
  local_b8 = uVar4;
  FUN_00d334b4(&uStack_a0,param_4);
  local_90 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x10) = 0;
  uStack_88 = 0;
  local_80 = 0;
  FUN_00c96b7c(&uStack_88,param_4 + 0x18);
  local_78 = *(undefined8 *)(param_4 + 0x28);
  uVar5 = FUN_02646e38(param_1,uVar5,&local_c8);
  FUN_02646ba4(&uStack_a0);
  FUN_02640dc0(&local_c8);
  FUN_02640a8c(&local_c8,param_2);
  if (local_58 != '\0') {
    *local_60 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_60 + 1));
  }
  local_60 = local_c8;
  local_58 = local_c0;
  *(undefined8 *)(*(long *)(param_2 + 0x48) + uVar4 * 0x10 + 8) = uVar5;
  if (local_c0 != '\0') {
    *local_c8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_c8 + 1));
  }
  return uVar4;
}


