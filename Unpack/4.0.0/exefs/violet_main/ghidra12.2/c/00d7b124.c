/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7b124; name: FUN_00d7b124
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d7b124(undefined1 param_1 [16],long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar5;
  undefined8 uVar4;
  float fVar6;
  float fVar8;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(param_2 + 0x28);
  fVar3 = param_1._0_4_;
  fVar5 = param_1._4_4_;
  fVar6 = param_1._8_4_;
  fVar8 = param_1._12_4_;
  if (puVar2 == (undefined8 *)0x0) {
    iVar1 = *(int *)(param_2 + 0x3c);
    if (*(int *)(param_2 + 0x38) <= iVar1) {
      puVar2 = (undefined8 *)
               (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),0x30,0x10);
      uVar7 = _UNK_03caadb8;
      uVar4 = _DAT_03caadb0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[1] = CONCAT44(fVar8 + (float)((ulong)uVar7 >> 0x20),fVar6 + (float)uVar7);
      *puVar2 = CONCAT44(fVar5 + (float)((ulong)uVar4 >> 0x20),fVar3 + (float)uVar4);
      *(undefined4 *)(puVar2 + 3) = 6;
      *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      return puVar2;
    }
    puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar1 * 0x30);
    *(int *)(param_2 + 0x3c) = iVar1 + 1;
    uVar4 = CONCAT44(fVar5 + (float)((ulong)_DAT_03caadb0 >> 0x20),fVar3 + (float)_DAT_03caadb0);
    uVar7 = CONCAT44(fVar8 + (float)((ulong)_UNK_03caadb8 >> 0x20),fVar6 + (float)_UNK_03caadb8);
  }
  else {
    *(undefined8 *)(param_2 + 0x28) = puVar2[5];
    puVar2[5] = 0;
    FUN_00d7b620(puVar2);
    uVar4 = CONCAT44(fVar5 + (float)((ulong)_DAT_03caadb0 >> 0x20),fVar3 + (float)_DAT_03caadb0);
    uVar7 = CONCAT44(fVar8 + (float)((ulong)_UNK_03caadb8 >> 0x20),fVar6 + (float)_UNK_03caadb8);
  }
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 6;
  puVar2[1] = uVar7;
  *puVar2 = uVar4;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return puVar2;
}


