/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eea24; name: FUN_001eea24
 */


undefined8 FUN_001eea24(long param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  lVar4 = FUN_001edb18();
  if (lVar4 == 0) {
    return 0xfffffe0b;
  }
  lVar7 = *(long *)(lVar4 + 0xa8);
  if (lVar7 != 0) {
    uVar5 = FUN_001f9810(lVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((*(char *)(lVar7 + 0x90) == '\0') && (lVar7 != *(long *)(param_1 + 0x150))) {
      FUN_001f9168(lVar7,param_1 + 0x890);
      FUN_001f45b0(param_1 + 0x890,lVar7);
    }
  }
  if ((*(code **)(param_1 + 0x818) != (code *)0x0) &&
     (iVar3 = (**(code **)(param_1 + 0x818))
                        (param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x8b8)), iVar3 != 0)) {
    return 0xfffffc7a;
  }
  if (param_2 == 0) {
    if ((*(byte *)(lVar4 + 0xe4) & 1) != 0) goto LAB_001eeb1c;
LAB_001eeb04:
    bVar2 = false;
    plVar6 = (long *)(param_1 + 0x8f0);
  }
  else {
    uVar1 = param_2 & 1 ^ (uint)(*(char *)(param_1 + 0x9aa) != '\0');
    if ((*(byte *)(lVar4 + 0xe4) & 1) == 0) {
      if (uVar1 == 0) goto LAB_001eeb04;
      plVar6 = (long *)(param_1 + 0x8e8);
      bVar2 = true;
    }
    else {
      if (uVar1 != 0) {
        bVar2 = true;
        goto LAB_001eeb30;
      }
LAB_001eeb1c:
      bVar2 = false;
      plVar6 = (long *)(param_1 + 0x8f8);
    }
  }
  *plVar6 = *plVar6 + -1;
LAB_001eeb30:
  *(byte *)(lVar4 + 0xe4) = *(byte *)(lVar4 + 0xe4) | 2;
  if ((((*(byte *)(param_1 + 0x99c) >> 4 & 1) != 0) || (bVar2 || *(char *)(param_1 + 0x9aa) == '\0')
      ) || (iVar3 = FUN_001f9f00(lVar4), iVar3 == 0)) {
    uVar5 = FUN_001eebbc(param_1,lVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  else {
    if (*(long *)(param_1 + 0x8c8) == 0) {
      *(long *)(param_1 + 0x8c0) = lVar4;
    }
    else {
      *(long *)(*(long *)(param_1 + 0x8c8) + 0x98) = lVar4;
      *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(param_1 + 0x8c8);
    }
    *(long *)(param_1 + 0x8c8) = lVar4;
    *(long *)(param_1 + 0x908) = *(long *)(param_1 + 0x908) + 1;
  }
  return 0;
}


