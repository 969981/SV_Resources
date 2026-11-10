/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d819c8; name: FUN_00d819c8
 */


void FUN_00d819c8(float param_1,long param_2,byte param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined8 uVar7;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x48);
  if (lVar4 == 0) {
    FUN_00d8a020(&local_78,local_38,&local_38);
    lVar4 = local_78;
    local_78 = 0;
    lVar5 = *(long *)(param_2 + 0x48);
    *(long *)(param_2 + 0x48) = lVar4;
    if (lVar5 == 0) {
      *(undefined8 *)(param_2 + 0x58) = uStack_68;
      *(undefined8 *)(param_2 + 0x60) = local_60;
      *(undefined8 *)(param_2 + 0x50) = local_70;
    }
    else {
      FUN_00c4e5a0(auStack_58,0);
      FUN_00eeabac(lVar5);
      plVar1 = *(long **)(param_2 + 0x50);
      uVar2 = *(undefined8 *)(param_2 + 0x58);
      uVar7 = *(undefined8 *)(param_2 + 0x60);
      uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5,uVar2,uVar7);
      }
      else {
        FUN_00c48fe8(plVar1,lVar5,uVar2,uVar7);
      }
      FUN_00c4e70c(auStack_58);
      *(undefined8 *)(param_2 + 0x58) = uStack_68;
      *(undefined8 *)(param_2 + 0x60) = local_60;
      *(undefined8 *)(param_2 + 0x50) = local_70;
      lVar4 = *(long *)(param_2 + 0x48);
    }
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (*(byte *)(lVar4 + 0xc0) == (param_3 & 1)) {
    if (*(float *)(lVar4 + 0xc4) == param_1) {
      if (bVar6) {
        return;
      }
      goto LAB_00d81a44;
    }
  }
  else {
    *(byte *)(lVar4 + 0xc0) = param_3 & 1;
    if (*(float *)(lVar4 + 0xc4) == param_1) goto LAB_00d81a44;
  }
  *(float *)(lVar4 + 0xc4) = param_1;
LAB_00d81a44:
  lVar4 = *(long *)(param_2 + 0x208);
  lVar5 = *(long *)(param_2 + 0x210);
  if (((lVar4 != lVar5) && (*(undefined1 *)(lVar4 + 0x10) = 1, lVar4 + 0x18 != lVar5)) &&
     (*(undefined1 *)(lVar4 + 0x28) = 1, lVar4 + 0x30 != lVar5)) {
    *(undefined1 *)(lVar4 + 0x40) = 1;
    for (lVar4 = lVar4 + 0x48; lVar4 != lVar5; lVar4 = lVar4 + 0x18) {
      *(undefined1 *)(lVar4 + 0x10) = 1;
    }
  }
  return;
}


