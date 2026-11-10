/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00464760; name: FUN_00464760
 */


long FUN_00464760(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    if ((ulong)(param_1[4] - param_1[1]) < param_2) {
      uVar2 = 0x7d;
      uVar3 = 0x30d;
    }
    else {
      if (*param_1 != 0) {
        iVar1 = FUN_00464cf0(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        return *param_1 + param_1[1];
      }
      uVar2 = 0x44;
      uVar3 = 0x312;
    }
    FUN_004806c0(0x24,0x71,uVar2,"external/openssl/crypto/rand/rand_lib.c",uVar3);
  }
  return 0;
}


