/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e64b3c; name: FUN_01e64b3c
 */


undefined8 FUN_01e64b3c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_68 [4];
  undefined1 auStack_44 [4];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined1 *local_18;
  
  if (*(char *)(param_1 + 0x2608) != '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x2608) = 1;
  if (*(long *)(param_1 + 0x58) == 0) {
    return 0;
  }
  if (*(short *)(*(long *)(param_1 + 0x58) + 0x1a) == 0) {
    return 0;
  }
  local_40[0] = 0x1e;
  local_18 = auStack_44;
  local_38 = 4;
  FUN_01752300(local_68,DAT_0485f2f0,&local_18,&local_38);
  if (local_68[0] != (undefined8 *)0x0) {
    FUN_01e61adc(&local_18,local_40,local_68[0] + 1);
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    local_18 = (undefined1 *)0x0;
  }
  else {
    FUN_01c27dd8(&local_18);
    if (local_18 != (undefined1 *)0x0) {
      if (local_68[0] == (undefined8 *)0x0) {
        uVar2 = 0;
        uVar3 = 0;
      }
      else {
        uVar2 = *local_68[0];
        uVar3 = local_68[0][3];
      }
      uVar1 = FUN_01e61bd8(local_18,uVar2,uVar3);
      if ((uVar1 & 1) != 0) {
        uVar2 = 1;
        *(undefined1 *)(param_1 + 0x25f8) = 1;
        *(undefined8 *)(param_1 + 0x2600) = *(undefined8 *)(local_18 + 0x50);
        FUN_01c1abf8(&local_18);
        goto LAB_01e64c50;
      }
    }
  }
  FUN_01c1abf8(&local_18);
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x2608) = 0;
LAB_01e64c50:
  FUN_01694aa8(local_68);
  return uVar2;
}


