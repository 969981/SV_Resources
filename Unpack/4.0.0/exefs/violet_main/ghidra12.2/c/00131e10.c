/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00131e10; name: FUN_00131e10
 */


void FUN_00131e10(long param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined1 *)(lVar4 + 0x44);
  if (*(int *)(param_1 + 0x10) == 0x123) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    FUN_00138a10(param_1);
    local_70[0] = 7;
    uStack_60 = 0xffffffffffffffff;
    local_68 = uVar5;
  }
  else {
    FUN_00138a10(param_1);
    FUN_00131050(param_1,local_70,0);
    FUN_001346e0(*(undefined8 *)(param_1 + 0x30),local_70);
    if (*(int *)(param_1 + 0x10) != 0x5d) goto LAB_00131f28;
    FUN_00138a10(param_1);
  }
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
  if (*(int *)(param_1 + 0x10) == 0x3d) {
    FUN_00138a10(param_1);
    puVar3 = *(undefined8 **)(param_2 + 0x18);
    local_58 = *puVar3;
    local_50 = puVar3[1];
    uStack_48 = puVar3[2];
    FUN_00135110(lVar4,&local_58,local_70);
    FUN_00131050(param_1,auStack_88,0);
    FUN_00134820(lVar4,&local_58,auStack_88);
    *(undefined1 *)(lVar4 + 0x44) = uVar1;
    return;
  }
  FUN_001329f0(param_1,0x3d);
LAB_00131f28:
  FUN_001329f0(param_1,0x5d);
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x131f34);
  (*pcVar2)();
}


