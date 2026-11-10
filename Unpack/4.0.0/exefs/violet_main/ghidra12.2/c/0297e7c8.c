/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297e7c8; name: FUN_0297e7c8
 */


void FUN_0297e7c8(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_d4;
  short local_d0;
  undefined2 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [48];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  bVar1 = param_2[3];
  if (bVar1 == 0) {
    bVar1 = *param_2;
    bVar2 = param_2[1];
    bVar3 = param_2[2];
    uVar5 = FUN_012468e8(param_1);
    FUN_0297e9b8(uVar5,(ulong)bVar1 | (ulong)bVar2 << 0x20,bVar3);
    return;
  }
  if (bVar1 != 3) {
    bVar2 = *param_2;
    bVar3 = param_2[1];
    FUN_01582534(param_1);
    uVar5 = FUN_00f7e284();
    plVar6 = (long *)FUN_010f6f54(uVar5,bVar1 != 1);
    if (plVar6 != (long *)0x0) {
      FUN_012468e8(param_1);
      lVar7 = FUN_0297e994();
      puVar8 = (undefined8 *)(lVar7 + (ulong)bVar2 * 0x12);
      local_58 = *puVar8;
      local_48 = *(undefined2 *)(puVar8 + 2);
      uStack_50 = puVar8[1];
      sVar4 = *(short *)(auStack_88 + (ulong)bVar3 * 4 + 0x36);
      if (sVar4 == 10000) {
        FUN_01246154(auStack_88);
        FUN_01920e80(&local_e8);
        local_b4 = 5;
        local_b0 = 2;
        local_e4 = 0xd;
        local_ac = 0;
        local_b8 = 0x40;
        local_ac = (**(code **)(*plVar6 + 0x98))(plVar6);
      }
      else {
        FUN_01246154(auStack_88);
        FUN_01920e80(&local_e8);
        local_e4 = 2;
        local_d4 = (**(code **)(*plVar6 + 0x98))(plVar6);
        local_d0 = sVar4;
      }
      local_e8 = (**(code **)(*plVar6 + 0x98))(plVar6);
      FUN_01582534(param_1);
      uVar5 = FUN_01920e44();
      FUN_01920e4c(uVar5,auStack_94);
      uVar5 = FUN_01249340(param_1);
      FUN_01920eb8(uVar5,&local_e8);
      uVar5 = FUN_012468e8(param_1);
      FUN_0297e99c(uVar5,(ulong)bVar2);
    }
  }
  return;
}


