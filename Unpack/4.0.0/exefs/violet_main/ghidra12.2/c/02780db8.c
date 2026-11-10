/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02780db8; name: FUN_02780db8
 */


undefined1  [16] FUN_02780db8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x138) + 0x70);
  puVar1 = (undefined8 *)FUN_00c4c40c(lVar2,0);
  fVar4 = (float)*puVar1;
  fVar5 = (float)((ulong)*puVar1 >> 0x20);
  fVar6 = (float)puVar1[1];
  fVar7 = (float)((ulong)puVar1[1] >> 0x20);
  auVar3._0_4_ = (float)*(undefined8 *)(lVar2 + 0x3e0) * fVar4 +
                 (float)*(undefined8 *)(lVar2 + 0x3f0) * fVar5 +
                 (float)*(undefined8 *)(lVar2 + 0x400) * fVar6 +
                 (float)*(undefined8 *)(lVar2 + 0x410) * fVar7;
  auVar3._4_4_ = (float)((ulong)*(undefined8 *)(lVar2 + 0x3e0) >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(lVar2 + 0x3f0) >> 0x20) * fVar5 +
                 (float)((ulong)*(undefined8 *)(lVar2 + 0x400) >> 0x20) * fVar6 +
                 (float)((ulong)*(undefined8 *)(lVar2 + 0x410) >> 0x20) * fVar7;
  auVar3._8_4_ = (float)*(undefined8 *)(lVar2 + 1000) * fVar4 +
                 (float)*(undefined8 *)(lVar2 + 0x3f8) * fVar5 +
                 (float)*(undefined8 *)(lVar2 + 0x408) * fVar6 +
                 (float)*(undefined8 *)(lVar2 + 0x418) * fVar7;
  auVar3._12_4_ =
       (float)((ulong)*(undefined8 *)(lVar2 + 1000) >> 0x20) * fVar4 +
       (float)((ulong)*(undefined8 *)(lVar2 + 0x3f8) >> 0x20) * fVar5 +
       (float)((ulong)*(undefined8 *)(lVar2 + 0x408) >> 0x20) * fVar6 +
       (float)((ulong)*(undefined8 *)(lVar2 + 0x418) >> 0x20) * fVar7;
  return auVar3;
}


