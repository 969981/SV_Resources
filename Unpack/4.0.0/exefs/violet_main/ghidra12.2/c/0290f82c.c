/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0290f82c; name: FUN_0290f82c
 */


undefined8 FUN_0290f82c(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x188))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0));
  if ((*(char *)(param_1 + 0xb8) == '\x0f') || (*(char *)(param_1 + 0xb9) == '\x0f')) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xf8))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),
                       *(undefined4 *)(param_1 + 0x98));
    if ((uVar2 & 1) == 0) {
      if (uVar1 < 0x197) {
        if ((uVar1 == 200) || (uVar1 == 0x151)) goto LAB_0290f8fc;
        if (uVar1 != 0x196) goto LAB_0290f940;
        goto LAB_0290f888;
      }
      if (0x1cb < uVar1) {
        if (uVar1 != 0x1cc) {
          if (uVar1 != 0x212) goto LAB_0290f940;
          goto LAB_0290f8fc;
        }
        goto LAB_0290f888;
      }
      if (uVar1 != 0x197) {
        if (uVar1 != 0x1b2) goto LAB_0290f940;
        goto LAB_0290f888;
      }
LAB_0290f8fc:
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      if ((uVar2 & 1) == 0) {
        if (0x36 < uVar1 - 0x196 || (1L << ((ulong)(uVar1 - 0x196) & 0x3f) & 0x40000010000001U) == 0
           ) goto LAB_0290f940;
        goto LAB_0290f888;
      }
    }
    else {
LAB_0290f888:
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      if ((uVar2 & 1) == 0) goto LAB_0290f940;
    }
    uVar3 = 2;
  }
  else {
LAB_0290f940:
    uVar3 = 0;
  }
  return uVar3;
}


