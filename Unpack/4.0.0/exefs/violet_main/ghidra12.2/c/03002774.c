/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03002774; name: FUN_03002774
 */


void FUN_03002774(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)(*(long *)(param_1 + 0x18) + lVar6 * 8);
      FUN_031c34c8(*(long *)(lVar7 + 0x7e0) + 0x20);
      puVar8 = (uint *)**(undefined8 **)(lVar7 + 0x6f0);
      if ((*puVar8 & 0xffff) != 0) {
        puVar5 = puVar8 + 8;
        uVar10 = *puVar8 & 0xffff;
        uVar9 = 0x7fffffff;
        do {
          plVar1 = *(long **)(param_2 + (ulong)*(byte *)((long)puVar5 + 3) * 8 + 8);
          (**(code **)(*plVar1 + 0x20))(plVar1,puVar5);
          if ((int)uVar10 < 2) {
            if ((uVar9 == 0) || (puVar8 = *(uint **)(puVar8 + 2), puVar8 == (uint *)0x0)) break;
            uVar10 = *puVar8 & 0xffff;
            if ((int)uVar9 <= (int)(*puVar8 & 0xffff)) {
              uVar10 = uVar9;
            }
            if ((int)uVar10 < 1) break;
            uVar9 = uVar9 - uVar10;
            puVar5 = puVar8 + 8;
            Hint_Prefetch(*(long *)(puVar8 + 2),0,0,0);
            Hint_Prefetch(*(long *)(puVar8 + 2) + 0x40,0,0,0);
            Hint_Prefetch(puVar8 + 0x20,0,0,0);
            Hint_Prefetch(puVar8 + 0x30,0,0,0);
          }
          else {
            uVar10 = uVar10 - 1;
            puVar5 = (uint *)((long)puVar5 + (ulong)(ushort)*puVar5);
          }
        } while (puVar5 != (uint *)0x0);
      }
      FUN_031c2be4(lVar7 + 0x6e0,*(undefined8 *)(lVar7 + 0x10));
      lVar6 = lVar6 + 1;
      lVar2 = *(long *)(lVar7 + 0x7e0);
      uVar3 = *(undefined8 *)(lVar7 + 0x10);
      lVar4 = **(long **)(lVar7 + 0x6f0);
      *(long *)(lVar2 + 0x20) = lVar7 + 0x6e0;
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      *(long *)(lVar2 + 0x30) = lVar4;
      *(undefined8 *)(lVar2 + 0x38) = 0;
      Hint_Prefetch(lVar4,0,0,0);
      Hint_Prefetch(lVar4 + 0x40,0,0,0);
    } while (lVar6 < *(int *)(param_1 + 0x20));
  }
  return;
}


