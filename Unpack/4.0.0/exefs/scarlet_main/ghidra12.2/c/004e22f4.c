/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e22f4; name: FUN_004e22f4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004e22f4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x20);
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    plVar2 = *(long **)(param_1 + 0x28);
    do {
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
LAB_004e2340:
        uVar5 = *(ulong *)(lVar3 + 8);
        *(undefined1 *)(lVar3 + 0x20) = 0;
        *(undefined4 *)(lVar3 + 0x10) = 0;
      }
      else {
        pbVar4 = *(byte **)(lVar3 + 0x18);
        if ((*pbVar4 & 1) == 0) {
          pbVar4[0] = 0;
          pbVar4[1] = 0;
          goto LAB_004e2340;
        }
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        uVar5 = *(ulong *)(lVar3 + 8);
        *(undefined1 *)(lVar3 + 0x20) = 0;
        *(undefined4 *)(lVar3 + 0x10) = 0;
      }
      if (((uVar5 & 1) != 0) &&
         (*(long *)((uVar5 & 0xfffffffffffffffe) + 8) !=
          *(long *)((uVar5 & 0xfffffffffffffffe) + 0x10))) {
        FUN_00514600();
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x30);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x38);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      pbVar4 = *(byte **)(param_1 + 0x40);
      if ((*pbVar4 & 1) == 0) {
        pbVar4[0] = 0;
        pbVar4[1] = 0;
      }
      else {
        **(undefined1 **)(pbVar4 + 0x10) = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
      }
    }
  }
  if ((uVar1 & 0x38) != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((*(ulong *)(param_1 + 8) & 1) == 0) ||
     (uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe,
     *(long *)(uVar6 + 8) == *(long *)(uVar6 + 0x10))) {
    return;
  }
  FUN_00514600();
  return;
}


