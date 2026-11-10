/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0343f260; name: FUN_0343f260
 */


long FUN_0343f260(long *param_1,int *param_2)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  
  bVar3 = *(byte *)(param_1 + 0x18);
  if ((uint)bVar3 < *(uint *)(param_1 + 0x15)) {
    plVar7 = (long *)param_1[0x17];
    uVar4 = (uint)bVar3;
    if (uVar4 != 0) {
      if (uVar4 < 2) {
        uVar4 = 1;
      }
      uVar2 = uVar4 & 3;
      if (2 < uVar4 - 1) {
        iVar5 = -(uVar4 & 0xfc);
        do {
          iVar5 = iVar5 + 4;
          plVar7 = *(long **)**(undefined8 **)*plVar7;
        } while (iVar5 != 0);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        plVar7 = (long *)*plVar7;
      }
    }
    if (*(long *)plVar7[1] + (ulong)*(uint *)(plVar7 + 2) == param_1[0xf]) {
      *(byte *)(param_1 + 0x18) = bVar3 + 1;
      param_1[0xf] = *(long *)plVar7[1] + (ulong)*(uint *)((long *)plVar7[1] + 3);
      *param_2 = *(int *)(plVar7[1] + 0x18) - (int)plVar7[2];
      lVar6 = *(long *)plVar7[1];
      uVar4 = *(uint *)(param_1 + 0x12);
      uVar2 = *(uint *)((long *)plVar7[1] + 3);
      uVar1 = lVar6 + (ulong)*(uint *)(plVar7 + 2);
      if ((uVar1 < uVar4) && ((ulong)uVar4 < lVar6 + (ulong)uVar2)) {
        iVar5 = (int)uVar1 - uVar4;
      }
      else {
        iVar5 = *(uint *)(plVar7 + 2) - uVar2;
      }
      *(int *)(param_1 + 0x13) = (int)param_1[0x13] + iVar5;
      FUN_0343e98c(param_1);
      return *(long *)(plVar7[1] + 8) + (ulong)*(uint *)(plVar7 + 2);
    }
    (**(code **)(*param_1 + 0x110))(param_1,0);
    FUN_0343e344(param_1);
  }
  *param_2 = 0;
  return 0;
}


