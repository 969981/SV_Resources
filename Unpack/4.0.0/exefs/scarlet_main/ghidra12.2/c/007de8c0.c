/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de8c0; name: FUN_007de8c0
 */


void FUN_007de8c0(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xb0);
  do {
    if (lVar3 == param_1 + 0xa8) {
      cVar1 = *(char *)(param_1 + 0xf9);
joined_r0x007de904:
      if (cVar1 != '\0') {
        lVar4 = *(long *)(param_1 + 0x68);
        lVar3 = param_1 + 0x60;
        if (lVar4 != lVar3) {
          do {
            uVar2 = FUN_007967e8(lVar4 + 0x10,param_2 + 8);
            if ((uVar2 & 1) != 0) {
              FUN_0078fa2c(lVar3,lVar4);
              FUN_0078fa04(param_1 + 0x78,param_1 + 0x78,lVar4 + *(int *)(param_1 + 0x8c));
              return;
            }
            lVar4 = *(long *)(lVar4 + 8);
          } while (lVar4 != lVar3);
        }
      }
      return;
    }
    if (*(long *)(lVar3 + 0x10) == param_2) {
      FUN_0078fa2c(param_1 + 0xa8,lVar3);
      FUN_0078fa04(param_1 + 0xc0,param_1 + 0xc0,lVar3 + *(int *)(param_1 + 0xd4));
      cVar1 = *(char *)(param_1 + 0xf9);
      goto joined_r0x007de904;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


