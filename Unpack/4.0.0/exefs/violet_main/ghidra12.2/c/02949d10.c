/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02949d10; name: FUN_02949d10
 */


void FUN_02949d10(long *param_1,undefined8 param_2,undefined1 param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined1 local_24;
  
  if ((*(uint *)(*(long *)(*param_1 + 0x38) + 0x30) < 2) &&
     ((*(byte *)(*(long *)(*param_1 + 0x38) + 0x499) >> 2 & 1) == 0)) {
    puVar1 = (uint *)FUN_011e2dd4(*(undefined8 *)
                                   (*(long *)(*(long *)(param_1[1] + 0x290) + 8) + 0x50));
    if (puVar1 == (uint *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
      if (4 < (int)uVar2) {
        uVar2 = 0;
      }
    }
    if ((uint)*(byte *)(*param_1 + 0x95) == (uVar2 & 0xff)) {
      local_28 = 0;
      local_30[0] = 0;
      local_24 = param_3;
      FUN_02943e50(*(undefined8 *)param_1[5],local_30,&local_28);
    }
  }
  return;
}


