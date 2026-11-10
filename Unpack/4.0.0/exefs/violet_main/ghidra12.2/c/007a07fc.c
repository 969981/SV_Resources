/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a07fc; name: FUN_007a07fc
 */


undefined4 FUN_007a07fc(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1c0) != 0) {
LAB_007a0810:
    return *(undefined4 *)(param_1 + 0x280);
  }
  lVar1 = param_1 + 0xb8;
  uVar2 = FUN_00796784(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00796784(param_1 + 0x98);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_007967e8(param_1 + 0x98,lVar1), (uVar2 & 1) != 0))
    goto LAB_007a0810;
  }
  uVar2 = FUN_00796784(lVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00796784(param_1 + 0x98);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_007967e8(param_1 + 0x98,lVar1), (uVar2 & 1) == 0))
    goto LAB_007a0810;
  }
  return 0;
}


