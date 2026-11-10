/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f85b0; name: FUN_003f85b0
 */


ulong FUN_003f85b0(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      if ((uVar4 / 0xf) * 0xf == uVar4) {
        if ((uVar4 != 0) && (iVar2 = FUN_003e9110(param_1,&DAT_03c67c74), iVar2 < 1)) {
          return 0;
        }
        uVar3 = FUN_003e94e0(param_1,param_4,0x80);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      puVar1 = &DAT_03c886bc;
      if (param_3 - 1 != uVar4) {
        puVar1 = &DAT_03c9c9c5;
      }
      iVar2 = FUN_003e6880(param_1,"%02x%s",*(undefined1 *)(param_2 + uVar4),puVar1);
      if (iVar2 < 1) {
        return 0;
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  iVar2 = FUN_003e8f00(param_1,&DAT_03c67c74,1);
  return (ulong)(0 < iVar2);
}


