/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d175d0; name: FUN_00d175d0
 */


undefined1  [16] FUN_00d175d0(long param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = (undefined8 *)FUN_00c4c40c();
  fVar3 = (float)*puVar1;
  fVar4 = (float)((ulong)*puVar1 >> 0x20);
  fVar5 = (float)puVar1[1];
  fVar6 = (float)((ulong)puVar1[1] >> 0x20);
  auVar2._0_4_ = (float)*(undefined8 *)(param_1 + 0x3e0) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x3f0) * fVar4 +
                 (float)*(undefined8 *)(param_1 + 0x400) * fVar5 +
                 (float)*(undefined8 *)(param_1 + 0x410) * fVar6;
  auVar2._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) * fVar3 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) * fVar4 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x400) >> 0x20) * fVar5 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) * fVar6;
  auVar2._8_4_ = (float)*(undefined8 *)(param_1 + 1000) * fVar3 +
                 (float)*(undefined8 *)(param_1 + 0x3f8) * fVar4 +
                 (float)*(undefined8 *)(param_1 + 0x408) * fVar5 +
                 (float)*(undefined8 *)(param_1 + 0x418) * fVar6;
  auVar2._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 1000) >> 0x20) * fVar3 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x3f8) >> 0x20) * fVar4 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x408) >> 0x20) * fVar5 +
       (float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) * fVar6;
  return auVar2;
}


