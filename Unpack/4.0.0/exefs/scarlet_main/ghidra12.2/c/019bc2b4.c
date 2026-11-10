/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bc2b4; name: FUN_019bc2b4
 */


undefined4 FUN_019bc2b4(long param_1,char param_2,undefined4 param_3,undefined1 *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + 0x1a4) == param_2) {
    *param_4 = 0;
    uVar4 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),param_3);
    bVar1 = FUN_01466360(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),uVar4);
    if (bVar1 < 0xdc) {
      if ((*(int *)(*(long *)(param_1 + 0x38) + 0x36c) == 0) &&
         (cVar2 = FUN_01465adc(*(undefined8 *)(param_1 + 0x30)), cVar2 == '\0')) {
        uVar3 = FUN_019bc388(param_1);
        if (uVar3 < 0x4b) {
          if (uVar3 < 0x33) {
            if (uVar3 < 0x1a) {
              uVar5 = 0x1fd;
              if (uVar3 != 0) {
                uVar5 = 0x1fe;
              }
            }
            else {
              uVar5 = 0x1ff;
            }
          }
          else {
            uVar5 = 0x200;
          }
        }
        else {
          uVar5 = 0x201;
        }
      }
      else {
        uVar5 = 0x1fe;
      }
    }
    else {
      uVar5 = 0x2e7;
    }
  }
  else {
    uVar5 = 0x203;
    *param_4 = 1;
  }
  return uVar5;
}


