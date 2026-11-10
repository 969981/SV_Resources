/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5e324; name: FUN_00c5e324
 */


void FUN_00c5e324(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
                 undefined4 param_4,long param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = FUN_00c5e550(param_7,param_5 + 0x38);
  if (lVar2 != 0) {
    fVar5 = (float)(int)*(float *)(param_6 + 0xc);
    uVar6 = (ulong)(uint)fVar5;
    fVar8 = *(float *)(param_6 + 0xc);
    if (*(char *)(param_6 + 0x19) != '\0') {
      fVar8 = fVar5;
    }
    fVar5 = (float)(int)fVar8;
    lVar2 = *(long *)(param_5 + 0x58);
    lVar1 = *(long *)(param_5 + 0x60);
    if (lVar2 != lVar1) {
      fVar7 = fVar8;
      if (*(char *)(lVar2 + 0xbc) != '\0') {
        fVar7 = fVar5;
      }
      uVar4 = 0;
      if ((*(long **)(lVar2 + 0x48) != (long *)0x0) &&
         (uVar3 = (**(code **)(**(long **)(lVar2 + 0x48) + 0x40))(), (uVar3 & 1) != 0)) {
        uVar6 = 0;
        uVar4 = (**(code **)(**(long **)(lVar2 + 0x48) + 0x28))(fVar7);
      }
      *(undefined4 *)(lVar2 + 0xb8) = uVar4;
      if (lVar2 + 0xc0 != lVar1) {
        fVar7 = fVar8;
        if (*(char *)(lVar2 + 0x17c) != '\0') {
          fVar7 = fVar5;
        }
        uVar4 = 0;
        if ((*(long **)(lVar2 + 0x108) != (long *)0x0) &&
           (uVar3 = (**(code **)(**(long **)(lVar2 + 0x108) + 0x40))(), (uVar3 & 1) != 0)) {
          uVar6 = 0;
          uVar4 = (**(code **)(**(long **)(lVar2 + 0x108) + 0x28))(fVar7);
        }
        *(undefined4 *)(lVar2 + 0x178) = uVar4;
        for (lVar2 = lVar2 + 0x180; lVar2 != lVar1; lVar2 = lVar2 + 0xc0) {
          fVar7 = fVar8;
          if (*(char *)(lVar2 + 0xbc) != '\0') {
            fVar7 = fVar5;
          }
          uVar4 = 0;
          if (*(long **)(lVar2 + 0x48) != (long *)0x0) {
            uVar3 = (**(code **)(**(long **)(lVar2 + 0x48) + 0x40))();
            uVar4 = 0;
            if ((uVar3 & 1) != 0) {
              uVar6 = 0;
              uVar4 = (**(code **)(**(long **)(lVar2 + 0x48) + 0x28))(fVar7);
            }
          }
          *(undefined4 *)(lVar2 + 0xb8) = uVar4;
        }
      }
    }
    lVar2 = *(long *)(param_5 + 0x90);
    lVar1 = *(long *)(param_5 + 0x98);
    if (lVar2 != lVar1) {
      local_60 = 0;
      uStack_58 = 0;
      fVar7 = fVar8;
      if (*(char *)(lVar2 + 0x218) != '\0') {
        fVar7 = fVar5;
      }
      uVar4 = FUN_00c5e7c8(fVar7,lVar2,&local_60);
      *(undefined4 *)(lVar2 + 0x208) = uVar4;
      *(int *)(lVar2 + 0x20c) = (int)uVar6;
      *(undefined4 *)(lVar2 + 0x210) = param_3;
      *(undefined4 *)(lVar2 + 0x214) = param_4;
      if (lVar2 + 0x220 != lVar1) {
        local_60 = 0;
        uStack_58 = 0;
        fVar7 = fVar8;
        if (*(char *)(lVar2 + 0x438) != '\0') {
          fVar7 = fVar5;
        }
        uVar4 = FUN_00c5e7c8(fVar7,lVar2 + 0x220,&local_60);
        *(undefined4 *)(lVar2 + 0x428) = uVar4;
        *(int *)(lVar2 + 0x42c) = (int)uVar6;
        *(undefined4 *)(lVar2 + 0x430) = param_3;
        *(undefined4 *)(lVar2 + 0x434) = param_4;
        for (lVar2 = lVar2 + 0x440; lVar2 != lVar1; lVar2 = lVar2 + 0x220) {
          local_60 = 0;
          uStack_58 = 0;
          fVar7 = fVar8;
          if (*(char *)(lVar2 + 0x218) != '\0') {
            fVar7 = fVar5;
          }
          uVar4 = FUN_00c5e7c8(fVar7,lVar2,&local_60);
          *(undefined4 *)(lVar2 + 0x208) = uVar4;
          *(int *)(lVar2 + 0x20c) = (int)uVar6;
          *(undefined4 *)(lVar2 + 0x210) = param_3;
          *(undefined4 *)(lVar2 + 0x214) = param_4;
        }
      }
    }
  }
  return;
}


