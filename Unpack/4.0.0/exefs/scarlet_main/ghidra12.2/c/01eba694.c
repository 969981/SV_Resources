/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eba694; name: FUN_01eba694
 */


void FUN_01eba694(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  long *local_48 [4];
  undefined8 local_28;
  int local_8;
  undefined4 local_4;
  
  local_28 = param_4;
  FUN_01267a34(local_48,param_2,param_3);
  if (local_48[0] != (long *)0x0) {
    lVar3 = local_48[0][2];
    bVar1 = *(byte *)(*local_48[0] + lVar3);
    local_48[0][2] = lVar3 + 1;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(*local_48[0] + lVar3 + 1);
        local_48[0][2] = lVar3 + 2;
      }
      if (bVar1 == 1) {
        local_4 = 0;
        FUN_019aed00(&local_8,&local_4);
        if (local_8 == 0) {
          FUN_014c2af0(param_1,local_4,&local_28);
        }
      }
      else if (bVar1 == 2) {
        local_4 = 1;
        FUN_01eba798(&local_8,&local_4);
        if ((local_8 == 0) && (local_48[0] != (long *)0x0)) {
          lVar3 = local_48[0][2];
          cVar2 = *(char *)(*local_48[0] + lVar3);
          local_48[0][2] = lVar3 + 1;
          if (cVar2 == -0x78) {
            uVar4 = *(undefined4 *)(*local_48[0] + lVar3 + 1);
            local_48[0][2] = lVar3 + 5;
            FUN_01e044e0(uVar4,local_4);
          }
        }
      }
    }
  }
  FUN_01267b4c(local_48);
  return;
}


