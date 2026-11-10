/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029189d0; name: FUN_029189d0
 */


undefined8 FUN_029189d0(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  
  if ((*(char *)(param_1 + 0xa0) == '\r') || (*(char *)(param_1 + 0xa1) == '\r')) {
    bVar4 = *(byte *)(param_1 + 0xac);
    if (((((bVar4 == 0) ||
          ((((cVar5 = *(char *)(param_1 + 0xad), cVar5 == '\x0e' || (bVar4 == 0xe)) ||
            (cVar5 == '\b')) || ((bVar4 == 8 || (cVar5 == '\x10')))))) || (bVar4 == 0x10)) ||
        (((cVar5 == '\x05' || (bVar4 == 5)) || (cVar5 == '\0')))) &&
       ((((*(char *)(param_1 + 0xb8) == '\x01' || (*(char *)(param_1 + 0xb9) == '\x01')) ||
         (*(char *)(param_1 + 0xc4) == '\x01')) || (*(char *)(param_1 + 0xc5) == '\x01')))) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x1b);
      if ((uVar2 & 1) == 0) {
        bVar4 = *(byte *)(param_1 + 0xac);
        goto LAB_02918aa4;
      }
    }
    else {
LAB_02918aa4:
      if (((((bVar4 | 2) != 3) && ((*(byte *)(param_1 + 0xad) | 2) != 3)) ||
          (((*(char *)(param_1 + 0xb8) != '\r' &&
            ((*(char *)(param_1 + 0xb9) != '\r' && (*(char *)(param_1 + 0xc4) != '\r')))) &&
           (*(char *)(param_1 + 0xc5) != '\r')))) ||
         (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x1b), (uVar2 & 1) == 0)) {
        cVar5 = *(char *)(param_1 + 0xb8);
        if (((((cVar5 == '\x10') || (*(char *)(param_1 + 0xb9) == '\x10')) ||
             (*(char *)(param_1 + 0xc4) == '\x10')) || (*(char *)(param_1 + 0xc5) == '\x10')) &&
           (((*(char *)(param_1 + 0xac) == '\x01' || (*(char *)(param_1 + 0xac) == '\x10')) ||
            ((*(byte *)(param_1 + 0xad) < 0x11 &&
             ((1 << (ulong)(*(byte *)(param_1 + 0xad) & 0x1f) & 0x10102U) != 0)))))) {
          uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x1b);
          if ((uVar2 & 1) != 0) goto LAB_02918a90;
          cVar5 = *(char *)(param_1 + 0xb8);
        }
        if (((cVar5 == '\x06') || (*(char *)(param_1 + 0xb9) == '\x06')) ||
           ((*(char *)(param_1 + 0xc4) == '\x06' || (*(char *)(param_1 + 0xc5) == '\x06')))) {
          bVar4 = *(byte *)(param_1 + 0xac);
          if (bVar4 != 9) {
            bVar1 = *(byte *)(param_1 + 0xad);
            if (((((1 < bVar1 - 7) && (bVar4 != 7)) && (bVar1 != 2)) &&
                ((bVar4 != 2 && (bVar1 != 3)))) && (((bVar4 & 0xfd) != 1 && ((bVar1 & 0xf7) != 1))))
            goto LAB_02918bac;
          }
          uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                            (*(long **)(param_1 + 0x30),0x1b);
          if ((uVar2 & 1) != 0) goto LAB_02918a90;
          cVar5 = *(char *)(param_1 + 0xb8);
        }
LAB_02918bac:
        if ((((cVar5 != '\a') && (*(char *)(param_1 + 0xb9) != '\a')) &&
            ((*(char *)(param_1 + 0xc4) != '\a' && (*(char *)(param_1 + 0xc5) != '\a')))) ||
           ((((*(byte *)(param_1 + 0xac) | 0x10) != 0x10 &&
             ((0x10 < *(byte *)(param_1 + 0xad) ||
              ((1 << (ulong)(*(byte *)(param_1 + 0xad) & 0x1f) & 0x10101U) == 0)))) ||
            (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                               (*(long **)(param_1 + 0x30),0x1b), (uVar2 & 1) == 0))))
        goto LAB_02918c00;
      }
    }
LAB_02918a90:
    uVar3 = 2;
  }
  else {
LAB_02918c00:
    uVar3 = 0;
  }
  return uVar3;
}


