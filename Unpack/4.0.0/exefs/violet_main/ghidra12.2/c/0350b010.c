/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0350b010; name: FUN_0350b010
 */


void FUN_0350b010(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(int *)(param_1 + 0x148) == 0) && (*(int *)(param_1 + 0x14c) == 2)) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x29c) = 0;
      *(uint *)(lVar2 + 0x2a3) = *(uint *)(lVar2 + 0x2a3) & 0xfe3fffff;
    }
  }
  else if ((*(long *)(param_1 + 0x118) != 0) &&
          ((*(byte *)(*(long *)(param_1 + 0x118) + 0x20) & 1) != 0)) {
    plVar4 = (long *)(param_1 + 0x68);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    for (lVar2 = *(long *)(param_1 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(lVar2 + 0x188) != 0) {
        lVar3 = *(long *)(lVar2 + 0x180);
        do {
          *(undefined8 *)(lVar3 + 0x18) = 0;
          lVar3 = lVar3 + 0x158;
        } while (lVar3 != *(long *)(lVar2 + 0x180) + (ulong)*(uint *)(lVar2 + 0x188) * 0x158);
      }
    }
    iVar1 = (**(code **)(*plVar4 + 0x38))(plVar4);
    if (iVar1 != 1) {
      if (*(long *)(param_1 + 0x118) != 0) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
        *(byte *)(lVar2 + 0x2ba) = *(byte *)(lVar2 + 0x2ba) & 0x87;
      }
      *(undefined4 *)(param_1 + 0x130) = 2;
    }
  }
  return;
}


