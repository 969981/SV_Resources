/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c98a0; name: FUN_003c98a0
 */


undefined8 FUN_003c98a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar2 = FUN_003c9620();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x708) != -1) {
    pcVar5 = *(code **)(*(long *)(param_1 + 0x660) + 0x210);
    if (pcVar5 != (code *)0x0) {
      iVar1 = (*pcVar5)(param_1,*(undefined8 *)(*(long *)(param_1 + 0x660) + 0x218));
      if (iVar1 == 0) {
        uVar2 = 0x71;
        uVar3 = 0x148;
        uVar4 = 0xb17;
      }
      else {
        if (-1 < iVar1) {
          return 1;
        }
        uVar2 = 0x50;
        uVar3 = 0x126;
        uVar4 = 0xb1d;
      }
      FUN_003c3950(param_1,uVar2,0x1ba,uVar3,"external/openssl/ssl/statem/statem_clnt.c",uVar4);
      return 0;
    }
  }
  return 1;
}


