/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02173c8c; name: FUN_02173c8c
 */


void FUN_02173c8c(long param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_d3;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x140) == 1) {
    auVar7 = *(undefined1 (*) [16])(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0xe0);
    uStack_38 = auVar7._8_8_;
    uVar8 = auVar7._0_8_;
    uStack_28 = *(undefined8 *)(param_1 + 0x1e8);
    local_30 = *(undefined8 *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x1e8) = uStack_38;
    *(undefined8 *)(param_1 + 0x1e0) = uVar8;
    uStack_40 = uVar8;
    fVar3 = (float)(**(code **)(param_1 + 0x150))(param_1 + 0x170,&uStack_40);
    fVar3 = auVar7._4_4_ - fVar3;
  }
  else {
    if (*(int *)(param_1 + 0x140) != 0) goto LAB_02173cf8;
    fVar3 = 0.0;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0xe0);
  }
  in_d3 = CONCAT44(fVar3,(int)uVar8);
LAB_02173cf8:
  auVar7 = *(undefined1 (*) [16])(param_1 + 0x130);
  auVar4 = NEON_ext(ZEXT816(0),auVar7,4,1);
  auVar5 = NEON_ext(auVar4,ZEXT816(0),0xc,1);
  auVar2._8_4_ = auVar7._4_4_;
  auVar2._0_8_ = auVar7._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = auVar2._4_8_;
  auVar6._0_12_ = SUB1612(auVar4 << 0x40,0);
  auVar6._12_4_ = 0;
  auVar4 = NEON_ext(auVar6,ZEXT816(0),4,1);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = auVar7._8_4_;
  auVar7._12_4_ = auVar7._12_4_;
  auVar7._0_12_ = auVar1 << 0x20;
  auVar7 = NEON_ext(ZEXT816(0),auVar7,0xc,1);
  (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x30) + 0x10))
            (auVar5,auVar4,auVar7,in_d3,0x3f800000);
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x128));
  return;
}


