/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c00104; name: FUN_00c00104
 */


int FUN_00c00104(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  plVar3 = (long *)*param_1;
  if (plVar3 == (long *)0x0) {
    iVar5 = 0;
  }
  else {
    lVar1 = plVar3[1] - *plVar3;
    iVar5 = ((uint)lVar1 & 0xfffffff0) + 0x18;
    if (lVar1 != 0) {
      uVar6 = 0;
      puVar7 = (undefined8 *)(*plVar3 + 8);
      do {
        if (*(int *)((long)puVar7 + -4) == 4) {
          iVar2 = FUN_00c00104(*puVar7);
          iVar5 = iVar5 + iVar2 + 8;
        }
        else if (*(int *)((long)puVar7 + -4) == 3) {
          puVar4 = (uint *)*puVar7;
          if (((*puVar4 & 1) == 0) ||
             ((puVar4 <= *(uint **)(puVar4 + 4) && (*(uint **)(puVar4 + 4) < puVar4 + 6)))) {
            iVar2 = 0;
          }
          else {
            iVar2 = (*puVar4 & 0xfffffffe) - 1;
          }
          iVar5 = iVar5 + iVar2 + 0x18;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (uVar6 < (ulong)(lVar1 >> 4));
    }
  }
  return iVar5;
}


