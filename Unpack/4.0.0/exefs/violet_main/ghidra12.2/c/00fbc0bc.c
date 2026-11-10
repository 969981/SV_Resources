/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbc0bc; name: FUN_00fbc0bc
 */


undefined8 FUN_00fbc0bc(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  
  if ((((((((*(long *)(param_1 + 0xb0) == 0) ||
           ((*(byte *)(*(long *)(param_1 + 0xb0) + 0x1e8) & 1) == 0)) ||
          (*(long *)(param_1 + 0xf0) == 0)) ||
         (((((*(byte *)(*(long *)(param_1 + 0xf0) + 0x1e8) & 1) == 0 ||
            (*(long *)(param_1 + 0x1c8) == 0)) ||
           (((*(byte *)(*(long *)(param_1 + 0x1c8) + 0x1e8) & 1) == 0 ||
            ((*(long *)(param_1 + 0x208) == 0 ||
             ((*(byte *)(*(long *)(param_1 + 0x208) + 0x1e8) & 1) == 0)))))) ||
          (*(long *)(param_1 + 0x2e0) == 0)))) ||
        (((((((*(byte *)(*(long *)(param_1 + 0x2e0) + 0x1e8) & 1) == 0 ||
             (*(long *)(param_1 + 800) == 0)) ||
            ((*(byte *)(*(long *)(param_1 + 800) + 0x1e8) & 1) == 0)) ||
           ((*(long *)(param_1 + 0x3f8) == 0 ||
            ((*(byte *)(*(long *)(param_1 + 0x3f8) + 0x1e8) & 1) == 0)))) ||
          ((*(long *)(param_1 + 0x438) == 0 ||
           (((*(byte *)(*(long *)(param_1 + 0x438) + 0x1e8) & 1) == 0 ||
            (*(long *)(param_1 + 0x510) == 0)))))) ||
         ((*(byte *)(*(long *)(param_1 + 0x510) + 0x1e8) & 1) == 0)))) ||
       (((((*(long *)(param_1 + 0x550) == 0 ||
           ((*(byte *)(*(long *)(param_1 + 0x550) + 0x1e8) & 1) == 0)) ||
          (*(long *)(param_1 + 0x628) == 0)) ||
         (((*(byte *)(*(long *)(param_1 + 0x628) + 0x1e8) & 1) == 0 ||
          (*(long *)(param_1 + 0x668) == 0)))) ||
        (((((*(byte *)(*(long *)(param_1 + 0x668) + 0x1e8) & 1) == 0 ||
           ((*(long *)(param_1 + 0x740) == 0 ||
            ((*(byte *)(*(long *)(param_1 + 0x740) + 0x1e8) & 1) == 0)))) ||
          (*(long *)(param_1 + 0x780) == 0)) ||
         ((((*(byte *)(*(long *)(param_1 + 0x780) + 0x1e8) & 1) == 0 ||
           (*(long *)(param_1 + 0x858) == 0)) ||
          ((*(byte *)(*(long *)(param_1 + 0x858) + 0x1e8) & 1) == 0)))))))) ||
      ((((*(long *)(param_1 + 0x898) == 0 ||
         ((*(byte *)(*(long *)(param_1 + 0x898) + 0x1e8) & 1) == 0)) ||
        ((*(long *)(param_1 + 0x970) == 0 ||
         (((*(byte *)(*(long *)(param_1 + 0x970) + 0x1e8) & 1) == 0 ||
          (*(long *)(param_1 + 0x9b0) == 0)))))) ||
       ((((*(byte *)(*(long *)(param_1 + 0x9b0) + 0x1e8) & 1) == 0 ||
         (((((*(long *)(param_1 + 0xa88) == 0 ||
             ((*(byte *)(*(long *)(param_1 + 0xa88) + 0x1e8) & 1) == 0)) ||
            (*(long *)(param_1 + 0xac8) == 0)) ||
           (((*(byte *)(*(long *)(param_1 + 0xac8) + 0x1e8) & 1) == 0 ||
            (*(long *)(param_1 + 0xba0) == 0)))) ||
          ((*(byte *)(*(long *)(param_1 + 0xba0) + 0x1e8) & 1) == 0)))) ||
        (((*(long *)(param_1 + 0xbe0) == 0 ||
          ((*(byte *)(*(long *)(param_1 + 0xbe0) + 0x1e8) & 1) == 0)) ||
         ((*(long *)(param_1 + 0xcb8) == 0 ||
          ((((*(byte *)(*(long *)(param_1 + 0xcb8) + 0x1e8) & 1) == 0 ||
            (*(long *)(param_1 + 0xcf8) == 0)) ||
           ((*(byte *)(*(long *)(param_1 + 0xcf8) + 0x1e8) & 1) == 0)))))))))))) ||
     ((((((*(long *)(param_1 + 0xdd0) == 0 ||
          ((*(byte *)(*(long *)(param_1 + 0xdd0) + 0x1e8) & 1) == 0)) ||
         (*(long *)(param_1 + 0xe10) == 0)) ||
        (((*(byte *)(*(long *)(param_1 + 0xe10) + 0x1e8) & 1) == 0 ||
         (*(long *)(param_1 + 0xee8) == 0)))) ||
       (((*(byte *)(*(long *)(param_1 + 0xee8) + 0x1e8) & 1) == 0 ||
        (((*(long *)(param_1 + 0xf28) == 0 ||
          ((*(byte *)(*(long *)(param_1 + 0xf28) + 0x1e8) & 1) == 0)) ||
         (*(long *)(param_1 + 0x1000) == 0)))))) ||
      (((((*(byte *)(*(long *)(param_1 + 0x1000) + 0x1e8) & 1) == 0 ||
         (*(long *)(param_1 + 0x1040) == 0)) ||
        ((*(byte *)(*(long *)(param_1 + 0x1040) + 0x1e8) & 1) == 0)) ||
       ((((((*(long *)(param_1 + 0x1118) == 0 ||
            ((*(byte *)(*(long *)(param_1 + 0x1118) + 0x1e8) & 1) == 0)) ||
           ((*(long *)(param_1 + 0x1158) == 0 ||
            (((((*(byte *)(*(long *)(param_1 + 0x1158) + 0x1e8) & 1) == 0 ||
               (*(long *)(param_1 + 0x1230) == 0)) ||
              ((*(byte *)(*(long *)(param_1 + 0x1230) + 0x1e8) & 1) == 0)) ||
             ((*(long *)(param_1 + 0x1270) == 0 ||
              ((*(byte *)(*(long *)(param_1 + 0x1270) + 0x1e8) & 1) == 0)))))))) ||
          (*(long *)(param_1 + 0x1348) == 0)) ||
         (((*(byte *)(*(long *)(param_1 + 0x1348) + 0x1e8) & 1) == 0 ||
          (*(long *)(param_1 + 5000) == 0)))) ||
        ((*(byte *)(*(long *)(param_1 + 5000) + 0x1e8) & 1) == 0)))))))) {
LAB_00fbc0c4:
    uVar1 = 0;
  }
  else {
    plVar2 = (long *)(param_1 + 0x1508);
    lVar3 = 0x6b30;
    do {
      if ((((plVar2[-8] == 0) || ((*(byte *)(plVar2[-8] + 0x1e8) & 1) == 0)) || (*plVar2 == 0)) ||
         ((*(byte *)(*plVar2 + 0x1e8) & 1) == 0)) goto LAB_00fbc0c4;
      lVar3 = lVar3 + -0x118;
      plVar2 = plVar2 + 0x23;
    } while (lVar3 != 0);
    plVar2 = (long *)(param_1 + 0x80a0);
    lVar3 = 0x2878;
    uVar1 = 1;
    do {
      if (((plVar2[-8] == 0) || ((*(byte *)(plVar2[-8] + 0x1e8) & 1) == 0)) ||
         ((*plVar2 == 0 || ((*(byte *)(*plVar2 + 0x1e8) & 1) == 0)))) goto LAB_00fbc0c4;
      lVar3 = lVar3 + -0x118;
      plVar2 = plVar2 + 0x23;
    } while (lVar3 != 0);
  }
  return uVar1;
}


