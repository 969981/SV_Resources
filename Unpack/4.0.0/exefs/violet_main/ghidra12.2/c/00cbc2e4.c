/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cbc2e4; name: FUN_00cbc2e4
 */


undefined1  [16] FUN_00cbc2e4(long param_1,undefined1 (*param_2) [16])

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((((*(long *)(param_1 + 0x70) != 0) && (*(short *)(*(long *)(param_1 + 0x70) + 0x1a) != 0)) &&
      (*(float *)(param_1 + 0x9c) != 0.0)) && (*(long *)(param_1 + 0x70) != 0)) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00cbc418();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = (undefined8 *)(**(code **)(puVar3[-5] + 0x68))(puVar3 + -5);
          fVar4 = (float)*(undefined8 *)*param_2;
          fVar6 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
          fVar7 = (float)*(undefined8 *)(*param_2 + 8);
          auVar5._4_4_ = (float)((ulong)*puVar3 >> 0x20) * fVar4 +
                         (float)((ulong)puVar3[2] >> 0x20) * fVar6 +
                         (float)((ulong)puVar3[4] >> 0x20) * fVar7 +
                         (float)((ulong)puVar3[6] >> 0x20);
          auVar5._0_4_ = (float)*puVar3 * fVar4 + (float)puVar3[2] * fVar6 +
                         (float)puVar3[4] * fVar7 + (float)puVar3[6];
          auVar5._12_4_ =
               (float)((ulong)puVar3[1] >> 0x20) * fVar4 + (float)((ulong)puVar3[3] >> 0x20) * fVar6
               + (float)((ulong)puVar3[5] >> 0x20) * fVar7 + 0.0;
          auVar5._8_4_ = (float)puVar3[1] * fVar4 + (float)puVar3[3] * fVar6 +
                         (float)puVar3[5] * fVar7 + (float)puVar3[7];
          return auVar5;
        }
      }
    }
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x70) + 0x10), puVar3 != (undefined8 *)0x0)) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      FUN_00d22fe4();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)PTR_DAT_047d91f0) {
          local_40 = CONCAT44((float)((ulong)puVar3[0xd] >> 0x20) +
                              (float)((ulong)*(undefined8 *)*param_2 >> 0x20),
                              (float)puVar3[0xd] + (float)*(undefined8 *)*param_2);
          uStack_38 = CONCAT44((float)((ulong)puVar3[0xe] >> 0x20) +
                               (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20),
                               (float)puVar3[0xe] + (float)*(undefined8 *)(*param_2 + 8));
          auVar5 = FUN_00cbc2e4(puVar3 + -5,&local_40);
          return auVar5;
        }
      }
    }
  }
  return *param_2;
}


