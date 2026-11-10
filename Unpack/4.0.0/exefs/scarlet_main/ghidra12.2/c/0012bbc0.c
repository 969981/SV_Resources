/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012bbc0; name: FUN_0012bbc0
 */


void FUN_0012bbc0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  switch(*(undefined1 *)(param_2 + 8)) {
  case 4:
    FUN_0013c0a0(param_1,param_2);
    lVar1 = (ulong)*(byte *)(param_2 + 0xb) + 0x19;
    break;
  case 5:
    FUN_0013ca40(param_1,param_2);
    return;
  case 6:
    lVar1 = (ulong)*(byte *)(param_2 + 10) << 3;
    goto LAB_0012bcc0;
  case 7:
    lVar1 = 0x20;
    if (*(ushort *)(param_2 + 10) != 0) {
      lVar1 = (ulong)*(ushort *)(param_2 + 10) * 0x10 + 0x28;
    }
    lVar1 = lVar1 + *(long *)(param_2 + 0x10);
    break;
  case 8:
    FUN_0013b230(param_1,param_2);
    return;
  case 9:
    if (*(long *)(param_2 + 0x10) != param_2 + 0x18) {
      FUN_001298f0(param_2);
    }
    lVar1 = 0x28;
    break;
  case 10:
    FUN_00129c60(param_1,param_2);
    return;
  default:
    return;
  case 0x14:
    lVar1 = *(long *)(param_2 + 0x10) + 0x19;
    break;
  case 0x26:
    lVar1 = (ulong)*(byte *)(param_2 + 10) << 4;
LAB_0012bcc0:
    lVar1 = lVar1 + 0x20;
  }
  FUN_0012d6c0(param_1,param_2,lVar1);
  return;
}


