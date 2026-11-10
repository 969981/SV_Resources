/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00896374; name: FUN_00896374
 */


void FUN_00896374(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  ushort uVar1;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  uVar1 = *(ushort *)(param_4 + 0x60);
  if ((uVar1 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
    uVar1 = *(ushort *)(param_4 + 0x60);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 2;
    uVar1 = *(ushort *)(param_4 + 0x60);
  }
  if ((uVar1 >> 4 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x60);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x60) | 0x10;
    *(ushort *)(param_1 + 0x60) = uVar1;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x50);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  if ((uVar1 & 0x12) == 0) {
    return;
  }
  FUN_0089621c();
  return;
}


