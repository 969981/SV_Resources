/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cc840; name: FUN_003cc840
 */


bool FUN_003cc840(long param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar3 = FUN_003a4580(param_1 + 0x948);
  if (iVar3 == 0) {
    iVar3 = FUN_003dcbb0(param_1);
    if (iVar3 == 0) {
      if (param_2[1] != 0) {
        lVar2 = param_2[1] + -1;
        bVar1 = *(byte *)*param_2;
        *param_2 = (byte *)*param_2 + 1;
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          if (bVar1 < 2) {
            if (bVar1 == 1) {
              *(undefined4 *)(param_1 + 0x894) = 0;
            }
            iVar3 = FUN_003dc730(param_1,0);
            return iVar3 != 0;
          }
          uVar4 = 0x2f;
          uVar5 = 0x7a;
          uVar6 = 0x2af;
          goto LAB_003cc8d4;
        }
      }
      uVar4 = 0x32;
      uVar5 = 0x7a;
      uVar6 = 0x2a4;
    }
    else {
      uVar4 = 10;
      uVar5 = 0xf4;
      uVar6 = 0x29c;
    }
  }
  else {
    uVar4 = 10;
    uVar5 = 0xb6;
    uVar6 = 0x295;
  }
LAB_003cc8d4:
  FUN_003c3950(param_1,uVar4,0x206,uVar5,"external/openssl/ssl/statem/statem_lib.c",uVar6);
  return false;
}


