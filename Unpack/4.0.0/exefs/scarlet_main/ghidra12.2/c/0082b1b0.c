/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0082b1b0; name: FUN_0082b1b0
 */


void FUN_0082b1b0(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,
                 undefined8 *param_5,long param_6)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_047d19f0;
  (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2 + 0x18) * 0x200 + 0x68))
            (param_2,param_3,param_6);
  fVar2 = -(float)*param_3;
  fVar3 = -(float)((ulong)*param_3 >> 0x20);
  fVar4 = -(float)param_3[1];
  local_50 = CONCAT44((float)((ulong)param_5[4] >> 0x20) * fVar4 +
                      (float)((ulong)*param_5 >> 0x20) * fVar2 +
                      (float)((ulong)param_5[2] >> 0x20) * fVar3,
                      (float)param_5[4] * fVar4 +
                      (float)*param_5 * fVar2 + (float)param_5[2] * fVar3);
  uStack_48 = CONCAT44((float)((ulong)param_5[5] >> 0x20) * fVar4 +
                       (float)((ulong)param_5[1] >> 0x20) * fVar2 +
                       (float)((ulong)param_5[3] >> 0x20) * fVar3,
                       (float)param_5[5] * fVar4 +
                       (float)param_5[1] * fVar2 + (float)param_5[3] * fVar3);
  (**(code **)(*(long *)puVar1 + (ulong)*(byte *)(param_4 + 0x18) * 0x200 + 0x68))
            (param_4,&local_50,param_6 + 0x10);
  return;
}


