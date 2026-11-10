/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00694cc4; name: FUN_00694cc4
 */


void FUN_00694cc4(long param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  
  if (param_2 == param_1) {
    return;
  }
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
      uVar2 = *(ulong *)(param_1 + 8);
      goto joined_r0x00694d0c;
    }
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  uVar2 = *(ulong *)(param_1 + 8);
joined_r0x00694d0c:
  if ((uVar2 & 1) == 0) {
    FUN_00694be4();
    return;
  }
  uVar2 = uVar2 & 0xfffffffffffffffe;
  if ((*(byte *)(uVar2 + 8) & 1) == 0) {
    *(undefined2 *)(uVar2 + 8) = 0;
    FUN_00694be4();
    return;
  }
  **(undefined1 **)(uVar2 + 0x18) = 0;
  *(undefined8 *)(uVar2 + 0x10) = 0;
  FUN_00694be4();
  return;
}


