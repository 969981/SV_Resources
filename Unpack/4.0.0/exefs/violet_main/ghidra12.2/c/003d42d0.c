/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d42d0; name: FUN_003d42d0
 */


undefined8 FUN_003d42d0(long param_1)

{
  int iVar1;
  void *__s2;
  undefined8 uVar2;
  ulong __n;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  byte local_24 [4];
  void *local_18;
  
  local_18 = (void *)0x0;
  local_24[0] = 0;
  pcVar6 = *(code **)(*(long *)(param_1 + 0x660) + 0x248);
  if (pcVar6 != (code *)0x0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xa8) + 0x3f0);
    if ((lVar3 != 0) &&
       (iVar1 = (*pcVar6)(param_1,&local_18,local_24,lVar3,
                          *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x3f8),
                          *(undefined8 *)(*(long *)(param_1 + 0x660) + 0x250)), iVar1 != 3)) {
      if (iVar1 == 0) {
        FUN_00452f80(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x3e0),
                     "external/openssl/ssl/statem/statem_srvr.c",0x89e);
        lVar3 = FUN_0045ace0(local_18,local_24[0],"external/openssl/ssl/statem/statem_srvr.c",0x89f)
        ;
        lVar7 = *(long *)(param_1 + 0xa8);
        *(long *)(lVar7 + 0x3e0) = lVar3;
        if (lVar3 == 0) {
          *(undefined8 *)(lVar7 + 1000) = 0;
          uVar5 = 0x8a3;
        }
        else {
          __n = (ulong)local_24[0];
          *(ulong *)(lVar7 + 1000) = __n;
          *(undefined4 *)(lVar7 + 0x3dc) = 0;
          __s2 = *(void **)(*(long *)(param_1 + 0x5d0) + 0x240);
          if (__s2 == (void *)0x0) {
            *(undefined4 *)(param_1 + 0x7dc) = 0;
            if (*(int *)(param_1 + 200) != 0) {
              return 1;
            }
            lVar3 = FUN_0045ace0(local_18,__n,"external/openssl/ssl/statem/statem_srvr.c",0x8c1);
            lVar7 = *(long *)(param_1 + 0x5d0);
            *(long *)(lVar7 + 0x240) = lVar3;
            if (lVar3 != 0) {
              *(ulong *)(lVar7 + 0x248) = (ulong)local_24[0];
              return 1;
            }
            uVar5 = 0x8c5;
          }
          else {
            if ((*(ulong *)(*(long *)(param_1 + 0x5d0) + 0x248) == __n) &&
               (iVar1 = memcmp(local_18,__s2,__n), iVar1 == 0)) {
              return 1;
            }
            *(undefined4 *)(param_1 + 0x7dc) = 0;
            if (*(int *)(param_1 + 200) != 0) {
              return 1;
            }
            uVar5 = 0x8bd;
          }
        }
        uVar4 = 0x44;
        uVar2 = 0x50;
      }
      else {
        uVar4 = 0xeb;
        uVar5 = 0x8cf;
        uVar2 = 0x78;
      }
      FUN_003c3950(param_1,uVar2,0x232,uVar4,"external/openssl/ssl/statem/statem_srvr.c",uVar5);
      return 0;
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x5d0) + 0x240) != 0) {
    *(undefined4 *)(param_1 + 0x7dc) = 0;
  }
  return 1;
}


