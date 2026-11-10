/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b36998; name: FUN_02b36998
 */


void FUN_02b36998(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_50;
  ulong uStack_48;
  
  puVar1 = PTR_PTR_047d9248;
  fVar5 = *(float *)(param_2 + 0x50);
  fVar8 = *(float *)(param_2 + 0x60);
  fVar2 = (float)(**(code **)(PTR_PTR_047d9248 + (ulong)*(uint *)(param_2 + 0x70) * 8))();
  fVar9 = *(float *)(param_2 + 100);
  fVar6 = *(float *)(param_2 + 0x54);
  fVar3 = (float)(**(code **)(puVar1 + (ulong)*(uint *)(param_2 + 0x70) * 8))(param_1);
  fVar10 = *(float *)(param_2 + 0x68);
  fVar7 = *(float *)(param_2 + 0x58);
  fVar4 = (float)(**(code **)(puVar1 + (ulong)*(uint *)(param_2 + 0x70) * 8))(param_1);
  local_50 = CONCAT44(fVar6 + (fVar9 - fVar6) * fVar3,fVar5 + (fVar8 - fVar5) * fVar2);
  uStack_48 = (ulong)(uint)(fVar7 + (fVar10 - fVar7) * fVar4);
  (**(code **)(**(long **)(param_2 + 0x48) + 0x78))(*(long **)(param_2 + 0x48),&local_50);
  return;
}


