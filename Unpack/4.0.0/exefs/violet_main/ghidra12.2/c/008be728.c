/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008be728; name: FUN_008be728
 */


undefined8 FUN_008be728(float param_1,long param_2,char *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float local_34;
  
  local_34 = param_1;
  for (lVar7 = *(long *)(param_2 + 0x18); param_2 + 0x10 != lVar7; lVar7 = *(long *)(lVar7 + 8)) {
    iVar1 = strcmp((char *)(lVar7 + 0x10),param_3);
    if (iVar1 == 0) goto LAB_008be778;
  }
  lVar7 = 0;
LAB_008be778:
  FUN_008b5210(*(undefined4 *)(lVar7 + 0x30),*(undefined4 *)(lVar7 + 0x34),&local_34);
  fVar8 = *(float *)(lVar7 + 0x40);
  if (local_34 == fVar8) {
    uVar2 = 0;
  }
  else {
    *(float *)(lVar7 + 0x40) = local_34;
    lVar3 = *(long *)(param_2 + 8);
    plVar5 = *(long **)(lVar3 + 0x20);
    if (plVar5 != (long *)(lVar3 + 0x18)) {
      plVar4 = (long *)plVar5[1];
      lVar6 = *plVar4;
      *(long **)(*plVar5 + 8) = plVar4;
      *plVar4 = *plVar5;
      *(long **)(lVar6 + 8) = plVar5;
      plVar5[3] = lVar7 + 0x10;
      plVar5[4] = lVar7;
      *plVar5 = lVar6;
      *(undefined4 *)(plVar5 + 2) = 7;
      plVar5[5] = 0;
      *(undefined4 *)(plVar5 + 6) = 1;
      plVar4 = (long *)(lVar3 + 8);
      *plVar5 = *plVar4;
      *(long **)(lVar6 + 8) = plVar4;
      *(long **)(*plVar4 + 8) = plVar5;
      *plVar4 = lVar6;
    }
    uVar2 = 1;
    for (lVar3 = *(long *)(lVar7 + 0x58); lVar7 + 0x50 != lVar3; lVar3 = *(long *)(lVar3 + 8)) {
      *(float *)(lVar3 + 0x24) = fVar8;
      *(float *)(lVar3 + 0x28) = local_34;
      *(undefined4 *)(lVar3 + 0x30) = 0;
      *(undefined1 *)(lVar3 + 0x34) = 1;
    }
  }
  return uVar2;
}


