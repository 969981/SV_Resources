/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022e4230; name: FUN_022e4230
 */


void FUN_022e4230(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  char local_28;
  
  FUN_022e3d04(&local_30);
  uVar1 = FUN_022e4380(param_1);
  if ((uVar1 & 1) == 0) {
    memset(&local_d8,0,0x98);
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_e0 = PTR_DAT_047de148 + 0x10;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_a0 = 0;
    ppuStack_98 = &PTR_FUN_045b29d0;
    local_48 = 1;
    local_58 = 0;
    uStack_50 = 0;
    FUN_022e456c(param_1 + 0x128,&local_e0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    local_38 = uVar4;
    local_40 = FUN_022e43e8(*(undefined8 *)(param_1 + 0x350));
    FUN_022e4400(&local_e0,uVar4,&local_38,&local_40);
    puVar2 = local_e0;
    local_e0 = (undefined *)0x0;
    lVar3 = *(long *)(param_1 + 0x328);
    *(undefined **)(param_1 + 0x328) = puVar2;
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 0x340) = local_c8;
    }
    else {
      FUN_00ff3a7c(param_1 + 0x330,lVar3);
      *(undefined8 *)(param_1 + 0x340) = local_c8;
      puVar2 = *(undefined **)(param_1 + 0x328);
    }
    *(undefined8 *)(param_1 + 0x338) = uStack_d0;
    *(undefined8 *)(param_1 + 0x330) = local_d8;
    FUN_022e451c(&local_e0,puVar2);
    FUN_022e456c(param_1 + 0x128,&local_e0);
  }
  FUN_00ca25d0(&ppuStack_98);
  FUN_00ca246c(&local_e0);
  if (local_28 != '\0') {
    *local_30 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_30 + 1));
  }
  return;
}


