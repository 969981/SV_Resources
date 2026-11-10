/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131b9b4; name: FUN_0131b9b4
 */


void FUN_0131b9b4(undefined8 param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0131bc6c(param_1,0xf,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = 1;
    uVar2 = FUN_0131bc6c(param_1,0xf,1);
    if ((uVar2 & 1) != 0) goto LAB_0131bc44;
    uVar2 = FUN_0131bc6c(param_1,0xf,2);
    if (((((uVar2 & 1) == 0) && (uVar2 = FUN_0131bc6c(param_1,0xf,3), (uVar2 & 1) == 0)) &&
        (uVar2 = FUN_0131bc6c(param_1,0xf,4), (uVar2 & 1) == 0)) &&
       (uVar2 = FUN_0131bc6c(param_1,0x18,0), (uVar2 & 1) == 0)) {
      bVar1 = 1;
      uVar2 = FUN_0131bc6c(param_1,0x18,1);
      if ((uVar2 & 1) != 0) goto LAB_0131bc44;
      uVar2 = FUN_0131bc6c(param_1,0x18,2);
      if ((((uVar2 & 1) == 0) && (uVar2 = FUN_0131bc6c(param_1,0x18,3), (uVar2 & 1) == 0)) &&
         ((uVar2 = FUN_0131bc6c(param_1,0x18,4), (uVar2 & 1) == 0 &&
          (uVar2 = FUN_0131bc6c(param_1,0x12,0), (uVar2 & 1) == 0)))) {
        bVar1 = 1;
        uVar2 = FUN_0131bc6c(param_1,0x12,1);
        if ((uVar2 & 1) != 0) goto LAB_0131bc44;
        uVar2 = FUN_0131bc6c(param_1,0x12,2);
        if ((((uVar2 & 1) == 0) && (uVar2 = FUN_0131bc6c(param_1,0x12,3), (uVar2 & 1) == 0)) &&
           ((uVar2 = FUN_0131bc6c(param_1,0x12,4), (uVar2 & 1) == 0 &&
            (uVar2 = FUN_0131bc6c(param_1,0x10,0), (uVar2 & 1) == 0)))) {
          bVar1 = 1;
          uVar2 = FUN_0131bc6c(param_1,0x10,1);
          if ((uVar2 & 1) != 0) goto LAB_0131bc44;
          uVar2 = FUN_0131bc6c(param_1,0x10,2);
          if (((((uVar2 & 1) == 0) && (uVar2 = FUN_0131bc6c(param_1,0x10,3), (uVar2 & 1) == 0)) &&
              (uVar2 = FUN_0131bc6c(param_1,0x10,4), (uVar2 & 1) == 0)) &&
             (uVar2 = FUN_0131bc6c(param_1,0x11,0), (uVar2 & 1) == 0)) {
            bVar1 = 1;
            uVar2 = FUN_0131bc6c(param_1,0x11,1);
            if ((uVar2 & 1) != 0) goto LAB_0131bc44;
            uVar2 = FUN_0131bc6c(param_1,0x11,2);
            if ((((uVar2 & 1) == 0) && (uVar2 = FUN_0131bc6c(param_1,0x11,3), (uVar2 & 1) == 0)) &&
               (uVar2 = FUN_0131bc6c(param_1,0x11,4), (uVar2 & 1) == 0)) {
              if (*param_3 == '\0') {
                bVar1 = 0;
                goto LAB_0131bc44;
              }
              uVar2 = FUN_0131bc6c(param_1,0x13,0);
              if ((uVar2 & 1) == 0) {
                bVar1 = 1;
                uVar2 = FUN_0131bc6c(param_1,0x13,1);
                if ((uVar2 & 1) != 0) goto LAB_0131bc44;
                uVar2 = FUN_0131bc6c(param_1,0x13,2);
                if (((uVar2 & 1) == 0) && (uVar2 = FUN_0131bc6c(param_1,0x13,3), (uVar2 & 1) == 0))
                {
                  bVar1 = FUN_0131bc6c(param_1,0x13,4);
                  goto LAB_0131bc44;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar1 = 1;
LAB_0131bc44:
  *param_2 = bVar1 & 1;
  return;
}


