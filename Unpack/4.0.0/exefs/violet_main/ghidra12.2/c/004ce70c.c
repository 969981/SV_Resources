/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ce70c; name: FUN_004ce70c
 */


void FUN_004ce70c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    FUN_00523908(lVar3 + 0x10);
    uVar4 = (ulong)*(uint *)(lVar3 + 0x30);
    if (0 < (int)*(uint *)(lVar3 + 0x30)) {
      puVar2 = *(undefined8 **)(lVar3 + 0x38);
      do {
        puVar2 = puVar2 + 1;
        FUN_004e22f4(*puVar2);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      *(undefined4 *)(lVar3 + 0x30) = 0;
    }
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      uVar4 = *(ulong *)(lVar3 + 8) & 0xfffffffffffffffe;
      if (*(long *)(uVar4 + 8) != *(long *)(uVar4 + 0x10)) {
        FUN_00514600();
      }
    }
  }
  if ((uVar1 & 6) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (*(long *)(uVar4 + 8) != *(long *)(uVar4 + 0x10)) {
      FUN_00514600();
      return;
    }
  }
  return;
}


