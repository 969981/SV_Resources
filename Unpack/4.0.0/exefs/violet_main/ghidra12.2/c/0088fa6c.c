/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088fa6c; name: FUN_0088fa6c
 */


long * FUN_0088fa6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  plVar4 = (long *)FUN_00898b4c(param_3);
  (**(code **)(*plVar4 + 0x48))
            (plVar4,param_2,param_5,*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x70));
  lVar7 = *(long *)(param_1 + 0x20);
  if (lVar7 != 0) {
    uVar2 = *(ushort *)(plVar4 + 7);
    if (uVar2 < *(ushort *)((long)plVar4 + 0x3a)) {
      *(ushort *)(plVar4 + 7) = uVar2 + 1;
      puVar1 = (undefined8 *)(plVar4[6] + (ulong)uVar2 * 0x10);
      *puVar1 = param_4;
      puVar1[1] = lVar7;
    }
  }
  bVar3 = (**(code **)(*param_4 + 0x50))(param_4);
  if (*(byte *)(param_1 + 0x72) <= bVar3) {
    bVar3 = *(byte *)(param_1 + 0x72);
  }
  if (bVar3 != 0) {
    uVar8 = 0;
    do {
      if (*(long *)(param_1 + 0x28 + uVar8 * 8) != 0) {
        uVar5 = (**(code **)(*param_4 + 0x58))(param_4,uVar8 & 0xffffffff);
        uVar6 = FUN_0088d418(plVar4,uVar5,*(undefined8 *)(param_1 + 0x28 + uVar8 * 8));
        if ((uVar6 & 1) == 0) {
          return plVar4;
        }
      }
      uVar8 = uVar8 + 1;
    } while (bVar3 != uVar8);
  }
  return plVar4;
}


