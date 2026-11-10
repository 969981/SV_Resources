/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308d504; name: FUN_0308d504
 */


void FUN_0308d504(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *local_e8;
  undefined **ppuStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if (1.0 <= *(float *)(param_2 + 0x50)) {
    lStack_c8 = param_2 + 8;
    local_d0 = &DAT_0464ce98;
    local_c0 = param_3;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x40))
              (*(long **)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x28),
               *(undefined8 *)(param_2 + 0x30),param_2 + 0x40,0,&local_d0);
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 0x28);
    puVar3 = *(undefined8 **)(param_2 + 0x30);
    if (puVar6 != puVar3) {
      puVar7 = (undefined8 *)((ulong)&local_d0 | 8);
      puVar1 = PTR_DAT_047e4fa0 + 0x10;
      do {
        uStack_88 = puVar6[3];
        uStack_98 = puVar6[1];
        local_a0 = *puVar6;
        uStack_90 = puVar6[2];
        uVar2 = *(undefined8 *)(param_2 + 8);
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        puVar7[2] = *(undefined8 *)(param_2 + 0x18);
        puVar7[3] = uVar5;
        *puVar7 = uVar2;
        puVar7[1] = uVar4;
        local_e8 = &DAT_0464ce38;
        ppuStack_e0 = &local_d0;
        local_d8 = param_3;
        local_d0 = puVar1;
        local_80 = local_a0;
        uStack_78 = uStack_98;
        local_70 = uStack_90;
        local_68 = uStack_88;
        (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
                  (*(long **)(param_1 + 0x18),&local_80,&local_e8);
        puVar6 = puVar6 + 4;
      } while (puVar3 != puVar6);
    }
  }
  return;
}


