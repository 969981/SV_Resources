/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b763b8; name: FUN_00b763b8
 */


void FUN_00b763b8(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar1 = *(ulong *)(uVar1 + 8);
  }
  if ((uVar1 == 0) && (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (pbVar2 != *(byte **)PTR_DAT_047dabb0) {
    if ((*pbVar2 & 1) == 0) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
    }
    else {
      **(undefined1 **)(pbVar2 + 0x10) = 0;
      pbVar2[8] = 0;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
    }
  }
  return;
}


