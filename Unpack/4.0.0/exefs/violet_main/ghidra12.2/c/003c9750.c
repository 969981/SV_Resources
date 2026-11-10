/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003c9750; name: FUN_003c9750
 */


undefined8 FUN_003c9750(long param_1,long *param_2)

{
  char cVar1;
  void *__dest;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  ulong __n;
  
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    pcVar6 = (char *)*param_2;
    cVar1 = *pcVar6;
    *param_2 = (long)(pcVar6 + 1);
    param_2[1] = lVar5 - 1U;
    if (cVar1 == '\x01') {
      if (2 < lVar5 - 1U) {
        __n = (ulong)(byte)pcVar6[1] << 0x10 | (ulong)(byte)pcVar6[2] << 8 | (ulong)(byte)pcVar6[3];
        *param_2 = (long)(pcVar6 + 4);
        param_2[1] = lVar5 - 4U;
        if (lVar5 - 4U == __n) {
          __dest = (void *)FUN_00452c30(__n,"external/openssl/ssl/statem/statem_clnt.c",0xade);
          *(void **)(param_1 + 0x730) = __dest;
          if (__dest == (void *)0x0) {
            *(undefined8 *)(param_1 + 0x738) = 0;
            uVar2 = 0x50;
            uVar3 = 0x41;
            uVar4 = 0xae2;
          }
          else {
            *(ulong *)(param_1 + 0x738) = __n;
            if (__n <= (ulong)param_2[1]) {
              memcpy(__dest,(void *)*param_2,__n);
              *param_2 = *param_2 + __n;
              param_2[1] = param_2[1] - __n;
              return 1;
            }
            uVar2 = 0x32;
            uVar3 = 0x9f;
            uVar4 = 0xae8;
          }
          goto LAB_003c9834;
        }
      }
      uVar2 = 0x32;
      uVar3 = 0x9f;
      uVar4 = 0xadb;
      goto LAB_003c9834;
    }
  }
  uVar2 = 0x32;
  uVar3 = 0x149;
  uVar4 = 0xad5;
LAB_003c9834:
  FUN_003c3950(param_1,uVar2,0x1ef,uVar3,"external/openssl/ssl/statem/statem_clnt.c",uVar4);
  return 0;
}


