/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088f7bc; name: FUN_0088f7bc
 */


int FUN_0088f7bc(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(param_2 + 0x20);
  if (param_2 + 0x18 == lVar6) {
    iVar4 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    iVar4 = 0;
    do {
      if ((lVar2 == 0) || (*(short *)(lVar2 + 0xe) == 0)) {
        iVar7 = 0;
      }
      else {
        uVar8 = 0;
        iVar7 = 0;
        plVar5 = *(long **)(lVar6 + 0x10);
        lVar1 = lVar2 + (ulong)*(uint *)(lVar2 + 0x10);
        do {
          lVar2 = lVar2 + (ulong)*(uint *)(lVar1 + uVar8 * 4);
          if (*(char *)(lVar2 + 0x1d) == '\0') {
            pcVar3 = *(code **)(*plVar5 + 0x78);
          }
          else {
            pcVar3 = *(code **)(*plVar5 + 0x88);
          }
          lVar2 = (*pcVar3)(plVar5,lVar2,param_3 & 1);
          iVar7 = iVar7 + (uint)(lVar2 != 0);
          lVar2 = *(long *)(param_1 + 8);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(lVar2 + 0xe));
      }
      lVar6 = *(long *)(lVar6 + 8);
      iVar4 = iVar7 + iVar4;
    } while (param_2 + 0x18 != lVar6);
  }
  return iVar4;
}


