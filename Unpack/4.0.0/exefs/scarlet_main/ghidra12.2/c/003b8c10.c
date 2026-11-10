/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b8c10; name: FUN_003b8c10
 */


void * FUN_003b8c10(void *param_1,int param_2)

{
  int iVar1;
  void *__dest;
  long lVar2;
  
  __dest = (void *)FUN_00452c30(0x280,"external/openssl/ssl/ssl_sess.c",0x6e);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,0x280);
    *(undefined8 *)((long)__dest + 0x240) = 0;
    *(undefined8 *)((long)__dest + 0x1a8) = 0;
    *(undefined8 *)((long)__dest + 0x1a0) = 0;
    *(undefined8 *)((long)__dest + 0x1c0) = 0;
    *(undefined8 *)((long)__dest + 0x1b8) = 0;
    *(undefined8 *)((long)__dest + 0x220) = 0;
    *(undefined8 *)((long)__dest + 0x208) = 0;
    *(undefined8 *)((long)__dest + 0x200) = 0;
    *(undefined8 *)((long)__dest + 0x218) = 0;
    *(undefined8 *)((long)__dest + 0x210) = 0;
    *(undefined8 *)((long)__dest + 0x260) = 0;
    *(long *)((long)__dest + 600) = 0;
    *(undefined4 *)((long)__dest + 0x1d0) = 1;
    lVar2 = FUN_0047e540();
    *(long *)((long)__dest + 0x278) = lVar2;
    if (lVar2 != 0) {
      iVar1 = FUN_00444640(2,__dest,(long)__dest + 0x200);
      if (iVar1 != 0) {
        if (*(long *)((long)param_1 + 0x1b8) != 0) {
          iVar1 = FUN_00485cf0();
          if (iVar1 == 0) goto LAB_003b8dec;
          *(undefined8 *)((long)__dest + 0x1b8) = *(undefined8 *)((long)param_1 + 0x1b8);
        }
        if (*(long *)((long)param_1 + 0x1c0) != 0) {
          lVar2 = FUN_00484190();
          *(long *)((long)__dest + 0x1c0) = lVar2;
          if (lVar2 == 0) goto LAB_003b8dec;
        }
        if (*(long *)((long)param_1 + 0x1a0) != 0) {
          lVar2 = FUN_0045abd0(*(long *)((long)param_1 + 0x1a0),"external/openssl/ssl/ssl_sess.c",
                               0xa1);
          *(long *)((long)__dest + 0x1a0) = lVar2;
          if (lVar2 == 0) goto LAB_003b8dec;
        }
        if (*(long *)((long)param_1 + 0x1a8) != 0) {
          lVar2 = FUN_0045abd0(*(long *)((long)param_1 + 0x1a8),"external/openssl/ssl/ssl_sess.c",
                               0xa7);
          *(long *)((long)__dest + 0x1a8) = lVar2;
          if (lVar2 == 0) goto LAB_003b8dec;
        }
        iVar1 = FUN_004448a0(2,(long)__dest + 0x200,(long)param_1 + 0x200);
        if (iVar1 != 0) {
          if (*(long *)((long)param_1 + 0x218) != 0) {
            lVar2 = FUN_0045abd0(*(long *)((long)param_1 + 0x218),"external/openssl/ssl/ssl_sess.c",
                                 0xb4);
            *(long *)((long)__dest + 0x218) = lVar2;
            if (lVar2 == 0) goto LAB_003b8dec;
          }
          if ((param_2 == 0) || (*(long *)((long)param_1 + 0x220) == 0)) {
            *(undefined8 *)((long)__dest + 0x230) = 0;
            *(undefined8 *)((long)__dest + 0x228) = 0;
          }
          else {
            lVar2 = FUN_0045ace0(*(long *)((long)param_1 + 0x220),
                                 *(undefined8 *)((long)param_1 + 0x228),
                                 "external/openssl/ssl/ssl_sess.c",0xbc);
            *(long *)((long)__dest + 0x220) = lVar2;
            if (lVar2 == 0) goto LAB_003b8dec;
          }
          if (*(long *)((long)param_1 + 0x240) != 0) {
            lVar2 = FUN_0045ace0(*(long *)((long)param_1 + 0x240),
                                 *(undefined8 *)((long)param_1 + 0x248),
                                 "external/openssl/ssl/ssl_sess.c",0xc6);
            *(long *)((long)__dest + 0x240) = lVar2;
            if (lVar2 == 0) goto LAB_003b8dec;
          }
          if (*(long *)((long)param_1 + 600) != 0) {
            lVar2 = FUN_0045abd0(*(long *)((long)param_1 + 600),"external/openssl/ssl/ssl_sess.c",
                                 0xcd);
            *(long *)((long)__dest + 600) = lVar2;
            if (lVar2 == 0) goto LAB_003b8dec;
          }
          if (*(long *)((long)param_1 + 0x260) == 0) {
            return __dest;
          }
          lVar2 = FUN_0045ace0(*(long *)((long)param_1 + 0x260),
                               *(undefined8 *)((long)param_1 + 0x268),
                               "external/openssl/ssl/ssl_sess.c",0xd6);
          *(long *)((long)__dest + 0x260) = lVar2;
          if (lVar2 != 0) {
            return __dest;
          }
        }
      }
    }
  }
LAB_003b8dec:
  FUN_004806c0(0x14,0x15c,0x41,"external/openssl/ssl/ssl_sess.c",0xdd);
  FUN_003b8e30(__dest);
  return (void *)0x0;
}


