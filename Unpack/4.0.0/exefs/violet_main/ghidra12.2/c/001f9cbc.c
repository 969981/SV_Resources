/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f9cbc; name: FUN_001f9cbc
 */


void FUN_001f9cbc(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0xe6) != '\0') {
    while (lVar2 = *(long *)(param_1 + 0x70), lVar2 != 0) {
      FUN_001f9484(lVar2 + 0x18,param_1 + 0x10);
      *(undefined1 *)(param_1 + 0xe6) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      if ((*(long *)(lVar2 + 0xa8) != 0) && ((*(byte *)(lVar2 + 0xe4) & 0xc) == 0)) {
        return;
      }
      iVar1 = FUN_001f9538(lVar2 + 0x18);
      param_1 = lVar2;
      if (iVar1 == 0) {
        return;
      }
    }
  }
  return;
}


