/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0170a4ec; name: FUN_0170a4ec
 */


undefined8 FUN_0170a4ec(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    return 0;
  }
  if (*(char *)(lVar2 + 0x250) == '\0') {
LAB_0170a538:
    if ((*(char *)(lVar2 + 0x250) == '\0') ||
       (uVar1 = (**(code **)(**(long **)(lVar2 + 8) + 0x88))(*(long **)(lVar2 + 8),param_3),
       (uVar1 & 1) == 0)) {
      uVar3 = 0;
      goto LAB_0170a55c;
    }
  }
  else {
    uVar1 = (**(code **)(**(long **)(lVar2 + 8) + 0x78))(*(long **)(lVar2 + 8),param_3);
    if ((uVar1 & 1) == 0) {
      lVar2 = *param_2;
      if (lVar2 == 0) {
        return 0;
      }
      goto LAB_0170a538;
    }
  }
  uVar3 = 1;
LAB_0170a55c:
  lVar2 = *param_2;
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x250) != '\0')) &&
     (uVar1 = (**(code **)(**(long **)(lVar2 + 8) + 0x80))(*(long **)(lVar2 + 8),param_3),
     (uVar1 & 1) != 0)) {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 0x2eb) = 0;
  }
  return uVar3;
}


