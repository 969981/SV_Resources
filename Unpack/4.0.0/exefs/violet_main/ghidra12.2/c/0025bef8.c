/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025bef8; name: FUN_0025bef8
 */


bool FUN_0025bef8(long param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  size_t __n;
  byte *__s1;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_1 + 0x20);
  pbVar1 = *(byte **)(param_1 + 0x28);
  if (pbVar3 == pbVar1) {
    return true;
  }
  __n = strlen(param_2);
  if (__n == 0xffffffffffffffff) {
    do {
      if (((*pbVar3 & 1) != 0) && (*(long *)(pbVar3 + 8) == -1)) {
                    /* try { // try from 0025bf50 to 0025bf57 has its CatchHandler @ 0025bff8 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar3 = pbVar3 + 0x20;
    } while (pbVar1 != pbVar3);
  }
  else if (__n == 0) {
    do {
      if ((*pbVar3 & 1) == 0) {
        if (*pbVar3 < 2) goto LAB_0025bfcc;
      }
      else if (*(long *)(pbVar3 + 8) == 0) goto LAB_0025bfcc;
      pbVar3 = pbVar3 + 0x20;
    } while (pbVar1 != pbVar3);
  }
  else {
    do {
      if ((*pbVar3 & 1) == 0) {
        if (__n == *pbVar3 >> 1) {
          __s1 = pbVar3 + 1;
LAB_0025bf58:
          iVar2 = memcmp(__s1,param_2,__n);
          if (iVar2 == 0) goto LAB_0025bfcc;
        }
      }
      else if (__n == *(size_t *)(pbVar3 + 8)) {
        __s1 = *(byte **)(pbVar3 + 0x10);
        goto LAB_0025bf58;
      }
      pbVar3 = pbVar3 + 0x20;
    } while (pbVar1 != pbVar3);
  }
  pbVar3 = pbVar1;
LAB_0025bfcc:
  return pbVar1 != pbVar3;
}


