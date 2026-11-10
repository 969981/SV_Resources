/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e62b68; name: FUN_01e62b68
 */


undefined8 FUN_01e62b68(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long local_70;
  long local_68 [4];
  undefined1 auStack_48 [16];
  undefined8 local_38;
  undefined4 local_18;
  undefined4 local_14;
  
  local_38 = param_3;
  local_14 = param_2;
  if (*(long *)(param_1 + 0x58) == 0) {
    local_68[0] = 0;
LAB_01e62ca8:
    FUN_01c1abf8(local_68);
    return 0;
  }
  FUN_01c27dd8(local_68);
  if (local_68[0] == 0) goto LAB_01e62ca8;
  cVar1 = *(char *)(local_68[0] + 0xf0);
  FUN_01c1abf8(local_68);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) != 3) {
    return 0;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    return 0;
  }
  if (*(short *)(*(long *)(param_1 + 0x58) + 0x1a) == 0) {
    return 0;
  }
  local_18 = 0x20;
  FUN_017522c8(local_68,auStack_48,0x10);
  if (((local_68[0] != 0) && (FUN_01e61adc(&local_70,&local_18,local_68[0] + 8), local_68[0] != 0))
     && (FUN_01e62d14(&local_70,&local_14,local_68[0] + 8), local_68[0] != 0)) {
    FUN_01e62da0(&local_70,&local_38,local_68[0] + 8);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    local_70 = 0;
  }
  else {
    FUN_01c27dd8(&local_70);
    lVar2 = local_70;
    if (local_70 != 0) {
      uVar3 = FUN_014c27b0(local_68);
      uVar4 = FUN_014c27c8(local_68);
      uVar5 = FUN_01e61bd8(lVar2,uVar3,uVar4);
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        switch(local_14) {
        case 0:
          *(undefined8 *)(param_1 + 0xe8) = local_38;
          break;
        case 1:
          *(undefined8 *)(param_1 + 0xf0) = local_38;
          break;
        case 2:
          *(undefined8 *)(param_1 + 0xf8) = local_38;
          break;
        case 3:
          *(undefined8 *)(param_1 + 0x100) = local_38;
        }
        uVar3 = 1;
      }
      FUN_01c1abf8(&local_70);
      goto LAB_01e62cdc;
    }
  }
  FUN_01c1abf8(&local_70);
  uVar3 = 0;
LAB_01e62cdc:
  FUN_01694aa8(local_68);
  return uVar3;
}


