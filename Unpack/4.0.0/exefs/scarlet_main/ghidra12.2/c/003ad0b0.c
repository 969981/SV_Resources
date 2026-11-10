/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ad0b0; name: FUN_003ad0b0
 */


ulong FUN_003ad0b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = 0x11;
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar3 = 0x21;
  }
  if (*(long *)(*(long *)(param_1 + 0xa8) + 0x270) == 0) {
    lVar4 = *(long *)(param_1 + 0x5d0);
    if ((lVar4 == 0) || (*(long *)(lVar4 + 8) == 0)) {
      FUN_004806c0(0x14,0x124,0x85,"external/openssl/ssl/s3_msg.c",0x18);
      return 0;
    }
    *(undefined8 *)(lVar4 + 0x1f0) = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x238);
    uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x20))(param_1,uVar3);
  return (ulong)(iVar1 != 0);
}


