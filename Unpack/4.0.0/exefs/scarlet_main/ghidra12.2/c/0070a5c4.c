/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0070a5c4; name: FUN_0070a5c4
 */


void FUN_0070a5c4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 8);
  plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  plVar1 = plVar3;
  if ((uVar2 & 1) != 0) {
    plVar1 = (long *)*plVar3;
  }
  if ((plVar1 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0)) {
    FUN_00719018(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    plVar3 = (long *)(uVar2 & 0xfffffffffffffffe);
  }
  uVar4 = uVar2 & 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)*plVar3;
  }
  if ((plVar3 == (long *)0x0) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    FUN_00534a90(lVar5);
    FUN_0049e790(PTR_LAB_047cba48,lVar5);
    uVar2 = *(ulong *)(param_1 + 8);
    uVar4 = uVar2 & 1;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (uVar4 != 0) {
    uVar2 = uVar2 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar2 + 8) & 1) != 0) {
      **(undefined1 **)(uVar2 + 0x18) = 0;
      *(undefined8 *)(uVar2 + 0x10) = 0;
      return;
    }
    *(undefined2 *)(uVar2 + 8) = 0;
  }
  return;
}


