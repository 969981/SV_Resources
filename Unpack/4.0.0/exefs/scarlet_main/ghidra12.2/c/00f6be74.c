/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f6be74; name: FUN_00f6be74
 */


void FUN_00f6be74(float param_1,long param_2)

{
  float fVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 8) != '\0') {
    FUN_00f6bf24();
    uVar2 = (**(code **)(**(long **)(param_2 + 0x10) + 0x30))
                      (*(long **)(param_2 + 0x10),param_2 + 0x58);
    uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_28 = *(undefined8 *)(param_2 + 0xf8);
    fVar4 = (float)uVar2 + *(float *)(param_2 + 0xe0) * 0.5;
    fVar1 = (float)(int)param_1;
    if (*(char *)(param_2 + 0x104) != '\0') {
      fVar1 = param_1;
    }
    *(undefined8 *)(param_2 + 0xf8) = uStack_28;
    *(ulong *)(param_2 + 0xf0) = CONCAT44(uVar3,fVar4);
    local_30 = CONCAT44(uVar3,fVar4 + *(float *)(param_2 + 0x100) * fVar1);
    (**(code **)(**(long **)(param_2 + 0x10) + 0x28))
              (*(long **)(param_2 + 0x10),param_2 + 0x38,&local_30);
  }
  return;
}


