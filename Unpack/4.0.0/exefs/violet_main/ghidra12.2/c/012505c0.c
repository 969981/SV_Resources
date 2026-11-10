/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012505c0; name: FUN_012505c0
 */


void FUN_012505c0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 auStack_28 [8];
  
  uVar1 = *param_3;
  plVar4 = (long *)FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar1);
  if ((*(char *)((long)plVar4 + 0x714) == '\0') &&
     (uVar5 = FUN_020febac(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),plVar4),
     (uVar5 & 1) != 0)) {
    FUN_029849dc(param_1,0xe,uVar1);
    uVar5 = FUN_02e2ba54(param_1,plVar4);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_02e2bd50(param_1,plVar4), (uVar5 & 1) == 0)) {
      iVar2 = (**(code **)(*plVar4 + 0x2d8))(plVar4);
      if (iVar2 != 0) {
        lVar6 = FUN_018d5cec(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),iVar2);
        if ((*(short *)(lVar6 + 0x710) == 0x3fd) || (*(short *)(lVar6 + 0x710) == 0x3f3)) {
          local_44 = 0;
          local_4c = 0;
          local_54 = 0;
          local_5c = 0;
          local_64 = 0;
          local_68 = (**(code **)(*plVar4 + 0x98))(plVar4);
          FUN_0197d19c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x9e0),auStack_28,&local_68);
        }
      }
      FUN_01248470(*(undefined8 *)(param_1 + 0x20),plVar4,0x17);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = (**(code **)(*plVar4 + 0x98))(plVar4);
      FUN_019bca0c(uVar7,uVar3);
      lVar6 = *(long *)(param_1 + 0x20);
      uVar3 = (**(code **)(*plVar4 + 0x98))(plVar4);
      FUN_0129aff0(*(undefined8 *)(lVar6 + 0x18),0xbc,uVar3);
      FUN_029849dc(param_1,0x17,uVar1);
      return;
    }
  }
  return;
}


