/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00341a30; name: FUN_00341a30
 */


void FUN_00341a30(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(param_2 + 0x10) >> 6 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x80);
      *(undefined1 **)(lVar1 + 0x70) = &LAB_00342060;
      *(long *)(lVar1 + 0x78) = lVar1;
      *(undefined8 *)(lVar1 + 0x80) = 0;
      *(undefined8 *)(lVar1 + 0x88) = uVar2;
      *(long *)(*(long *)(param_2 + 8) + 0x80) = lVar1 + 0x68;
    }
  }
  else if (*(int *)(lVar1 + 0x10) == 1) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
    FUN_00360570(lVar1 + 0x18);
    return;
  }
  return;
}


