/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02911d04; name: FUN_02911d04
 */


uint FUN_02911d04(long param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x9c);
  uVar4 = 0;
  if (uVar3 < 0x8b) {
    if (uVar3 == 0x49) {
      if (((*(char *)(param_1 + 0xb8) == '\f') || (*(char *)(param_1 + 0xb8) == '\r')) ||
         ((*(byte *)(param_1 + 0xb9) & 0xfe) == 0xc)) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
        goto LAB_02911df0;
      }
LAB_02911ed0:
      uVar4 = 0;
      goto LAB_02911df0;
    }
    if (uVar3 == 0x5e) {
      if (((*(char *)(param_1 + 0xb8) != '\r') && (*(char *)(param_1 + 0xb8) != '\x10')) &&
         ((*(char *)(param_1 + 0xb9) != '\x10' && (*(char *)(param_1 + 0xb9) != '\r'))))
      goto LAB_02911ed0;
    }
    else {
      if (uVar3 != 0x79) goto LAB_02911df0;
      cVar2 = *(char *)(param_1 + 0xb8);
      if (((cVar2 != '\x10') && (cVar1 = *(char *)(param_1 + 0xb9), cVar1 != '\v')) &&
         ((cVar2 != '\v' && ((cVar1 != '\f' && (cVar2 != '\f')))))) goto joined_r0x02911d9c;
    }
  }
  else if (uVar3 < 0x17c) {
    if (uVar3 == 0x8b) {
      if (((*(char *)(param_1 + 0xb8) != '\v') && (*(char *)(param_1 + 0xb8) != '\f')) &&
         (1 < (byte)(*(char *)(param_1 + 0xb9) - 0xbU))) goto LAB_02911ed0;
    }
    else {
      if (uVar3 != 0x97) goto LAB_02911df0;
      if (*(char *)(param_1 + 0xb8) != '\x10') {
        cVar1 = *(char *)(param_1 + 0xb9);
joined_r0x02911d9c:
        if (cVar1 != '\x10') goto LAB_02911ed0;
      }
    }
  }
  else if (uVar3 == 0x17c) {
    cVar2 = *(char *)(param_1 + 0xb8);
    if ((((cVar2 != '\x0e') && (*(byte *)(param_1 + 0xb9) != 0x10)) && (cVar2 != '\x10')) &&
       ((cVar2 != '\n' && ((*(byte *)(param_1 + 0xb9) & 0xfb) != 10)))) goto LAB_02911ed0;
  }
  else {
    if (uVar3 != 0x26a) goto LAB_02911df0;
    if ((0xe < *(byte *)(param_1 + 0xb8)) ||
       ((1 << (ulong)(*(byte *)(param_1 + 0xb8) & 0x1f) & 0x4c00U) == 0)) {
      uVar4 = 0;
      if ((0xe < *(byte *)(param_1 + 0xb9)) ||
         ((1 << (ulong)(*(byte *)(param_1 + 0xb9) & 0x1f) & 0x4c00U) == 0)) goto LAB_02911df0;
    }
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
LAB_02911df0:
  return uVar4 & 1;
}


