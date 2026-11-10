/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f49e4; name: FUN_001f49e4
 */


void FUN_001f49e4(long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = *param_1;
  lVar5 = *(long *)(lVar6 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  bVar1 = *(byte *)(param_2 + 0xd);
  if (lVar6 != param_1[1]) {
    bVar1 = *(byte *)(param_2 + 0xd) & 0xfb;
  }
  *(long *)(lVar6 + 0x18) = lVar5 + -9;
  FUN_001ed53c(lVar5 + -9,(*(int *)(lVar6 + 0x20) - (int)lVar5) * 0x100);
  *(undefined1 *)(lVar5 + -6) = uVar4;
  *(byte *)(lVar5 + -5) = bVar1;
  FUN_001ed53c(lVar5 + -4,uVar3);
  plVar2 = (long *)param_1[1];
  if ((long *)*param_1 == plVar2) {
    return;
  }
  plVar7 = *(long **)*param_1;
  lVar6 = plVar7[3];
  plVar7[3] = lVar6 + -9;
  FUN_001ed53c(lVar6 + -9,(*(int *)(plVar7 + 4) - (int)lVar6) * 0x100);
  while( true ) {
    *(undefined1 *)(lVar6 + -6) = 9;
    if (plVar7 == plVar2) break;
    *(undefined1 *)(lVar6 + -5) = 0;
    FUN_001ed53c(lVar6 + -4,uVar3);
    plVar7 = (long *)*plVar7;
    lVar6 = plVar7[3];
    plVar7[3] = lVar6 + -9;
    FUN_001ed53c(lVar6 + -9,((int)plVar7[4] - (int)lVar6) * 0x100);
  }
  *(undefined1 *)(lVar6 + -5) = 4;
  FUN_001ed53c(lVar6 + -4,uVar3);
  return;
}


