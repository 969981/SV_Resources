/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01539fe0; name: FUN_01539fe0
 */


ulong FUN_01539fe0(long param_1,undefined1 param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  
  switch(param_2) {
  case 0:
    uVar4 = FUN_0153a360(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 1:
    uVar4 = FUN_0153a6a4(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 2:
    uVar4 = FUN_0153a9e8(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 3:
    uVar4 = FUN_0153ad2c(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 4:
    uVar4 = FUN_0153b070(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 5:
    uVar4 = FUN_0153b3b4(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 6:
    uVar4 = FUN_0153b6f8(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 7:
    uVar4 = FUN_0153ba3c(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 8:
    bVar2 = FUN_01400ba8(*(undefined8 *)(param_1 + 0x70));
    bVar1 = 0x1b;
    if ((byte)(bVar2 - 1) < 0x1a) {
      bVar1 = bVar2;
    }
    return (ulong)bVar1;
  case 9:
    uVar4 = FUN_0153bd80(*(undefined8 *)(param_1 + 0x70));
    return uVar4;
  case 10:
    uVar3 = FUN_0153c0c8(*(undefined8 *)(param_1 + 0x70));
    break;
  case 0xb:
    uVar3 = FUN_0153c40c(*(undefined8 *)(param_1 + 0x70));
    break;
  case 0xc:
    uVar3 = FUN_0153c750(*(undefined8 *)(param_1 + 0x70));
    goto LAB_0153a0f8;
  case 0xd:
    uVar3 = FUN_0153ca94(*(undefined8 *)(param_1 + 0x70));
    break;
  case 0xe:
    uVar3 = FUN_0153cdd8(*(undefined8 *)(param_1 + 0x70));
    break;
  case 0xf:
    uVar3 = FUN_0153d11c(*(undefined8 *)(param_1 + 0x70));
    break;
  case 0x10:
    uVar3 = FUN_0153d460(*(undefined8 *)(param_1 + 0x70));
LAB_0153a0f8:
    return (ulong)(uVar3 & 0xffff);
  case 0x11:
    uVar3 = FUN_0153d7a4(*(undefined8 *)(param_1 + 0x70));
    break;
  default:
    return 0;
  }
  return (ulong)(uVar3 & 0xff);
}


