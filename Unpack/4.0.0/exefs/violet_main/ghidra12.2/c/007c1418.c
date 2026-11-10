/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c1418; name: FUN_007c1418
 */


long FUN_007c1418(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  uVar5 = (**(code **)(*param_1 + 0x88))();
  if ((uVar5 & 1) == 0) {
    lVar9 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = param_1 + 0x12;
      FUN_007c9e3c(plVar8);
    }
    lVar4 = param_2 + -0x20;
    if ((*(ulong *)(param_2 + -8) & 1) != 0) {
      lVar4 = *(ulong *)(param_2 + -8) - 1;
    }
    uVar7 = *(ulong *)(lVar4 + 0x18);
    uVar5 = param_3 + 7U & 0xfffffffffffffff8;
    if (uVar7 < uVar5) {
      lVar9 = 0;
    }
    else {
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12);
      if (uVar7 - uVar5 == 0) {
        lVar9 = uVar6 + lVar4 + 0x20;
      }
      else {
        uVar2 = (uVar6 - uVar5) + uVar7;
        if (uVar2 < 0x20) {
          uVar6 = (uVar7 - uVar5) + uVar6;
          *(short *)(lVar4 + 0x12) = (short)uVar6;
          lVar1 = lVar4 + (uVar6 & 0xffff);
          lVar9 = lVar1 + 0x20;
          if ((uVar6 & 0xffff) != 0) {
            *(long *)(lVar1 + 0x18) = lVar4 + 1;
          }
        }
        else {
          puVar3 = (undefined8 *)(uVar2 + lVar4);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined2 *)((long)puVar3 + 0x12) = 0;
          *(undefined2 *)(puVar3 + 2) = *(undefined2 *)((long)param_1 + 0xd2);
          puVar3[3] = uVar5;
          if ((int)param_1[0x11] == 1) {
            FUN_007bfd40();
          }
          else {
            FUN_007bfd28(param_1 + 0x1e,(long)puVar3 + (long)*(int *)((long)param_1 + 0x104));
          }
          *(int *)(param_1 + 0x20) = (int)param_1[0x20] + 1;
          FUN_007bfd58(*(int *)((long)param_1 + 0x104) + lVar4);
          *(int *)(param_1 + 0x20) = (int)param_1[0x20] + -1;
          *(ulong *)(lVar4 + 0x18) = uVar2 - 0x20;
          *(undefined2 *)(lVar4 + 0x12) = 0;
          FUN_007c026c(param_1,lVar4);
          lVar9 = uVar2 + 0x20 + lVar4 + (ulong)*(ushort *)((long)puVar3 + 0x12);
        }
      }
    }
    if (plVar8 != (long *)0x0) {
      FUN_007c9e44(plVar8);
    }
  }
  return lVar9;
}


