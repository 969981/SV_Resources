/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a6be0; name: FUN_003a6be0
 */


bool FUN_003a6be0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = 0x4148;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    uVar1 = 0x4150;
  }
  if (*(long *)(param_1 + 0x968) == 0) {
    iVar3 = FUN_003cd8a0(param_1);
    if (iVar3 != 0) {
      uVar1 = uVar1 | 0x400;
    }
    uVar2 = *(ulong *)(param_1 + 0x970);
    if (*(ulong *)(param_1 + 0x970) <= uVar1) {
      uVar2 = uVar1;
    }
    lVar4 = FUN_00452c30(uVar2,"external/openssl/ssl/record/ssl3_buffer.c",0x3f);
    if (lVar4 == 0) {
      FUN_003c3950(param_1,0xffffffff,0x9c,0x41,"external/openssl/ssl/record/ssl3_buffer.c",0x46);
      return false;
    }
    *(long *)(param_1 + 0x968) = lVar4;
    *(ulong *)(param_1 + 0x978) = uVar2;
  }
  iVar3 = FUN_003a6a90(param_1,1,0);
  return iVar3 != 0;
}


