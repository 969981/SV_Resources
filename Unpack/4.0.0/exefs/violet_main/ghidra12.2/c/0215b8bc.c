/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215b8bc; name: FUN_0215b8bc
 */


void FUN_0215b8bc(long param_1,int param_2,uint param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0215ba0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x70))(*(long **)(param_1 + 0x10),param_1 + 0x18,0);
    return;
  }
  *(int *)(param_1 + 0xcc) = param_2;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00f6bf24(param_1);
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                    (*(long **)(param_1 + 0x10),param_1 + 0x58);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
  *(ulong *)(param_1 + 0xf0) =
       CONCAT44((int)((ulong)uVar2 >> 0x20),(float)uVar2 + *(float *)(param_1 + 0xe0) * 0.5);
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_00f6bf24(param_1);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                      (*(long **)(param_1 + 0x10),param_1 + 0x58);
    uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0xf8);
    fVar4 = (float)uVar2 + *(float *)(param_1 + 0xe0) * 0.5;
    *(undefined8 *)(param_1 + 0xf8) = uStack_48;
    *(ulong *)(param_1 + 0xf0) = CONCAT44(uVar3,fVar4);
    fVar1 = (float)(int)(float)param_3;
    if (*(char *)(param_1 + 0x104) != '\0') {
      fVar1 = (float)param_3;
    }
    local_50 = CONCAT44(uVar3,fVar4 + *(float *)(param_1 + 0x100) * fVar1);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
              (*(long **)(param_1 + 0x10),param_1 + 0x38,&local_50);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x70))(*(long **)(param_1 + 0x10),param_1 + 0x18,1);
  return;
}


