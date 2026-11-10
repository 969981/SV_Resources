/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00578e5c; name: FUN_00578e5c
 */


void FUN_00578e5c(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = *(byte **)(param_1 + 0x10);
  if (pbVar1 != PTR_DAT_047cba80) {
    if ((*pbVar1 & 1) != 0) {
      **(undefined1 **)(pbVar1 + 0x10) = 0;
      pbVar1[8] = 0;
      pbVar1[9] = 0;
      pbVar1[10] = 0;
      pbVar1[0xb] = 0;
      pbVar1[0xc] = 0;
      pbVar1[0xd] = 0;
      pbVar1[0xe] = 0;
      pbVar1[0xf] = 0;
      FUN_00578bac(param_1);
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x00578eb4;
    }
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  FUN_00578bac(param_1);
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x00578eb4:
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar2 = uVar2 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar2 + 8) & 1) == 0) {
    *(undefined2 *)(uVar2 + 8) = 0;
    return;
  }
  **(undefined1 **)(uVar2 + 0x18) = 0;
  *(undefined8 *)(uVar2 + 0x10) = 0;
  return;
}


