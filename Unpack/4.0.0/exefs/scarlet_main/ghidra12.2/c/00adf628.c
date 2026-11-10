/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00adf628; name: FUN_00adf628
 */


undefined8 FUN_00adf628(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_70 [4];
  undefined1 auStack_4c [20];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_8;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(short *)(*(long *)(param_1 + 0x58) + 0x1a) == 0)) {
    return 0;
  }
  local_38[0] = 0x24;
  local_8 = auStack_4c;
  local_28 = 0x14;
  local_30 = param_2;
  FUN_01752300(local_70,DAT_0485f2f0,&local_8,&local_28);
  if ((local_70[0] != (undefined8 *)0x0) &&
     (FUN_01e61adc(&local_8,local_38,local_70[0] + 1), local_70[0] != (undefined8 *)0x0)) {
    FUN_01e62da0(&local_8,&local_30,local_70[0] + 1);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    local_8 = (undefined1 *)0x0;
  }
  else {
    FUN_01c27dd8(&local_8);
    if (local_8 != (undefined1 *)0x0) {
      if (local_70[0] == (undefined8 *)0x0) {
        uVar2 = 0;
        uVar3 = 0;
      }
      else {
        uVar2 = *local_70[0];
        uVar3 = local_70[0][3];
      }
      uVar1 = FUN_01e61bd8(local_8,uVar2,uVar3);
      if ((uVar1 & 1) != 0) {
        FUN_01c1abf8(&local_8);
        uVar2 = 1;
        goto LAB_00adf710;
      }
    }
  }
  FUN_01c1abf8(&local_8);
  uVar2 = 0;
LAB_00adf710:
  FUN_01694aa8(local_70);
  return uVar2;
}


