/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e59ac; name: FUN_004e59ac
 */


void FUN_004e59ac(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    plVar3 = *(long **)(param_1 + 0x20);
    do {
      plVar3 = plVar3 + 1;
      lVar4 = *plVar3;
      *(undefined4 *)(lVar4 + 0x18) = 0;
      uVar1 = *(uint *)(lVar4 + 0x10);
      if ((uVar1 & 1) != 0) {
        pbVar5 = *(byte **)(lVar4 + 0x30);
        if ((*pbVar5 & 1) == 0) {
          pbVar5[0] = 0;
          pbVar5[1] = 0;
        }
        else {
          **(undefined1 **)(pbVar5 + 0x10) = 0;
          pbVar5[8] = 0;
          pbVar5[9] = 0;
          pbVar5[10] = 0;
          pbVar5[0xb] = 0;
          pbVar5[0xc] = 0;
          pbVar5[0xd] = 0;
          pbVar5[0xe] = 0;
          pbVar5[0xf] = 0;
        }
      }
      if ((uVar1 & 6) != 0) {
        *(undefined8 *)(lVar4 + 0x38) = 0;
      }
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if (((*(ulong *)(lVar4 + 8) & 1) != 0) &&
         (uVar2 = *(ulong *)(lVar4 + 8) & 0xfffffffffffffffe,
         *(long *)(uVar2 + 8) != *(long *)(uVar2 + 0x10))) {
        FUN_00514600();
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar6 + 8) == *(long *)(uVar6 + 0x10))) {
    return;
  }
  FUN_00514600();
  return;
}


